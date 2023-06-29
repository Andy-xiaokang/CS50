#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Message: ");
    int length = strlen(message);
    int remainders;
    int quotient;
    int bits[BITS_IN_BYTE] = {0,0,0,0,0,0,0,0};
    for (int i = 0; i < length; i++)
    {
        do
        {
            remainders = message[i] % 2;
            quotient = message[i] / 2;
            bits[7-i] = 
        }while (quotient != 0);
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
