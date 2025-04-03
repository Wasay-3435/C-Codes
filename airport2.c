#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char name[31];
    char city[31];
    int runways;
    int time;

}AIRPORT;

int cmp(const void* a,const void* b)
{
    AIRPORT* left = (AIRPORT*)a;
    AIRPORT* right = (AIRPORT*)b;
    if((left->runways - right->runways)!=0)
    {
        return -(left->runways - right->runways);
    }
    if((left->time - right->time)!=0)
    {
        return -(left->time - right->time);
    }
    return strcmp(left->name,right->name);
}


int main(int argc,char* argv[])
{
    if(argc==1)
    {
        fprintf(stderr,"1st arguement is missing.\n");
        return 1;
    }
    FILE* in =fopen(argv[1],"r");
    if(!in)
    {
        fprintf(stderr,"file cannot be opened.\n");
        return 2;
    }
    char line[102];
    AIRPORT airports[20];
    int length = 0;
    while(fgets(line,102,in))
    {
        if(strcmp(line,"END")==0)
        {
            break;
        }
        line[strlen(line)-1] = '\0';
        strcpy(airports[length].name,strtok(line,";"));
        strcpy(airports[length].city,strtok(NULL,";"));
        airports[length].runways = atoi(strtok(NULL,";"));//conversion of ASCII to integer
        airports[length].time = atoi(strtok(NULL,";"));
        length++;
        
    }
    fclose(in);
    qsort(airports,length,sizeof(AIRPORT),cmp);
    if(argc==2)
    {
        fprintf(stderr,"2nd arguement is missing.\n");
        return 3;
    }
    FILE* out =fopen(argv[2],"w");
    if(!out)
    {
        fprintf(stderr,"2nd file cannnot be opened.\n");
        return 4;
    }
    for(int i = 0;i < length; i++)
    {
        fprintf(out,"%s;%s;%d;%d\n",airports[i].name,airports[i].city,airports[i].runways,airports[i].time);
    }
    fprintf(out,"END\n");
    fclose(out);
    
    return EXIT_SUCCESS;
}