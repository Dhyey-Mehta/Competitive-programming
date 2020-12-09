#include <bits/stdc++.h>

using namespace std;

int main() {
    int wins = 0;
    
    for (int j=0;j<6;j++){
        string h;
        cin>>h;
        if (h == "W"){
            wins += 1;
        
        }
    }
    
    if (wins == 0){
        cout<<"-1";
    }
    
    else if (wins==1||wins==2){
        cout<<"3";
    }
    else if (wins==3||wins==4){
        cout<<"2";
    }
    else{
        cout<<"1";
    }
}
