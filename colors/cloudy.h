static const char *colorname[] = {
  /* 8 normal colors */
  "#1d2a30",
  "#a66363",
  "#63a690",
  "#a6a663",
  "#6385a6",
  "#BF9C86",
  "#63a69b",
  "#c0c5ce",

  /* 8 brightcolors */
  "#456472",
  "#c27171",
  "#6dc2a3",
  "#bfc271",
  "#719bc2",
  "#BF9C86",
  "#71c2af",
  "#eff1f5",

  [255] = 0,

  /* background and foreground colors */
  [256] = "#273941",
  [257] = "#c0c5ce"
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
