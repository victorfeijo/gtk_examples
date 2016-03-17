/* To compile
 * g++ hello_world.cc main.cc -o simple-button `pkg-config gtkmm-3.0 --cflags --libs`
 */

#include "hello_world.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  HelloWorld helloworld;

  //Shows the window and returns when it is closed.
  return app->run(helloworld);
}
