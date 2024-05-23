#include "utils.h"

float calculate_acceleration(float x, float y, float z) {
    float acceleration = sqrt(x * x + y * y + z * z);
    return acceleration;
}
