# include<stdio.h>
# include<math.h>
void triangle(float a ,float b , float c){
float s = (a + b + c)/2.0 ;
float area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f",area);
}

void main(){
float a, b , c;
printf("Enter the value of a , b and c");
scanf("%f %f %f " , &a, &b, &c);
triangle(a,b,c);
}
