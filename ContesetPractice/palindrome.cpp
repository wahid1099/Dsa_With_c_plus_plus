// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int n;
 cin>>n;

string s;
cin>>s;
int a=0;

for(int i = 0; i < (n / 2); i++) 
		if(s[i] == s[n- 1 - i]) a++;
	if(a == (n/ 2)) cout << "YES";
	else cout << "NO";
 
 
  return 0;
}