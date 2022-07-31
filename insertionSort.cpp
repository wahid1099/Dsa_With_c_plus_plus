// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int array[],int n){
    for(int i = 0; i < n; i++){
        cout << array[i] <<" ";
    }
    cout<<endl;
}

int main()
{
 
  
int size ;
cout << "Enter array size: ";
cin >> size;

int array[size];
cout << "Enter array Elemts: ";

for(int i = 0; i < size; i++){
  cin >> array[i];
}
cout << "Befor sorting array: ";
printArray(array,size);
cout<<endl;
//Insertion Sort
for(int i = 1; i < size; i++){
    int key = array[i];
    int j=i-1;
    while(array[j]>key && j>=0){
        array[j+1] = array[j];
        j--;
    }
    array[j+1] =key;
}

cout << "After  sorting array: ";
printArray(array,size);
cout<<endl; 
 
  return 0;
}