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

//Bubble sort implementation
for(int i = 1; i <size; i++){
  int flag = 0;
  for(int j =0;j<size-i;j++){
    if(array[j]>array[j+1]){
      int temp = array[j];
      array[j] = array[j+1];
      array[j+1] = temp;
      flag=1;
    }

  }
  cout <<endl;
  if(flag==0) break;
}
cout << "After  sorting array: ";
printArray(array,size);
 
 
  return 0;
}