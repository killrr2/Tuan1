#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
	int temp;
	while(x!=0){
		temp=y%x;
		y=x;
		x=temp;
	}
	return y;
}

main(){
	int x,y;
	cin>>x>>y;
	cout<<"UCLN: "<<gcd(x,y)<<endl<<"BCNN: "<<(x*y)/gcd(x,y);
	
	
}


