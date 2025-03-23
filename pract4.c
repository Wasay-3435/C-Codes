// //average of input numbers:
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("taken numbers are:");
//     scanf("%d",&n);
//     printf("taken numbers are:%d\n",n);
//     int num,sum;
//     sum=0;
//     printf("enter %d integers\n",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&num);
//         sum+=num;
//     }
//     double average =(double)sum/n;
//     printf("average of total number is %.2lf\n",average);
// return EXIT_SUCCESS;
// }

// minimum number:


// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("enter the total numbers:\n");
//     scanf("%d",&n);
//     printf("total taken numbers are %d\n",n);
//     int num,min;
//     printf("enter %d integers\n",n);
//     scanf("%d",&num);
//     min = num;
//     for(int i =1;i<n;i++){
//         scanf("%d",&num);
//         if (num<min){
//         min = num;
//         }
//     }
//     printf("minimun number is %d",min);


//     return EXIT_SUCCESS;
// }



// maximum number :
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("enter total numbers:");
//     scanf("%d",&n);
//     printf("total numbers are : %d\n",n);
//     int num,max;
//     printf("enetr %d taken numbers:\n");
//     scanf("%d",&num);
//     max = num;
//     for(int i=1;i<n;i++){
//         scanf("%d",&num);
//         if(num>max){
//             max = num;
//         }
//     }

//     printf("maximum number is :%d\n",max);

//     return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int gcd(int a,int b){
//     while(b != 0){
//         int temp =b;
//          b=a%b;
//          a=temp;
    
//     }
//     return a;
// } 
// int main(){
//     int a,b;
//     printf("enter two positive integers:");
//     scanf("%d %d", &a , &b);
//     int result = gcd(a,b);
//     printf("the gcd of %d and %d is %d\n:",a ,b,result);
    
//     return EXIT_SUCCESS;
// }

#include <stdio.h>
#include <stdlib.h>
int factorial(int n){
if(n==0){
return 1;
    }
else{
    return n * factorial(n-1);
    }
}
int main(){
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int result=factorial(n);
    printf("result is %d",result);

    return EXIT_SUCCESS;
}