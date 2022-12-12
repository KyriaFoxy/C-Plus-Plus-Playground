//
//  main.cpp
//  Playground
//
//  Created by Astryda Malinowska on 06/12/2022.
//

#include <cstdio>
#include <cstddef>
//enum class for 2.15
enum class Race
{
    Astryda,
    Astrydzia,
    Asta,
    Gazelka,
    Gazelq,
    Gaxelek,
    Gazelinku
};
//struct for 2.16
struct Book
{
    char name[256];
    int year;
    int pages;
    bool hardcover;
};
//union for 2.18
union Variant
{
    char string[10];
    int integer;
    double floating_point;
};

//struct for 2.19
struct ClockOfTheLongNow
{
    void add_year()
    {
        year++;
    }
    int year;
};

//class for 2.21
struct ClockOfTheLongNow2
{
    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
        {
            return false;
        }
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }
    private:
        int year;
};

//struct for 2.22
struct ClockOfTheLongNow3
{
    ClockOfTheLongNow3()
    {
        year = 2019;
    }
    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
        {
            return false;
        }
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }
    private:
        int year;
};

//struct for 2.23
struct ClockOfTheLongNow4
{
    ClockOfTheLongNow4(int year_in)
    {
        if(!set_year(year_in))
        {
            year = 2019;
        }
    }
    ClockOfTheLongNow4()
    {
        year = 2019;
    }
    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
        {
            return false;
        }
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }
    private:
        int year;
};

//struct for 2.27
struct Taxonomist
{
    Taxonomist()
    {
        printf("(No arguments.)\n");
    }
    Taxonomist(char x)
    {
        printf("Char: %c.\n", x);
    }
    Taxonomist(int x)
    {
        printf("Integer: %d.\n", x);
    }
    Taxonomist(float x)
    {
        printf("Float: %f.\n", x);
    }
};

//enum class for P2.1
enum class Operation
{
    Add,
    Substract,
    Multiply,
    Divide
};

//class for P2.2
// class Calculator
// {
//     public:
//         Calculator(Operation operation);

//     private:
//         Operation m_operation;
// };

//class for p2.3
struct Calculator
{
    explicit Calculator(Operation op_in)
    {
        op = op_in;
    }

    int calculate(int a, int b)
    {
        int result = 0;
        switch (op)
        {
            case Operation::Add:
            {
                result = a + b;
                break;
            }
            case Operation::Substract:
            {
                result = a - b;
                break;
            }
            case Operation::Multiply:
            {
                result = a * b;
                break;
            }
            case Operation::Divide:
            {
                result = a / b;
                break;
            }
        }
        return result;
    }
    private:
        Operation op;
};


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
    
    //2.9 arrays
    int arr[] = { 1, 2, 3, 4, 5 };
    printf("The third element is: %d\n", arr[2]);
    /*
     The third element is: 3
     */
    arr[2] = 100;
    printf("The third element is: %d\n", arr[2]);
    /*
     The third element is: 100
     */
    
    //2.10 for loop on arrays
    unsigned long maximum = 0;
    unsigned long values[] = { 10, 50, 20, 40, 0 };
    for (size_t i = 0; i < 5; i ++)
    {
        if (values[i] > maximum)
        {
            maximum = values[i];
        }
    }
    printf("The maximum value is %lu\n", maximum);
    /*
     The maximum value is 50
     */
    
    //2.11 for loop depend on range
    unsigned long maximum2 = 0;
    unsigned long values2[] = { 20, 60, 30, 50, 0 };
    for (unsigned long value : values2)
    {
        if (value > maximum2)
        {
            maximum2 = value;
        }
    }
    printf("The maximum value2 is %lu\n", maximum2);
    /*
     The maximum value2 is 60
     */
    
    //bonus 1
    short array[] = { 104, 105, 31, 98, 105, 108, 108, 0 };
    size_t n_elements = sizeof(array) / sizeof(short);
    printf("Number of elements in table is: %zu\n", n_elements);
    /*
     Number of elements in table is: 8
     */
    
    //bonus 2
    char house[] = "a house of gold.";
    printf("A book holds %s\n", house);
    
    //bonus 3
    char house2[] = "a "
    "house "
    "of " "gold.";
    printf("A book holds %s\n", house2);
    
    //2.12 ascii code for printing alphaber letters
    char alphabet[27];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);
    /*
     abcdefghijklmnopqrstuvwxyz
     */
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);
    /*
     ABCDEFGHIJKLMNOPQRSTUVWXYZ
     */
    
    //2.15 enumerate with switch case
    Race race = Race::Gazelka;
    switch (race)
    {
        case Race::Astryda:
        {
            puts("You work hard!");
        }
        break;
        case Race::Astrydzia:
        {
            puts("You are very strong!");
        }
        break;
        case Race::Asta:
        {
            puts("You are a great leader");
        }
        break;
        case Race::Gazelka:
        {
            puts("My, how versatile you are!");
        }
        break;
        case Race::Gazelq:
        {
            puts("You're incredibly helpful!");
        }
        break;
        case Race::Gaxelek:
        {
            puts("Anything you want!");
        }
        break;
        case Race::Gazelinku:
        {
            puts("What an enigma");
        }
        break;
        default:
        {
            puts("Error! Uknown race!");
        }
    }
    /*
     My, how versatile you are!
     */
    
    //2.16 - struct
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.\n", neuromancer.pages);
    /*
     Neuromancer has 271 pages.
     */
    
    //2.18 - how to not use unions
    Variant v;
    v.integer = 42;
    printf("The ultimate answer is: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Euler's number e:       %f\n", v.floating_point);
    printf("A dumpster fire:        %d\n", v.integer);
    /*
     The ultimate answer is: 42
     Euler's number e:       2.718282
     A dumpster fire:        -1961734133
     */

    //Class programming
    //2.19 - struct with method
    ClockOfTheLongNow clock;
    clock.year = 2020;
    clock.add_year();
    printf("Year: %d.\n", clock.year);
    clock.add_year();
    printf("Now year: %d.\n", clock.year);
    /*
      Year: 2021.
      Now year: 2022.
    */


    //2.21 protected struct
    ClockOfTheLongNow2 clock2;
    if(!clock2.set_year(2018))
    {
        clock2.set_year(2019);
    }
    clock2.add_year();
    printf("Year: %d.\n", clock2.get_year());
    /*
    Year: 2020.
    */

    //2.22 struct with costructor
    ClockOfTheLongNow3 clock3;
    printf("Year is equal: %d.\n", clock3.get_year());
    /*
    Year is equal: 2019.
    */

   //2.23 struct with constructor overloaded
   ClockOfTheLongNow4 clock4{ 2020 };
   printf("Now, year: %d.\n", clock4.get_year());
   /*
   Now, year: 2020.
   */

    //2.27 another struct.
    Taxonomist t1;
    Taxonomist t2{ 'c' };
    Taxonomist t3{ 65537 };
    Taxonomist t4{ 6.02e23f };
    Taxonomist t5{ 'g' };
    Taxonomist t6 = { '1' };
    Taxonomist t7{};
    // Taxonomist t8();
    /*
    (No arguments.)
    Char: c.
    Integer: 65537.
    Float: 602000017271895229464576.000000.
    Char: g.
    Char: 1.
    (No arguments.)
    */

   //Practice
   //P2.3
   auto calc_add = Calculator(Operation::Add);
   printf("15 + 10 = %d.\n", calc_add.calculate(15, 10));

   auto calc_div = Calculator(Operation::Divide);
   printf("50 / 5 = %d.\n", calc_div.calculate(50, 5));
   /*
   15 + 10 = 25.
   50 / 5 = 10.
   */
   
   //All done, no errors

    return 0;
}
