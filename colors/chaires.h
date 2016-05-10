static const char *colorname[] = {
  /* 8 normal colors */
  "#3d3d49",
  "#a7664a",
  "#6e8c6e",
  "#cba264",
  "#535f6b",
  "#775a62",
  "#576e68",
  "#c3c3c6",

  /* 8 brightcolors */
  "#4b4b56",
  "#a7664a",
  "#6e8c6e",
  "#cba264",
  "#535f6b",
  "#775a62",
  "#576e68",
  "#c3c3c6",

  [255] = 0,

  /* background and foreground colors */
  [256] = "#383844",
  [257] = "#c3c3c6"
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
