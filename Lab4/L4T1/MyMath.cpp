#include "MyMath.h"

int MyMath::counter = 0;
int MyMath::add(int s, int k)
{
	MyMath::counter += 1;
	return s + k;
}

int MyMath::sab(int s, int k)
{
	MyMath::counter += 1;
	return s - k;
}

int MyMath::mult(int s, int k)
{
	MyMath::counter += 1;
	return s * k;
}

float MyMath::div(int s, int k)
{
	MyMath::counter += 1;
	return s / k;
}
