// Vann Ballad Piano - based on Fase Groove Piano, Copyright (C) 2026 Fabio 'Pitch' Serra
// Modifications Copyright (C) 2026 Mr. Vann
// SPDX-License-Identifier: AGPL-3.0-or-later

// What the shared module (ThirdParty/fasegroove-common) needs to know about this product.

#include "ProductInfo.h"
#include "Branding.h"
#include "Localisation.h"

#include <BinaryData.h>

namespace
{
    constexpr const char* name = "Vann Ballad Piano";

    // clang-format off
    const Localisation::Entry ownTexts[] {
#include "Translations.inc"
    };
    // clang-format on
}

const FaseGroove::ProductInfo& FaseGroove::product()
{
    static const ProductInfo info { name, "vannballadpiano", "VannBalladPiano", "BALLAD PIANO",
                                    BinaryData::fgp_icon_svg, BinaryData::fgp_icon_svgSize,
                                    nullptr, 0 };
    return info;
}

namespace Branding
{
    const char* const appName   = name;
    const char* const tagline   = "pop ballad, indie pop & relaxing piano";
    const char* const sourceUrl = "https://github.com/YOUR-GITHUB-USERNAME/vannballadpiano";
}

Localisation::Table Localisation::productTranslations()
{
    return { ownTexts, sizeof (ownTexts) / sizeof (ownTexts[0]) };
}
