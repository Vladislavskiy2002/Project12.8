#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "My window" }; // Простое окно

	Circle c1{ Point{845,540} , 50 };						// c - circle
	c1.set_color(Color::blue);

	Circle D_c2{ Point{905,600} , 50 };					 // D - Down  c - circle
	D_c2.set_color(Color::yellow);

	Circle c3{ Point{965,540} , 50 };						// c - circle
	c3.set_color(Color::black);

	Circle D_c4{ Point{1025,600} , 50 };					// D - Down  c - circle
	D_c4.set_color(Color::green);

	Circle c5{ Point{1085,540} , 50 };						// c - circle
	c5.set_color(Color::red);

	c1.set_style(Line_style(Line_style::solid, 15.5));
	D_c2.set_style(Line_style(Line_style::solid, 15.5));
	c3.set_style(Line_style(Line_style::solid, 15.5));
	D_c4.set_style(Line_style(Line_style::solid, 15.5));
	c5.set_style(Line_style(Line_style::solid, 15.5));

	win.attach(c1);
	win.attach(D_c2);
	win.attach(c3);
	win.attach(D_c4);
	win.attach(c5);
	win.wait_for_button();

};