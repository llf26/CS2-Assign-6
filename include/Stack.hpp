#ifndef STACK_HPP
#define STACK_HPP
#include "NumStack.hpp"

template<class T>
class Stack : public NumStack<T>
{
public:
   // Constructor
   Stack(int s) : NumStack<T>(s) {}

   // MathStack operations

void add()
{
   T num, sum;

   // Pop the first two values off the stack.
   this->pop(sum);
   this->pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   this->push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
// pre: no parameters                           *
// post: return the  new stack entry of diff    *
//***********************************************

void sub()
{
   T num, diff;

   // Pop the first two values off the stack.
   this->pop(diff);
   this->pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   this->push(diff);
}


void mult()
{
    //Temp variables for two integers
    T left;
    T right;

    //Pop off top two values
    this->pop(left);
    this->pop(right);

    //Multiply
    left *= right;

    //Push product
    this->push(left);
}

void div()
{
    //Temp variables for two integers
    T left;
    T right;

    //Pop off top two values
    this->pop(left);
    this->pop(right);

    //Divide
    right /= left;

    //Push quotient
    this->push(right);
}

void addAll()
{
    T tmp = 0;
    T sum = 0;
    while(!this->isEmpty())
        {
           this->pop(tmp);
           sum += tmp;
        }
    this->push(sum);
}

void multAll()
{
    T tmp = 1;
    T product = 1;
    while(!this->isEmpty())
        {
           this->pop(tmp);
           product *= tmp;
        }
    this->push(product);
}
};

#endif // STACK_HPP_INCLUDED
