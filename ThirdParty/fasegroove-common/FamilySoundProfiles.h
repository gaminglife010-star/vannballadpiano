// Copyright (C) 2026 Fabio 'Pitch' Serra
// SPDX-License-Identifier: AGPL-3.0-or-later
#pragma once
#include <algorithm>
#include <array>

// Canonical palette from Fase Groove Arranger 0.4.7. Existing plugin presets
// keep their original indexes and behaviour; these are explicit new choices.
namespace fgfamily {
struct GenreSound {
    int piano,bass,guitar,kit,voicing,strings;
    double pianoTone,bassTone,guitarTone,drumTone,gate,strum,density;
    double pianoGain,bassGain,stringsGain,guitarGain;
};
inline constexpr int numGenres=13;
inline constexpr std::array<const char*,numGenres> names{
    "Genre: Pop Ballad", "Genre: Arpeggio Ballad", "Genre: Power Ballad", "Genre: Indie Pop", "Genre: Dream Pop", "Genre: Singer-Songwriter", "Genre: Lo-fi Chill", "Genre: Ambient & Relax", "Genre: Cinematic Soft", "Genre: Neo-Classical", "Genre: Soft Soul", "Genre: Worship & Hymn", "Genre: Lounge Jazz"
};
inline constexpr std::array<GenreSound,numGenres> sounds{{

        {1,0,1,2,3,3, .40,.28,.32,.42,.92,.22,.40, .60,.80,.24,.20}, // pop ballad: warm grand / wide / wide pad
        {1,0,1,2,3,1, .42,.28,.32,.40,.95,.10,.45, .60,.78,.22,.20}, // arpeggio ballad: grand / pad
        {1,0,1,2,3,3, .55,.30,.40,.50,.85,.20,.55, .62,.84,.26,.25}, // power ballad: bright grand
        {4,4,1,2,0,0, .45,.35,.40,.40,.60,.10,.50, .56,.80,.12,.30}, // indie pop: Wurlitzer
        {0,0,1,3,3,3, .30,.18,.30,.20,1.0,.30,.35, .50,.75,.30,.25}, // dream pop: Rhodes / pad
        {1,0,3,3,1,0, .40,.20,.35,.30,.80,.25,.45, .60,.78,.10,.30}, // singer-songwriter: grand / drop 2
        {0,4,3,3,2,3, .26,.30,.22,.20,.90,.20,.35, .55,.75,.20,.22}, // lo-fi: dark Rhodes / rootless
        {6,0,3,3,10,3, .22,.15,.20,.18,1.1,.35,.25, .44,.73,.28,.20}, // ambient: warm pad / open fifths
        {1,0,1,3,3,3, .38,.22,.30,.25,1.0,.20,.40, .55,.80,.30,.20}, // cinematic: grand / strings
        {1,0,3,3,0,0, .42,.15,.25,.20,1.0,.10,.45, .66,.60,.10,.10}, // neo-classical: grand, close
        {0,4,1,3,2,3, .30,.35,.30,.24,.80,.30,.40, .58,.78,.18,.26}, // soft soul: Rhodes
        {1,0,1,2,3,3, .40,.28,.32,.40,.85,.20,.45, .58,.82,.24,.20}, // worship: grand / pad
        {0,0,1,1,2,0, .30,.20,.30,.30,.60,.25,.40, .56,.76,.12,.24}  // lounge jazz: Rhodes / rootless
}};
inline const GenreSound& sound(int genre) { return sounds[(std::size_t)std::clamp(genre,0,numGenres-1)]; }
inline constexpr std::array<int,numGenres> extensions{5,5,0,5,5,5,2,6,5,4,3,5,2};
inline constexpr std::array<int,numGenres> bassLines{1,0,7,9,10,11,13,15,16,17,18,19,20};
inline constexpr std::array<int,numGenres> tempos{68,72,74,108,70,84,78,60,66,66,76,70,90};
inline constexpr std::array<float,numGenres> swing{0.f,0.f,0.f,.10f,0.f,.10f,.45f,0.f,0.f,0.f,.30f,0.f,.40f};
inline constexpr std::array<double,13> drumLevels{.60,.60,.70,.70,.55,.60,.70,.40,.55,.40,.65,.60,.70};
inline constexpr std::array<int,numGenres> progressions{2,1,0,25,24,5,37,27,32,17,35,3,36};
inline constexpr std::array<const char*,numGenres> progressionNames{"50s Ballad  I - vi - IV - V","Sensitive  vi - IV - I - V","Axis of Pop  I - V - vi - IV","Indie Rise  I - iii - vi - V","Dreamy Lydian  I - II","Acoustic Verse  I - IV - vi - V","Lo-fi Dorian  i - ii - IV - i","Ambient Pair  I - vi","Film Theme  I - V - vi - iii - IV","Melancholy  i - VI - iv - v","Slow Dance  I - vi - ii - V","Hopeful  I - iii - IV - V","Lo-fi Jazz  ii - V - I - vi"};
inline int bassFeel(int genre) { return genre==4||genre==7?1:0; }
inline float bassGate(int genre) { (void) genre; return .85f; }
inline float pianoReverb(int genre) { return genre==4||genre==7?.30f:genre==8?.26f:.18f; }
inline float pianoChorus(int genre) { return genre==4?.15f:genre==6||genre==10?.10f:0.f; }
}
