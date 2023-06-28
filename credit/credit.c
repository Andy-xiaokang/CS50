#include <cs50.h>
#include <stdio.h>

int checksum1(long number1);
int checksum2(long number2);
long get_number(void);
int get_length(long number);
void check_credit(long number);

int main(void)
{
    long number = get_number();
    long number1 = number;
    long number2 = number/10;
    int checksum_1 = checksum1(number1);
    int checksum_2 = checksum2(number2);
    int checksum = checksum_1 + checksum_2;
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
    int number;
    do
    {
        number = get_long("Number: ");
    }while (number < 0);
    return number;
}

int get_length(long number)
{
    int length = 0;
    do
    {
        number /= 10;
        length++;
    }while (number != 0);
    return length;

}

int checksum1(long number1)
{
    int checksum1 = number1 % 10;
    do
    {
        number1 /= 100;
        checksum1 = checksum1 + number1 % 10;
    }while (number1 !=0 );
    return checksum1;
}

int checksum2(long number2)
{
    int checksum2 = 2*(number2 % 10);
    if (checksum2 > 10)
    {
        checksum2 = checksum2/10 + checksum2%10;
    }
    do
    {
        number2 /= 100;
        if (2*(number2 % 10) > 9)
        {
            checksum2 = checksum2 + (2*(number2 % 10))/10 +(2*(number2 % 10))%10;
        }
    }while (number2 != 0);
    return checksum2;
}

void check_credit(long number)
{
    int length = get_length(number);
    if (length == 15 && (number/e13 == 34 || number/e13 == 37))
    {
        printf("AMEX\n");
    }
    if (length == 16 && (number/e14 == 51 || number/e14 == 52 || number/e14 == 53 ||number/e14 == 54 ||number/e14 == 55))
    {
        printf("MASTERCARD\n");
    }
    if (length == 16 && (number/e15 == 4))
    {
        printf("VISA");
    }
    if (length == 13 && (number/e12 == 4))
    {
        printf("VISA");
    }
    else
    {
        printf("INVALID");
    }
}