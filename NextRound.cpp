#include<iostream>

using namespace std;

int main(){
    int x, i=0, n, pass = 0 ;
    int y[100], z[100];
    cin >> x >> n ;
    bool equal=true;
    while(i<x){
    	cin >> y[i];
    	if(y[i]>0 && i<n){
    		pass ++;
		}else if (y[i]==y[n-1] && y[i]>0){
			pass ++;
		}
		i++;
	}
	cout << pass;
	
}
