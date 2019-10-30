#include <iostream>
using namespace std;
 
int main() {
 
    int n,m;
    cin>>n>>m;
    if (n>=m && n>0 && m!=0)
        cout<<n<<" "<<n+m-1;
    if (n<m && n>0 )
        cout<<m<<" "<<n+m-1;
    if (m==0 && n>0)
        cout<<n<<" "<<n;
    if (n==0 && m==0){
        cout <<0<<" "<<0;}
    if (n==0 && m!=0)
        cout<<"Impossible";
    return 0;
}