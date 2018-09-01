#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

int main()
{
	// �Է°�
	unsigned int n,j,nq; 
	cout << "�O�� �Ҽ���:";
	cin >> n;	

	// ���� n�� 1���� �۰ų� ������ �Լ� ����
	if (n <= 1) return 0;

	j = 1;
	nq = int(sqrt(n));

	do
	{
		j += 1;
		/* 
		n���� j�� �����ٺ��� ū������ �����°� �ǹ� ����.
		n���� j�� �����ٰ����� ū���� ���ö����� �ȳ�������� �Ҽ�.
		n�� �Ҽ��� �ƴ� ��� �ڿ��� a,b������
		n=a*b�� ��Ÿ���� �ִµ�
		a=b ���ü��� �ִ�
		*/ 
		if (j> nq) {
			cout << "�Ҽ���";
			return 0;
		}

	} while (n%j!=0);

	cout << "�Ҽ� �ƴ�";
	return 0;
}

