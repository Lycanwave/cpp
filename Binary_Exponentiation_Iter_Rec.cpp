#include<bits/stdc++.h>

using namespace std;

int binaryExpoRec(int a,int b){

    if(b==0)
        return 1;

    int res = binaryExpoRec(a,b/2);

    if(b&1)
        return a * res * res;
    return res * res;
}

int binaryExpoIter(int a,int b){

    int ans=1;

    while(b){

        if(b&1)
            ans = a*ans;

        a=a*a;
        b>>=1;
    }

    return ans;
}

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    int b;

    cin>>a>>b;

    cout<<binaryExpoRec(a,b)<<endl;

    cout<<binaryExpoIter(a,b)<<endl;

    
    return 0;
}
