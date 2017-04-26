#ifndef PARTICLE_H_
#define PARTICLE_H_

#define MAX_MASS 100.0
#define MAX_X 10.0
#define MAX_Y 10.0
#define MAX_Z 10.0

struct Particle {
  float mass;
  float x, y, z;
};

Particle RandomParticle();

#endif // PARTICLE_H_
