# Stack-realization

## About
This is a custom implementation of the stack data structure library with basic operations of initialization, adding, deleting an element and destroying the stack.
***

## Library

The stack is implemented as a structure that contains a dynamic array with elements and the amount of elements.

* The initialization function accepts an element, creates a pointer to the stack, allocates memory in it for an array to store the received element, sets the element counter to one and returns a pointer to the stack.

* The push function adds a new element to the top of the stack, increasing the size of the array of elements and the counter by one. It does't return anything.

* The pop function removes an element from the top of the stack, first checking that there are still elements in it and returns the value of the element if the stack is not empty and zero otherwise.

* The destroy function clears the memory allocated for the array of elements and for the stack structure itself.