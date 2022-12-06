//
//  main.cpp
//  Playground
//
//  Created by Refr Asta on 06/12/2022.
//

#include <cstdio>
int step_function(int);

int main(int argc, const char * argv[])
{
    //1.1 Simple hello world
    printf("Hello world of C++!\n");
    puts("This is my playground");
    
    //1.2 Comparision operators - no value printed
    int x = 0;
    42 != x;
    100 > x;
    123 >= x;
    -10 < x;
    -99 <= x;
    
    //1.4 Conditional
    int num = 0;
    if (num > 0)
    {
        puts("Positive.");
    }
    else if (num < 0)
    {
        puts("Negative.");
    }
    else
    {
        puts("Zero.");
    }
    
    //1.6 little step function
    puts("Let's check if number is positive or negative");
    int value1 = step_function(6);
    printf("%d\n", value1);
    int value2 = step_function(-100);
    printf("%d\n", value2);
    int value3 = step_function(0);
    printf("%d\n", value3);
    
    //1.8 another approach to step function
    puts("Ok, another trial for step function:");
    int num1 = 42;
    int result1 = step_function(num1);
    
    int num2 = 0;
    int result2 = step_function(num2);
    
    int num3 = -32767;
    int result3 = step_function(num3);
    
    printf("Number 1: %d, Step: %d\n", num1, result1);
    printf("Number 2: %d, Step: %d\n", num2, result2);
    printf("Number 3: %d, Step: %d\n", num3, result3);
    
    
    return 0;
}

//Function for check if number is positive or negative
int step_function(int num)
{
    int result = 0;
    if (num < 0)
    {
        result = -1;
    }
    else if (num > 0)
    {
        result = 1;
    }
    return result;
}
