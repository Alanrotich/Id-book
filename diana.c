//program to calculate simple interest
/*
program to calculate simple interest
author : 
date : 24 - 09 -24
*/
#include <stdio.h> // scanf() , printf()
// now to store the values if the variables
int main() {
float principal;
float rate ;
float time ;
float simple_interest ;

printf("enter the value of principal :  ");
scanf("%f" ,&principal);
printf("the value is %.2f \n",principal);

printf("enter the value of rate:");
scanf("%f",&rate);
printf("the value is %.2f\n",rate);

printf("enter the value of time:");
scanf("%f",&time);
printf("the value is %.2f\n",time
);

simple_interest = (principal*rate*time)/100;
printf("simple_interest=%f",simple_interest);



return 0;
}