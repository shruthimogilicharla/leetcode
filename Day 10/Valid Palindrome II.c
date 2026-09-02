#include <stdbool.h>

bool isPalindrome(char *s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
            return false;

        
        left++;
        right--;
    }

    return true;  
}

bool validPalindrome(char *s)
{
    int left = 0;
    int right = 0;

    while (s[right] != '\0')
        right++;

    right--;

    while (left < right)
    {
        
        if (s[left] != s[right])
        {
            return isPalindrome(s, left + 1, right) ||
                   isPalindrome(s, left, right - 1);
        }

        left++;
        right--;
    }

    return true;
}
