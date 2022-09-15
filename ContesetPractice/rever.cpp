#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // cout<<"array reverse"<<endl;
    //  for(int i=0;i<n;i++){
    //    cout<<array[i];
    // }
    
    int temp, start = 0, end =n-1;
	while (start < end)
	{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
    
      for(int i=0;i<n;i++){
      cout<<array[i]<<" ";
    }
    return 0;
}
