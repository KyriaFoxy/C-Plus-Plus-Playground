//
//  main.cpp
//  Playground
//
//  Created by Astryda Malinowska on 06/12/2022.
//

#include <cstdio>
#include <cstddef>

int main(int argc, const char * argv[])
{
    //2.1 some o number types
    unsigned short a = 0b10101010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);
    
    //2.2 hex and oct for unsigned integers
    unsigned int y = 3669732608;
    printf("Yabba %x!\n", y);
    unsigned int z = 69;
    printf("There are %u, %o leaves here.\n", z, z);
    /*
     Yabba dabbad00!
     There are 69, 105 leaves here.
     */
    
    //2.3 floatings
    double an = 6.0221409e23;
    printf("Avogardo's Number: %le %lf %lg\n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp);
    
    //intermezzo
//    wchar_t beer = U'\U0001F37A';
//    printf("%lc\n", beer);
    
    //2.4
    char x = 'M';
    wchar_t g = L'Z';
    printf("Windows binaries start with %c%lc.\n", x, g);
    
    //2.5 boolean
    bool b1 = true;
    bool b2 = false;
    printf("%d %d\n", b1, b2);
    /*
     1 0
     */
    
    //2.6 comparision
    printf(" 7 ==  7: %d\n", 7 ==   7);
    printf(" 7 !=  7: %d\n", 7 !=   7);
    printf("10 >  20: %d\n", 10 >  20);
    printf("10 >= 20: %d\n", 10 >= 20);
    printf("10 <  20: %d\n", 10 <  20);
    printf("20 <= 20: %d\n", 20 <= 20);
    /* 7 ==  7: 1
     7 !=  7: 0
    10 >  20: 0
    10 >= 20: 0
    10 <  20: 1
    20 <= 20: 1
     */
    
    
    //2.7 logical operators
    bool t = true;
    bool f = false;
    printf("!true: %d\n", !t);
    printf("true  &&  false: %d\n", t && f);
    printf("true  && !false: %d\n", t && !f);
    printf("true  ||  false: %d\n", t || f);
    printf("false ||  false: %d\n", f || f);
    /*
     !true: 0
     true  &&  false: 0
     true  && !false: 1
     true  ||  false: 1
     false ||  false: 0
     */
    
    //2.8 using of sizeof
    size_t size_c = sizeof(char);
    printf("char: %zu\n", size_c);
    size_t size_s = sizeof(short);
    printf("short: %zu\n", size_s);
    size_t size_i = sizeof(int);
    printf("int: %zu\n", size_i);
    size_t size_l = sizeof(long);
    printf("long: %zu\n", size_l);
    size_t size_ll = sizeof(long long);
    printf("long long: %zu\n", size_ll);
    
    /*
     char: 1
     short: 2
     int: 4
     long: 8
     long long: 8
     */
    
    //2.9
    
    
    return 0;
}
