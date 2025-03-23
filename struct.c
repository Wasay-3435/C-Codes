// #include <stdio.h>
// #include <stdlib.h>
// struct brothers //initialize function
// {
//     int age;
//     double salary;
// };
// int main()
// {
//     struct brothers brother1;
//     struct brothers brother2; // struct person is name of datatype ,person1 is datatype varibale_name
//     brother1.age = 19;
//     brother1.salary = 35000;
//     brother2.age = 21;
//     brother2.salary = 40000;
//     printf("age of brother1 : %d\n", brother1.age);
//     printf("salary of brother : %.2lf\n", brother1.salary);
//     printf("age of brother2 : %d\n", brother2.age);
//     printf("salary of brother2 : %.2lf\n", brother2.salary);

//     return EXIT_SUCCESS;
// }
// alternative method:
// struct brothers brother1={.age = 21,.salary=35000}
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct brothers //initialize function
// {
//     int age;
//     double salary;
// }brothers;
// int main()
// {
//      brothers brother1;
//      brothers brother2; // struct person is name of datatype ,person1 is datatype varibale_name
//     brother1.age = 19;
//     brother1.salary = 35000;
//     brother2.age = 21;
//     brother2.salary = 40000;
//     printf("age of brother1 : %d\n", brother1.age);
//     printf("salary of brother : %.2lf\n", brother1.salary);
//     printf("age of brother2 : %d\n", brother2.age);
//     printf("salary of brother2 : %.2lf\n", brother2.salary);

//     return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct complex
// {
//     double real;
//     double imaginary;
// }complex;
// int main(){

//     complex complex1={.real=25,.imaginary=30};
//     complex complex2={.real=20,.imaginary=50};
//     complex sum;
//     sum.real = complex1.real + complex2.real;
//     sum.imaginary = complex1.imaginary +complex2.imaginary;
//     printf("real part :%.1lf\n",sum.real);
//     printf("imaginary part : %.1lf\n",sum.imaginary);
//     printf("final result is : %.2lf + %.2lfi\n",sum.real,sum.imaginary);

//     return EXIT_SUCCESS;
// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct complex
// {
//     double real;
//     double imaginary;
// } complex;
// int main()
// {
//     complex c1 ={.real=21 ,.imaginary=25};
//     complex c2 ={.real=22.3 ,.imaginary=29.5};
//     complex c3 ={.real=69.3 ,.imaginary=183.4};
//     complex diff;
//     diff.real=c1.real - c2.real - c3.real;
//     diff.imaginary=c1.imaginary - c2.imaginary - c3.imaginary;
//     printf("final result is : %.2lf + %.2lfi\n",diff.real,diff.imaginary);

//     return EXIT_SUCCESS;
// }
//array of structs
#include <stdio.h>
#include <stdlib.h>
typedef struct students
{
    char name[20];
    float gpa;
} students;
int main()
{
    students student1 ={.name="wasay",.gpa=4.9};
    students student2 ={.name="ahmad",.gpa=4.5};
    students student3={.name="ali",.gpa=4.6};
    students student[]={student1,student2,student3};
    for(int i=0;i<sizeof(student)/sizeof(student[0]);i++)
    {
        printf("student's name: %s\n",student[i].name);
        printf("student's gpa: %.2f\n",student[i].gpa);
    }

    return EXIT_SUCCESS;
    
}