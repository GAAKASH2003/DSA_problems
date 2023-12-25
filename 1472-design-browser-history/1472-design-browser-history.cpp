 class Node{
        public:
        string data;
        Node*prev;
        Node*next;
        Node(string x){
            data=x;
            prev=NULL;
            next=NULL;
        }
    };

class BrowserHistory {
public:
   
    Node* curr=NULL;
    BrowserHistory(string homepage) {
        Node* newnode= new Node(homepage);
        curr=newnode;
    }
    void visit(string url) {
       Node *temp=new Node(url);
       temp->prev=curr;
       curr->next=temp;
        curr=temp;
    }
    string back(int steps){
        Node*temp=curr;
        Node*pre=NULL;
        while(steps){
            if(temp!=NULL){
                pre=temp;
                temp=temp->prev;
            }
            if(temp==NULL){
                curr=pre;
                return curr->data;
            }
            steps--;
        }
        curr=temp;
        return temp->data;
    }
    string forward(int steps) {
        Node*temp=curr;
        Node*pre=NULL;
        while(steps){
            if(temp!=NULL){
                pre=temp;
                temp=temp->next;
            }
            if(temp==NULL){
                curr=pre;
                return curr->data;
            }
            steps--;
        }
        curr=temp;
        return temp->data;   
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */