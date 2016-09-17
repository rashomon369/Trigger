#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
namespace trigger {

	namespace graphics
	{
		class Window
		{
		private:
			int m_Width, m_Height;
			const char *m_Name;
			GLFWwindow *m_Window;
			bool m_closed;

		public:

			Window(const char *name, int width, int height);
			~Window();
			void clear() const;
			void update(); 
			bool closed() const;
			inline int getWidth() const { return m_Width; }
			inline int getHeight() const { return m_Height; }
			

		private:
			bool init();

		};

	}


}