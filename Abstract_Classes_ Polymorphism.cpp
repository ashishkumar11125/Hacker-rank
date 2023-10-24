#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache : public Cache
{
    public:
    LRUCache(int capacity)
    {
        cp = capacity;
        tail = nullptr;
        head = nullptr;
    }
    ~LRUCache()
    {
        // remove the allocated memory
        while (tail != nullptr)
            remove_tail();
    }
    /***
     * Add a new key/value pair
     * @param key the key
     * @param value the value
     */
    virtual void set(int key, int value) override
    {
        // do we already have it?
        auto itr = mp.find(key);
        if (itr == mp.end())
        {
            // if we do not already have it, add it and put it in the front of the LRU list
            Node* n = new Node(NULL, head, key, value);
            head = n;
            if (tail == nullptr)
                tail = head;
            mp[key] = n;
            // if adding it would put us above capacity, we should remove the LRU node.
            while (mp.size() > cp)
            {
                remove_tail();
            } 
        }
        else
        {
            // if we already have it, set it to a new value
            auto n = (*itr).second;
            n->value = value;
        }
    }
    /***
     * Provide the value for the key
     * also move that key to the front of the LRU cache
     * @param key the key to retrieve the value for
     * @return the value, or -1 if not found
     */
    virtual int get(int key) override 
    {
        auto itr = mp.find(key);
        if (itr == mp.end())
            return -1;
        return (*itr).second->value;
    }
    private:
    void remove_tail()
    {
        if (tail != nullptr)
        {
            // find the iterator
            auto itr = mp.find(tail->key);
            tail = tail->prev;
            if (itr != mp.end()) // just in case
            {
                delete (*itr).second;
                mp.erase(itr);
            }
        }
    }
};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
