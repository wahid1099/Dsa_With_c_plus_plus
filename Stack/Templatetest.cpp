// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


template<typename T>T mymax(T a,T b){
    return (a>b)?a:b;
}

int main()
{
 
 cout<<mymax<int>(3,7)<<endl;
 cout<<mymax<float>(3.5,7.9)<<endl;
 cout<<mymax<char>('a','b')<<endl;

 
 
  return 0;
}