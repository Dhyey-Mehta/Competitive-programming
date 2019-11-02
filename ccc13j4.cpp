#include <bits/stdc++.h> 

using namespace std;

int main(){
	int num;
	cin>>num;
	
	int array[num];
	
	int total;
	cin>>total;
	
	for(int i=0;i<total;i++){
		int j;
		cin>>j;
		array[i] = j;
	}
	
	sort(array,array+total);
	
	int count = 0;
	int sum = 0;
	
	
	for (int l = 0;l<=total-1;l++){
		if (sum + array[l]>num){
			cout<<count;
			return 0;
		}
		else if (sum + array[l]==num){
			cout<<count+1;
			return 0;
		}
		else{
			count += 1;
			sum += array[l];
		}
		
}
}
