static const char *colorname[] = {
  /* 8 normal colors */
  "#2b363e",
  "#785561",
  "#58614f",
  "#7e735a",
  "#424a64",
  "#4d3e4c",
  "#3c5a5d",
  "#7b8695",

  /* 8 brightcolors */
  "#374650",
  "#8a6270",
  "#6d7762",
  "#8d8063",
  "#626c94",
  "#665064",
  "#548084",
  "#94a1b3",

  [255] = 0,

  /* background and foreground colors */
  [256] = "#1b2227",
  [257] = "#7b8695"
};

/* Default colors for foreground, background and cursor */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 11;
static unsigned int defaultunderline = 7;

// vim: set ft=c :
