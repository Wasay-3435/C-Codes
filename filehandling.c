// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
    //*****opening  & reading of a file******:
    // FILE *ptr = NULL;
    // char string[34];
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("content of file has : %s",string);

    //     #include <stdio.h>
    // #include <stdlib.h>

    // int main() {
    //     // Opening a file:
    //     FILE *ptr = NULL;       // Declares a file pointer and initializes it to NULL
    //     char string[34];        // Declares a character array to store data read from the file

    //     ptr = fopen("myfile.txt", "r");  // Opens "myfile.txt" in read mode ("r")

    //     // Reads content from the file into 'string'
    //     fscanf(ptr, "%s", string);//taking data from ptr and storing it in string

    //     // Prints the content read from the file
    //     printf("Content of file has: %s", string);

    //     return 0;
    // }

    //*****writing in a file******:
//     FILE *ptr = NULL;
//     char string[34] = "this is the new file content";
//     ptr = fopen("myfile.txt", "w");
//     fprintf(ptr, "%s", string); // taking data from string and storing it in ptr
//     fclose(ptr);

//     return EXIT_SUCCESS;
// }
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //*****fgetc***** */
    // FILE* ptr = NULL;
    // ptr=fopen("myfile.txt","r");
    // char c =fgetc(ptr);
    // printf("the character that i read is : %c\n",c);
    // fclose(ptr);

    //*****fgets***** */
    // FILE* ptr = NULL;
    // ptr = fopen("myfile.txt","r");//we can create file on our desktop also by giving location .
    // char str[4];
    // fgets(str,4,ptr);
    // printf("string is :%s",str);

    FILE* ptr = NULL;
    ptr = fopen("myfile.txt","w");
    fputc('o',ptr);
    fputs("this is my new file",ptr);
    fclose(ptr);

    // to remove a file:

    // if(remove("myfile.txt")==0)
    // {
    //     printf("file is deleted successfuly\n");
    // }
    // else
    // {
    //     printf("file is not deleted successfully!\n");
    // }


    return EXIT_SUCCESS;
}