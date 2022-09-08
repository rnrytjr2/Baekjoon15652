#include <iostream>
#include <string>
using namespace std;
void sequence(int N, int M,int lastindex, string answer);
int main()
{
	int N, M;
	cin >> N >> M;
	sequence(N, M,1 ,"");
}
void sequence(int N, int M,int lastindex, string answer)
{
	if (answer.size() == M + M - 1)
	{
		cout << answer << "\n";
	}
	else
	{
		for (int i = 1; i < N + 1; i++)
		{
			if (lastindex <= i)
			{
				string answertemp = answer;
				if (answer.size() != 0)
				{
					answertemp += " ";
				}
				sequence(N, M, i, answertemp + to_string(i));
			}
		}
	}
}