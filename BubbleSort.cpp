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
 
// int size ;
// cout << "Enter array size: ";
// cin >> size;

// int array[size];
// cout << "Enter array Elemts: ";

// for(int i = 0; i < size; i++){
//   cin >> array[i];
// }

int array[6]={13,2,7,2,11,4};
cout << "Befor sorting array: ";
printArray(array,6);

//Bubble sort implementation
for(int i = 1; i <6; i++){
  int flag = 0;
  //printArray(array,6);
  for(int j =0;j<6-i;j++){
    printArray(array,6);
    cout<<"value of j is: "<<array[j]<<"and index "<<j<<"value of j+1 is "<<array[j+1] <<endl;
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
printArray(array,6);
 
 
  return 0;
}