#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Main_window : public Gtk::Window{
	public:
		Main_window();
		virtual ~Main_window();
	protected:
		void on_publication_click();
		void on_patron_click();
		void on_help_click();
};
#endif