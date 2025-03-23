// // shapes (area ,rectangle)
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int a;
//     printf("Enter side a: ");
//     scanf("%d",&a);
//     printf("side a: %d\n", a);
//     int b;
//     printf("Enter side b: ");
//     scanf("%d",&b);
//     printf("side b: %d\n", b);
//     printf("the area is : %d\n", a * b);
//     double c,d;
//     scanf("%lf %lf",&c , &d);//to take two real numbers together
//     printf("c:%.3lf d: %.3lf\n",c,d);
//     printf("%d %d %d %d\n", sizeof(int),sizeof(char),sizeof(float),sizeof(double));
// return EXIT_SUCCESS;
// }

// calculator assignment
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c%d", &a, &op, &b); // space after %d is important here!!
    printf("%d %c %d\n", a, op, b);
    // "double quotes are for string"....'single quotes are for char'!!
    if (op == '+'){
        printf("%d\n", a + b);
    printf("yeah,it was addition!\n");
    }
    else if(op == '-'){
        printf("%d", a - b);
    }
    else if(op == '*'){
        printf("%d", a * b);
    }
    else if(op == '/'){
        printf("%.3lf", a / (double) b);//so here we will do typecasting convert value of either a or b to double so that we will get float value.
    }

    return EXIT_SUCCESS;
}