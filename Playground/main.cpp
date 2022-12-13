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
    int get_year()
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
    
    
    
    
    return 0;
}
