#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[] )
{
    char ctext[50];
    //check if is digit
    int digit = 0;
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]))
        {
            digit++;
        }
    }
    //respond on failed commandline arg
    if (argc != 2 || digit != strlen(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    //get text
    string text = get_string("Plain text: ");
    //enchiper text
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isupper(text[i]))
        {
            ctext[i] = (text[i] - 65  + key)%26 + 65;
        }
        else if (islower(text[i]))
        {
            ctext[i] = (text[i] - 97 + key)%26 + 97;
        }
        else
        {
            ctext[i] = text[i];
        }
    }
    printf("Ciphertext: %s\n", ctext);
    
}





