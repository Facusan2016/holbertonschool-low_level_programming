# Searching algorithms
## Exercise 0

In this Exercise I implemented a linear search function that returns -1 if the array is NULL or the value has not been found. Otherwise returns the found value.

## Exercise 1

In this Exercise I implemented a binary search function that returns -1 if the array is NULL or the value has not been found. Otherwise returns the found value.

## Time and space complexitiy:

2-O - Time complexity (worst case) of a linear search in an array of size n  
3-O - Space complexity (worst case) of an iterative linear search algorithm in an array of size n  
4-O - Time complexity (worst case) of a binary search in an array of size n  
5-O - Space complexity (worst case) of a binary search in an array of size n  
6-O - What is the space complexity of this function / algorithm?  

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}