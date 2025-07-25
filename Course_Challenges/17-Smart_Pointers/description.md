# Section 17 Challenge - Smart Pointers

Create a program that has the following:

1. A function named "make" that creates and returns a unique pointer to a vector of shared pointers to Test objects.

2. A function named "fill" that expects a vector of shared pointers to Test objects and an int representing the number of Test objects to create dynamically and add to the vector. This function will prompt the user to enter an integer, create a shared pointers to a Test object initialized to the entered integer and add that shared pointer to the vector.

3. A function named "display" that expects a vector of shared pointers to Test objects and displays the data in each Test object.

4. The main driver should look as follows

```C++
int main() {
  std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
  vec_ptr = make();
  std::cout << "How many data points do you want to enter? ";
  int num;
  std::cin >> num;
  fill(*vec_ptr, num);
  display(*vec_ptr);
  return 0;
}
```
