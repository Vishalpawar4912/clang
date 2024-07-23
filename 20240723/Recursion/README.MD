Set A . Write C programs for the following problems 

1. Write a recursive C function to calculate the sum of digits of a number. Use this function inmain to accept a number and print sum of its digits. 

2. Write a recursive C function to calculate the GCD of two numbers. Use this function in main. The GCD is calculated as : 
gcd(a,b) = a                       if b = 0             
         = gcd (b, a mod b)        otherwise 

3. Write a recursive C function to calculate x^y. (Do not use standard library function)  

Set B . Write C programs for the following problems

1. Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the first n Fibonacci numbers. The recursive definition of nth Fibonacci number is as follows:
fib(n) = 1                         if n = 1 or 2          
       = fib(n-2) + fib(n-1  )     if n>2 

2. Write a recursive function to calculate the sum of digits of a number till you get a single digit number.
Example. 961 -> 16 -> 7 (Note : Do not use loop)

3. Write a recursive C function to print the digits of a number in reverse order. Use this function in main to accept a number and print the digits in reverse order separated by tab. 
Example. 3456 6 5 4 3
(Hint: Recursiveprint(n) = print n if n is single digit number 
                         = print n % 10 + tab + Recursiveprint( n/10) )

Set C . Write C program for the following problem

1. The "Towers of Hanoi" problem : The objective is to move a set of disks arranged in incresing sizes from top to bottom from the source pole to a destination pole such that they are in the same order as before using only one intermediate pole subject to the condition that :
    > Only one disk can be move at a time
    > A bigger disk cannot be place on smaller disk
Write a recursive function which displays all the steps to move n disk from A to C.
