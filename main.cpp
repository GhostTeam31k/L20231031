#include <iostream>

using namespace std;

// int A,B�� ���� �ٲٴ� ���

//�̸��� ������ �ٸ� ����
void Swap(int* A, int* B)  //*���Ἥ �޸� �ּҸ� ����
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

int main() //�ٸ� ������ �ִ� A ,B�� �Ĵٺ��� �ϱ�
{
	int A = 10;
	int B = 20;

	Swap(&A, &B); //&�� �Ἥ ������ �ּҰ��� �Է�

	
	cout << A << endl;
	cout << B << endl;

	return 0;
}






