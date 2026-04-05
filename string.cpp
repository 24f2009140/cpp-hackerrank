#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string x, y;
    cin >> x >> y;
    cout << x.size() << " " << y.size() << "\n";
    cout << x << y << "\n";
    char c = x[0];
    x[0] = y[0];
    y[0] = c;
    cout << x << " " << y;    
    return 0;
}
