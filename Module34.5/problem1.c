#include <stdio.h>

int main()
{
    FILE *inputFILE;
    inputFILE = fopen("input.txt", "r");
    FILE *outputFile;
    outputFile = fopen("output.txt", "w");
    if (inputFILE == NULL)
    {
        printf("no file found");
        return 0;
    }
    while (1)
    {

        char ch = fgetc(inputFILE);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }

    return 0;
}