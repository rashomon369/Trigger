
#include "src/graphics/window.h"
int main()
{
	using namespace trigger;
	using namespace graphics;

	Window window("Trigger", 960, 540);
	glClearColor(0.3f, 0.1f, 0.9f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	while (!window.closed())
	{
		
		window.clear();

		if (window.isKeyPressed(GLFW_KEY_A))
		{
			std::cout << "Key Pressed" << std::endl;
		}

		if (window.isMouseButtonPressed(GLFW_MOUSE_BUTTON_1))
		{
			std::cout << "bUTTON Pressed" << std::endl;
		}

		double x, y;

		window.getMousePosition(x, y);

		std::cout << "x: " << x << "y: " << y << std::endl;
	

		glBegin(GL_QUADS);
		glVertex2f(0.5, 0.5);
		glVertex2f(-0.5, 0.5);
		glVertex2f(-0.5, -0.5);
		glVertex2f(0.5, -0.5);
		glEnd();


		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
		


	}
	

	return 0;

}