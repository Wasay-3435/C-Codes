// #include <stdio.h>
// #include <stdlib.h>
// void birthday (char  name[],int age){
//     printf("happy birthday to dear %s!\n",name);
//     printf("you are %d years old!",age);
// }
// int main(){
//     char name[] = "bro";
//     int age = 21;
//     birthday(name,age);


// return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// double square(double x){
//     return x * x;
// }
// int main(){
//     double x = square(3.14);
//     printf("%.2lf",x);
// return EXIT_SUCCESS;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int FINDMAX(int a,int b){
// return (a > b) ? a : b;
// }
// int main(){
//  int max = FINDMAX(3,5);
//  printf("%d",max);

// return EXIT_SUCCESS;
// }
//factorial function
// #include <stdio.h>
// #include <stdlib.h>
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n * fact(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the number n:");
//     scanf("%d",&n);
//     int result =fact(n);
//     printf("%d",result);

// return EXIT_SUCCESS;
// }

//fibonnaci function
// #include <stdio.h>
// #include <stdlib.h>
// int Fab(int n){
//     if(n==0){
//         return 0;
//     } else if(n==1){
//             return 1;
//      } else{
//             return Fab(n-1)+Fab(n-2);
//     }
// }

// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     int result=Fab(n);
//     printf("result is : %d",result);
// return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int pow_func(int x ,int n){
//     if(n==0){
//         return 1;
//     }else if(n==1){
//         return x;
//     }else{
//         return x * pow_func(x,n-1);
//     }
// }
// int main(){
//     int a;
//     printf("Enter A:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter B:");
//     scanf("%d",&b);
//     int result=pow_func(a,b);
//     printf("result is %d",result);
// return EXIT_SUCCESS;
// }

//loops:
//for loop:
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     for(int i = 10; i >= 1; i-=2){
//     printf("%d\n",i);
// }
//  return EXIT_SUCCESS;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//  int sum=0;
//  for(int i = 1 ;i <= 100 ;i=i+2){
//     sum+=i;
//  }
//  printf("sum of odd numbers bw 1 & 100 is : %d",sum);

//  return 0;
// }

//Nested loops:
// }#include <stdio.h>
// int main(){
// int rows;
// int columns;
// char symbol;
// printf("Enter number of rows:\n");
// scanf("%d",&rows);

// printf("Enter number of columns:\n");
// scanf("%d",&columns);

// for (int i=1;i<=rows;i++){    //outer loop holds rows
//     for(int j=1;j<=columns;j++){//inner loop holds columns
//         printf("%d",j);
//     }
//     printf("\n");
// }
//  return 0;
//}

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int rows;
//     printf("Enter number of rows:");
//     scanf("%d",&rows);
//     for(int i=1;i <= rows;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return EXIT_SUCCESS;
// }


//continue & break statement:
#include <stdio.h>
#include <stdlib.h>
int main(){
    int sum=0;
    for(int i=2;i<=10;i=i+2){
        if(i==6){
            continue;
        }
        sum+=i;
        printf("\n%d",i);
    }
printf("\n%d",sum);


    return EXIT_SUCCESS;
}