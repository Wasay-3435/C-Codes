#include <stdio.h>
#include <stdlib.h>
#include <String.h>

typedef struct 
{
    char code[6];
    char name[31];
    char theme[31];
    int bricks;
}LEGO_SET;

int cmp(const void* a,const void* b)
{
    LEGO_SET* left = (LEGO_SET*)a;
    LEGO_SET* right = (LEGO_SET*)b;
    if((left->bricks - right->bricks)!=0)
    {
        return -(left->bricks - right->bricks);
    }
    if(strcmp(left->theme,right->theme)!=0)
    {
        return strcmp(left->theme,right->theme);
    }
    if(strcmp(left->name,right->name)!=0)
    {
        return strcmp(left->name,right->name);
    }
    return strcmp(left->code,right->code);
    
}
int main(int argc ,char* argv[])
{
    if(argc==1)
    {
        fprintf(stderr,"1st arguement is missing'\n");
        return 1;
    }
    FILE* in = fopen(argv[1],"r");
    if(!in)
    {
        fprintf(stderr,"file cannot be opened.\n");
        return 2;
    }
    char line[102];
    LEGO_SET legosets[20];
    int length = 0;
    while(fgets(line,102,in))
{
    line[strlen(line)-1]='\0';
    strcpy(legosets[length].code,strtok(line,";"));
    strcpy(legosets[length].name,strtok(NULL,";"));
    strcpy(legosets[length].theme,strtok(NULL,";"));
    legosets[length].bricks=atoi(strtok(NULL,";"));
    length++;
}
fclose(in);
qsort(legosets,length,sizeof(LEGO_SET),cmp);
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
for(int i = 0;i < length;i++)
{
    fprintf(out,"%s;%s;%s;%d\n",legosets[i].code,legosets[i].name,legosets[i].theme,legosets[i].bricks);
}
fclose(out);

    return EXIT_SUCCESS;
}