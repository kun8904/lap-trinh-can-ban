#include <iostream>
#include <cstdlib>

using namespace std;

//thêm vào vị trí bất kì của mảng

void add(int n[], int &x){
	int a,m;
	int check = -1; 
	while( check <= 0 || check > x){
		cout << "\nVi tri can them tu 1 den " << x+1 << ": " ;
		cin >> m;
		check = m;
		x++;
		if(m <= 0 || m > x){
			cout << "\nNhap lai vi tri can them!!!";
		}
		break;
	}
	cout << "Nhap phan tu can them vao: ";
	cin >> a;
	for(int i=x; i>=0; i--){
		if(i == m){
			n[m] = a;
			break;
		}
		n[i] = n[i-1];
	}
}

void dele(int n[], int &x){

	int m;
	while(true){
		cout << "\nVi tri can xoa tu 1 den " << x << ": " ;
		cin >> m;
		if(m <= 0 || m > x){
			cout << "\nNhap lai vi tri can xoa!!!";
		}
		break;
	}
	for(int i=m-1 ; i<=x -1; i++){
		for(int j = i ; j <= x-1; j++){
			if(i < x-1){
				n[j] = n[j+1];
			}
		}
		x--;
		break;
	}
}

int main() {
    int luachon, x ;
    int n[100];
    int check = 0;

    while (true) {
        cout << "1. Tao mang";
        cout << "\n2. Them vao vi tri bat ki\n";
        cout << "3. Xoa vi tri bat ki\n";
        cout << "0. Thoat\n";
        cout << "Moi ban lua chon: ";
        cin >> luachon;
        
		do{
    		if ((check == 0 && luachon == 2) || (check == 0 && luachon == 3)){
    			system("cls");
        		cout << "Hay tao mang truoc !!!" << endl;
        		return main();
    		}
			if(luachon <0 || luachon >3){
    			system("cls");
    			cout << "Moi nhap lai lua chon!!!" << endl;
    			if(check != 0){
    				cout << "Mang hien tai la : " ;
					for (int i=0; i<=x-1; i++){
                		cout << n[i] << " ";
					}
					cout << endl;
				}
    			return main();
			}
		} while (false);
        switch (luachon) {
            case 1: {
                system("cls");
                int i = 0;
                cout << "Nhap do dai cua mang: ";
                cin >> x;
                n[x];
                do {
                    cout << "Nhap vao mang n[" << i + 1 << "] = ";
                    cin >> n[i];
                    i++;
                } while (i <= x - 1);
                system("cls");
                cout << "Mang vua tao la : " ;
                for (int i=0; i<=x-1; i++){
                	cout << n[i] << " ";
				}
				cout << endl;
				check++;
				break;
            }
            case 2:{
                add(n, x);
                system("cls");
                cout << "Mang sau khi them la : " ;
                for (int i=0; i<=x-1; i++){
                	cout << n[i] << " ";
				}
				cout << endl;
				check++;
				break;
			}
			case 3:
				dele(n,x);
				system("cls");
				cout << "Mang sau khi xoa la : " ;
				for (int i=0; i<=x-1; i++){
                	cout << n[i] << " ";
				}
				cout << endl;
				check++;
				break;
			case 0:
				exit(0);
				break;
		}
		continue;
    }
}