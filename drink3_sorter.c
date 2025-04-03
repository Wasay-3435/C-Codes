#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[31];
    char packaging[16];
    int price;
} DRINK;

int cmp(const void *a, const void *b)
{
    DRINK *left = (DRINK *)a;
    DRINK *right = (DRINK *)b;

    if (strcmp(left->packaging, right->packaging) != 0)
    {
        return -strcmp(left->packaging, right->packaging);
    }

    if (strcmp(left->name, right->name) != 0)
    {
        return -strcmp(left->name, right->name);
    }

    return -(left->price - right->price);
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "The first command-line argument is missing.\n");
        return 1;
    }
    FILE *in = fopen(argv[1], "r");
    if (!in)
    {
        fprintf(stderr, "%s cannot be opened.\n", argv[1]);
        return 2;
    }

    char line[56];
    int length = atoi(fgets(line, 56, in));
    DRINK drinks[length];

    for (int i = 0; i < length; i++)
    {
        fgets(line, 56, in);
        line[strlen(line) - 1] = '\0';

        strcpy(drinks[i].name, strtok(line, ";"));
        strcpy(drinks[i].packaging, strtok(NULL, ";"));
        drinks[i].price = atoi(strtok(NULL, ";"));
    }

    fclose(in);

    qsort(drinks, length, sizeof(DRINK), cmp);

    if (argc == 2)
    {
        fprintf(stderr, "The second command-line argument is missing.\n");
        return 3;
    }
    FILE *out = fopen(argv[2], "w");
    if (!out)
    {
        fprintf(stderr, "%s cannot be opened.\n", argv[2]);
        return 4;
    }

    // fprintf(out, "%d\n", length);
    for (int i = 0; i < length; i++)
    {
        fprintf(out, "%s;%s;%d\n", drinks[i].name, drinks[i].packaging, drinks[i].price);
    }

    fclose(out);

    return EXIT_SUCCESS;
}