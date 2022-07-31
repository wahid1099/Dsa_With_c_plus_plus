// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

 int n;
 cout << "Enter array size : "<<endl;
 cin >> n;

 cout << "Enter array elements : "<<endl;
int array[n];
for(int i = 0; i < n; i++){

    cin >> array[i];
}
 int sum = 0;

 for(int i = 0; i < n; i++){

   sum += array[i];
}

cout <<"Sum is : "<< sum << endl;

  return 0;
}