#include "io.h"
#include "UpFunc.h"

int main()
{
	// cout << "HellO 새싹!\n";
	//problem();
	problem2();
}

void problem() {

	int N;
	cout << "정수의 갯수를 입력하세요\n";
	cin >> N;
	int* Array = new int[N];
	for (int i = 0; i < N; ++i) {
		cout << "정수를 입력해주세요. cout=" << i + 1 << "\n";
		cin >> Array[i];
	}

	int lower = Array[0];
	int higher = Array[0];
	for (int i = 1; i < N; ++i) {
		if (Array[i] < lower) {
			lower = Array[i];
		}
		if (Array[i] > higher) {
			higher = Array[i];
		}

	}
	cout << lower << " " << higher;
	delete[] Array;
}

void problem2() {

	int N;
	cout << " 바구니 갯수 입력";
	cin >> N;
	int* Array = new int[N];
	for (int i = 0; i < N; i++) {
		Array[i] = i + 1;
		cout << Array[i];
	}

	delete[] Array;
}