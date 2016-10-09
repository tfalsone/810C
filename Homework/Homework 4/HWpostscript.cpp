/*
	Name: Thomas Falsone
	Date: 10/6/16
*/
#include <iostream>
using namespace std;

class Postscript {
	public:
		Postscript(string s){}
		void line(int startx, int starty, int endx, int endy){
			
		}
		
		void setColor(int red, int green, int blue){
			
		}
		
		void drawRect(int startx, int starty, int width, int height){
			
		}
		
		void fillRect(int startx, int starty, int width, int height){
			
		}
	
};

int main(){
	Postscript p("test.ps");
	p.line(0,0, 100,100); // default color - black // 0 0 moveto 100 100 lineto stroke
	p.setColor(0.5, 0.0, 0.0); // [red = 0.5, green = 0, blue = 0] 0.5 0 0 setrgbcolor
	
	// 200 300 moveto, 250 300 lineto, 250 650 lineto, 200 650 lineto, closepath stroke
	p.drawRect(200, 300, 50, 350); // x,y,width,height
	p.fillRect(200, 300, 50, 350);
}