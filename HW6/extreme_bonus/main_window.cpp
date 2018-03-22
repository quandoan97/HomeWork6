#include "main_window.h"

Main_window::Main_window(){
	
	set_default_size(800, 800);

    
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);   

    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    
    Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->add(*toolbar); 

    
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);
	
	Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    filemenu->append(*menuitem_quit);
	
	Gtk::ToolButton *quit_button = Gtk::manage(new Gtk::ToolButton(Gtk::Stock::QUIT));
    quit_button->set_tooltip_markup("Exit Program");
    quit_button->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    Gtk::SeparatorToolItem *sep = Gtk::manage(new Gtk::SeparatorToolItem());
    sep->set_expand(true);  
    toolbar->append(*sep);
    toolbar->append(*quit_button);
	
	Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);
	
	Gtk::MenuItem *patron = Gtk::manage(new Gtk::MenuItem("Patron", true));
	menubar->append(*patron);
	
	Gtk::MenuItem *publication = Gtk::manage(new Gtk::MenuItem("Publication", true));
	menubar->append(*publication);
	Gtk::Menu *publicationmenu = Gtk::manage(new Gtk::Menu());
	publication->set_submenu(*publicationmenu);
	
	Gtk::MenuItem *list = Gtk::manage(new Gtk::MenuItem("List", true));
	publicationmenu->append(*list);
	list->signal_activate().connect().
	
	
	vbox->show_all();
	
	
}
	
	