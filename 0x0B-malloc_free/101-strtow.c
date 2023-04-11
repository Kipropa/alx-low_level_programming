#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int count = 0;
    int i, len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str is NULL or contains no words - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 *         Each element of this array contains a single word, null-terminated.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, len, count, start, end;

    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }

    count = count_words(str);

    words = malloc(sizeof(char *) * (count + 1));

    if (words == NULL)
    {
        return (NULL);
    }

    for (i = 0, j = 0; i < count; i++)
    {
        len = strlen(str);

        while (j < len && str[j] == ' ')
        {
            j++;
        }

        start = j;

        while (j < len && str[j] != ' ')
        {
            j++;
        }

        end = j;

        words[i] = malloc(sizeof(char) * (end - start + 1));

        if (words[i] == NULL)
        {
            for (i--; i >= 0; i--)
            {
                free(words[i]);
            }

            free(words);

            return (NULL);
        }

        strncpy(words[i], &str[start], end - start);
        words[i][end - start] = '\0';
    }

    words[i] = NULL;

    return (words);
}
