#include<stdio.h>
void product(){
int n1 ;
float n2 ;
float p ;
p = n1 * n2 ;
printf("%f" , p);
}

void main(){
int n1 ; 
float n2;
printf("Enter the int value");
scanf("%d" , &n1);
printf("Enter the float value");
scanf("%f" , &n2);
product();

}
