
#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int factorial(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return operand1 * factorial(operand1-1);
}

int odd_even(int operand1)
{
    /*Return -1 for odd*/
    if(operand1%2!=0)
        return -1;
    /*Return 0 for even*/
    if(operand1%2==0)
        return 0;
}
int palindrome(operand1)
{
    int temp,remain,sum=0;
    temp=operand1;
    while(operand1!=0)
    {
        remain=operand1%10;
        sum=sum*10+remain;
        operand1/=10;
    }
    if(sum==temp)
        /*return 0 if number is plaindrome*/
        return 0;
    /*return -1 if number is not palindrome*/
    else return -1;
}
