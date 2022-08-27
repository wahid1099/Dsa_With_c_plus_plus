// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

int m,n;
cin>>m>>n;
int matrix[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}

int array1d[m*n];

 for(int i=0;i< m; i++){
     for(int j=0;j<n;j++){
       array1d[i*n+j]=matrix[i][j]; 
    }
 }


int different[m*n];
int iteration=0;
for (int i=0;i<m*n;i++){

    for(int j=0;j<m*n;j++){
     
        if(array1d[i]==different[j]){
            array1d[i]=-1;
            
        }

    }
    if(array1d[i] !=-1 ){
        different[iteration++]=array1d[i];
    }

}



cout<<endl;
   int iteration2=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        matrix[i][j]=array1d[iteration2];
        iteration2++;
    }
}


for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

// for(int i=0;i<m*n;i++) {
//     cout<<different[i]<<endl;

// }
  return 0;
}
