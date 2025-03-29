#include <Stdio.h>
#include <stdlib.h>
#include <string.h>
// sorting of array
int compareInt(const void* pa,void* pb){
    const int* p1=pa;
    const int* p2=pb;
    return  *p1-*p2;//here we do typecasting ,convert void pointer to int,we will do typecasting according to our array.
}
int main()
{
    int a[] = {8,7,2,3,1,5,6,9,0,4};
    int length = 10;
    qsort(a,length,sizeof(int),compareInt);
    for(int i=0;i<length;i++){
        printf("%d\n",a[i]);
    }

    return EXIT_SUCCESS;
}