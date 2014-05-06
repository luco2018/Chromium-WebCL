/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef VP8_ENCODER_DEFAULTCOEFCOUNTS_H_
#define VP8_ENCODER_DEFAULTCOEFCOUNTS_H_

/* Generated file, included by entropy.c */

static const unsigned int default_coef_counts[BLOCK_TYPES]
                                             [COEF_BANDS]
                                             [PREV_COEF_CONTEXTS]
                                             [MAX_ENTROPY_TOKENS] =
{

    {
        /* Block Type ( 0 ) */
        {
            /* Coeff Band ( 0 ) */
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
        },
        {
            /* Coeff Band ( 1 ) */
            {30190, 26544, 225,  24,   4,   0,   0,   0,   0,   0,   0, 4171593,},
            {26846, 25157, 1241, 130,  26,   6,   1,   0,   0,   0,   0, 149987,},
            {10484, 9538, 1006, 160,  36,  18,   0,   0,   0,   0,   0, 15104,},
        },
        {
            /* Coeff Band ( 2 ) */
            {25842, 40456, 1126,  83,  11,   2,   0,   0,   0,   0,   0,   0,},
            {9338, 8010, 512,  73,   7,   3,   2,   0,   0,   0,   0, 43294,},
            {1047, 751, 149,  31,  13,   6,   1,   0,   0,   0,   0, 879,},
        },
        {
            /* Coeff Band ( 3 ) */
            {26136, 9826, 252,  13,   0,   0,   0,   0,   0,   0,   0,   0,},
            {8134, 5574, 191,  14,   2,   0,   0,   0,   0,   0,   0, 35302,},
            { 605, 677, 116,   9,   1,   0,   0,   0,   0,   0,   0, 611,},
        },
        {
            /* Coeff Band ( 4 ) */
            {10263, 15463, 283,  17,   0,   0,   0,   0,   0,   0,   0,   0,},
            {2773, 2191, 128,   9,   2,   2,   0,   0,   0,   0,   0, 10073,},
            { 134, 125,  32,   4,   0,   2,   0,   0,   0,   0,   0,  50,},
        },
        {
            /* Coeff Band ( 5 ) */
            {10483, 2663,  23,   1,   0,   0,   0,   0,   0,   0,   0,   0,},
            {2137, 1251,  27,   1,   1,   0,   0,   0,   0,   0,   0, 14362,},
            { 116, 156,  14,   2,   1,   0,   0,   0,   0,   0,   0, 190,},
        },
        {
            /* Coeff Band ( 6 ) */
            {40977, 27614, 412,  28,   0,   0,   0,   0,   0,   0,   0,   0,},
            {6113, 5213, 261,  22,   3,   0,   0,   0,   0,   0,   0, 26164,},
            { 382, 312,  50,  14,   2,   0,   0,   0,   0,   0,   0, 345,},
        },
        {
            /* Coeff Band ( 7 ) */
            {   0,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0, 319,},
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,},
        },
    },
    {
        /* Block Type ( 1 ) */
        {
            /* Coeff Band ( 0 ) */
            {3268, 19382, 1043, 250,  93,  82,  49,  26,  17,   8,  25, 82289,},
            {8758, 32110, 5436, 1832, 827, 668, 420, 153,  24,   0,   3, 52914,},
            {9337, 23725, 8487, 3954, 2107, 1836, 1069, 399,  59,   0,   0, 18620,},
        },
        {
            /* Coeff Band ( 1 ) */
            {12419, 8420, 452,  62,   9,   1,   0,   0,   0,   0,   0,   0,},
            {11715, 8705, 693,  92,  15,   7,   2,   0,   0,   0,   0, 53988,},
            {7603, 8585, 2306, 778, 270, 145,  39,   5,   0,   0,   0, 9136,},
        },
        {
            /* Coeff Band ( 2 ) */
            {15938, 14335, 1207, 184,  55,  13,   4,   1,   0,   0,   0,   0,},
            {7415, 6829, 1138, 244,  71,  26,   7,   0,   0,   0,   0, 9980,},
            {1580, 1824, 655, 241,  89,  46,  10,   2,   0,   0,   0, 429,},
        },
        {
            /* Coeff Band ( 3 ) */
            {19453, 5260, 201,  19,   0,   0,   0,   0,   0,   0,   0,   0,},
            {9173, 3758, 213,  22,   1,   1,   0,   0,   0,   0,   0, 9820,},
            {1689, 1277, 276,  51,  17,   4,   0,   0,   0,   0,   0, 679,},
        },
        {
            /* Coeff Band ( 4 ) */
            {12076, 10667, 620,  85,  19,   9,   5,   0,   0,   0,   0,   0,},
            {4665, 3625, 423,  55,  19,   9,   0,   0,   0,   0,   0, 5127,},
            { 415, 440, 143,  34,  20,   7,   2,   0,   0,   0,   0, 101,},
        },
        {
            /* Coeff Band ( 5 ) */
            {12183, 4846, 115,  11,   1,   0,   0,   0,   0,   0,   0,   0,},
            {4226, 3149, 177,  21,   2,   0,   0,   0,   0,   0,   0, 7157,},
            { 375, 621, 189,  51,  11,   4,   1,   0,   0,   0,   0, 198,},
        },
        {
            /* Coeff Band ( 6 ) */
            {61658, 37743, 1203,  94,  10,   3,   0,   0,   0,   0,   0,   0,},
            {15514, 11563, 903, 111,  14,   5,   0,   0,   0,   0,   0, 25195,},
            { 929, 1077, 291,  78,  14,   7,   1,   0,   0,   0,   0, 507,},
        },
        {
            /* Coeff Band ( 7 ) */
            {   0, 990,  15,   3,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0, 412,  13,   0,   0,   0,   0,   0,   0,   0,   0, 1641,},
            {   0,  18,   7,   1,   0,   0,   0,   0,   0,   0,   0,  30,},
        },
    },
    {
        /* Block Type ( 2 ) */
        {
            /* Coeff Band ( 0 ) */
            { 953, 24519, 628, 120,  28,  12,   4,   0,   0,   0,   0, 2248798,},
            {1525, 25654, 2647, 617, 239, 143,  42,   5,   0,   0,   0, 66837,},
            {1180, 11011, 3001, 1237, 532, 448, 239,  54,   5,   0,   0, 7122,},
        },
        {
            /* Coeff Band ( 1 ) */
            {1356, 2220,  67,  10,   4,   1,   0,   0,   0,   0,   0,   0,},
            {1450, 2544, 102,  18,   4,   3,   0,   0,   0,   0,   0, 57063,},
            {1182, 2110, 470, 130,  41,  21,   0,   0,   0,   0,   0, 6047,},
        },
        {
            /* Coeff Band ( 2 ) */
            { 370, 3378, 200,  30,   5,   4,   1,   0,   0,   0,   0,   0,},
            { 293, 1006, 131,  29,  11,   0,   0,   0,   0,   0,   0, 5404,},
            { 114, 387,  98,  23,   4,   8,   1,   0,   0,   0,   0, 236,},
        },
        {
            /* Coeff Band ( 3 ) */
            { 579, 194,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            { 395, 213,   5,   1,   0,   0,   0,   0,   0,   0,   0, 4157,},
            { 119, 122,   4,   0,   0,   0,   0,   0,   0,   0,   0, 300,},
        },
        {
            /* Coeff Band ( 4 ) */
            {  38, 557,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {  21, 114,  12,   1,   0,   0,   0,   0,   0,   0,   0, 427,},
            {   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,},
        },
        {
            /* Coeff Band ( 5 ) */
            {  52,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {  18,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0, 652,},
            {   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,},
        },
        {
            /* Coeff Band ( 6 ) */
            { 640, 569,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {  25,  77,   2,   0,   0,   0,   0,   0,   0,   0,   0, 517,},
            {   4,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,},
        },
        {
            /* Coeff Band ( 7 ) */
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
        },
    },
    {
        /* Block Type ( 3 ) */
        {
            /* Coeff Band ( 0 ) */
            {2506, 20161, 2707, 767, 261, 178, 107,  30,  14,   3,   0, 100694,},
            {8806, 36478, 8817, 3268, 1280, 850, 401, 114,  42,   0,   0, 58572,},
            {11003, 27214, 11798, 5716, 2482, 2072, 1048, 175,  32,   0,   0, 19284,},
        },
        {
            /* Coeff Band ( 1 ) */
            {9738, 11313, 959, 205,  70,  18,  11,   1,   0,   0,   0,   0,},
            {12628, 15085, 1507, 273,  52,  19,   9,   0,   0,   0,   0, 54280,},
            {10701, 15846, 5561, 1926, 813, 570, 249,  36,   0,   0,   0, 6460,},
        },
        {
            /* Coeff Band ( 2 ) */
            {6781, 22539, 2784, 634, 182, 123,  20,   4,   0,   0,   0,   0,},
            {6263, 11544, 2649, 790, 259, 168,  27,   5,   0,   0,   0, 20539,},
            {3109, 4075, 2031, 896, 457, 386, 158,  29,   0,   0,   0, 1138,},
        },
        {
            /* Coeff Band ( 3 ) */
            {11515, 4079, 465,  73,   5,  14,   2,   0,   0,   0,   0,   0,},
            {9361, 5834, 650,  96,  24,   8,   4,   0,   0,   0,   0, 22181,},
            {4343, 3974, 1360, 415, 132,  96,  14,   1,   0,   0,   0, 1267,},
        },
        {
            /* Coeff Band ( 4 ) */
            {4787, 9297, 823, 168,  44,  12,   4,   0,   0,   0,   0,   0,},
            {3619, 4472, 719, 198,  60,  31,   3,   0,   0,   0,   0, 8401,},
            {1157, 1175, 483, 182,  88,  31,   8,   0,   0,   0,   0, 268,},
        },
        {
            /* Coeff Band ( 5 ) */
            {8299, 1226,  32,   5,   1,   0,   0,   0,   0,   0,   0,   0,},
            {3502, 1568,  57,   4,   1,   1,   0,   0,   0,   0,   0, 9811,},
            {1055, 1070, 166,  29,   6,   1,   0,   0,   0,   0,   0, 527,},
        },
        {
            /* Coeff Band ( 6 ) */
            {27414, 27927, 1989, 347,  69,  26,   0,   0,   0,   0,   0,   0,},
            {5876, 10074, 1574, 341,  91,  24,   4,   0,   0,   0,   0, 21954,},
            {1571, 2171, 778, 324, 124,  65,  16,   0,   0,   0,   0, 979,},
        },
        {
            /* Coeff Band ( 7 ) */
            {   0,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,},
            {   0,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0, 459,},
            {   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,},
        },
    },
};

#endif  // VP8_ENCODER_DEFAULTCOEFCOUNTS_H_