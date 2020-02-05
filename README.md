# Epitech-Workshop-O
Repository containing exercises for the Big O workshop at Epitech Paris
You will be guided through the first four exercises, the rest is up to you.
Don't hesitate to ask for help though !

## Ex 1

```c
bool is_even(int nb)
{
    if (nb % 2 == 0)
        return (true);
    return (false);
}
```

## Ex 2

```c
int naive_search(char *arr, char item)
{
    for (size_t i = 0; i < strlen(arr); i++)
        if (arr[i] == item)
            return (i);
    return (-1);
}
```

## Ex 3

```c
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
```

## Ex 4

```c
void create_pairs(char *arr)
{
    for (size_t i = 0; i < strlen(arr); i++)
        for (size_t j = i + 1; j < strlen(arr); j++)
            printf("%c, %c\n", arr[i], arr[j]);
}
```

## Ex 5

```c
int *generate_fib(int num) {
    int arr[30];

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < num; i++) {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    return (arr);
}
```

## Ex 6

```c
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
```

## Ex 7

```c
int find_random_element(int *arr, int arr_size)
{
    time_t t;
    srand((unsigned) time(&t));
    return (arr[(rand() % arr_size)]);
}
```

## Ex 8

```c
bool is_prime(int nb)
{
    if (nb < 2 || nb % 1 != 0)
        return (false);
    for (int i = 2; i < nb; i++)
        if (nb % i == 0)
            return (false);
    return (true);
}
```

## Ex 9

```c
void insertionSort(int arr[], int n)
{
    int value;
    int j;

    for (int i = 1; i < n; i++) {
        value = arr[i];
        j = i;

        while (j > 0 && arr[j - 1] > value) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = value;
    }
}
```

## Ex 10

```c
int fibbonacci(int n)
{
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

void call_fib(int nb) 
{
    for (int i = 0; i < nb; i++) {
        fibbonacci(i);
    }
}
```

## Ex 11

```c
int get_elem(int *arr, int index)
{
    if (arr[index])
        return (arr[index]);
    return (NULL);
}
```

## Exo 12
