#include<iostream>
using namespace std;


int main(){
    //declaring 2D array
   // int arr[10] [15];  

   //initialise
   int arr[5][2] = {
   {10,30},
   {20,60},
   {22,44},
   {23,45},
   {65,77}
   };
 
   //cout << arr[2][1] << endl;


   //traverse the entire array
   int rowSize=3;
   int colSize=2;
   for(int rowIndex =0; rowIndex<rowSize; rowIndex++) {
    for(int colIndex=0; colIndex<colSize; colIndex++) {
        cout << arr[rowIndex][colIndex] <<" ";
    }
    cout << endl;

   }


    return 0;
}
