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

        bool remove_nth_child(int n){
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
        Node* Head;
        Node* children[MAX_ORDER];

        int order;
};

class Bheap {
    private:
        Node* head;
        Node* next;
}


int main() {

}