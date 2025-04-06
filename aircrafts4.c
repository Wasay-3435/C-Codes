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
    char line[302];
    AIRCRAFT aircrafts[52];
    int length = 0;
    FILE* in = fopen(argv[1],"r");
    while(fgets(line,302,in))
    {
        line[strlen(line)-1] = '\0';
        strcpy(aircrafts[length].manufacturer,strtok(line,","));
        strcpy(aircrafts[length].model,strtok(NULL,","));
        aircrafts[length].seats=atoi(strtok(NULL,","));
        length++;
    }
    fclose(in);
    qsort(aircrafts,length,sizeof(AIRCRAFT),cmp);
    FILE* out = fopen(argv[2],"w");
    for(int i =0;i<length;i++)
    {
        fprintf(out,"%s,%s,%d\n",aircrafts[i].manufacturer,aircrafts[i].model,aircrafts[i].seats);

    }
    fclose(out);

    return EXIT_SUCCESS;
}