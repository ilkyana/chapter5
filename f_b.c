# include<stdio.h>
void sum (){
int n;
float average , sd;
int sum = 0;
for (int i = 1 ; i<= 5 ; i++){
printf("Enter the number");
scanf("%d",&n);
sum = sum + n;
}
printf("Sum of numbers %d",sum);
average = sum/5;
printf("Average of numbers %f" , average);

}
void main(){
sum();
}
