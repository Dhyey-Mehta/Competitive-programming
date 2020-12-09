#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	string n;
	string hay;

	cin>>n;
	cin>>hay;
	map<char,int> blank;
	string basicS = "abcdefghijklmnopqrstuvwxyz";
	for (int e = 0;e<=25;e++){
		blank[basicS[e]] = 0;
	}
	map<char,int> freq_n;
	freq_n = blank;
	set<string> perms;

	for (int q=0;q<n.size();q++){
		freq_n[n[q]] +=1;
	}
	
	bool first = true;
	map<char,int> inside_freq = blank;

	for (int w=0;w<hay.size()-n.size()+1;w++){
		if (first){
			for (int q = 0;q<n.size();q++){
				inside_freq[hay[q]] +=1;
			}
			first = false;
		}
		else{
			inside_freq[hay[w-1]] -=1;
			inside_freq[hay[w+n.size()-1]]+=1;
		}
		if (inside_freq==freq_n){
			perms.insert(hay.substr(w,n.size()));
		}
	}
	
	cout<<perms.size();


}
