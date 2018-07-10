#include<bits/stdc++.h>
using namespace std;

main(){
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		for(int j=0;j<k-1-i;j++){
			cout<<"   ";
		}
		for(int j=0;j<2*i+1;;j++){
			cout<<" * ";
		}
		

		
		cout<<"\n";
	}

}


