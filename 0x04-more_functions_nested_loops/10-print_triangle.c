#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: size of the triangle.
 * Return: void.
 */

void print_triangle(int size)
{
    int i, j;
    int num_spaces = size - 1;
    int num_hashes = 1;
    int row_length = size;

    for (i = 0; i < row_length * size; i++) {
        if (i % row_length == 0 && i != 0) {
            putchar('\n');
            num_spaces--;
            num_hashes++;
            row_length--;
        }

        if (num_spaces > 0) {
            putchar(' ');
            num_spaces--;
        } else {
            putchar('#');
            num_hashes++;
        }
    }
    putchar('\n');
}
