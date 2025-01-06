#include "gui.hpp"
#include <gtkmm/application.h>


int main(int argc, char **argv) {
    auto app = Gtk::Application::create("com.github.mrspaar.Todo");
    return app->make_window_and_run<GUI>(argc, argv);
}
