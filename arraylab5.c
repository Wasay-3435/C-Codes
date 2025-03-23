// #include <stdio.h>
// #include <Stdlib.h>
// int main(){
//     int numbers[5];
//     for(int i=0;i<5;i++){
//         numbers[i] = i;
//        }
//     for (int i=0;i<5;i++){
//         printf("%d %p %d %p\n",numbers[i],&numbers[i],*(numbers + i),numbers + i);//%p memory address
//     }
//     printf("%d %d\n",sizeof(int),sizeof(numbers));
//     printf("%d\n",sizeof(numbers) / sizeof(int));
//     printf("%d\n",2[numbers]);
//     int *p =&numbers[0];
//     printf("%p %d\n",p,*p);
//     p++;
//     printf("%p %d\n",p,*p);
//     p++;
//     printf("%p %d\n",p,*p);
//     p++;
//     printf("%d %d\n",numbers[-1],numbers[7]);


//     return EXIT_SUCCESS;
// }


#include <stdio.h>
#include <Stdlib.h>
int count_of_odds(int *numbers,int length){
    int counter=0;
    for(int i=0;i<length;i++){
        if(numbers[i]%2!=0){
            counter++;
        }
    }
    return counter;
}
int main(){
    int n;
    scanf("%d",&n);

    for(int i =0 ;i<n;i++){
        int length;
        scanf("%d",&length);
        int numbers[length];
        for(int j=0;j<length;j++){
            scanf("%d",&numbers[j]);
        }
        printf("%d\n",count_of_odds(numbers,length));
    }

    return EXIT_SUCCESS;
}

//for EOF:
// #include <stdio.h>
// #include <Stdlib.h>
// int count_of_odds(int *numbers,int length){
//     int counter=0;
//     for(int i=0;i<length;i++){
//         if(numbers[i]%2!=0){
//             counter++;
//         }
//     }
//     return counter;
// }
// int main(){
//    while(1){
//     int length;
//     if(scanf("%d",&length)==EOF){
//         break;
//     }
//    }
//         int numbers[length];
//         for(int j=0;j<length;j++){
//             scanf("%d",&numbers[j]);
//         }
//         printf("%d\n",count_of_odds(numbers,length));
//     }

//     return EXIT_SUCCESS;
// }
//pointers concept:
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int a ;
//     a=5;
//     int* ptra =&a;
//     printf("address of pointer to a is: %x\n",&ptra);
//     printf("address of a is : %x\n",&a);
//     printf("address of a is : %p\n",ptra);
//     printf("value of a is %d\n",a);
//     printf("value of a is %d",*ptra);

//     // ptr = &age  valid because both returns addresses
//     // *ptr = age valid because both returns values
//     // ptr = number !invalid
//     //*ptr=&number !! invalid


//     return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int numbers[5] = {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         printf("%d = %p\n",numbers[i] , &numbers[i]);
//     }


//     return EXIT_SUCCESS;
// }