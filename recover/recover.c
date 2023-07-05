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
    int count = 0;
    while (fread(buffer, 1, BLOCK_SIZE, file) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xdf && buffer[2] == 0xff && (buffer[3]&0xf0) == 0xe0)
        {
            filename = sprintf(filename, "%03i.jpg", count);
            FILE *output = fopen(filename)
        }
    }
}