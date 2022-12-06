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
    
    
    return 0;
}

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
