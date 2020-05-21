#include <bits/stdc++.h>

using namespace std;


bool isprime(int num){
	for (int iter=2;iter<=sqrt(num);iter++){
		if (num%iter == 0){
			return false;
		}
	}
	return true;
}


int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int numCases;
	cin>>numCases;

	for(int w=0;w<numCases;w++){
		int target;
		cin>>target;
		target *=2;
		if (isprime(target-2)){
			cout<<"2"<<" "<<target-2<<endl;
			continue;
		}
		for (int w=3;w<=target/2;w+=2){
			if (isprime(target-w)&&isprime(w)){
				cout<<w<<" "<<target-w<<endl;
				break;
			}
		}

	}
}
