#include <cs50.h>
#include <stdio.h>

int get_startsize();

int main(void)
{
    // TODO: Prompt for start size
    int start_size = get_startsize();

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("end population size: ");
    }while (end_size < start_size);
    // TODO: Calculate number of years until we reach threshold
    

    // TODO: Print number of years

    printf("%i",start_size);
    printf("%i",end_size);
}

int get_startsize()
{
    int start;
    do
    {
        start = get_int("starting population size: ");
    }while (start<9);
    return start;
}