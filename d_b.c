#include<stdio.h>
int power(int base , int pow){
int mult = 1;
for(int i = 1 ; i<= pow ; i++){
mult = mult*base ;
}
return mult ;
}

void main(){
int base,pow,result ;
printf("\n Enter the base")
scanf("%d",&base);
printf("\n Enter the power");
scanf("%d",&pow);
result = power(base,pow);
printf("%d",result);

}
