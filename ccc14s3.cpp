#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	for (int w=0;w<n;w++){
		int cars;
		cin>>cars;
		stack<int> top_b;
		stack<int> branch;
		for (int e=0;e<cars;e++){
			int num;
			cin>>num;
			top_b.push(num);
		}
		
		
		int current_wanted = 1;
		while((top_b.empty())||(branch.top()==current_wanted)){
			if (top_b.top()==current_wanted){
				top_b.pop();
				current_wanted+=1;
			}
			else if (branch.top()==current_wanted){
				branch.pop();
				current_wanted+=1;
			}
			
			else{
				int qw=top_b.top();
				branch.push(qw);
				top_b.pop();
			}
		}
		
		if (branch.empty()){
			cout<<"Y";
		}
		else{
			cout<<"N";
		}
		return 0;
		
	}
}
