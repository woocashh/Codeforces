    #include <iostream>
    #include<algorithm>
    #include<cmath>
    using namespace std;
     
    int main ()
    {
        int n,a,b;
     
     
        cin>>n>>a>>b;
        a=a+b;
     
            while(a<0)
            {
                a=a+n;
            }
            a=a%n;
     
            if (a==0){
                a=n;
            }
        cout<<a;
        return 0;
    }