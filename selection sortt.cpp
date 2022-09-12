#include<bits/stdc++.h>
using namespace std;
	void sort(int arr[],int n){
		
		for(int i = 0;i<n-1; i++){
			int mini =i;
			
			for(int j = i+1; j<n; j++){
				if(arr[j]<arr[mini]){
					mini = j;
				}
			}
//			if(arr[mini]! = i){
				swap(arr[mini],arr[i]);
				
			
		}
		for(int i = 0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		
		
			}
int main(){
	int arr[]= {5,4,3,2,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	return 0;
}
