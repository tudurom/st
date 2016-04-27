static const char *colorname[] = {
  /* 8 normal colors */
  "#2b3135",
  "#a66959",
  "#769070",
  "#ac8d6e",
  "#607a86",
  "#80757e",
  "#60867f",
  "#c4c4b5",
  "#4c5356",

  /* 8 brightcolors */
  "#a66959",
  "#769070",
  "#ac8d6e",
  "#607a86",
  "#80757e",
  "#60867f",
  "#c4c4b5",
  "$COLOR_16$",

  [255] = 0,

  /* background and foreground colors */
  [256] = "#20292d",
  [257] = "#c4c4b5"
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
