#include "kalman.h"

using namespace vt;

real_t dt = 1.0;
real_t base_noise_value = 0.001;

numeric_matrix<2, 2> F({{1, dt},
                        {0, 1}});
numeric_matrix<2, 1> B({{0},
                        {0}});
numeric_matrix<1, 2> H({{1, 0}});
numeric_matrix<2, 2> Q = numeric_matrix<2, 2>::diagonals(base_noise_value);
numeric_matrix<1, 1> R = numeric_matrix<1, 1>::diagonals(base_noise_value);
numeric_vector<2> x0; // {x, v_x}

kalman_filter_t<2, 1, 1> kf(F, B, H, Q, R, x0);

int main() {
    return 0;
}
