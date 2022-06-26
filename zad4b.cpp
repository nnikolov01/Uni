#include <iostream>
#include <cmath>


long double leibnizSeries();

int main()
{
	std::cout.precision(16);
	
	leibnizSeries();
	return 0;
}

long double leibnizSeries()
{
	long double sum=0;
	int sign = 1;
	long double tmp=0;
	int cnt=1;
	
	long double diff = 0;
	do{
		tmp = sum;
		sum += sign*1.0/(2*cnt-1);
		sign = -sign;
		cnt++;
	}while( fabs(sum-tmp) > 0.000000001 );
	
	std::cout << "Approximation after " << cnt << " loops:" << '\n' << 4*sum << '\n';
	
	return 4*sum;

