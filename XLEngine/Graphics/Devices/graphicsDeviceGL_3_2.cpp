/////////////////////////
// This is only a stub
// TO-DO: implement
/////////////////////////
#include <stdlib.h>
#include "graphicsDeviceGL_3_2.h"
#include "../../log.h"

#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glu.h>


GraphicsDeviceGL_3_2::GraphicsDeviceGL_3_2(GraphicsDevicePlatform* platform) : GraphicsDeviceGL(platform)
{
	m_deviceID = GDEV_OPENGL_3_2;
}

GraphicsDeviceGL_3_2::~GraphicsDeviceGL_3_2()
{
}

void GraphicsDeviceGL_3_2::drawVirtualScreen()
{
}

void GraphicsDeviceGL_3_2::setVirtualViewport(bool reset, int x, int y, int w, int h)
{
}

bool GraphicsDeviceGL_3_2::init(int w, int h, int vw, int vh)
{
	return false;
}

bool GraphicsDeviceGL_3_2::supportsShaders()
{
	return true;
}

void GraphicsDeviceGL_3_2::setShader(ShaderID shader)
{
}

void GraphicsDeviceGL_3_2::setShaderResource(TextureHandle handle, u32 nameHash)
{
}

void GraphicsDeviceGL_3_2::drawQuad(const Quad& quad)
{
}

void GraphicsDeviceGL_3_2::drawFullscreenQuad()
{
}