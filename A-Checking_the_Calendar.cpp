#include <iostream>
#include <string>
using namespace std;
    
    
int main() {
    
    
    string first;
    string second;
    int d,z,q;
    
    cin>> first;
    cin>> second;
    
    if(first=="monday")
        d=1;
    if(first=="tuesday")
        d=2;
    if(first=="wednesday")
        d=3;
    if(first=="thursday")
        d=4;
    if(first=="friday")
        d=5;
    if(first=="saturday")
        d=6;
    if(first=="sunday")
        d=7;
    
    if(second=="monday")
    {q=1;z=8;}
    if(second=="tuesday")
    { q=2;z=9;}
    if(second=="wednesday")
    {q=3;z=10;}
    if(second=="thursday")
    {q=4;z=11;}
    if(second=="friday")
    {q=5;z=12;}
    if(second=="saturday")
    {q=6;z=13;}
    if(second=="sunday")
    {q=7;z=14;}
    
    if (q==(d+2) || z==(d+2) || q==(d+3) || z==(d+3) || q==d) {
        cout<<"YES";}
    else
    {cout<<"NO";}
    
    
    
    return 0;
}