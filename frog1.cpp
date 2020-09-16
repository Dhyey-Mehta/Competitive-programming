#include<bits/stdc++.h>

using namespace std;

vector<int> stones;
map<pair<int,int>,int> mem;

int recurse(int current,int goal){
    if (goal > stones.size() || current>stones.size()){
        return 100000000;
    }
    if (current==goal){
        return 0;
    }
    else{
        if (mem.count(make_pair(current,goal))==0){
            int ans=min(recurse(current+1,goal)+abs(stones[current-1]-stones[current]),recurse(current+2,goal)+abs(stones[current-1]-stones[current+1]));
            mem[make_pair(current,goal)] = ans;
            return ans;
        }
        else{
            return mem[make_pair(current,goal)];
        }   
    }
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numStone;
    cin>>numStone;
    int x;

    while(cin>>x){
        stones.push_back(x);
    }
    
    cout<<recurse(1,stones.size());


}