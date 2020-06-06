#include <stdio.h>
#include<math.h>
int factorial(int p){
int f = 1;
for (p; p>=1; p--)
f *= p;
return f;
}

float series(float x){
float sum = 0;
int i, s = 1;
for (i = 1; i <= 9; i += 2){
sum = sum + (pow((double) x, i) / factorial(i))*s;
s =s* -1;
}
return sum;
}

void main( ){
int x;
printf("enter the value of x: ");
scanf("%d", &x);
printf("\n %f", series(x));

}
