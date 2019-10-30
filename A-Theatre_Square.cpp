//
//  main.cpp
//  Theathre square
//
//  Created by Lukasz Jakubowski on 08/10/2017.
//  Copyright © 2017 Lukasz Jakubowski. All rights reserved.
//
    
#include <iostream>
using namespace std;
    
int main(int argc, const char * argv[]) {
    
    int n;
    int m;
    int a;
    
    cin>>n;
    cin>>m;
    cin>>a;
    
    long long flagsByRow;
    
    if (n % a == 0) {
        flagsByRow = n / a;
        
    } else {
        flagsByRow = n / a;
        flagsByRow++;
        
    }
    
    long long flagsByColumn;
    
    if (m % a == 0) {
        flagsByColumn = m / a;
        
    } else {
        flagsByColumn = m / a;
        flagsByColumn++;
        
    }
    
    cout << flagsByRow * flagsByColumn << endl;
    
    return 0;
}