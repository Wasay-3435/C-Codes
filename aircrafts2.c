#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{ 
    char manufacturer[151];
    char model[101];
    int seats;
    
}AIRCRAFT;
int cmp(const void* a,const void* b)
{
    AIRCRAFT* left = (AIRCRAFT*)a;
    AIRCRAFT* right = (AIRCRAFT*)b;

    if((left->seats - right->seats)!=0)
    {
        return -(left->seats-right->seats);
    }
    if(strcmp(left->manufacturer,right->manufacturer)!=0)
    {
        return strcmp(left->manufacturer,right->manufacturer);
    }
    return strcmp(left->model,right->model);
}

int main(int argc,char* argv[])
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
    AIRCRAFT aircrafts[52];
    int length = 0;
    while(fgets(line,302,in))
    {
        // if(strcmp(line,"END")==0)
        // {
        //     break;
        // }
        line[strlen(line)-1]='\0';
        strcpy(aircrafts[length].manufacturer,strtok(line,","));
        strcpy(aircrafts[length].model,strtok(NULL,","));
        aircrafts[length].seats=atoi(strtok(NULL,","));
        length++;

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
    for(int i = 0;i<length;i++)
    {
        fprintf(out,"%s,%s,%d\n",aircrafts[i].manufacturer,aircrafts[i].model,aircrafts[i].seats);
    }
    // fprintf(out,"END\n");
    fclose(out);

    return EXIT_SUCCESS;
}