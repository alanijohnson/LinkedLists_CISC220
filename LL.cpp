/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LL.cpp
 * Author: Alani
 * 
 * Created on March 12, 2017, 2:15 PM
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Node.hpp"
#include "LL.hpp"

LL::LL() {
    first = NULL;
    last = NULL;
    currsize = 0;
}

void LL::push(int x) {
    // this function creates a new Node, then adds the node to the end of the list and updates //the last pointer.
    //Note: you’ll want to check to see if this is the very first node being added to the list, //in which case you’ll want to
    //create the new node, and then make sure that both the first //and the last pointer point to it.

    Node *n1 = new Node(x); //create new node
    if (currsize == 0) { //check to see if list is empty
        first = n1; //list is empty; node is the first and last in the list; list size is 1
        last = n1;
        currsize = 1;
    } else { //list has elements; last 
        last->next = n1;
        n1->next = NULL;
        last = n1;
        currsize++;
    }
}

void LL::Delete(int i) {
    // this method starts at the first node in the list and counts to i-1. It then deletes the 
    //node at location i. Note that you must make node at i - 1 point to node at i + 1, and you //must decrease the size of the list. If you are deleting the
    //            0
    //            th element, you must first //set first to the node at 2 before deleting node 1. Equally, if you are deleting the last
    //node, you must make the new last node be the node at i-1.
    //You must delete your node at i.
    if (i < currsize) {
        Node *tmp = first;
        if (i == 0) { //if it's the first node to delete
            if (first->next == NULL) { //checks to see if the first node is also the last
                first = NULL; //node is first and last, first and last need to be set to NULL
                last = NULL;
                delete tmp;
                currsize--;
            } else { //the node is just the first of the list
                first = first->next; //the next node needs to be set to first and the size needs to be decreased
                currsize--;
                delete tmp;
            }
        } else { //node is not the first

            for (int j = 0; j < (i - 1); j++) { //iterate to the i-1 node
                tmp = tmp->next;

            }
            Node *deltmp = tmp->next; //save the ith node to be deleted
            if (deltmp->next == NULL) { //checks to see if ith node is the last node
                tmp->next = NULL; //ith node is the last node, last node need to be ith-1 and its next needs to be set to null
                last = tmp;
                delete deltmp;
                currsize--; //decrease size
            } else { //node in the middle
                tmp->next = deltmp->next; //i-1 node next needs to point to i+2 node
                delete deltmp; //delete the node
                currsize--; //decrease the size
            }
        }
    } 
}

void LL::printList() {
    // Make sure you can write a method that prints out every node in the linked list
    Node *tmp = first; //create a temp variable set at the first node
    while (tmp != NULL) { //iterate till tmp equals NULL (no more nodes)
        cout << tmp->data << ","; //print the data
        tmp = tmp->next; //iterate to next node
    }
    cout << endl; //flush buffer
}

