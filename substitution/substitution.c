#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string get_key(string text);
void print_ciphertext(string key, string plaintext);

int main(int argc, string argv[])
{
    printf("1");
    string plaintext = get_string("plaintext: ");
    string key = get_key(argv[1]);
    print_ciphertext(key, plaintext);
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    int length =strlen(argv[1]);
    if (length != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    for (int i = 0; i < length; i++)
    {
        if (!(isalpha(argv[1][i])))
        {
            printf("key must be character.");
        }
        return 1;
    }
    for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("character must be different");
                return 1;
            }
        }
    }




}

string get_key(string text)
{
    int length = strlen(text);
    for (int i = 0; i< length; i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

void print_ciphertext(string key, string plaintext)
{
    string ciphertext = plaintext;
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (islower(plaintext[i]))
        {
            ciphertext[i] = tolower(key[toupper(plaintext[i])-65]);
        }
        else if (isupper(plaintext[i]))
        {
            ciphertext[i] = key[plaintext[i]-65];
        }
    }
    printf("ciphertext: %s\n", ciphertext);
}