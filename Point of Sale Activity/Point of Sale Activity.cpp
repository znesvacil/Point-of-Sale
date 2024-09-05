#include <iostream>
#include <cassert>
#include "Point_of_Sale.h"
using namespace std;

int main()
{
	Point_of_Sale pos;

	pos.addProduct(10342);
	pos.addProduct(10557);
	pos.addProduct(12151);

	cout << pos.totalSaleValue();
	
}