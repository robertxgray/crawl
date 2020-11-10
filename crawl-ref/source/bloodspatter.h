/**
 * @file
 * @brief Functions for spattering blood all over the place.
 **/

#pragma once

#include "coord-def.h"
#include "externs.h"

void bleed_onto_floor(const coord_def& where, monster_type mon, int damage,
                      bool spatter = false,
                      const coord_def& from = INVALID_COORD,
                      const bool old_blood = false);
void blood_spray(const coord_def& where, monster_type mon, int level);
void generate_random_blood_spatter_on_level(
                                            const map_bitmask *susceptible_area = nullptr);

// Set FPROP_BLOODY after checking bleedability.
bool maybe_bloodify_square(const coord_def& where);
