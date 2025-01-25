//
//  main.cpp
//  A1_COSC_1437_014
//
//  Created by Nicholas Brown on 1/17/25.
//
#include <iostream>
using namespace std;

int bubbleSort(long Array1[], int SIZE);
int selectionSort(long Array2[], int SIZE);
void swap(long &a, long &b);


int main() {

 
    int const SIZE = 20;

    
    long Array1[SIZE] = {
        12, 5, 18, 2, 20, 1, 15, 8, 10, 13,
        6, 17, 3, 19, 11, 7, 14, 4, 9, 16
    };
    
    long Array2[SIZE] = {
        12, 5, 18, 2, 20, 1, 15, 8, 10, 13,
        6, 17, 3, 19, 11, 7, 14, 4, 9, 16
    };
    
    
    cout << "The number of swaps used in Bubble Sort:" << bubbleSort(Array1, SIZE) <<endl;
    cout << "The number of swaps used in Selection Sort:" << selectionSort(Array2, SIZE) <<endl;



    return 0;
}


// This is my swapping function
void swap(long& a, long& b){
             
             long temp = a;
             a = b;
             b = temp;
         }


int bubbleSort(long Array1[],int SIZE){
    int bbl_counter = 0;
    for (int i = 0; i < SIZE-1 ; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (Array1[j + 1] < Array1[j]){
                swap(Array1[j+1], Array1[j]);
                bbl_counter++;
                
            }
        }
    }
    return bbl_counter;
    
}


int selectionSort(long Array2[],int SIZE){
    int select_counter = 0;
 
    for (int i = 0; i < SIZE; i++) {
        long min_index = i;
        for (int j = i + 1; j < SIZE; ++j) {
            if (Array2[j] < Array2[min_index]){
                min_index = j;
            }
            
        }
        if (min_index != i) {
            swap(Array2[i], Array2[min_index]);
            select_counter++;
        }
   

    }
    
    return select_counter;
    
    
}
 

