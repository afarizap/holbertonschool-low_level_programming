#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - make lowercase to upercase on a string
 * @s: string to make uppercase
 * Return: variable x
 */
char *cap_string(char *s)
{
        int ns;
        int ne;
        char e[] = {'}', '{', ')', '(', '"', '?', '!', '.', ';', ',', ' ', '\t', '\n'};

        if (s[0] >= 'a' && s[0] <= 'z')
        {
                *s -= 32;
        }
        for (ns = 0; s[ns] ; ns++)
        {
                for (ne = 0; e[ne] ; ne++)
                {
                        if (s[ns] == e[ne])
                        {
                                if (s[ns + 1] >= 97 && s[ns + 1] <= 122)
                                {
                                        *(s + ns + 1) -= 32;
                                        break;
                                }
                        }
                }
        }
        return (s);
}
