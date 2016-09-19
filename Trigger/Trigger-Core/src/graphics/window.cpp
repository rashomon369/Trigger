#include "window.h"

namespace trigger {

	namespace graphics
	{

		void window_resize(GLFWwindow *window, int width, int height);
		void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);
		Window::Window(const char *name, int width, int height)
		{

			m_Name = name;
			m_Width = width;
			m_Height = height;

			if (!init())
				glfwTerminate();

			
		}

		Window::~Window() { 
		
			glfwTerminate(); 
		}

		void Window::clear() const
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		}

		void Window::update() 
		{
			glfwPollEvents();
			//glfwGetFramebufferSize(m_Window, &m_Width, &m_Height);
			
			glfwSwapBuffers(m_Window);
		}

		bool Window::closed() const
		{
			return glfwWindowShouldClose(m_Window) == 1;

		}

		void window_resize(GLFWwindow *window, int width, int height)
		{
			glViewport(0, 0, width, height);

		}

		void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods)
		{
			Window *win = (Window*) glfwGetWindowUserPointer(window);

		}

		bool Window::init()
		{
			if (!glfwInit())
			{
				std::cout << "Failed to initialize..." << std::endl;
				return false;
			}


			m_Window = glfwCreateWindow(m_Width, m_Height, m_Name, NULL, NULL);
			if (!m_Window)
			{
				std::cout << "Failed to create GLFW window" << std::endl;
				return false;
			}
			glfwMakeContextCurrent(m_Window);
			glfwSetWindowUserPointer(m_Window, this);

			glfwSetWindowSizeCallback(m_Window, window_resize);

			std::cout << "GL: " << glGetString(GL_VERSION);

			if (glewInit() != GLEW_OK)
			{
				std::cout << "Failure to initialize GLEW..." << std::endl;
				return false;
			}
			return true;

		}



	}

}