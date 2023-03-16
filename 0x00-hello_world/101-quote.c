#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(str) - 1;

    len = write(STDERR_FILENO, str, len);
    return (len == -1 ? 1 : 0);
}
