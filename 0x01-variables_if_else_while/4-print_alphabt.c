#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';  // declare and initialize a variable to hold the current character

    while (ch <= 'z')  // loop through the alphabet from 'a' to 'z'
    {
        if (ch != 'e' && ch != 'q')  // if the current character is not 'e' or 'q'
        {
            putchar(ch);  // print the current character using putchar()
        }
        ch++;  // increment the current character
    }

    putchar('\n');  // print a newline character to move to the next line

    return (0);  // indicate successful completion of the program
}
