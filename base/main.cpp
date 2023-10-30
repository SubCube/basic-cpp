//
//  main.cpp
//  base
//
//  Created by Максим Бельфер on 27.10.2023.
//

#include <iostream>

void integerVariables(){
//    Integer (whole numbers)
    int x = 5;
    int y = 6;
    int sum = x + y;
    
    std::cout << "x " << x << "\n";
    std::cout << "y " << y << "\n";
    std::cout << "sum " << sum << "\n";
}

int main(int argc, const char * argv[]) {
//    comments
    std::cout << "Hello, World!\n";
    integerVariables();
    return 0;
}
