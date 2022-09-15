#include<iostream>
using namespace std;
int main()
{
int n, s, i, j;

cin >> n;
for(i = 0; i <= n; i++)
{
    
        for(s = i; s <n; s++){
     cout << " ";
        }

   for(j=1; j<=(2*i-1); j++){
    if(n==j) break;
   cout << "*";
    }


cout << endl;
    

}


for(i = 1; i < n; i++)
{
    if(i% 2 != 0){
        for(s = 0; s <= i; s++)
cout << " ";
for(j = n-1; j > i; j--)
cout << "*";
cout << endl;
    }



}
return 0;
}