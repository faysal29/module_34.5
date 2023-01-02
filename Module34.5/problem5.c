#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input5.txt", "r");
    FILE *outputfile;
    outputfile = fopen("output5.txt", "w");
    if (inputfile == NULL)
    {
        fprintf(outputfile, "no file found");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int z = i; z <= n; z++)
            fprintf(outputfile, " ");
        for (int j = 1; j <= n; j++)
        {
            fprintf(outputfile, "#");
        }
        fprintf(outputfile, "\n");
    }

    fclose(inputfile);
    fclose(outputfile);
    return 0;
}