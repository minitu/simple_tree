#include "particle.h"

#include <stdio.h> // printf
#include <stdlib.h> // srand
#include <time.h>

#include <vector>
#include <algorithm> // std::generate

#define NUM_PARTICLE 1024

int main(int argc, char* argv[]) {
  // initialize random seed
  srand(time(NULL));

  // create a vector of particles
  std::vector<Particle> particle_vec(NUM_PARTICLE);

  // create random particles
  std::generate(particle_vec.begin(), particle_vec.end(), RandomParticle);

  // print particles info
  for (int i = 0; i < particle_vec.size(); i++) {
    Particle &p = particle_vec[i];
    printf("[%d] mass: %f, pos: (%f, %f, %f)\n", i, p.mass, p.x, p.y, p.z);
  }

  return 0;
}
