#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
const int BLOCK_SIZE = 512;

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
    FILE *output = NULL;
    while (fread(&buffer, 1, BLOCK_SIZE, file) == 512)
    {
        //if not the first, close the file before and create a new file
        if (count != 0 && buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            fclose(output);
            sprintf(filename, "%03i.jpg", count);
            output = fopen(filename, "w");
            count++;

        }
        //if the first picture, create the first file and add count
        if (count == 0 && buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(filename, "%03i.jpg", count);
            output = fopen(filename, "w");
            // fwrite(buffer, 1, BLOCK_SIZE, output);
            count++;
        }
        //write data into the file
        if (count !=0 )
        {
            fwrite(buffer, 1, BLOCK_SIZE, output);
        }

    }
    fclose(file);
    fclose(output);

}