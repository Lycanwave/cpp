#include<bits/stdc++.h>

using namespace std;


int main(){

    //stack initialization
    //stack<data_type>
    stack<int> st;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    //while(!st.empty())
    while(st.empty() == false){

        cout<<st.top()<<" ";
        st.pop();

    }

    cout<<endl;
    


    return 0;
}
