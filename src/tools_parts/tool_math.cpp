#ifndef __TOOL_MATH__
#define __TOOL_MATH__ 1

#include <bits/stdc++.h>

int clamp_int(int x,int l,int r) {
    assert(l <= r);
    return x < l ? l : (x > r ? r : x);
}

#endif