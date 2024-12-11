#include <iostream>

constexpr int MAX_ORDER = 16;
class Node {
    private:
        int value;
        int  number_of_children;
        Node* children[MAX_ORDER];
    
    public:
        Node(int v) {
            value = v;
            number_of_children = 0;
            Node* children[MAX_ORDER];
        }

        void addChild(Node* new_child) {
            children[number_of_children] = new_child;
            number_of_children += 1;
            return;
        }

        bool removeNthChild(int n){
            n-=1;
            if(n<0 || n >= number_of_children)
                return false;
            else{
                while(n<number_of_children-1){
                    children[n] = children[n+1];
                }
            }
        }

};

class Tree {
    private:
        Node* head;

        int order;

    public:
        Tree(Node* node){
            head = node;
            order = 0;
        }

        Node* getHead(){
            return head;
        }

        void mergeWith(Tree* new_branch){
            head->addChild(new_branch->getHead());
            order +=1;
        }
};

class Bheap {
    private:
        Tree* head;
        int binary_rep[MAX_ORDER];

    public:
        Bheap(Tree* tree){
            head = tree;

            for(int i=0; i<MAX_ORDER; i++){
                binary_rep[i] = 0;
            }
        }
        void insert(int new_value){
            Tree* newtree = new Tree(new Node(new_value));

            while(true){
                
            }
        }
};

using namespace std;
int main() {
    cout << 'Hello';
}