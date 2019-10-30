    #include <iostream>
    #include<algorithm>
    #include<cmath>
    using namespace std;
     
    int main ()
    {
    int n;
    int x[100000], y[100000],k=0,p=0,m=0;
     
    cin>>n;
     
    while(k<n)
    {
        cin>>x[k]>>y[k];
     
        if(x[k]>0)
        {
            p++;
        }
        else
        {
            m++;
        }
        k++;
    }
     
    if(m==1||m==0||p==0||p==1)
        cout<<"Yes";
    else
        cout<<"No";
     
        return 0;
    }