#include <iostream>
#include <cmath>

using namespace std;

class Point {
	private:
		int x, y;
	public:
		Point(int xVal = 0, int yVal = 0) {
			x = xVal;
			y = yVal;
		}
		
		double operator-(Point point) const {
			int dx = x - point.x;
			int dy = y - point.y;
			return sqrt(dx * dx + dy * dy);
		}
		
		// Display point coordinates
   		void display() const {
        	cout << "(" << x << ", " << y << ")";
    	}
};

int main() {
	Point p1(3, 4);
    Point p2(7, 1);

    p1.display();
    cout << " and ";
    p2.display();

    double dist = p1 - p2;   // Uses overloaded '-' operator

    cout << "\nEuclidean Distance: " << dist << endl;

	return 0;
}
