
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