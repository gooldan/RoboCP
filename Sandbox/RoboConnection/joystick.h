#pragma once

#include "joystickData.h"
#include <SDL.h>

class RealJoystick : public Joystick
{
public:
	RealJoystick();
	uint16_t convert(int JData, bool toinvert);
	virtual void getJoysticState(JoystickData* data);
private:
	SDL_Joystick* joy;
	SDL_Event event;
};