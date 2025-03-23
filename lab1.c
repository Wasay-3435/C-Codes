
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    printf("wasay\n");
    printf("1\t2\t3\n4\t5\t6\n");
    int x;//declaration
    x=123;//initialization
    int y = 321;//declare + initialization
    int age = 20;
    float gpa = 4.9;
    float pi = 3.145366272;
    double pii = 3.1436287236;//double datatype is more accurate than float
    bool a = false;
    char b = 120;// we can store integer value also in char datatype but while printing we can use %d ,%c placeholders...%d for int value ,%c for equivalent ASCII value.
    char grade = 'c';// for character we have to enclose value in inverted commas.will  store only single character
    char name[7] = "wasay"; /*array of characters*/
    printf("you are %d years old\n",age);
    printf("my name is %s\n",name);
    printf("my grade is %c\n",grade);
    printf("my gpa is %f\n",gpa);
    printf("pi is %0.15f\n",pi);
    printf("pii is %0.15lf\n",pii);
    printf("zero equals to = %d\n",a);
    printf("b is %c\n",b);
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    printf("item 1:$%.2f\n",item1);// so if we wnat to display float value upto desired point..we will just write this number like %.2f.
    int g =  2;
    int h = 6;
    g++;
    h--;
    printf("%d\n",g);
    printf("%d",h);

    return 0;
    return EXIT_SUCCESS;
    // this is a comment
    /*this is a multiline comment
    if we want to write many lines*/
   
}