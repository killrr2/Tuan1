#include<bits/stdc++.h>
using namespace std;

main(){
	int h; cin >> h;
	for(int i=0 ; i<h ; i++){
		for(int j=0; j<2*h+1; j++){
			if(j>=h-i && j<=h+i){
				cout << " * ";
			}else{
				cout << "   ";
			}
		}
			cout << endl;
	}

}


