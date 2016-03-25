static const char *colorname[] = {
  /* 8 normal colors */
  "#3f3a3c",
  "#784848",
  "#657848",
  "#787848",
  "#486078",
  "#784878",
  "#487979",
  "#d2bbad",
  "#8e7b71",

  /* 8 brightcolors */
  "#883e3e",
  "#5e873e",
  "#87873e",
  "#3e5e87",
  "#873e87",
  "#3e8787",
  "#d2bbad",
  "$COLOR_16$",

  [255] = 0,

  /* background and foreground colors */
  [256] = "#d2bbad",
  [257] = "#3f3a3c"
};

/* Default colors for foreground, background and cursor */
static unsigned int defaultfg = 0;
static unsigned int defaultbg = 7;
static unsigned int defaultcs = 0;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 11;
static unsigned int defaultunderline = 0;

// vim: set ft=c :
