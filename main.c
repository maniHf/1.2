#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *height = argv[2];
    int H = atoi(height);
    char *windth = argv[1];
    int W = atoi(windth);
    int i,l = 0;
    for (l; l < W; l++){for (i; i < H; i++){printf("*");}i = 0;printf("\n");}
    return 0;
}