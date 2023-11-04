#include<bits/stdc++.h>

using namespace std;

int main() {
	double x1, y1, x2, y2;

	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);

	printf("%.4lf\n", hypot((x1 - x2), (y1 - y2)));

	return 0;
}