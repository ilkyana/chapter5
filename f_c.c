# include<stdio.h>
void student(){
int n ;
float average , per , sum = 0.0;
for(int i = 1 ; i<= 3 ; i++){
printf("Enter the number of student");
scanf("%d", &n);
sum = sum + n;
}
average = sum / 3.0;
printf("\n %f", average);
per = (sum/300.0)*100;
printf("\n %f",per);

}
void main(){
student();
}
