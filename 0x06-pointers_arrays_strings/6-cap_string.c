#include "holberton.h"
/**
 * cap_string - changes lowercse letter to uppercase
 * @str: akdsfgkldfg
 * Return: ksjdgkldkjf
 */

char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (index == 0)
        {
            if (str[index] >= 'a' && str[index] <= 'z')
            {
                str[index] = str[index] - 32;
            }
        }
        if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
        {
        if (str[index] == ' ' || str[index] == '\t')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (str[index] == '\n' || str[index] == ',')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (str[index] == ';' || str[index] == '.')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (str[index] == '!' || str[index] == '?')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (str[index] == '"' || str[index] == '(')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (str[index] == ')' || str[index] == '{')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (str[index] == '}')
        {
            str[index + 1] = str[index + 1] - 32;
        }
        else if (!(str[index] >= 'a' && str[index] <= 'z'))
        {
            if (!(str[index + 1] >= 'A' && str[index + 1] <= 'Z'))
            {
            }
            else
            {
                str[index + 1] = str[index + 1] - 32;
            }
        }
        }
        index++;
    }
    return (str);
}
