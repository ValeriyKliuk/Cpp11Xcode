//
//  main.cpp
//  Cpp11Xcode
//
//  Created by Valeriy Kliuk on 12/27/2013.
//  Copyright (c) 2013 Valeriy Kliuk. All rights reserved.
//

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <array>

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    // construction uses aggregate initialization
    std::array<int, 3> arrayOne {{3,2,1}};
    std::array<std::string, 2> arrayTwo = {{std::string("a"), "b"}};
    
    // container operations are supported
    std::reverse_copy(arrayOne.begin(), arrayOne.end(), std::ostream_iterator<int>(std::cout, " "));
    
    std::cout << "\nSplit Line\n";

    std::sort(arrayOne.begin(), arrayOne.end());
    std::reverse_copy(arrayOne.begin(), arrayOne.end(), std::ostream_iterator<int>(std::cout, " "));

    
    std::cout << "\nSplit Line\n";
    
    // ranged for loop is supported
    for(auto& myString: arrayTwo){
        std::cout << myString << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}

