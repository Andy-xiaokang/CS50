#include <cs50.h>
#include <stdio.h>

int checksum1();
int checksum2();
long get_number();
int get_length();
void check_credit();

int main(void)
{
    long number = get_number();
    long number1 = number;
    long number2 = number/10;
    int checksum1 = checksum1(number1);
    int ckecksum2 = checksum2(number2);
    int checksum = checksum1 + checksum2();
    // int length = get_length(number);
    if (checksum % 10 == 0)
    {
        check_credit(number);
    }
    else
    {
        printf("INVALID");
    }



}

long get_number(void)
{

}

int get_length(long number)
{

}

int checksum1(long number1)
{

}

int checksum2(long number2)
{

}

void check_credit(long number)
{

}