#include <bits/stdc++.h>

using namespace std;

int main(){
    string basicT;
    getline(cin,basicT);
    string basic_cyp;
    getline(cin,basic_cyp);
    string to_decode;
    getline(cin,to_decode);
    
    map <char,char> cypher_b;
    for(int h=0;h<basicT.length();h++){
        cypher_b[basic_cyp[h]] = basicT[h];
    }
    string final;
    for (int j=0;j<to_decode.length();j++){
        if(cypher_b.find(to_decode[j]) == cypher_b.end()){
            final +=".";
            continue;
        }
        else{
            final+=cypher_b[to_decode[j]];
        }
    }
    cout<<final;
    
}
