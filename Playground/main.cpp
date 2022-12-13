//
//  main.cpp
//  Playground
//
//  Created by Astryda Malinowska on 06/12/2022.
//

#include <iostream>

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
    
    
    return 0;
}
