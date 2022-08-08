// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximum(int array[],int n){
    int max=INT_MIN;
    for(int i=0;i< n; i++){
        if(max<array[i]){
            max=array[i];
          }
    }
    return max;
}
void printArray(int array[],int n){
    for(int i = 0; i < n; i++){
        cout << array[i] <<" ";
    }
    cout<<endl;
}

void countSort(int array[],int n){
    //finding max value
    int max=maximum(array,n);
    //creat the count array 
    
    int *count=(int*)malloc((max+1)*sizeof(int));
    //int count[max+1]={0};

    //initialize the count array all elements to 0

    for(int i=0; i < max+1; i++){
        count[i]=0;

    }
//increment the correspondent index
    for(int i=0;i < n;i++){ 
        count[array[i]]++;
    }

    int k,m;
    k=0;
    m=0;
    while(k<=max){
       // cout<<"value of m is "<<m<<endl;
             if(count[k]>0){
                array[m]=k;
                count[k]--;
                m++;
                // First the array will store the value of k index if the value is more than once than it will move forward and save the same count i value into array next index it store the value to next index until the count array value is 0 and than it will move to next forward and decrement the count value too at the same time 
                //cout<<"value of m inside "<<m<<endl;
               // cout<<"value of marr inside "<<array[m]<<endl;
             }else{
                k++;
             }
             //cout<<"value of m inside "<<m<<endl;
    }
}

int main()
{
    int A[]={9,1,4,14,4,15,6,4,4,4,4};
    int n=11;
    cout<<"Before sorting array: ";
    printArray(A,n);
    countSort(A,n);
    cout<<"After sorting array: ";
     printArray(A,n);

 
 
  return 0;
}