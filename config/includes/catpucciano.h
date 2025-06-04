/*                             Catpucciano 34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │      0   1   2   3 │  4   5   6   7     │ │     LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3     │
  │  8   9  10  11  12 │ 13  14  15  16  17 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 18  19  20  21  22 │ 23  24  25  26  27 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────╮ 28  29  30 │ 31  32  33 ╭───────╯ ╰───────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────╯
          ╰────────────┴────────────╯                 ╰─────────────┴─────────────╯             */


#pragma once

#define LT0  3  // left-top row
#define LT1  2
#define LT2  1
#define LT3  0

#define RT0  4  // right-top row
#define RT1  5
#define RT2  6
#define RT3  7

#define LM0 12  // left-middle row
#define LM1 11
#define LM2 10
#define LM3  9
#define LM4  8

#define RM0 13  // right-middle row
#define RM1 14
#define RM2 15
#define RM3 16
#define RM4 17

#define LB0 22  // left-bottom row
#define LB1 21
#define LB2 20
#define LB3 19
#define LB4 18

#define RB0 23  // right-bottom row
#define RB1 24
#define RB2 25
#define RB3 26
#define RB4 27

#define LH0 30  // left thumb keys
#define LH1 29
#define LH2 28

#define RH0 31  // right thumb keys
#define RH1 32
#define RH2 33