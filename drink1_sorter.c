#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[31];
    char packaging[16];
    int price;
} DRINK;
int cmp(const void* a ,const void* b){
    DRINK* left = (DRINK*)a;
    DRINK* right = (DRINK*)b;
    if(strcmp(left->packaging,right->packaging)!=0)
    {
        return -strcmp(left->packaging,right->packaging);
    }
    if(strcmp(left->name,right->name)!=0)
    {
        return -strcmp(left->name,right->name);
    }
    return -(left->price,right->price);

}
int main(int argc ,char* argv[])
{
    if(argc==1){
        fprintf(stderr,"1st arguement is missing.'\n");
        return 1;
    }
    FILE* in =fopen(argv[1],"r");
    if(!in){
        fprintf(stderr,"file cannot be opened.\n");
        return 2;
    }
    char line[56];
    DRINK drinks[150];
    int length = 0;
    while(fgets(line,56,in))
    {
        line[strlen(line)-1] = '\0';
        strcpy(drinks[length].name,strtok(line,";"));
        strcpy(drinks[length].packaging,strtok(NULL,";"));
        drinks[length].price=atoi(strtok(NULL,";"));
        length++;
    }
    fclose(in);
    qsort(drinks,length,sizeof(DRINK),cmp);
    if(argc==2){
        fprintf(stderr,"2nd arguement is missing.\n");
        return 3;
    }
    FILE* out =fopen(argv[2],"w");
    if(!out){
        fprintf(stderr,"2nd file cannot be opened");
        return 4;
    }
    for(int i=0;i<length;i++){
        fprintf(out,"%s;%s;%d\n",drinks[i].name,drinks[i].packaging,drinks[i].price);       
    }
    fclose(out);

    return EXIT_SUCCESS;
}
//in the EOF question if the input lines are 10 then we should add new line ..so it will be at 11.to get correct answer
//cmd promt commands:
// gcc drink1_sorter.c -o drink1.sorter
// drink1.sorter.exe input.csv output.csv