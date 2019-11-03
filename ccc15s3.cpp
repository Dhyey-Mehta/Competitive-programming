#include <iostream>

using namespace std;

int main(){
	int numgates;
	cin>>numgates;
	
	int numplanes;
	cin>>numplanes;
	
	int arraytogo[numplanes+1];
	int gate[numgates+1];
	
	int answer = 0;
	
	for (int a=0;a<=numgates+1;a++){
		gate[a]=0;
	}
	
	for (int iter=1;iter<=numplanes;iter++){
		int maxnum;
		cin>>maxnum;
		
		arraytogo[iter]=maxnum;
	}
	
	for (int iter2=1;iter2<=numplanes;iter2++){
		int plane = arraytogo[iter2];
		
		for (int k=plane;k>=0;k--){
			if (k==0){
				cout<<answer;
				return 0;
			}
			else if (gate[k]==0){
				gate[k]=plane;
				answer++;
				break;
			}
		}
	}
	cout<<answer;
}
