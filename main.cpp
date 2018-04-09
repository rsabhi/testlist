//
//  main.cpp
//  demolist
//
//  Created by Abhilash on 9/4/18.
//  Copyright © 2018 abhi. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

int main(int argc, const char * argv[]) {
    list<int> li;
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    
    for(list<int>::iterator it = li.begin(); it != li.end(); it++) {
        cout<<"List Element: " << *it << endl;
    }
    
    

    return 0;
}
