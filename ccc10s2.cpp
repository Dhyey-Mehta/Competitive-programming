#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	
	map<string,char> maps;
	for (int w=0;w<q;w++){
		char e;
		string code;
		cin>>e>>code;
		
		maps[code]=e;
	}
	
	
	string final= "";
	string iter;
	cin>>iter;
	
	int var = 0;
	int size = 1;
	
	while(var+size<=iter.length()){
		if (maps.count(iter.substr(var,size))==1){
			final += maps[iter.substr(var,size)];
			var += size;
			size = 0;
		}
		else{
			size += 1;
		}
	}
	cout<<final;
}