
class LRUCache {
public:
class Node{
  public:
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int key,int val){
        this->key=key;
        this->val=val;
    } 
};

    int size;
    Node*head=new Node(-1,-1);
    Node*tail=new Node(-1,-1);
    int cap;
   
    unordered_map<int,Node*>mp;
    LRUCache(int capacity){
         cap=capacity;
         head->next=tail;
         tail->prev=head;
    }
    void add(Node* n){
        Node*temp=head->next;
        n->next=temp;
        n->prev=head;
        head->next=n;
        temp->prev=n;
    }
    void del(Node* delnode){
        Node*prevv=delnode->prev;
        Node*nextt=delnode->next;
        prevv->next=nextt;
        nextt->prev=prevv;
    }
    int get(int key) {
       if(mp.find(key)!=mp.end()){
           Node*resnode=mp[key];
           int ans=resnode->val;
           mp.erase(key);
           cout<<resnode->val;
           del(resnode);
           add(resnode);
           mp[key]=head->next;
           return ans;
       }
        return -1;
    }
    void put(int key, int value){
        if(mp.find(key)!=mp.end()){
            Node*curr=mp[key];
            mp.erase(key);
            del(curr);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            del(tail->prev);
        }
        add(new Node(key,value));
        mp[key]=head->next; 
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */