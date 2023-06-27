#include <cs50.h>
#include <stdio.h>

int get_height();
//void draw();

int main(void)
{
    int h = get_height();
    //draw(h);
    printf("%i", h);
}

int get_height()
{
    int h;
    do
    {
        h = get_int("Height: ");
    }while (h < 1 || h > 8);
    return h;
}