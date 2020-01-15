#pragma once
#ifndef __ENEMY__
#define __ENEMY__

#include "GameObject.h"
#include "TextureManager.h"
#include "SoundManager.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();
	
	// Draw the object
	void draw() override;

	// Update the object
	void update() override;

	// remove anything that needs to be deleted
	void clean()override;
private:
	void _move();

	void _checkBounds();
};


#endif /*defined (__ENEMY__)*/


