#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT_default( \
    k00, k01, k02, k03, k04, k05,  k06, k07, k08, k09, k0A, k0B,  k0C, k0D, \
    k10, k11, k12, k13, k14, k15,  k16, k17, k18, k19, k1A, k1B,  k1C, k1D, \
    k20, k21, k22, k23, k24, k25,  k26, k27, k28, k29, k2A, k2B,  k2C, k2D, \
    k30, k31, k32, k33, k34, k35,  k36, k37, k38, k39, k3A, k3B,  k3C, k3D, \
    k40, k41, k42, k43, k44, k45,  k46, k47, k48, k49, k4A, k4B,  k4C, k4D, \
    k50, k51, k52, k53, k54, k55,  k56, k57, k58, k59, k5A, k5B,  k5C, k5D \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D }, \
    { k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B, k5C, k5D } \
}

