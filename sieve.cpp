#include<bits/stdc++.h>

using namespace std;


bool sieve[1000001];

void createSeive(int n){

    for(int i=2;i<=n;i++){
        sieve[i] = true;
    }

    for(int i=2;i*i<=n;i++){

        if(sieve[i]){
            for(int j=i*i;j<=n;j+=i)
                sieve[j] = false;
        }
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    createSeive(n);

    for(int i=2;i<n;i++){
        if(sieve[i] )
            cout<<i<<" ";
    }


    
    return 0;
}
