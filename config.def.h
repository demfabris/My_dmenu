/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fantasque Sans Mono Nerd Font:size=18:autohint=true:antialias=true"
};
static const char *prompt = "Run";      /* -p  option; prompt to the left of input field */

/* Oceanic Next */
static const char col_dark[]        = "#131f26";
static const char col_black[]       = "#1B2B34";
static const char col_gray1[]       = "#343D46";
static const char col_gray2[]       = "#4F5B66";
static const char col_gray3[]       = "#65737E";
static const char col_gray4[]       = "#A7ADBA";
static const char col_lightgray[]   = "#C0C5CE";
static const char col_lightgray1[]  = "#CDD3DE";
static const char col_white[]       = "#D8DEE9";
static const char col_red[]         = "#EC5f67";
static const char col_orange[]      = "#F99157";
static const char col_yellow[]      = "#FAC863";
static const char col_green[]       = "#99C794";
static const char col_cyan[]        = "#5FB3B3";
static const char col_blue[]        = "#6699CC";
static const char col_magenta[]     = "#C594C5";
static const char col_brown[]       = "#AB7967";


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_white, col_black },
	[SchemeSel] = { col_dark, col_yellow },
	[SchemeSelHighlight] = { col_red, col_yellow },
	[SchemeNormHighlight] = { col_cyan, col_black },
	[SchemeOut] = { col_black, col_black },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 3;
