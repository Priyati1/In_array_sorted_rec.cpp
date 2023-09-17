#include<iostream>
using namespace std;
bool is_sorted(int *arr, int n){
	//base 
	if(n==1||n==0){
		return true;
	}
	//recursive case
	bool is_sorted_small=is_sorted(arr+1,n-1);
	if(arr[0]<arr[1] && is_sorted_small==true){
		return true;
	}
	return false;

}
int main(){
	int n;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x= is_sorted(arr,n);
	if(x){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	return 0;
}