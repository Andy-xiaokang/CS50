#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string get_key(string array)
int main(int argc, string argv[])
{
    int length =strlen(argv);
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (length != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    for (int i = 0; i < length; i++)
    {
        if (!(isalpha(argv[i])))
        {
            printf("key must be character.")
        }
        return 1;
    }
    for (int i = 0; i < length; i++)
    {
        for (j = i+1; j < length; j++)
        {
            
        }
    }
    string plaintext = get_string("plaintext: ");
    string key = get_key(argv);

}