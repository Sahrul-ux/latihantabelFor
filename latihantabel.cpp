#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	
	cout << "Nama\t : Sahrul Rojab \n";
	cout << "Nim\t : 1855201092 \n";
	cout << "Prodi\t : Teknik Informatika \n\n";
	
	cout << "\t\t\t Tabel Perkalian \n\n\n";
	
	int n, i, j;
		cout << "masukkan nilai n : ";
		cin >> n;
		cout << "\n";
		
	for (i=1;i<=n;i++){
		cout << setw(5)<<i;
		
		for(j=1;j<=n;j++)
		cout << setw(5) << i*j;
		cout << endl;
	}
	
	return 0;
}
