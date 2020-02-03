#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool is_even(int nb)
{
    if (nb % 2 == 0)
        return (true);
    return (false);
}

bool are_you_here(char *arr1, char *arr2)
{
    char el1;
    char el2;

    for (size_t i = 0; i < strlen(arr1); i++) {
        el1 = arr1[i];
        for (size_t j = 0; j < strlen(arr2); j++) {
            el2 = arr2[j];
            if (el1 == el2)
                return (true);
        }
    }
    return (false);
}

int naive_search(char *arr, char item)
{
    for (size_t i = 0; i < strlen(arr); i++)
        if (arr[i] == item)
            return (i);
    return (-1);
}

void create_pairs(char *arr)
{
    for (size_t i = 0; i < strlen(arr); i++)
        for (size_t j = i + 1; j < strlen(arr); j++)
            printf("%c, %c\n", arr[i], arr[j]);
}

int *generate_fib(int num) {
    int arr[30];

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < num; i++) {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    return (arr);
}

int efficient_search(int *arr, int item, int arr_size)
{
    int min_index = 0;
    int max_index = arr_size - 1;
    int current_index;
    float current_elem;
    while (min_index <= max_index) {
        current_index = floor((min_index + max_index) / 2);
        current_elem = arr[current_index];
        if (current_elem < item)
            min_index = current_index + 1;
        else if (current_elem > item)
            min_index = current_index - 1;
        else
            return (current_index);
    }
    return (-1);
}

int find_random_element(int *arr, int arr_size)
{
    time_t t;
    srand((unsigned) time(&t));
    return (arr[(rand() % arr_size)]);
}

bool is_prime(int nb)
{
    if (nb < 2 || nb % 1 != 0)
        return (false);
    for (int i = 2; i < nb; i++)
        if (nb % i == 0)
            return (false);
    return (true);
}

int main (void)
{
    int test[] = {2, 1, 3, 2, 4, 5, 0, 8, 2, 3, 5};
    printf("%d\n", efficient_search(test, 2, 11));
    return (0);
}