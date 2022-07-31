// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
 cout << "Enter array size : ";
 cin >> n;

 cout << "Enter array elements : ";
int array[n];
for(int i = 0; i < n; i++){

    cin >> array[i];
}

int maxindex=0, max =array[0];
for(int i = 0; i < n; i++){
    if(max<array[i]){
        max = array[i];
        maxindex=i;
        
    }
}

cout<<"Max : " <<max <<", Index :"<< maxindex <<endl;

int minindex=0, min =array[0];
for(int i = 0; i < n; i++){
    if(min>array[i]){
        min = array[i];
        min=i;
        
    }
}

cout<<"Min : " <<min <<", Index :"<< minindex <<endl;


 

  return 0;
}