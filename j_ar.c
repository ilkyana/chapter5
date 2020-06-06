# include<stdio.h>
int add = 0;
int sum(int num){
int rem;
if(num == 0){
return add;
} 
rem = num % 10;
add = add + rem;
num = num/10;
 return sum(num);
}

void main(){
int num , p;
printf("Enter the 5 digit number");
scanf("%d",&num);
p = sum(num);
printf("%d",p);

}
