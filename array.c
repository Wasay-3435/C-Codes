# include<stdio.h>
int main()
{
int subjects[6];
char* subname[6]={"Math","Physics","Chemistry","English","Urdu","Pakistan Study"};
int length = sizeof(subjects) / sizeof(subjects[0]);


printf("Please Enter Your Subjects Marks\n");
for(int i=0;i<length;i++)
{
      printf("Enter %s Marks: ",subname[i]);
      scanf("%d",&subjects[i]);
}

int sum=0;

for(int i=0;i<length;i++)
{
     sum+=subjects[i];
}

printf("sum is %d \n",sum);

if(sum>=480){
printf("A+ grade");
}
else if(sum>=420 ){
printf("A grade");
}
else if(sum>=400){
printf("B+ grade");
}
else{
printf("B grade");
}


return 0;
}
