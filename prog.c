/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   prog.c
 * Author: GOTHAM
 *
 * Created on April 5, 2016, 8:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */


int hello(void)  //Basic Hello World
{
    printf("Programming is fun \n");
    return 0;
}

float algebra(float x)
{
    return ((3 * (x * x * x)) - (5 * (x * x)) + 6);
}

void towerOfHanoi(int num, char frompeg, char topeg, char auxpeg)
{
    if(num == 1)
    {
        printf("\n Move Disk 1 from peg %c to peg %c \n\n", frompeg, topeg);
        return;
    }
    towerOfHanoi((num - 1), frompeg, auxpeg, topeg);
    printf("\n Move Disk %d from peg %c to peg %c \n\n", num, frompeg, topeg);
    towerOfHanoi((num - 1), auxpeg, topeg, frompeg);
}

void fibonacciPoly(int num)
{
    int first = 0, second = 1, next, c;
    for(int c = 0; c <= num; c++)
    {
        if(c <= 1)
        {
            next = c; 
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("\n\t%d\n", next);
    }
}

int euclidGcd(int dividend, int divisor)
{
    int rmndr = 0;
    if(dividend < divisor)
    {
        dividend = dividend + divisor;
        divisor = dividend - divisor;
        dividend = dividend - divisor;
    }
    do
    {
        rmndr = (dividend % divisor);
        if (rmndr == 0) return divisor;
        dividend = divisor;
        divisor = rmndr;
    }while (rmndr > 0);

    
}

int main(int argc, char** argv) 
{
    hello();
    float x = 0;
    int num = 0, num1 = 0;
    scanf("%f", &x, printf("Enter X ::::: "));
    printf("\nOUTPUT ::::: %g \n", algebra(x));
    scanf("%d", &num, printf("\nEnter the number of Disks: "));
    printf("\n\nThe Sequence of moves involved in the Tower of Hanoi are: \n\n");
    towerOfHanoi(num, 'A', 'C', 'B');
    scanf("%d", &num, printf("\nEnter N for FibonacciPoly: "));
    fibonacciPoly(num);
    scanf("%d", &num, printf("\nEnter M for Euclid's GCD: "));
    scanf("%d", &num1, printf("\nEnter N for Euclid's GCD: "));
    printf("\nGCD is : %d\n", euclidGcd(num, num1));
    return (EXIT_SUCCESS);
}