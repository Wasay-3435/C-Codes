#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strtok will take token from one string and will save it to another,we will pass delimeter so at that delimeter it will stop and will take token.
//for the 1st token we will pass string but for the remaining we will pass NULL bcz it will be a signal for it that this time i need 2nd string.
int main()
{
    char s[] = "this is the way.";
    char d[] = " ";
    // char *pointer1 = strtok(s,d);
    // printf("%s\n",pointer1);
    // char *pointer2 = strtok(NULL,d);
    // printf("%s\n",pointer2);
    // char *pointer3 = strtok(NULL,d);
    // printf("%s\n",pointer3);
    // char *pointer4 = strtok(NULL,d);
    // printf("%s\n",pointer4);
    char *portion = strtok(s,d);
    while(portion!=NULL){
        printf("%s\n",portion);
        portion = strtok(NULL,d);

    }

    return EXIT_SUCCESS;
}