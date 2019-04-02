#include <bits/stdc++.h>

#include "src/game_modes/ctb/ctb_mods_beatmap.cpp"  // import CtbModsBeatmap class
#include "src/game_modes/ctb/ctb_result.cpp"        // import ctb result
#include "src/models.cpp"                           // import base models
#include "src/tools.cpp"                            // import file reader

#include "src/osu_parser.cpp"  // import osu file parser

using namespace std;

const string kOSUFILENAME = "test.osu";

int main() {
    vector<string> *lines = file_read(kOSUFILENAME);
    Beatmap *bm = osu_parse(lines);
    Mods *mods = NULL;
    CtbModsBeatmap *bmc = new CtbModsBeatmap(bm, mods);
    CtbResult *cr = NULL;
    printf("%lf\n", bmc->calc_pp(cr));
    return 0;
}