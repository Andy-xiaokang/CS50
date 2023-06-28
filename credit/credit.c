#include <cs50.h>
#include <stdio.h>

int checksum1();
int checksum2();
int get_number();
int main(void)
{
    int number = get_number();
    int checksum1 = checksum1();
    int ckecksum2 = checksum2();
    int checksum = checksum1 + checksum2();
    
}