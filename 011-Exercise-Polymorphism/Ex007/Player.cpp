#include "Player.h"

#include "DesertEagle.h"
#include "Glock.h"
#include <iostream>

void Player::buyPistol(const PistolType pistolType, const int damagePerRound,
                       const int clipSize, const int remainingAmmo) {
  if (PistolType::DESERT_EAGLE == pistolType) {
    _pistol =
        std::make_unique<DesertEagle>(damagePerRound, clipSize, remainingAmmo);
  } else if (PistolType::GLOCK == pistolType) {
    _pistol = std::make_unique<Glock>(damagePerRound, clipSize, remainingAmmo);
  } else {
    std::cout << "Received unsupported PistolType!\n";
  }
}
