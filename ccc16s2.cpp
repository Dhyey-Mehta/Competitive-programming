include <bits/stdc++.h>

using namespace std;

int main(){    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int type,num_cyclists;
    cin>>type;
    cin>>num_cyclists;
    
    int dmoj[num_cyclists];
    int peg[num_cyclists];
    for (int w=0;w<num_cyclists;w++) cin>>dmoj[w];
    for (int w=0;w<num_cyclists;w++) cin>>peg[w];
    sort(dmoj,dmoj+num_cyclists);
    sort(peg,peg+num_cyclists);

    if (type==1){
        int sum = 0;
        for (int s=0;s<num_cyclists;s++){
            sum+=max(dmoj[s],peg[s]);
        }
        cout<<sum;
    }
    else{
        reverse(peg,peg+num_cyclists);
        int sum = 0;
        for (int s=0;s<num_cyclists;s++){
            sum+=max(dmoj[s],peg[s]);
        }
        cout<<sum;
    }

}
