#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	randomChump("ZombieOnStack");
	Zombie *ZombieOnHeap = newZombie("ZombieOnHeap");
	ZombieOnHeap->announce();
	delete ZombieOnHeap;
	return 0;
}