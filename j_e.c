#include<stdio.h>
int add = 0  ,i = 1;
int sum(int n){
if(n == 0){
return add;
}
add = add + i;
i = i+1;
 return sum(n-1);
}

void main(){
int n,p;
printf("Enter the number");
scanf("%d",&n);
 p = sum(n);
printf("%d",p);
}
