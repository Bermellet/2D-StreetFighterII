#ifndef __MODULEPLAYER_H__
#define __MODULEPLAYER_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"
#include "Point.h"

struct SDL_Texture;

class ModulePlayer : public Module
{
public:
	ModulePlayer(bool start_enabled = true);
	~ModulePlayer();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	SDL_Texture* graphics = nullptr;
	Animation idle;
	Animation forward;
	Animation backward;
	iPoint position;

private:
	const int PLAYER_MIN_X = 20;
	const int PLAYER_MAX_X = 550;
	const int PLAYER_MIN_Y = 120;
	const int PLAYER_MAX_Y = 200;
};

#endif // __MODULEPLAYER_H__