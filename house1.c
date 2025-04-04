#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char name[16];
    int score;
    int wins;
}HOUSE;
int cmp(const void* a,const void* b)
{
    HOUSE* left =(HOUSE*)a;
    HOUSE* right =(HOUSE*)b;
    if((left->score - right->score)!=0)
    {
        return-(left->score - right->score);
    }
    if((left->wins - right->wins)!=0)
    {
        return(left->wins - right->wins);
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
    FILE* in = fopen(argv[1],"r");
    if(!in)
    {
        fprintf(stderr,"file cannot be opened.\n");
        return 2;
    }
    char line[102];
    HOUSE houses[20];
    int length = 0;
    while(fgets(line,102,in))
    {
        if(strcmp(line,"END")==0)
        {
            break;
        }
        line[strlen(line)-1] = '\0';
        strcpy(houses[length].name,strtok(line,";"));
        houses[length].score = atoi(strtok(NULL,";"));
        houses[length].wins = atoi(strtok(NULL,";"));
        length++;
    }
    fclose(in);
    qsort(houses,length,sizeof(HOUSE),cmp);
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
        fprintf(out,"%s;%d;%d\n",houses[i].name,houses[i].score,houses[i].wins);
    }
    fprintf(out,"END\n");
    fclose(out);

    return EXIT_SUCCESS;
}