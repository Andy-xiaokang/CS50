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
    int bits[BITS_IN_BYTE] = {0,0,0,0,0,0,0,0};
    for (int i = 0; i < length; i++)
    {
        int remainders;
        int quotient = ;
        for (int j = 7; quotient != 0; j--)
        {
            remainders = message[i] % 2;
            quotient = message[i] / 2;
            message[i] = quotient;
            bits[j] = remainders;
        }
        for (int j = 0; j < 8; j++)
        {
            print_bulb(bits[j]);
        }
        printf("\n");
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
