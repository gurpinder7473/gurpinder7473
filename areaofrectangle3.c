#include<iostream>
using namespace std;
struct Rectangle {
	int width, height;
	Rectangle(int w, int h)
	{
		width = w;
		height = h;
	}
	void areaofRectangle() {
		cout<<"Area of Rectangle is: "<<(width*height); }
};
int main(void) {
	struct Rectangle rec=Rectangle();
	return 0;
}
