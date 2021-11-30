#include<iostream>
using namespace std;
int main() {
	int num, a,n = 0,c=0;
	cout << "Enter size :";
	cin >> num;
	a = num / 2;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			if (c != a) {
				if (j == a + 1)
					cout << "*";
				else
					if (j != a + 1)
						cout << " ";
			}
			
			if(j==a+1)
			if (i == a + 1) {
				for (int k = 0; k < num; k++) {
					if (k == 0)
						cout << endl;
					cout << "*";
				}
			}
			c++;
		}
		cout << endl;
				
	}
}