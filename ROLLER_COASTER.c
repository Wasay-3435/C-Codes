#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[31];
    char world[31];
    int height;
    int time;

}ROLLER_COASTER;
int cmp(const void* a,const void* b)
{
    ROLLER_COASTER* left = (ROLLER_COASTER*)a;
    ROLLER_COASTER* right = (ROLLER_COASTER*)b;

    if((left->time - right->time)!=0)
    {
        return(left->time - right->time);
    }
    if((left->height - right->height)!=0)
    {
        return-(left->height - right->height);
    }
    return strcmp(left->name,right->name);
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
    char line[102];
    ROLLER_COASTER roller_coasters[20];
    int length = 0 ;
    while(fgets(line,102,in))
    {
        if(strcmp(line,"END")==0)
        {
            break;
        }
        line[strlen(line)-1] = '\0';
        strcpy(roller_coasters[length].name,strtok(line,";"));
        strcpy(roller_coasters[length].world,strtok(NULL,";"));
        roller_coasters[length].height = atoi(strtok(NULL,";"));
        roller_coasters[length].time = atoi(strtok(NULL,";"));
        length++;
    }
    fclose(in);
    qsort(roller_coasters,length,sizeof(ROLLER_COASTER),cmp);
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
    for(int i = 0 ; i < length ;i++)
    {
        fprintf(out,"%s;%s;%d;%d\n",roller_coasters[i].name,roller_coasters[i].world,roller_coasters[i].height,roller_coasters[i].time);
    }
    fprintf(out,"END\n");
    fclose(out);

    return EXIT_SUCCESS;
}