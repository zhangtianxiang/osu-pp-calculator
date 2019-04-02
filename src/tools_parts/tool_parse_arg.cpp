#ifndef __TOOL_PARSE_ARG__
#define __TOOL_PARSE_ARG__ 1

#include <bits/stdc++.h>

int parse_arg(int x,int l,int r) {
    assert(l <= r);
    return x < l ? l : (x > r ? r : x);
}

#endif