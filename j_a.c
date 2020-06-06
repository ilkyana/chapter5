# include<stdio.h>
#include<math.h>
int digit(int n){
int sum = 0,rem,c=0;
while(n!=0){
rem = n%10;
sum = sum + rem;
n=n/10;
}
return sum;
}

void main(){
int p,n;
printf("\n Enter the 5 digit number");
scanf("%d", &n);
p = digit(n);
printf("%d",p);


}
