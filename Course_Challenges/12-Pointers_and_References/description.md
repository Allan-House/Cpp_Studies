# Section 12 Challenge - Pointers and References

Write a C++ function named apply_all that expects two arrays of integers and their sizes and dynamically allocates a new array of integers whose size is the product of the 2 array sizes.
  
The function should loop through the second array and multiplies each element across each element of array 1 and store the product in the newly created array.
  
The function should return a pointer to the newly allocated array.
  
You can also write a print function that expects a pointer to an array of integers and its size and display the elements in the array.
    
For example, below is the output from the following code which would be in main:

```C++  
int main() {
  const size_t first_array_size {5};
  const size_t second_array_size {3};
  
  int first_array[] {1, 2, 3, 4, 5};
  int second_array[] {10, 20, 30};
  
  std::cout << "Array 1: " ;
  print(first_array, first_array_size);
  
  std::cout << "Array 2: " ;
  print(second_array, second_array_size);
  
  int *results = apply_all(first_array, first_array_size, second_array, second_array_size);
  constexpr size_t results_size {first_array_size * second_array_size};

  std::cout << "Result: " ;
  print(results, results_size);
  
  std::cout << std::endl;

  return 0;
}
```

Output

```
Array 1: [ 1 2 3 4 5 ]
Array 2: [ 10 20 30 ]
Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
```