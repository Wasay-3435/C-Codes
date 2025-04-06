#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct 
{
    char manufacturer[151];
    char model[101];
    int seats;
}AIRCRAFT;
int cmp(const void* a,const void*b)
{
    AIRCRAFT* left = (AIRCRAFT*)a;
    AIRCRAFT* right = (AIRCRAFT*)b;
    if((left->seats - right->seats)!=0)
    {
        return -(left->seats - right->seats);
    }
    if(strcmp(left->manufacturer,right->manufacturer)!=0)
    {
        return strcmp(left->manufacturer,right->manufacturer);
    }
    return strcmp(left->model,right->model);
}

int main(int argc ,char* argv[])
{
    if(argc==1)
    {
        fprintf(stderr,"1st arguement is missing.\n");
        return 1;
    }
    FILE* in = fopen(argv[1],"r");
    if(!in)
    {
        fprintf(stderr,"file cannot be opened.\n");
        return 2;
    }
    char line[302];
    int length = atoi(fgets(line,302,in));
    AIRCRAFT aircrafts[length];
    for(int i =0;i<length;i++)
    {
        fgets(line,302,in);
        line[strlen(line)-1]='\0';
        strcpy(aircrafts[i].manufacturer,strtok(line,","));
        strcpy(aircrafts[i].model,strtok(NULL,","));
        aircrafts[i].seats=atoi(strtok(NULL,","));

    }
    fclose(in);
    qsort(aircrafts,length,sizeof(AIRCRAFT),cmp);
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
    fprintf(out,"%d\n",length);
    for(int i = 0;i<length;i++)
    {
        fprintf(out,"%s,%s,%d\n",aircrafts[i].manufacturer,aircrafts[i].model,aircrafts[i].seats);
    }
    fclose(out);
    return EXIT_SUCCESS;
}