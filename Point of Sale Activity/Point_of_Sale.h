#pragma once
#include <string>
class Point_of_Sale
{
	private:
		double totalValue;

	public:

	void addProduct(int code) {
		if (code == 10342) {
			totalValue += .5;
		} else if (code == 10557) {
			totalValue += .45;
		} else if (code == 12151){
			totalValue += .75;
		}
	}

	/*void addProduct(string name) {
		if (name == "Granny Smith Apple") {
			totalValue += .5;
		}
		else if (name == "Banana") {
			totalValue += .45;
		}
		else if (name == "Peach") {
			totalValue += .75;
		}
	}*/

	void removeProduct(int code) {
		if (code == 10342) {
			totalValue -= .5;
		}
		else if (code == 10557) {
			totalValue -= .45;
		}
		else if (code == 12151) {
			totalValue -= .75;
		}
	}

	int totalSaleValue() {
		return totalValue;
	}
	
};

