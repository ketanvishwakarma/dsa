//https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/
#include<iostream>
using namespace std;
int main(){
	long int n,a[1000000000];
	int x,index = -1;
	cin>>n;
	cin>>x;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i] == x)
			index = i;
	}
	cout<<index;
}