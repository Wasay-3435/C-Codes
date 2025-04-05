//-->>case handling question.<<--//
//-->>case handling question.<<--//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char name[41];
    char type[81];
    int built;
   
}SIGHT;

int cmp(const void* a,const void* b)
{
    SIGHT* left = (SIGHT*)a;
    SIGHT* right = (SIGHT*)b;

    if(strcmp(left->type,right->type)!=0)
    {
        return strcmp(left->type,right->type);
    }
    if((left->built - right->built)!=0)
    {
        return -(left->built-right->built);
    }
    return-strcmp(left->name,right->name);
}

int main(int argc,char* argv[])
{
    char line[130];
    SIGHT sights[150];
    int length = 0;
    FILE* in = fopen(argv[1],"r");
    
    
    while(fgets(line,130,in))
    {
        if(strcmp(line,"END")==0)
        {
            break;
        }
        line[strlen(line)-1]='\0';
        strcpy(sights[length].name,strtok(line,","));
        strcpy(sights[length].type,strtok(NULL,","));
        sights[length].built=atoi(strtok(NULL,","));
        length++;
    }
    fclose(in);
    qsort(sights,length,sizeof(SIGHT),cmp);
    FILE* out = fopen(argv[2],"w");
    for(int i =0;i<length;i++)
    {
        fprintf(out,"%s,%s,%d\n",sights[i].name,sights[i].type,sights[i].built);
    }
    fprintf(out,"END\n");
    fclose(out);

    return EXIT_SUCCESS;
}