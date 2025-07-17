#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int limalsum = 0;
	    int bobsum = 0;
	    int i=1;
	    
	    while(1){
	        limalsum += (2 * i) - 1;
	        if(limalsum > a) break;
	        
	        bobsum += 2 * i;
	        if(bobsum > b) break;
	        
	        i++;
	    }
	    
	    if(limalsum > a){
	        cout<<"Bob"<<endl;
	    }
	    else if(bobsum > b){
	        cout<<"Limak"<<endl;
	    }
	}

}
