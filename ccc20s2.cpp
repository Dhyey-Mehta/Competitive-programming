#include <bits/stdc++.h>

using namespace std;

map<int,vector<pair<int,int>>> store;
vector<pair<int,int>> Factor(int num){
    
    if (store.find(num)==store.end()){
        vector<pair<int,int>> factors;
        for (int factor = 1;factor<=sqrt(num);factor++){
            if (num%factor == 0){
                factors.push_back(make_pair(factor,num/factor));
            }
        }
        store[num] = factors;
        return factors;
    }
    else{
        return store[num];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    cin>>y;
    cin>>x;

    int graph[x+1][y+1];
    for (int row = 1; row <= y; ++row) {
        for (int col = 1; col <= x; ++col) cin>>graph[col][row];
  }

    vector<pair<int,int>> visited;
    queue<pair<int,int>> Q;

    Q.push(make_pair(1,1));
    visited.push_back(make_pair(1,1));

    while (Q.size()>0){
        pair<int,int> current_v = Q.front();
        Q.pop();

        int num_inside = graph[current_v.first][current_v.second];
        vector<pair<int,int>> neighbours = Factor(num_inside);

        for(int j = 0;j<neighbours.size();j++){
            if ((neighbours[j].second==x && neighbours[j].first==y)||neighbours[j].first==x && neighbours[j].second==y){
                    cout<<"yes";
                    return 0;
            }
            if (neighbours[j].first<=x && neighbours[j].second<=y){
                if (count(visited.begin(),visited.end(),neighbours[j])==0){
                    Q.push(neighbours[j]);
                    visited.push_back(neighbours[j]);
                }
            }
            if (neighbours[j].second<=x && neighbours[j].first<=y){
                if (count(visited.begin(),visited.end(),make_pair(neighbours[j].second,neighbours[j].first))==0){
                    Q.push(make_pair(neighbours[j].second,neighbours[j].first));
                    visited.push_back(make_pair(neighbours[j].second,neighbours[j].first));
                }
            }
    }
}

cout<<"no";
return 0;
}
