#include <stdio.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input2.txt", "r");
    FILE *outputfile;
    outputfile = fopen("output2.txt", "w");
    if (inputfile == NULL)
    {
        printf("no file found");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fprintf(outputfile, "%d ", i);
    }
    return 0;
}