#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string a;
	    
	    getline(cin, a);
	    
	    for(int i=0; i<n-1; i += 2){
	        swap(a[i], a[i+1]);
	    }
	    
	    for(int i=0; i<n; i++){
	        char ch = a[i] - 'a' ;
	        a[i] = 'z' - ch;
	    }
	    
	    cout<<a<<endl;
	    
	    
	}

}
