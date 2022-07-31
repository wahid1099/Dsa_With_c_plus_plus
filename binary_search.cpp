// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int x,int lb,int ub){
    if(lb<=ub){
        //x==arr[MID]
        int mid=(lb+ub)/2;
        //x==arr[MID]
      if (x==array[mid]) return mid;
//x>arr[MID]
       else if (x>array[mid]) binarySearch(array,x,mid+1,ub);//right
    
       else binarySearch(array,x,lb,mid-1);//left
    }
    else{
        return -1;
    }
}

int main()
{
 
int size ;
 cout<<"Enter array size: ";

cin>>size;

int array[size];
cout<<"Enter array elemets: ";

for (int i=0;i<size;i++){
    cin>>array[i];
}

int checkvalue;
cout<<"lease enter the value you want to search: ";
cin >>checkvalue;
int indexNumber;
indexNumber=binarySearch(array,checkvalue,0,size-1);
cout<<"index no : "<<indexNumber<<"Position No "<<indexNumber+1<<endl;
 
 
  return 0;
}