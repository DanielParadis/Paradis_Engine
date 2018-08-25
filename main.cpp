#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <GLFW\glfw3.h>
#include "BUS\message_bus.hpp"
#include "shader.hpp"
#include "renderer.hpp"

int main()
{
	// We create a main BUS to send messages between each component
	bus BUS;
	// We define our renderer
	renderer Renderer;
	// We initialize out renderer and point it to our main bus
	Renderer.init(&BUS);
	// Main loop
	shader Shader;
	Shader.loadShader("shader.vert", "shader.frag");
	Shader.useShader();
	while (true)
	{

		Renderer.update();
	}
	return 0;
}