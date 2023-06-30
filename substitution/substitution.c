#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(argv) != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    for (int i = 0; i < strlen(argv); i++)
    {
        if (!(isalpha(argv[i])))
        {
            printf("key must be character.")
        }
        return 1;
    }
    string plaintext = get_string("plaintext: ");
    
}