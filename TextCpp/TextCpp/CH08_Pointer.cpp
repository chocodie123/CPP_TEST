#include "io.h"
void PointerDefine() {
	
	int a = 10;

	cout << a << endl;
	cout << &a << endl; // &a : 주소 참조 연산

	int* pa = &a; // 포인터 변수에 주소값 대입
	int** ppa = &pa;
	int*** ppap = &ppa;

	cout << ppa << endl;
	cout << *ppa << endl;
	cout << **ppa << endl;

	cout << pa << endl; // 주소출력
	cout << *pa << endl; // 값출력


	int Array[3];
	cout << Array << &Array[0];
}