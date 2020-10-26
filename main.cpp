/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: biboletin
 *
 * Created on 18 Март 2018, 22:52
 */

#include <cstdlib>
#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

/*
 * 
 */

int linearSearch(int array[], int size, int searchValue){
    for(int i = 0; i < size; i++){
        if(searchValue == array[i]){
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {15, 23, 7, 45, 87, 16};
    
    int userValue;
    
    cout << "Enter an Integer: " << endl;
    cin >> userValue;
  
    int result = linearSearch(a, 6, userValue);
    
    if(result >= 0){
        cout << "The number " << a[result] << " was found at the element"
                " with index " << result << endl;
    }else{
        cout << "The number " << userValue << " was not found" << endl;
    }
    
}

