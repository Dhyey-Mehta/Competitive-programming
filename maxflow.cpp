#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;

    for (int w=0;w<n;w++){
        int x;
        cin>>x;
        int biggest = 0;
        for (int q=0;q<x;q++){
            int e;
            cin>>e;
            if (e>biggest){
                biggest = e;
            }

        }
        cout<<biggest<<endl;
    }

}
