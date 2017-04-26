#include "particle.h"

#include <stdlib.h> // rand

Particle RandomParticle() {
  Particle p;

  // random mass
  p.mass = static_cast<float>(rand() / (static_cast<float>(RAND_MAX/MAX_MASS)));

  // random coordinates
  p.x = static_cast<float>(rand() / (static_cast<float>(RAND_MAX/MAX_X)));
  p.y = static_cast<float>(rand() / (static_cast<float>(RAND_MAX/MAX_Y)));
  p.z = static_cast<float>(rand() / (static_cast<float>(RAND_MAX/MAX_Z)));

  return p;
}
