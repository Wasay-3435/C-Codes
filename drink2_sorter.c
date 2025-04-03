#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[31];
    char packaging[16];
    int price;
} DRINK;
int cmp(const void *a, const void *b)
{
    DRINK *left = (DRINK *)a;
    DRINK *right = (DRINK *)b;
    if (strcmp(left->packaging, right->packaging) != 0)
    {
        return -strcmp(left->packaging,right->packaging);
    }
    if (strcmp(left->name, right->name) != 0)
    {
        return -strcmp(left->name,right->name);
    }
    return -(left->price,right->price);
}

int main(int argc,char* argv[])
{
    if(argc==1){
        fprintf(stderr,"1st arguement is missing.\n");
        return 1;
    }
    FILE* in =fopen(argv[1],"r");
    if(!in){
        fprintf(stderr,"file cannot be opened.\n");
    }
    char line[56];
    DRINK drinks[150];
    int length = 0;
    while(fgets(line,56,in))
    {
        if(strcmp(line,"END")==0)
        {
            break;
        }
        line[strlen(line)-1] = '\0';
        strcpy(drinks[length].name,strtok(line,";"));
        strcpy(drinks[length].packaging,strtok(NULL,";"));
        drinks[length].price=atoi(strtok(NULL,";"));
        length++;
    }
    fclose(in);
    qsort(drinks,length,sizeof(DRINK),cmp);
    if(argc==2)
    {
        fprintf(stderr,"2nd arguement is missing.\n");
        return 3;
    }
    FILE* out = fopen(argv[2],"w");
    if(!out)
    {
        fprintf(stderr,"2nd file cannot be opened.\n");
        return 4;
    }
    for(int i =0;i<length;i++)
    {
        fprintf(out,"%s;%s;%d\n",drinks[i].name,drinks[i].packaging,drinks[i].price);
    }
    fprintf(out,"END");//important to printout this end line in last.
    fclose(out);

    return EXIT_SUCCESS;
}