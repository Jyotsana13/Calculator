#include<stdio.h>
int main() {
   char operator;
   double num1,num2;
printf("operation to perform: ");//asks user which operation to perform
scanf("%c",&operator);
printf("enter two numbers: ");
scanf("%lf%lf",&num1,&num2);

if (operator == '+') {
   printf("%.2lf+%.2lf=%.2lf",num1,num2,num1+num2);
} else if (operator == '-') {
   printf("%.2lf-%.2lf=%.2lf",num1,num2,num1-num2); 
} else if (operator == '*') {
   printf("%.2lf*%.2lf=%.2lf",num1,num2,num1*num2);
} else if(operator == '/') {
   printf("%.2lf/%.2lf=%.2lf",num1,num2,num1/num2);
} else { printf("invalid operator");}
return 0;
}
