// This program demonstrates the MathStack class.
#include <iostream>
#include "Stack.hpp"


int main()
{
   int catchVar;  // To hold values popped off the stack

   // Create a MathStack object.
   Stack<int> stack(5);

   // Push 3 and 6 onto the stack.
   std::cout << "Pushing 3\n";
   stack.push(3);
   std::cout << "Pushing 6\n";
   stack.push(6);

   // Add the two values.
   stack.add();

   // Pop the sum off the stack and display it.
   std::cout << "The sum is ";
   stack.pop(catchVar);
   std::cout << catchVar << std::endl << std::endl;

   // Push 7 and 10 onto the stack
   std::cout << "Pushing 7\n";
   stack.push(7);
   std::cout << "Pushing 10\n";
   stack.push(10);

   // Subtract 7 from 10.
   stack.sub();

   // Pop the difference off the stack and display it.
   std::cout << "The difference is ";
   stack.pop(catchVar);
   std::cout << catchVar << std::endl << std::endl;

   std::cout << "Pushing 1, 2, 3" << std::endl;
   stack.push(1);
   stack.push(2);
   stack.push(3);

   stack.addAll();
   stack.pop(catchVar);
   std::cout << "Sum: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 2, 2, 3" << std::endl;
   stack.push(2);
   stack.push(2);
   stack.push(3);

   stack.addAll();
   stack.pop(catchVar);
   std::cout << "Sum: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 2, 2, 3" << std::endl;
   stack.push(2);
   stack.push(2);
   stack.push(3);

   stack.multAll();
   stack.pop(catchVar);
   std::cout << "Product: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 5, 2, 3" << std::endl;
   stack.push(5);
   stack.push(2);
   stack.push(3);

   stack.multAll();
   stack.pop(catchVar);
   std::cout << "Product: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 2, 3" << std::endl;
   stack.push(2);
   stack.push(3);

   stack.mult();
   stack.pop(catchVar);
   std::cout << "Product: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 2, 5" << std::endl;
   stack.push(2);
   stack.push(5);

   stack.mult();
   stack.pop(catchVar);
   std::cout << "Product: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 2, 3" << std::endl;
   stack.push(2);
   stack.push(3);

   stack.div();
   stack.pop(catchVar);
   std::cout << "Quotient: " << catchVar << std::endl << std::endl;

   std::cout << "Pushing 8, 5" << std::endl;
   stack.push(8);
   stack.push(5);

   stack.div();
   stack.pop(catchVar);
   std::cout << "Quotient: " << catchVar << std::endl << std::endl;


   return 0;
}
