#include <cs50.h>
#include <stdio.h>

int get_startsize();
int calculate_year();

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
    int year = calculate_year(start_size,end_size);

    // TODO: Print number of years
    printf("Years:%i\n",year);
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

int calculate_year(int start, int end)
{
    
}