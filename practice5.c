// #include <stdio.h>
// #include <stdlib.h>
// void pointer_test(int *iptr)
// { // we can gave the same name to integer as foo pointer as we declared it in a main function
//     printf("passed value to i is : %d\n", *iptr);
//     printf("address of i is : %p\n", iptr);
//     printf("address of pointer itslef is : %p\n", &iptr);
// }
// int main()
// {
//     int i = 1234;
//     int *foo = &i;
//     pointer_test(foo);

//     return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// void rectangle_area(int a,int b,int* area){
//     *area = a * b;
// }
// void rectangle_perimeter(int a,int b,int* perimeter){
//     *perimeter = 2 * (a + b);
// }
// void square_area(int a,int* area){
//     *area = a * a;
// }

// int main()
// {
//     puts("==rectangle==");

//     int rectangle_a,rectangle_b,rectangle_result;
//     puts("enter side a & b of rectangle:");
//     scanf("%d %d", &rectangle_a , &rectangle_b);

//     rectangle_area(rectangle_a,rectangle_b,&rectangle_result);
//     printf("area : %d\n",rectangle_result);
//     rectangle_perimeter(rectangle_a,rectangle_b,&rectangle_result);
//     printf("perimeter : %d\n",rectangle_result);

//     puts("==square==");
//     int square_side,square_result;
//     puts("enter the side of square:");
//     scanf("%dd",&square_side);
//     square_area(square_side,&square_result);
//     printf("area : %d\n",square_result);

//     return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int salary;
//     printf("Enter user's salary:");
//     scanf("%d",&salary);
//     printf("the user's salary is %d\n",salary);
//     int* ptr = &salary;
//     printf("user's salary is %d\n",*ptr);
//     scanf("%d",&*ptr);//change in a salary:
//     printf("double salary is %d\n",2 * *ptr);

//     return EXIT_SUCCESS;
// }

