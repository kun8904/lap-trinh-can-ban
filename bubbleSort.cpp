#include <iostream>

//hãy sắp xếp dãy sau 6,9,3,2,5 theo tăng dần
using namespace std;
int main(){
	int n = 5;
	int arr[n] = {6,9,3,2,5};
	for(int i = n-1; i>0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j+1]){
				int tg = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tg;
			}
		}
	}
	for(int i=0; i<= n-1; i++){
		cout << arr[i] << " ";
	}
	return 0;
}