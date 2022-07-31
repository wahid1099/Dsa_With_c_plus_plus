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
 int sum = 0;

 for(int i = 0; i < n; i++){
    if(i%2 ==0){
        sum += array[i]; 
    }
   
}

cout <<"Sum is : "<< sum << endl;

  return 0;
}