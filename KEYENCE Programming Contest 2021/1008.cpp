#include<bits/stdc++.h>

int main() {
	int number, hours;
	double payment;
	scanf("%d %d %lf", &number, &hours, &payment);

	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2lf\n", (hours * payment));
	return 0;
}