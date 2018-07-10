#include<bits/stdc++.h>
using namespace std;

main(){
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
	for(int i=0;i<a.size();i++){
		if(a[i]==32&&a[i+1]==32){
			for(int j=i;j<a.size();j++){
				a[j]=a[j+1];
				
			}
			i--;
		}
	}
	for(int i=0;i<a.size();i++){
		if(a[i]==32) a[i+1]=toupper(a[i+1]);
		
	}
	for(int j=0;j<a.size();j++){
				a[j]=a[j+1];
	
	}
	cout<<a;
}


