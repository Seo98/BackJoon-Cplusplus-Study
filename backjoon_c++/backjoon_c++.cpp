#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
using namespace std;

/*
void main()
{
	std::string name, phone;
	int age = 2;

	std::cout << "당신의 이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "당신의 나이를 입력하세요: ";
	std::cin >> age;

	std::cout << "당신의 전화번호를 입력하세요: ";
	std::cin >> phone;
	std::cout << std::endl << "안녕하세요, " << name << "님." << std::endl;
	std::cout << "당신의 나이는 " << age << "살이고 "
		<< "전화번호는 " << phone << "이군요!" << std::endl;

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

		int a;
	cin >> a;

	vector<int> ab(a);

	for (int i = 0; i < a; i++)
	{
		ab[i] = i + 1;
		cout << ab[i] << endl;
	}
	*/

	/*
	int a,b,c;
	cin >> a
		>> b
		>> c;

	int hop = a + b - c;
	cout << hop << "\n";

	string hop2 = to_string(a) + to_string(b);
	int hop_int = stoi(hop2);

	hop_int -= c;

	cout << hop_int;
}
*/

/*
* begin()
리스트의 시작 이터레이터를 반환한다.
end()
리스트의 마지막 이터레이터를 반환한다.
*/

/*
리스트 삽입
emplace(이터레이터, 값)
해당 이터레이터 위치 앞에 값 삽입
emplace_front(값)
리스트 맨 앞에 요소 추가
push_front(값)
리스트 맨 앞에 요소 추가
emplace_back(값)
리스트 맨 뒤에 요소 추가
push_back(값)
리스트 맨 뒤에 요소 추가
insert(이터레이터, 값)
해당 이터레이터 위치 앞에 값 추가
emplace와 push의 차이는 필자가 좀 더 고급화가 되면 글로 써볼까 한다.
*/

/*
pop_front()
첫 번째 요소를 삭제한다.

pop_back()
마지막 요소를 삭제한다.

erase(이터레이터)
이터레이터 위치의 요소를 삭제한다. 이터레이터를 1개 더 써줄 경우엔 처음 이터레이터부터 마지막까지 삭제한다.

clear()
리스트의 모든 요소를 삭제한다.
*/

/*
remove(값)
리스트안에 값과 같은 요소를 제거한다. (==연산)

remove_if(bool함수)
리스트 안에 해당 조건을 만족하는 값을 제거 함

용량 관련 함수
size()
리스트의 크기를 반환함

max_size()
리스트의 최대 크기를 반환함

empty()
리스트에 요소가 존재하는지 반환(bool)

resize()
리스트의 크기를 재설정함. 만약 바꾸고자하는 크기가 리스트보다 작다면 뒤쪽이 짤림

그 외의 함수들
splice(이터레이터, 리스트)
이터레이터를 기준으로 리스트를 뒤에 붙힌다.

unique()
연속되는 중복을 제거한다.

전체 요소의 중복을 제거하기 위해 sort()와 같이 사용할 수 있다.

매개변수로 bool fuc(자료형1, 자료형2) {} 로 함수를 넣게 되면 n번째 요소와 n+1번째 변수를 연산해 참일 경우

n+1번째 요소를 삭제한다.

sort()
오름차순 정렬을 한다.

매개변수로 bool fuc(자료형1, 자료형2) {} 을 넣으면 조건을 지정하여 정렬할 수 있다.

merge()
합병 정렬을 한다.

sort()와 같이 매개변수에 비교함수를 넣어주면 원하는 조건하에 정렬이 가능하다.

swap(리스트)
리스트를 요소를 서로 바꾼다.

reverse()
리스트를 거꾸로 바꾼다.
*/




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