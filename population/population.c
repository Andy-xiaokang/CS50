#include <cs50.h>
#include <stdio.h>

int get_startsize();

int main(void)
{
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
    int start_size = get_startsize();
    
}

int get_startsize()
{
    do
    {
        int start = get_int("starting population size: ");
    }while (start<9)
}