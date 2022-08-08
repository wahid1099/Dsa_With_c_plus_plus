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
    int array[]={5,1,3,8,2,2};
int size=6;
cout << "Befor sorting array: ";
printArray(array,size);
cout<<endl;


for (int i=1;i<size;i++){
    int key=array[i];//1 3 8 2
    int j=i-1;//0 1 2 3
    while(array[j]>key && j >=0){
        array[j+1]=array[j];//j+1=5 8
        j--;//
    }

    array[j+1]=key;

}
 

 cout << "After  sorting array: ";
printArray(array,size);
cout<<endl; 
 
  return 0;
}