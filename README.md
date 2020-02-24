# Epitech-Workshop-O
Repository containing exercises for the Big O workshop at Epitech Paris
You will be guided through the first four exercises, the rest is up to you.
Don't hesitate to ask for help though !

for the exercises 1 to 10 yo will have to determine the algorithm complexity of the following functions

## Ex 1

Here we can see that it only accesses one variable. Therefore its runtime is constant. That means that its compelxity is ?

```c
bool is_even(int nb)
{
    if (nb % 2 == 0)
        return (true);
    return (false);
}
```

## Ex 2

In this exercice we can see that it runs through an array once. This means that with each addition to the array it will take a bit more time.
While the best case scenario is O(1) here, the worst case scenario is?

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

This time we have iteration through two arrays ! For each element in array 1 we iterate over all array 2.

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
int find_random_element(int *arr, int arr_size)
{
    time_t t;
    srand((unsigned) time(&t));
    return (arr[(rand() % arr_size)]);
}
```

## Ex 7

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

## Ex 8

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

## Ex 9

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

## Ex 10

```c
int get_elem(int *arr, int index)
{
    if (arr[index])
        return (arr[index]);
    return (NULL);
}
```

## Exo 11

It's time for you to create your own algorithm.
You must create and optimize your own search algorithm.

the function must be prototyped as:

```c
int search_item(char *arr, char item)
```

and return the index of the item in the array, if not it must return -1.
The least optimize case would be O(n) and the most optimized case would be O(log(n)).
Optimize the complexity of you algorithm as close as you can to the most optimized case.

## Exo 12

You have two different ways to do the calculation of fibonacci numbers:

```c
int fibonacci(int num)
{
    if (num <= 1) return num;
    return fibonacci(num - 2) + fibonacci(num - 1);
}
```

O(2pow(n))

```c
int fibonacci(int n) {
  int first = 0, second = 1;

  int tmp;
  while (n--) {
    tmp = first+second;
    first = second;
    second = tmp;
  }
  return first;
}
```

O(n)

For this exercise you will have to tell which one is the most efficient for a small number
and which one is the most efficient for a large number.