// Fase Groove family - Copyright (C) 2026 Fabio 'Pitch' Serra
// SPDX-License-Identifier: AGPL-3.0-or-later

#pragma once

// App identity (shared by the family): the product's logo (icon + wordmark) and the credits
// artwork. Shared by the editor, the About page and the icon/README renders.

#include <juce_gui_basics/juce_gui_basics.h>

namespace Branding
{
    /** Defined by each product (Source/Product.cpp). */
    extern const char* const appName;
    extern const char* const tagline;
    extern const char* const sourceUrl;

    inline constexpr const char* artist    = "Mr. Vann (based on Fase Groove Piano by Fabio 'Pitch' Serra)";
    inline constexpr const char* licence   = "Free & open source - GNU AGPL v3";

    /** Donation pages (an empty URL hides its button). */
    inline constexpr const char* kofiUrl   = "";
    inline constexpr const char* paypalUrl = "";

    /** Fabio 'Pitch' Serra's artist page on Spotify (empty hides the button). */
    inline constexpr const char* spotifyUrl = "";

    /** The square app icon (FaseGroove::ProductInfo::iconSvg). */
    std::unique_ptr<juce::Drawable> createIcon();

    /** Fabio 'Pitch' Serra's FS PITCH logo (white on transparent). */
    juce::Image artistLogo();

    /** "FASE" + the product's wordmark (e.g. "GROOVE PIANO"), slanted like the FS logo, fitted inside `area`. */
    void drawWordmark (juce::Graphics&, juce::Rectangle<float> area);

    /** Icon on the left, wordmark on the right. */
    void drawFullLogo (juce::Graphics&, juce::Rectangle<float> area);
}
