// // // // // # include <stdio.h>
// // // // // int main(){
// // // // // char name[25];
// // // // // int age;
// // // // // printf("what is your name?\n");
// // // // // printf("what is your age?\n");
// // // // // fgets(name,25,stdin);// same as scanf function but if we want to take input in which spaces are also included then we will use this function.
// // // // // scanf("%d",&age);
// // // // // printf("my name is %s",name);
// // // // // printf("i am %d years old",age);

// // // // //     return 0;
// // // // // }
// // // // // #include <stdio.h>
// // // // // #include <math.h>
// // // // // int main(){
// // // // // double A = sqrt(9);
// // // // // double B = pow(2,4);
// // // // // printf("%.1lf\n",A);
// // // // // printf("%.1lf",B);

// // // // // return 0;
// // // // // }
// // // // #include <stdio.h>
// // // // int main(){
// // // // //calculating circumference and area of a circle:
// // // // const double PI = 3.14;
// // // // int radius;
// // // // scanf("%d",&radius);
// // // // double circum = 2 * PI * radius;
// // // // double area = PI * radius * radius;
// // // // printf("circumference of a circle is:%.2lf\n",circum);
// // // // printf("area of circle is %.2lf",area);

// // // // return 0;
// // // // }
// // // // #include <stdio.h>
// // // // int main(){
// // // // char name[20];
// // // // int age;
// // // // fgets(name,20,stdin);
// // // // scanf("%d",&age);
// // // // printf("hello [%s],you are %d years old",name,age);
// // // // return 0;
// // // // }
// // // // #include <stdio.h>
// // // // int main(){
// // // // int a ;
// // // // int b;
// // // // scanf("%d",&a);
// // // // scanf("%d",&b);
// // // // int sum = a + b;
// // // // int diff = a - b;
// // // // int prod = a * b;
// // // // double divi = (double) a / b;// to get accurate result after decimal
// // // // printf("\nsum is %d",sum);
// // // // printf("\ndiff is %d",diff);
// // // // printf("\nprod is %d",prod);
// // // // printf("\ndivi is %.2lf",divi);
// // // // return 0;
// // // // }
// // // #include <stdio.h>
// // // int main(){
// // // int a,b,c;
// // // printf("\nenter value for a:");
// // // scanf("%d",&a);
// // // printf("\nenter value for b:");
// // // scanf("%d",&b);
// // // //swapping logic
// // // c = a;
// // // a = b;
// // // b = c;
// // // printf("\nafter swap a is %d",a);
// // // printf("\nafter swap b is %d",b);
// // // return 0;
// // // }


// // //if else-statements:
// // #include <stdio.h>
// // int main(){
// // int age;
// // printf("enter thr age:");
// // scanf("%d",&age);
// // if(age >=18){
// //     printf("\nyou are adult");
// // }
// // else if(age<18 & age >0){
// //     printf("\nyou are child");
// // }
// // else{
// //     printf("\nyou are not born yet!haha");
// // }
// // return 0;
// // }
// #include <stdio.h>
// #include <ctype.h>
// int main(){
// char unit;
// float temp;
// printf("The temp is in (F) or (C)?");
// scanf("%c",&unit);
// unit=toupper(unit);
// if(unit=='C'){
//     printf("\nEnter the temp in celsius:");
//     scanf("%f",&temp);
//     temp = (temp * 9 / 5) + 32;
//     printf("The temp in farenheit(F) is: %.1f",temp);
// }
// else if(unit=='F'){
//     printf("\nEnter the temperature in 'F':");
//     scanf("%f",&temp);
//     temp = ((temp - 32) * 5) / 9;
//     printf("Temperatur in Celsius (C) is %.1f",temp);
// }
// else{
//     printf("%c is not a valid unit of measurment",unit);
// }
// return 0;
// }
#include <stdio.h>
#include <stdbool.h>
int main(){
float temp;
bool cloudy =true;
printf("Enter the tempearture:");
scanf("%f",&temp);
if(temp >=0 && temp<=30 &&cloudy){
    printf("temperature is good\n");
}
else{
    printf("tempearture is bad");
}
return 0;
}