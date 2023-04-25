#pragma once

struct InputCommands
{
	bool forward;
	bool back;
	bool right;
	bool left;
	bool rotRight;
	bool rotLeft;

	bool ctrlDown;

	//mouse
	int mouse_X;
	int mouse_Y;
	bool mouseLDown;
	bool mouseRDown;
	bool mouseDrag;
};
