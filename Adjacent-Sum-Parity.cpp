#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> B(n);
	    
	    for(int i=0; i<n; i++){
	        cin>>B[i];
	    }
	    
	    vector<int> A(n);
	    A.push_back(1);
	    
	    for(int i=0; i<n-1; i++){
	        if(B[i] == 0){
	            if(A[i] % 2 == 0){
	                A[i+1] = 2;
	            }
	            else{
	                A[i+1] = 1;
	            }
	        }
	        else{
	            if(A[i] % 2 == 0){
	                A[i+1] = 1;
	            }
	            else{
	                A[i+1] = 2;
	            }
	        }
	    }
	    
	    if((A[n-1] + A[0]) % 2 == B[n-1]){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
