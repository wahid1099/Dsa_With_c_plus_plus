// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int A=22,B=519,C=9,D=5,G;

//  D += ((A & B) &&( B | (A - D) + A) && (B | B) || A);
//  G = ((A + (B * C) / D) - (( D++ ) % D ) - (D *( B--)));
G=A + D * C - D - (( A && D) + B / A);

 cout<<"Value of d is "<<G <<endl;


 
 
  return 0;
}