#include <iostream>


using namespace std;

//thêm vào vị trí bất kì của mảng

int main(){
	int *a = new int(5);// câu lệnh cấp phát động new
	int &b = *a;
	cout << *a << " " << &b << " " << &a << " " ;
	return 0;
}

//câu lệnh cấp phát động vùng bộ nhớ lưu giá trị trong đó. chỉ khi trỏ vào câu vùng bộ nhớ mới lấy được giá trị đã lưu ở trong bộ nhớ. 
// lưu ý : địa chỉ của con trỏ sẽ luôn khác địa chỉ của vùng cấp phát bộ nhớ.
// khi trỏ vào vùng cấp phát mà ko dùng * thì sẽ chỉ lấy địa chỉ của vùng cấp. 
// tham chiếu vùng cấp phát vào 1 biến thì biến đó sẽ lấy. và khi cấp phát 2 vùng bộ nhớ khác nhau sẽ có địa chỉ khác nhau