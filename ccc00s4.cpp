#include <bits/stdc++.h>
#define INF 100000000
using namespace std;
map<int,int> store;
int recurse(int dist,vector<int> club_vec){
	if (dist == 0){
		return 0;
	}
	else if (dist<0){
		return INF;
	}
	else{
		int best_so_far = INF;
		for (auto s:club_vec){
			if (store.find(dist-s)==store.end()){
				int current = recurse(dist-s,club_vec)+1;
				store[dist-s] = current;
				best_so_far = min(best_so_far,current);
			}
			else{
				best_so_far = min(best_so_far,store[dist-s]);
			}
		}
		return best_so_far;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int total_dist,clubs;
	cin>>total_dist;
	cin>>clubs;
	vector<int> club;
	for (int x=0;x<clubs;x++){
		int club_dist;
		cin>>club_dist;
		club.push_back(club_dist);	
	}
	int answer = recurse(total_dist,club);

	if (answer==INF){
		cout<<"Roberta acknowledges defeat.";
	}
	else{
		cout<<"Roberta wins in "<<answer<<" strokes.";
	}
}
