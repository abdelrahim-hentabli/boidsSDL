#ifndef CONSTANTS_H
#define CONSTANTS_H

struct boid;

const float PI = 3.14159f;

boid* the_boids;
const int BOIDS_COUNT = 50;

//angle from forward that a boid can see, actual vision size = 2 * BOID_VIEW_ANGLE
const float BOID_VIEW_ANGLE_DEGREES = 120;
const float BOID_VIEW_ANGLE_RADIANS = BOID_VIEW_ANGLE_DEGREES * PI / 180.0;

const float BOID_VIEW_DIST = 2;
const float BOID_VIEW_DIST_SQR = BOID_VIEW_DIST * BOID_VIEW_DIST;

const float BOID_AVOID_DIST = 1.5;
const float BOID_AVOID_DIST_SQR = BOID_AVOID_DIST * BOID_AVOID_DIST;

const float WORLD_X_MIN = -20;
const float WORLD_X_MAX = 20;

const float WORLD_Y_MIN = -11.25;
const float WORLD_Y_MAX = 11.25;


const int SCREEN_WIDTH = 768;
const int SCREEN_HEIGHT = 480;

const float BOID_DRAW_ANGLE_DEGREES = 125;
const float BOID_DRAW_ANGLE_RADIANS = BOID_DRAW_ANGLE_DEGREES * PI / 180.0;



#endif //CONSTANTS_H