#include <cs50.h>
#include <stdio.h>

int get_height();
void draw();

int main(void)
{
    int h = get_height();
    draw(h);
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

void draw(int h)
{
    for(int i = 0; i < h; i++)
    {
        
    }
}