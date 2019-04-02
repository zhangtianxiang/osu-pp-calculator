#ifndef __CTB_MODS_BEATMAP__
#define __CTB_MODS_BEATMAP__ 1

#include "../../models.cpp"
#include "ctb_result.cpp"

class CtbModsBeatmap : Beatmap {
   public:
    CtbModsBeatmap(Beatmap *bm, Mods *mods) {}
    double get_aim() { return 0; }
    double calc_pp(CtbResult *cr) { return 0; }
};

#endif