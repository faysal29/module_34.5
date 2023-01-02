#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input6.txt", "r");
    FILE *outputfile;
    outputfile = fopen("output6.txt", "a");
    if (inputfile == NULL)
    {
        fprintf(outputfile, "no file found");
        return 0;
    }
    while (!feof(inputfile))
    {

        int n;
        fscanf(inputfile, "%d", &n);
        if (n % 400 == 0)
        {
            fprintf(outputfile, "%d --> YES\n", n);
        }
        else if (n % 100 == 0)
        {
            fprintf(outputfile, "%d --> NO\n", n);
        }
        else if (n % 4 == 0)
        {
            fprintf(outputfile, "%d --> YES \n", n);
        }
        else
        {
            fprintf(outputfile, "%d --> NO\n", n);
        }
    }
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}