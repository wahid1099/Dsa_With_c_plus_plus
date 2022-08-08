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

int array[]={5,1,3,8,2,2};
int size=6;
cout << "Befor sorting array: ";
printArray(array,size);
cout<<endl;
//Insertion Sort
for(int i = 1; i < size; i++){
    int key = array[i];//1
    int j=i-1;//0
    // cout<<"Vallue of key is "<<array[i]<<"->value of j is "<<j<<endl;
    while(array[j]>key && j>=0){//5>1
        array[j+1] = array[j];//5
        j--;
    }

  //   1st step : 
  //   key=1 j=0;
  //   5 | 1 3 8 2 2-> 1 5 3 8 2 2

  //   2nd step :
  //   key=3 j=1
  //  1st iteration :1 5 | 3 8 2 2-> 1  5| 5 8 2 2
  //  2nd iteration : 1 3  5 8 2 2

  //  3rd step :
  //  key=8 j=2
  //  1st iteration : 1 3 5 | 8 2 2->1 3 5 8 2 2

  //  4th step :
  //  key=2 j=3
  //  1st iteration:1 3 5 8 |2 2->1 3 5 8 |8 2
  //  2nd iteration : 1 3 5 8 |8 2->1 3 5 5 |8 2
  //  3rd iteration : 1 3 5 5 |8 2->1 3 3 5 |8 2
  //  4th iteration: 1 3 3 5 |8 2->1 2 3 5 8 2

  //  5th step : 
  //  key=2 j=3

  //  1st iteration: 1 2 3 5 8|2->1 2 3 5 8 |8
  //  2nd iteration: 1 2 3 5 8 | 8->1 2 3 5 5 |8
  //  3rd iteration: 1 2 3 5 5 | 8->1 2 3 3 5 |8
  //  4th iteration: 1 2 3 3 5 | 8->1 2 2 3 5 8




     cout<<"before-------------------------------"<<endl;
    cout<<"Vallue of j+1 is "<<array[j+1]<<"->value of j is "<<j<<endl;
    array[j+1] =key;
    cout<<"After-------------------------------"<<endl;
    cout<<"Vallue of j+1 is "<<array[j+1]<<"->value of j+1 is "<<j+1<<endl;
}

cout << "After  sorting array: ";
printArray(array,size);
cout<<endl; 
 
  return 0;
}