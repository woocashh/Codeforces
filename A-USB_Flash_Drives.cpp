    #include <iostream>
    #include<cmath>
    #include<algorithm>
    #include<cstring>
     
    using namespace std;
    const int maxn=100+5;
    int a[maxn];
     
     
     
    int main()
    {
    int m,n;
    while(cin>>n)
    {
          cin>>m;
          for (int i=0;i<n;i++) cin>>a[i];
        sort (a,a+n);
        int ans=0;
        for (int i=n-1;m>0;i--)
        {
            ans++;
            m-=a[i];
        }
        cout <<ans;
    }
    return 0;
    }