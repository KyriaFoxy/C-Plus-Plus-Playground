//
//  main.cpp
//  Playground
//
//  Created by Astryda Malinowska on 06/12/2022.
//

#include <iostream>

//struct for 3.3
struct ClockOfTheLongNow
{
    ClockOfTheLongNow()
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
    int get_year() const
    {
        return year;
    }
private:
    int year;
};

//struct and function for 3.4
struct College
{
    char name[256];
};

void print_name(College* college_ptr)
{
    printf("%s College.\n", college_ptr -> name);
}

//struct and function for 3.5
struct College2
{
    char name[256];
};

void print_names(College2* colleges, size_t n_colleges)
{
    for (size_t i = 0; i < n_colleges; i++)
    {
        printf("%s College.\n", colleges[i].name);
    }
}

//void function for 3.8
void add_year(ClockOfTheLongNow& clock)
{
    clock.set_year(clock.get_year() + 1);
}

//struct for 3.10
struct Element
{
    Element* next{};
    void insert_after(Element* new_element)
    {
        new_element -> next = next;
        next = new_element;
    }
    char prefix[2];
    short operating_number;
};

//struct for 3.18
struct ClockOfTheLongNowx
{
    ClockOfTheLongNowx(int year_in)
    {
        if(!set_year(year_in))
        {
            year = 2019;
        }
    }
    ClockOfTheLongNowx()
    {
        year = 2019;
    }
    void add_year() {
        year++;
    }
    bool set_year(int new_year)
    {
        if(new_year < 2019)
            return false;
        year = new_year;
        return true;
    }
    int get_year() const
    {
        return year;
    }
    
private:
    int year;
};

struct Avout
{
    Avout(const char* name, int year_of_apert)
    : name { name }, apert { year_of_apert }
    {
        
    }
    void announce() const
    {
        printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
    }
    const char* name;
    ClockOfTheLongNowx apert;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    puts("Reference types from chapter 3");
    
    //3.1 address pointing
    int gettysburg{};
    printf("gettysburg: %d.\n", gettysburg);
    int *gettysburg_address = &gettysburg;
    printf("&gettysburg: %p.\n", gettysburg_address);
    /*
     gettysburg: 0.
     &gettysburg: 0x16fdff20c.
     */
    
    
    //3.2 another pointer
    int wittenberg{};
    int* wittenberg_address = &wittenberg;
    printf("Value at wittenberg_address: %d.\n", *wittenberg_address);
    printf("Wittenberg Address: %p.\n", wittenberg_address);
    *wittenberg_address = 17325;
    printf("Value at wittenberg_addres: %d.\n", *wittenberg_address);
    printf("Wittenberg address: %p.\n", wittenberg_address);
    /*
     Value at wittenberg_address: 0.
     Wittenberg Address: 0x16fdff1fc.
     Value at wittenberg_addres: 17325.
     Wittenberg address: 0x16fdff1fc.
     */
    
    
    //3.3 pointer with arrow operator
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    clock_ptr -> set_year(2022);
    printf("Address of the clock: %p.\n", clock_ptr);
    printf("Value of clock's year: %d.\n", clock_ptr -> get_year());
    /*
     Address of the clock: 0x16fdff1ec.
     Value of clock's year: 2022.
     */
    
    
    //3.4 pointer and array
    College best_colleges[] = { "Magdalen", "Nuffield", "Kellogg" };
    print_name(best_colleges);
    /*
     Magdalen College.
     */
    
    //3.5 sending array to function
    College2 oxford[] = { "Magdalen", "Nuffield", "Kellog" };
    print_names(oxford, sizeof(oxford) / sizeof(College2));
    /*
     Magdalen College.
     Nuffield College.
     Kellog College.
     */
    
    //3.6 buffer oveloading
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;
    
    lower[3] = 'd';
    upper_ptr[3] = 'D';
    
    char letter_d = lower[3];
    char letter_D = upper_ptr[3];
    
    printf("lower: %s\nupper: %s.\n", lower, upper);
    lower[7] = 'g';
    /*
     lower: abcde
     upper: ABCDE.
     */
    
    //3.7 the same as 3.5 but with pointer arithmetic
    char lower2[] = "abc?e";
    char upper2[] = "ABC?E";
    char* upper_ptr2 = &upper2[0];
    
    *(lower2 + 3) = 'd';
    *(upper_ptr2 + 3) = 'D';
    
    char letter_d2 = *(lower2 + 4);
    char letter_D2 = *(upper_ptr2 + 4);
    
    printf("lower: %s\nupper2: %s.\n", lower2, upper2);
    *(lower2 + 7) = 'g';
    /*
     lower: abcde
     upper2: ABCDE.
     */
    
    //3.8 using reference
    
    ClockOfTheLongNow clock1;
    printf("The year is: %d.\n", clock1.get_year());
    add_year(clock1);
    printf("Now the year is: %d.\n", clock1.get_year());
    /*
     The year is: 2019.
     Now the year is: 2020.
     */
    
    //3.10 linked array
    Element trooper1, trooper2, trooper3;
    trooper1.prefix[0] = 'A';
    trooper1.prefix[1] = 'M';
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    trooper2.prefix[0] = 'I';
    trooper2.prefix[1] = 'G';
    trooper2.operating_number = 2187;
    trooper2.insert_after(&trooper3);
    trooper3.prefix[0] = 'K';
    trooper3.prefix[1] = 'F';
    trooper3.operating_number = 0005;
    
    for (Element *cursor = &trooper1; cursor; cursor = cursor -> next)
    {
        printf("Stormtrooper %c%c-%d.\n", cursor -> prefix[0], cursor -> prefix[1], cursor -> operating_number);
    }
    
    /*
     Stormtrooper AM-421.
     Stormtrooper IG-2187.
     Stormtrooper KF-5.
     */
    
    
    //3.11 references can't be reassigned
    int original = 100;
    int& original_ref = original;
    printf("Original: %d\n", original);
    printf("Reference: %d\n", original_ref);
    
    int new_value = 200;
    original_ref = new_value;
    printf("Original: %d\n", original);
    printf("New value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
    /*
     Original: 100
     Reference: 100
     Original: 200
     New value: 200
     Reference: 200
     */
    
    //3.18
    Avout ast { "Astryda", 3010 };
    Avout gaz { "Gazela", 4000};
    ast.announce();
    gaz.announce();
    /*
     My name is Astryda and my next apert is 3010.
     My name is Gazela and my next apert is 4000.
     */
    
    return 0;
}
