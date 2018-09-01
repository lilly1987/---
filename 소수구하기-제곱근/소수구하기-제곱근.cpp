#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

int main()
{
	// 입력값
	unsigned int n,j,nq; 
	cout << "찿을 소수값:";
	cin >> n;	

	// 만일 n이 1보다 작거나 같으면 함수 종료
	if (n <= 1) return 0;

	j = 1;
	nq = int(sqrt(n));

	do
	{
		j += 1;
		/* 
		n값을 j의 제곱근보다 큰값으로 나누는건 의미 없다.
		n값이 j의 제곱근값보다 큰값이 나올때까지 안나눠질경우 소수.
		n이 소수가 아닐 경우 자연수 a,b값으로
		n=a*b로 나타낼수 있는데
		a=b 나올수가 있다
		*/ 
		if (j> nq) {
			cout << "소수임";
			return 0;
		}

	} while (n%j!=0);

	cout << "소수 아님";
	return 0;
}

