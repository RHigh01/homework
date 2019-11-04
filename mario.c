#include <cs50.h>
#include <stdio.h>
// input height
// if within parameters continue, if not reset
// take number and iterate up to the number redefining i as i+1
int main(void)
{
    int n;
    // Prompts user for height between 1-8
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // Iterates up to the value of height(n) to print spaces and hashes
    for (int i = 0; i < n; i++)
    {
        for (int spaces = n-i; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes<i+1; hashes++)
        {
            printf("#");
        }
        printf("  ");
        for (int hashes = 0; hashes<i+1; hashes++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
