#include<stdio.h>
void leap(){
int n;
if(n%4 == 0){
printf("This number is leap year");
} else {
printf("This is not leap year");
}
return ;
}

void main(){
int year ;
printf("Enter the year");
scanf("%d", &year);
leap();

}

