#include <iostream>

using namespace std;

// int A,B의 값을 바꾸는 요건

//이름은 같으나 다른 공간
void Swap(int* A, int* B)  //*을써서 메모리 주소를 저장
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

int main() //다른 공간에 있는 A ,B를 쳐다보게 하기
{
	int A = 10;
	int B = 20;

	Swap(&A, &B); //&를 써서 저장한 주소값을 입력

	
	cout << A << endl;
	cout << B << endl;

	return 0;
}






