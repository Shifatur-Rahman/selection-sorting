#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[]={7,4,10,8,3,1};
int n=6;
int i, j, min;

for(i=0; i<n-1; i++){
	min = i;
	for(j=i+1; j<n; j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}

	if(min != i){
		swap(arr[i],arr[min]);
	}
}

for(i=0; i<n; i++){
	cout<<arr[i]<<" ";
}




}
