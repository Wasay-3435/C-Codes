// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int a, b;
//         char op;
//         scanf("%d %c %d", &a, &op, &b);
//         // printf("%d %c %d",a,op,b);
//         switch (op)
//         {
//         case '+':
//             printf("%d\n", a + b);
//             break;
//         case '-':
//             printf("%d\n", a - b);
//             break;
//         case '*':
//             printf("%d\n", a * b);
//             break;
//         case '/':
//             printf("%d\n", a / b);
//             break;
//         default:
//             printf("%d\n", a % b);
//         }

//     } // a>output.txt
//     // a <input.txt
//     // a < input.txt >output.txt commands for cmd promt

//     return EXIT_SUCCESS;
// }

//for EOF

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     while(1)
//     {
//         int a, b;
//         char op;
//         scanf("%d %c %d", &a, &op, &b);
//         if(a==0 || b==0)
//         break; 
//         // printf("%d %c %d",a,op,b);
//         switch (op)
//         {
//         case '+':
//             printf("%d\n", a + b);
//             break;
//         case '-':
//             printf("%d\n", a - b);
//             break;
//         case '*':
//             printf("%d\n", a * b);
//             break;
//         case '/':
//             printf("%d\n", a / b);
//             break;
//         default:
//             printf("%d\n", a % b);
//         }

//     } // a>output.txt
//     // a <input.txt
//     // a < input.txt >output.txt commands for cmd promt

//     return EXIT_SUCCESS;
// }
#include <stdio.h>
#include <stdlib.h>
int main(){
    char c;
    int opened = 0;
    while(1){
        c = getchar();
        if (c == EOF){
            break;
        }
        if(c=='"'){
            if(!opened){
                printf("``");//opening now
            }else{
                printf("''");//clsoing now
            }
            opened=!opened;
        }else{
            putchar(c);
        }
    }


    return EXIT_SUCCESS;
}