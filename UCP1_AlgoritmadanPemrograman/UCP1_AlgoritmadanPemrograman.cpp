// jawaban no.1: algoritma InsertionSort membandingkan elemennya dengan memecah-mecahnya menjadi 2 dan membandingkan nya. lalu untuk menukar elemen dibutuhkan array temporary untuk menukar elemen sesuai ururtan
// jawaban no.2: algoritma SelectionSort membandingkan elemennya satu per satu tetapi tidak lansung menukar elemmya seperti bubblesort. selectionsort menukar elemennya ketika sudah membandingkan dari elemen awal sampai ke elemen terakhir terlebih dahulu, jika saat membandingkan sudah menemukan data yang paling kecil, itu nanti ditandai dulu. baru setelah index terakhir baru di tukar.
// jawaban no.3: cara untuk mengetahui jumlah langkah yang dilakukan adalah dengan rumus n-1. dimana n ini adalah jumlah data - 1.
// jawaban no.4: 

#include <iostream> 
using namespace std;

int dian[77];
int n;


void input()
{
	while (true)
	{
		cout << "Masukkan banyaknya elemen pada array dian : ";
		cin >> n;
		if (n <= 77)
			break;
		else {
			cout << "\nArray dian maksimal mempunyai 77 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;	
	cout << "Masukkan Elemen Array" << endl;	
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke -" << (i + 1) << ": ";
		cin >> dian[i];
	}
}

void display()
{
	cout << endl;				
	cout << "=====================================" << endl;					
	cout << "Elemen Array dian yang telah tersusun" << endl;		
	cout << "=====================================" << endl;					
	for (int j = 0; j < n; j++) {				
		cout << "Data ke-" << j + 1 << ":";
		cout << dian[j] << endl;					
	}
	cout << endl;
}

void  insertionsort() {

	int temp;
	int i , j;

	for (i = 1; i <= n - 1; i++) {
		temp = dian[i];
		
		j = i - 1;
		while (j >= 0 && dian[j] > temp) {
			dian[j + 1] = dian[j];
			j--;
		}
		dian[j + 1] = temp;

		cout << "\nPass " << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << dian[k] << " ";
		}
	}
}

int main() {
	input();
	insertionsort();
	display();
	return 0;
}

