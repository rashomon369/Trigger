
#include "src/graphics/window.h"
int main()
{
	using namespace trigger;
	using namespace graphics;

	Window window("Trigger", 800, 600);
	glClearColor(0.3f, 0.1f, 0.9f, 1.0f);

	

	while (!window.closed())
	{
		std::cout << window.getWidth() << std::endl;
		std::cout << window.getHeight() << std::endl;
		window.clear();
		window.update();
		

	}
	

	return 0;

}