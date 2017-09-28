/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alani
 *
 * Created on March 12, 2017, 2:13 PM
 */

#include <cstdlib>
#include <iostream>
#include "LL.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    LL *list = new LL(); //create new linked list
    
    //add items to the list
    list->push(0);
    list->push(1);
    list->push(2);
    list->push(3);
    list->push(4);
    list->push(5);
    list->push(6);
    list->push(7);

    //print and delete elements from the list
    list->printList();
    list->Delete(6);
    
    list->printList();
    list->Delete(0);
    
    list->printList();
    list->Delete(1);
    
    list->printList();
    list->Delete(3);
    
    list->printList();
    list->Delete(0);
    
    list->printList();
    list->Delete(0);
    
    list->printList();
    list->Delete(0);
    
    list->printList();
    list->Delete(0);
   
    list->printList();
    list->Delete(0);
    
    return 0;
}

