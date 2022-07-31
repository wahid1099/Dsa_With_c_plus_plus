// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int n;
 cout << "Enter 1st array size : ";
 cin >> n;

 cout << "Enter 1st array elements : ";
int array[n];
for(int i = 0; i < n; i++){

    cin >> array[i];
}


for(int i = 0; i < n; i++){
    if (array[i]%3==0){
        array[i] =-1;
    }
}
cout << "Array after operation : ";

for(int i = 0; i < n; i++){
    cout << array[i] <<" ";
}

 
 
  return 0;
}