
#include <qapplication.h>
#include "viewer.h"
#include "cube.h"
#include "cylinder.h"
#include "dragon.h"

int main(int argc, char** argv)
{
	// Read command lines arguments.
	QApplication application(argc,argv);

	// Instantiate the viewer.
	Viewer viewer;

	// build your scene here
        //viewer.addRenderable(new Cube());
        //viewer.addRenderable(new Cylinder());
        //viewer.addRenderable(new Model());
        //Dragon *d = new Dragon();
        viewer.addRenderable(new Dragon());

	viewer.setWindowTitle("viewer");
	// Make the viewer window visible on screen.
	viewer.show();

	// Run main loop.
	return application.exec();
}
