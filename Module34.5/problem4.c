#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *inputfile;
    inputfile = fopen("input4.txt", "r");
    FILE *outputfile;
    outputfile = fopen("output4.txt", "w");
    if (inputfile == NULL)
    {
        fprintf(outputfile, "no file found");
        return 0;
    }
    int n, sum = 0;
    fscanf(inputfile, "%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a;
        fscanf(inputfile, "%d", &a);
        sum += a % 10;
    }
    fprintf(outputfile, "sum = %d", sum);
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}