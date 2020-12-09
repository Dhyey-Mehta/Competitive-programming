#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num_trees;
    cin>>num_trees;

    int presumarr[num_trees+1];

    presumarr[0]=0;

    for (int r=1;r<=num_trees;r++){
        int current;
        cin>>current;
        presumarr[r] = current+presumarr[r-1];
    }

    int test;
    cin>>test;

    for (int t=0; t<test;t++){
        int start, end;
        cin>>start>>end;
        cout<<presumarr[end+1] - presumarr[start]<<"\n";
    }
    
}
