class MyHashSet {
public:
    /** Initialize your data structure here. */
    int val;
    MyHashSet* next= NULL;
    MyHashSet* head=NULL;
    
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(contains(key)) return;
        else{
            MyHashSet *node= new MyHashSet();
            node->val=key;
            if(!head) head=node;
            else{
                node->next=head;
                head=node;
            }
        }
        
    }
    
    void remove(int key) {
        MyHashSet *temp=head;
        if(!temp) return;
        if(temp->val==key) head=head->next;
        while(temp->next){
            if(temp->next->val==key){
                temp->next=temp->next->next;
                return;
            }
            temp=temp->next;
        }
        
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        MyHashSet *temp=head;
        while(temp){
            if(temp->val==key) return true;
            temp=temp->next;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */