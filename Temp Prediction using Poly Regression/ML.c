#include <stdio.h>
#define BUZZ_SIZE 3

x = 26U;

int main(int argc, char **argv)
{
    char buff[BUZZ_SIZE];
    FILE *f = fopen("temp.txt", "r");
    fgets(buff, BUZZ_SIZE, f);
    int x = atoi(buff);
    fclose(f);
    return 0;
}
