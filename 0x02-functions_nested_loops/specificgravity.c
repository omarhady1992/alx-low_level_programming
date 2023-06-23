#include <stdio.h>

float specific_gravity(float pressure, float temperature, float z) {
  float numerator = pow(pressure / 14.7, 0.1856 - 0.0016 * temperature);
  float denominator = pow(1 + z, 0.3705 - 0.00015 * temperature);
  return numerator / denominator;
}

int main() {
  float pressure = 2353;
  float temperature = 128;
  float z = 0.745;
  float specific_gravity = specific_gravity(pressure, temperature, z);
  printf("Specific gravity = %f\n", specific_gravity);
  return 0;
}
