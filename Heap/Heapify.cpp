// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *x=temp;
}

void heapify(int array[],int n, int current){
    int largest=current;
    int leftchild=2*current+1;
    int rightChild=2*current+2;

    if( leftchild<n &&  array[leftchild]>array[largest]){
        largest=leftchild;
     }
        if(array[rightChild]>array[largest]){
            largest=rightChild;
        }

        if(largest != current){
            swap(array[current],array[largest]);
            heapify(array,n,largest);
        }

}

void printArray(int array[],int  size){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
 
int n;
cout<<"Enter array size: ";
cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
    cin>>array[i];
}

cout<<"Before :";
printArray(array,n);
//Heapify
int nonleafstart = (n/2)-1;

for(int i=nonleafstart;i>=0;i--){
    heapify(array,n,i);
}
 
 cout<<"After :";
printArray(array,n);
 
  return 0;
}