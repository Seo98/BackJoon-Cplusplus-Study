#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
using namespace std;

void main()
{
	std::string name, phone;
	int age;

	std::cout << "당신의 이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "당신의 나이를 입력하세요: ";
	std::cin >> age;

	std::cout << "당신의 전화번호를 입력하세요: ";
	std::cin >> phone;
	std::cout << std::endl << "안녕하세요, " << name << "님." << std::endl;
	std::cout << "당신의 나이는 " << age << "살이고 "
		<< "전화번호는 " << phone << "이군요!" << std::endl;

	//
	int age;

	int a = 1;

	int* b = &a; // a라는 변수의 주소값을 포인터 변수 a에 저장
	int x = 0;
	int n;

	cout << "Hello World!" << endl;
	cout << "a: " << a << endl;


	std::cout << x << '\n';  // print the value of variable x
	std::cout << &x << '\n'; // print the memory address of variable x
	std::cout << *&x << '\n';

	cout << b << endl;

	// prints:
	// 5
	// 0027FEA0
	// 5
}



void func()
{
	/*
	container의 최소, 최대 값 구하기
	최소 값 포인터 구하기 : min_element(vec.begin(), vec.end());
	최소 값 구하기 : *min_element(vec.begin(), vec.end());
	최소 값 index 구하기 : min_element(vec.begin(), vec.end()) - vec.begin();

	최대 값 포인터 구하기 : max_element(vec.begin(), vec.end());
	최대 값 구하기 : *max_element(vec.begin(), vec.end());
	최대 값 index 구하기 : max_element(vec.begin(), vec.end()) - vec.begin();


	container 뒤집는 reverse 함수
	container 뒤집기 : reverse(vec.begin(), vec.end());
	container 돌리는 rotate 함수
		rotate(vec.begin(), vec.begin() + n, vec.end()); → n칸씩 왼쪽으로 이동하는 것이다.
		rotate(vec.begin(), vec.end() - n, vec.end()); → n칸씩 오른쪽으로 이동하는 것이다.


	제곱근, 제곱수 구하기
		pow(n, m); → n^m을 구해준다.
		sqrt(n); → n의 제곱근 구해준다.

	절댓값 구하기
		abs(int);  → 절댓값 구해준다.int로 반환한다.cstdlib 헤더에 있다.
		abs(double); → 절댓값 구해준다.double로 반환한다.cmath 헤더에 있다.


	최대값, 최소값 구하기
		max(a, b);  → a, b 중 큰 수를 반환한다.algorithm 헤더에 있다.
		min(a, b);  → a, b 중 작은 수 반환한다.algorithm 헤더에 있다.

		*/
}

void func2()
{
	//
	// isdigit(char n)  <<  문자열에서 숫자만 추출하여 numbers에 저장
	// find(v.begin(), v.end(), _s);
}

int gcd(int a, int b) {
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int getDivNum(int num) {
	if (num == 1) {
		return 1;
	}
	int answer = 2;
	for (int i = 2;i <= num / 2;i++) {
		if (num % i == 0) {
			answer++;
			//여기서 i는 약수
			//answer는 약수들의 합
		}
	}
	return answer;
}

int solution(int n) {
	int answer = 0;
	while (n != 0) {
		answer = n % 10;
		n /= 10;
		//answer는 자리수, 뒤의 자리에서부터 나옴.
	}
	return answer;
}