#include <cs50.h>
#include <stdio.h>

int checksum1();
int checksum2();
long get_number();
int main(void)
{
    long number = get_number();
    long number1 = number;
    long number2 = number/10;
    int checksum1 = checksum1(number1);
    int ckecksum2 = checksum2(number2);
    int checksum = checksum1 + checksum2();

}

long get_number(void)
{
    
}

int checksum1(long number1)
{

}

int checksum2(long number2)
{

}

