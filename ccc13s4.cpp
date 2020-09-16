#include <bits/stdc++.h>

using namespace std;

map<int,vector<int>> graph;

bool bfs(int start,int end){
	vector<int> visited;
	queue<int> q;
	q.push(start);
	visited.push_back(start);
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for (auto x:graph[curr]){
			if( x == end){
				return true;
			}
			if (find(visited.begin(),visited.end(),x)==visited.end()){
				q.push(x);
				visited.push_back(x);
			}
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int numStudents,tests;	
	cin>>numStudents>>tests;
	
	for(int w=1;w<=numStudents;w++){graph[w] = {};}

	for (int w=0;w<tests;w++){
		int tall,shorter;
		cin>>tall>>shorter;
		graph[shorter].push_back(tall);		
	}

	int finalShort,finalTall;
	cin>>finalTall>>finalShort;

	if (bfs(finalShort,finalTall)){cout<<"yes";}
	else if (bfs(finalTall,finalShort)){cout<<"no";}
	else{cout<<"unknown";}

		

}
