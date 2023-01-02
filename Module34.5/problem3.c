#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input3.txt", "r");
    FILE *outputfile;
    outputfile = fopen("output3.txt", "w");
    if (inputfile == NULL)
    {
        fprintf(outputfile, "no file found");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a;
        fscanf(inputfile, "%d", &a);
        if (a > 0)
        {
            for (int j = a; j >= -a; j--)
            {
                fprintf(outputfile, " %d", j);
            }
        }
        else
        {
            int b = abs(a);
            for (int z = a; z <= b; z++)
            {
                fprintf(outputfile, " %d", z);
            }
        }
        fprintf(outputfile, "\n");
    }
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}