#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char  Questions[][100] = {"1.what year did the C language debut?",
                               "2.who is credited with creating C?",
                               "3.what is the predecessor of C?"};

    char options[][100] ={"A. 1969","B. 1972","C. 1975","D. 1999",
                          "A. Dennis Ritchie","B. nikola tesla","C. jordan","D. wasay",
                           "A. Objective C","B. B","C. C++","D. C#"}; 
    char answers[3]={'B','A','B'};
    int numberOfQuestions = sizeof(Questions) / sizeof(Questions[0]);   
    
    char guess;
    int score=0;

    printf("quiz game\n");
    for(int i=0;i<numberOfQuestions;i++)
    {
        printf("****************\n");
        printf("%s\n",Questions[i]);
        printf("****************\n");
        
        for(int j=(i*4);j <(i*4) + 4;j++)
        {
            printf("%s\n",options[j]);
        }
        printf("enter guess:");
        scanf(" %c",&guess);
        guess =toupper(guess);

        if(guess == answers[i])
        {
            printf("correct!\n");
            score++;
        }
        else
        {
            printf("wrong!\n");
        }
    }
    printf("final score = %d / %d\n",score,numberOfQuestions);


    return EXIT_SUCCESS;
}