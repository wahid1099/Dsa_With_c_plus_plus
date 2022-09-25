#include <stdio.h>
int main(){
int i, j, k, N;
printf("Enter N: ");
scanf("%d", &N);
k = 1;
for(i=1; i<=N; i++){
for(j=1; j<=i; j++){
if(k % 2 == 1){
printf("1"); }
else{
printf("0");}
k++; }
printf("\n");
}

return 0;
}