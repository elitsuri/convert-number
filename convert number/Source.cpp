#include <iostream>
#include <bitset>
#include <string>
using namespace std;
// ==========================================================
int solution(int num);
int convert_num(int num);
// ==========================================================
int main()
{
	int N = 529;
	cout << solution(N);

	
	cin.get(); cin.get();
	return 0;
}
// ==========================================================
int solution(int num)
{
	int sol = 0;
	convert_num(num);

	return sol;
}
// ==========================================================
int convert_num(int num)
{
	string r;

	while (num != 0)
	{
		r = (num % 2 == 0 ? "0" : "1") + r;
		num /= 2;
	}
	return stoi(r);
}
// ==========================================================