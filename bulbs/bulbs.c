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
    for (int i = 0; i < length; i++)
    {
        int j = 7;
        int remainders;
        int quotient;
        int bits[8] = {0,0,0,0,0,0,0,0};
        do
        {
            remainders = message[i] % 2;
            quotient = message[i] / 2;
            message[i] = quotient;
            bits[j] = remainders;
            j--;
        }while (quotient != 0);
        for (int l = 0; l < 8; l++)
        {
            print_bulb(bits[l]);
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
