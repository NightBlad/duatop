#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("DATA.in", "r");
    if (inputFile == NULL) {
        printf("Khong the mo file DATA.in.\n");
        return 1;
    }

    outputFile = fopen("DATA.out", "w");
    if (outputFile == NULL) {
        printf("Khong the mo file DATA.out.\n");
        fclose(inputFile); 
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
