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
 
 for(int i = n-1,j=0; i >j;  i--,j++){
     int temp = array[j];
     array[j] = array[i];
   array[i] =temp;
}
  cout << "Arrar after reversing: ";

 for(int i = 0; i < n; i++){

   cout << array[i] <<" ";
}
  return 0;
}