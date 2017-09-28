#include "Node.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

Node::Node(int x) {
    data = x;
    next = NULL;
}

void Node::printNode() {
    cout << "|D:" << data << next;//" P:" << priority << "|";
    return;
}