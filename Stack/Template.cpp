// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>  
T sum(T a, T b){
    T s =a+b;
    return s;
}

template<typename T1,typename T2>
T2 sum(T1 a,T1 b){
    T2 s =(a+b)*2.11;
    return s;
}

int main()
{
 
int a=10,b=20;
// int s=sum<int>(a,b);
// cout<<s<<endl;
double s=sum<int,double>(a,b);
cout<<s<<endl;


 
 
  return 0;
}