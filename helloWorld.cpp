#include <iostream> // std::cout
#include <string>   // std::string std::stof
#include <vector>   // std::vector
#include <sstream>  // std::stringstream
#include <numeric>  // std::iota, std::begin, std::end
#include <ctime>    // random number generator

class Warrior
{
private:
  int maxAttack;
  int maxDefence;

public:
  std::string name;
  int health;

  Warrior(std::string name, int health, int maxAttack, int maxDefence)
  {
    this->name = name;
    this->health = health;
    this->maxAttack = maxAttack;
    this->maxDefence = maxDefence;
  }

  int Attack()
  {
    return std::rand() % this->maxAttack;
  }

  int Defence()
  {
    return std::rand() % this->maxDefence;
  }
};

class Battle
{
public:
  static void startFight(Warrior &warrior1, Warrior &warrior2)
  {
    while (true)
    {
      if (warrior1.health <= 0)
      {
        std::cout << warrior1.name << " : " << warrior1.health << "\n";
        std::cout << warrior2.name << " : " << warrior2.health << "\n";
        std::cout << warrior2.name << " wins\n";
        break;
      }

      int w1Atk = warrior1.Attack();
      int w1Dfc = warrior1.Defence();
      int w2Atk = warrior2.Attack();
      int w2Dfc = warrior2.Defence();

      int w1AtkRes = w1Atk - w2Dfc <= 0 ? 0 : w1Atk - w2Dfc;

      warrior2.health = warrior2.health - w1AtkRes;

      std::cout << warrior1.name << " deals " << w1AtkRes << " damage to " << warrior2.name << "\n";
      std::cout << warrior2.name << " has " << (warrior2.health <= 0 ? 0 : warrior2.health) << " health left\n\n";

      if (warrior2.health <= 0)
      {
        std::cout << warrior1.name << " : " << warrior1.health << "\n";
        std::cout << warrior2.name << " : " << warrior2.health << "\n";
        std::cout << warrior1.name << " wins\n";
        break;
      }

      int w2AtkRes = w2Atk - w1Dfc <= 0 ? 0 : w2Atk - w1Dfc;

      warrior1.health = warrior1.health - w2AtkRes;
      std::cout << warrior2.name << " deals " << w2AtkRes << " damage to " << warrior1.name << "\n";
      std::cout << warrior1.name << " has " << (warrior1.health <= 0 ? 0 : warrior1.health) << " health left\n\n";
    }

    std::cout << "Game Over\n";
  }
};

int main()
{
  srand(time(NULL));
  Warrior thor("Thor", 130, 10, 12);
  Warrior hulk("Hulk", 150, 15, 5);

  Battle::startFight(thor, hulk);

  return 0;
}