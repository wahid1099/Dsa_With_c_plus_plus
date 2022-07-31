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
int checkvalue;
 cout << "Enter the number you want to search : ";
  cin >> checkvalue;
 int flag = 0;
 for(int i = 0; i < n; i++){

    if(checkvalue == array[i]){
        cout << "Found at index position : "<<i<<endl;
        flag++;
        
    }
 }
 if(!flag){
 cout << "Not found !";
 }

 
 
  return 0;
}