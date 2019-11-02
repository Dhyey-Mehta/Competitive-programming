#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
	int tests;
	cin>>tests;
	
	for (int i=1;i<=tests;i++){
		int num_of_thing;
		cin>>num_of_thing;
		
		string arr[num_of_thing];
		for (int m=0;m<num_of_thing;m++){
			string inp;
			cin>>inp;
			
			arr[m]=inp;
		}
		
		map<string, vector<string>> graph;
		map<string,int> depthval;
		
		for (int j=num_of_thing-1;j>=1;j--){
			int h = j-1;
			graph[arr[j]].push_back(arr[h]);
		}

		depthval[arr[sizeof(arr)/sizeof(arr[0])-1]] = 1;
		vector <string> visited;
		
		
		string start = arr[num_of_thing-1];
		queue <string> q;
		q.push(start);
		while (!q.empty()){
			string v = q.front();
			q.pop();
			for (int w=0;w<graph[v].size();w++){
					if (!(find(visited.begin(),visited.end(),graph[v][w])!=visited.end())){
						q.push(graph[v][w]);
						visited.push_back(graph[v][w]);
						depthval[graph[v][w]]=depthval[v]+1;
					}
			}	
		}
		
		int biggest=0;
		depthval[arr[sizeof(arr)/sizeof(arr[0])-1]] = 1;
		for (int i=0;i<visited.size();i++){
			if (depthval[visited[i]]>biggest){
				biggest = depthval[visited[i]];
			}
		}
	cout<<10*num_of_thing-(20*(biggest-1))<<"\n";
	
	}
}
	
	