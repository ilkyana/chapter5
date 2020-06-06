#include<stdio.h>
int p = 0;
int first = 0 , second = 1 , third;
void fib( int n){
if(p == n){
return ;
}

third = first + second ;
printf("%d  ",third);
first = second;
second = third ;
p++;
 fib( n);

}

void main(){
int n,f;
printf("Enter the number od series");
scanf ("%d",&n);
fib(n);

}
