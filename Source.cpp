
#include <cmath>

int solution(int X, int Y, int D) {
	int count = 0;
	int distance;
	if (X == Y)
		return 0;
	else
	{
		distance = Y - X;
		count = ceil((double)distance / D);
	}
	return count;
}
