#include <iostream>

constexpr int MAX_ORDER = 16;
class Node {
    private:
        int value;
        Node* children[MAX_ORDER];
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