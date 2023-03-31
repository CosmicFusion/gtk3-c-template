// Libraries
#include <gtk/gtk.h> // GTK Library
#include <stdio.h> // C IO Library (Not needed)

// Widget Variables
GtkWidget *window; // Window

// Main function
int main(int argc, char *argv[])
{
	GtkBuilder *builder; // GTK Builder variable
	gtk_init(&argc, &argv); // Start GTK

	builder = gtk_builder_new(); // Create GTK UI Builder
	gtk_builder_add_from_file(builder, "myui.glade", NULL); // Load glade UI file

	// Assign the Variables
	window = GTK_WIDGET(gtk_builder_get_object(builder, "Window")); // Load Widget Window

	// Essential for a GTK based program
	gtk_builder_connect_signals(builder, NULL); 
	g_object_unref(builder);
	
	gtk_widget_show_all(window); // Show window
	gtk_main(); // Run gtk program

	return 0;
}

// Function to exit our app
void exit_app()
{
	gtk_main_quit(); // Command to quit a GTK program
}
