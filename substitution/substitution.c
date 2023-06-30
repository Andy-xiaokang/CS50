#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string get_key(string text);
void print_ciphertext(string key, string plaintext);
bool valid(string text);

int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else
    {
        if (valid(argv[1]))
        {
            string plaintext = get_string("plaintext: ");
            string key = get_key(argv[1]);
            print_ciphertext(key, plaintext);
        }
        else
        {
            return 1;
        }
    }

    // else if (strlen(argv[1]) != 26)
    // {
    //     printf("Key must contain 26 characters.");
    //     return 1;
    // }
    // else if
    // for (int i = 0; i < strlen(argv[1]); i++)
    // {
    //     if (!(isalpha(argv[1][i])))
    //     {
    //         printf("key must be character.");
    //     }
    //     return 1;
    // }
    // else if
    // for (int i = 0; i < strlen(argv[1])-1; i++)
    // {
    //     for (int j = i+1; j < strlen(argv[1]); j++)
    //     {
    //         if (argv[1][i] == argv[1][j])
    //         {
    //             printf("character must be different");
    //             return 1;
    //         }
    //     }
    // }
    printf("1");
}

bool valid(string text)
{
    if (strlen(text) != 26)
    {
        printf("Key must contain 26 characters.");
        return false;
    }
    else
    {
        for (int i = 0; i < strlen(text); i++)
            {
                if (!(isalpha(text[i])))
                {
                    printf("key must be character.");
                }
                return false;
            }
        for (int i = 0; i < strlen(text)-1; i++)
        {
            for (int j = i+1; j < strlen(text); j++)
            {
                if (text[i] == text[j])
                {
                    printf("character must be different");
                    return false;
                }
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