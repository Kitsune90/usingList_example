//
//  main.cpp
//  usingList_example
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#include <iostream>
#include <list>
#include <iterator>

int main(int argc, const char * argv[]) {
    
    std::list<std::string> miaLista;
    
    std::string str1 = "asd";
    std::string str2 = "fgh";
    std::string str3 = "vbn";
    std::string str4 = "zxc";
    std::string str5 = "qwe";
    
    miaLista.push_back(str1);
    miaLista.push_back(str2);
    miaLista.push_back(str3);
    miaLista.push_back(str4);
    miaLista.push_back(str5);
    
    for (std::list<std::string>::iterator iterator = miaLista.begin(),
         end = miaLista.end();
         iterator != end;
         ++iterator)
    {
        std::cout << *iterator << std::endl;
    }
    
    return 0;
}
