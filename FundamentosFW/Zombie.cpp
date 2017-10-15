#include "Zombie.h"
#include "stdlib.h"


Zombie::Zombie()
{

}

void Zombie::init(float speed, glm::vec2 position) {
	_speed = speed;
	_position = position;
}

void Zombie::update(const std::vector<std::string>& levelData,
	std::vector<Human*>& humans,
	std::vector<Zombie*>& zombies){
}

void Zombie::update() {
	double x = rand()%100-50;
	x = x / 100;
	double y = rand() % 100 - 50;
	y = y / 100;
	_position.x += x;
	_position.y += y;
}

Zombie::~Zombie()
{
}
