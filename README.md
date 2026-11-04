# Vann Ballad Piano (working name)

A VST3 / AU MIDI piano-part generator for **pop ballad, indie pop and relaxing music**.
Pick a key and a progression, choose a groove (sustained chords, **arpeggios**, soft comping),
listen with the guide sound, then **drag the MIDI clip into your DAW** and play it with your own piano.

Based on **Fase Groove Piano** by Fabio 'Pitch' Serra (https://github.com/wsx79/fasegroovepiano),
used and modified under the **GNU AGPL v3 or later**. Modifications (c) 2026 Mr. Vann.
If you distribute this plug-in you must also make this source code available (see LICENSE).

## What is different from the house version
- 14 genres: Pop Ballad, Arpeggio Ballad, Power Ballad, Indie Pop, Dream Pop, Singer-Songwriter,
  Lo-fi Chill, Ambient & Relax, Cinematic Soft, Neo-Classical, Soft Soul, Worship & Hymn, Lounge Jazz,
  **Soft Rock Ballad**.
- **Editable song arrangement**: 10 rows; each has a kind (Intro, Verse, Pre-Chorus, Chorus, Bridge, Outro),
  up/down arrows, and bars (`-` leaves it out). Default: Intro 8 | Verse 16 | Pre-Chorus 4 | Chorus 16 | Bridge 8 | Outro 8,
  with four spare rows for Verse 2, a second Pre-Chorus and final choruses.
- **Piano melody**: the Melody switch in the Piano panel adds a singable line above the chords (not in intro/outro);
  it exports with the Piano part. Styles "Pop Ballad / Soft Rock / Indie Pop + Melody" switch it on.
- Export tip: ALL puts piano (channel 1), bass (2) and strings (3) in ONE track; use TRACKS for separate tracks.
- 62 grooves, 24 ballad bass lines, 43 progressions, 35 one-click styles + 14 genre presets.
- **Arpeggio steps** (`1`-`8` in the groove grid): play only the Nth note of the chord, notes ring to the next chord.
  Edit them by right-clicking a cell: "Arpeggio: note N".
- NEW RIFF / DICE generate ballad riffs (sustained, arpeggio or soft rhythmic bars).
- Defaults: C major, 72 BPM, no swing, wide add9, long gate.
- The auto-updater is OFF and points to a placeholder (`YOUR-GITHUB-USERNAME`).

## Build
1. Create a GitHub repo, upload this folder, push to `main`.
2. Actions tab -> "Build" -> wait for the green check -> download `VannBalladPiano-Windows`.
3. Copy `VST3/Vann Ballad Piano.vst3` to `C:\Program Files\Common Files\VST3\`.
Local: `cmake -B build -DCMAKE_BUILD_TYPE=Release && cmake --build build --config Release`

## Known limits
The guide sounds are the original synth (renamed); use them only as a preview. Translations other
than English fall back to English for new texts.
