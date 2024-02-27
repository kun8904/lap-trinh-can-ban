#include <iostream>

using namespace std;

void print_values(int value){
	cout << "Value " << value << endl;
	if(value ==1){
		return; //d?ng l?i d? quy
	}
	print_values(value -1);
}

int main(){
	print_values(3);
	return 0;
}