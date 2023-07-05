#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;
int BLOCK_SIZE 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    BYTE buffer[BLOCK_SIZE];
    char filename[8];
    while (fread(buffer, 1, BLOCK_SIZE, file) == 512)
    {
        
    }
}