#include<stdio.h>
int count = 0;
void circulate(int a , int b , int c){
if(count==3){
return  ;
}

int temp =a ;
a = b ;
b = c ;
c = temp;
printf("%d %d %d  ",a,b,c);
count++;
circulate(a,b,c);

}
void main(){
int a , b , c;
printf("Enter the value of a , b , c");
scanf("%d %d %d" , &a , & b , &c);
circulate(a,b,c);

}
