#include <iostream>  //Голуба Антона П43021
#include <ctime> 
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int arr[n];  
	int temp;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		 
		for (int j = 0; j < n - 1; j++) {
			
			if (arr[j] > arr[j + 1]) {	
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int max = arr[0];
	int p = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > max){
			max= arr[i];
			p = arr[i];
			}	
	}
	cout << endl;
	return 0;

}