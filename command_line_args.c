#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this arguement at index number %d\n has a value of %s\n",i,argv[i]);
    }
    // in the terminal we will write .\command_line_args.exe to take commands
    // if we will not pass any command then there will be 1 command line argument that will be the name of file.
    //argc is number of arguemants 
    //argv is the array of arguements
    //program itself is a arguement
    return 0;
}
