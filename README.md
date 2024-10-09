**Exercise 1**

Create a class that represents a trapezoid. Specifically, the class will contain:

1. 3 member variables for the values of the short base, the long base, and the height. These variables will be of type double.
2. 4 member functions that will operate on the member variables.

These functions are:

   (a) A function `set_minBase` that accepts an input parameter with a value of type double and assigns this value to the member variable representing the short base.
   
   (b) A function `set_maxBase` that accepts an input parameter with a value of type double and assigns this value to the member variable representing the long base.
   
   (c) A function `set_height` that accepts an input parameter with a value of type double and assigns this value to the member variable representing the height.
   
   (d) A function `area` that returns the value of the area of the trapezoid (calculated as: 1/2 * (short base + long base) * height).

3. The member variables must be private and the member functions public.

You are also asked to write a program that:

1. Creates two objects using the above class, one representing the trapezoid `trap1` and the other representing the trapezoid `trap2`.

2. Requests values from the user for the short base, long base, and height, and assigns them to the respective member variables of `trap1`.

3. Sets the values of the member variables for `trap2` to double those of `trap1`.

4. Calculates and displays the area of `trap1`, using the appropriate member function.

**Exercise 2**

Define a class `Vehicle` which should describe the details of a vehicle. The information that interests us is the following, and it should be included as properties of the class:

- **Brand** (e.g., Toyota)
- **Model** (e.g., Yaris)
- **Year of manufacture** (e.g., 2023)
- **License plate number**
- **Type** (e.g., truck, motorcycle)

After implementing the `Vehicle` class, write a main function where you should:

1. Create an object of type `Vehicle`.
2. Provide values to this object.
3. Print the details of the vehicle on the screen.

**Exercise 3**

Continue the code from the previous exercise as follows:

i. Convert all variables to private.

ii. Add public functions that will assign values to the variables.

iii. Implement a `display()` function that will print the vehicle details on the screen.

iv. Modify the main function to use these functions.
