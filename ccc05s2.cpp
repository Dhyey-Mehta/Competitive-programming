#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int maxX,maxY;
	cin>>maxX>>maxY;

	pair<int,int> current = make_pair(0,0);

	int moveX,moveY;
	
	while(cin>>moveX>>moveY){
		if (moveX==0&&moveY==0){
			return 0;
		}

		else{
			current.first += moveX;
			current.second += moveY;
		}

		if(current.first>maxX){
			current.first = maxX;
		}
		
		if (current.second>maxY){
			current.second = maxY;
		}
		if (current.first<0){current.first = 0;}
		if (current.second<0){current.second=0;}
		cout<<current.first<<" "<<current.second<<endl;
	
	}	

}
