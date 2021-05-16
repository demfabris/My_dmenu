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


/* Ayu Dark */
static const char col_black[]         = "#0a0e14";
static const char col_dark[]          = "#1c2328";
static const char col_red[]           = "#f07178";
static const char col_green[]         = "#c2d94c";
static const char col_yellow[]        = "#e6b450";
static const char col_blue[]          = "#59c2ff";
static const char col_magenta[]       = "#d4bfff";
static const char col_cyan[]          = "#95e6cb";
static const char col_orange[]        = "#ff8f40";
static const char col_white[]         = "#b3b1ad";
static const char col_gray1[]         = "#232b32";
static const char col_gray2[]         = "#464d5e";

/* Oceanic Next */
/* static const char col_dark[]        = "#131f26"; */
/* static const char col_black[]       = "#1B2B34"; */
/* static const char col_gray1[]       = "#343D46"; */
/* static const char col_gray2[]       = "#4F5B66"; */
/* static const char col_gray3[]       = "#65737E"; */
/* static const char col_gray4[]       = "#A7ADBA"; */
/* static const char col_lightgray[]   = "#C0C5CE"; */
/* static const char col_lightgray1[]  = "#CDD3DE"; */
/* static const char col_white[]       = "#D8DEE9"; */
/* static const char col_red[]         = "#EC5f67"; */
/* static const char col_orange[]      = "#F99157"; */
/* static const char col_yellow[]      = "#FAC863"; */
/* static const char col_green[]       = "#99C794"; */
/* static const char col_cyan[]        = "#5FB3B3"; */
/* static const char col_blue[]        = "#6699CC"; */
/* static const char col_magenta[]     = "#C594C5"; */
/* static const char col_brown[]       = "#AB7967"; */

/* One Dark */
/* static const char col_dark[]        = "#1b1e24"; */
/* static const char col_black[]       = "#282c34"; */
/* static const char col_gray1[]       = "#5c6370"; */
/* static const char col_gray2[]       = "#828997"; */
/* static const char col_white[]       = "#abb2bf"; */
/* static const char col_red[]         = "#e06c75"; */
/* static const char col_red2[]        = "#be5046"; */
/* static const char col_orange[]      = "#d19a66"; */
/* static const char col_yellow[]      = "#e5c07b"; */
/* static const char col_green[]       = "#98c379"; */
/* static const char col_cyan[]        = "#56b6c2"; */
/* static const char col_blue[]        = "#61afef"; */
/* static const char col_magenta[]     = "#c678dd"; */

/* Gruvbox */
/* static const char col_gb_black[]     = "#131515"; */
/* static const char col_gb_bg[]        = "#1d2021"; */
/* static const char col_gb_bgm[]       = "#282828"; */
/* static const char col_gb_bgs[]       = "#32302f"; */
/* static const char col_gb_fg[]        = "#fbf1c7"; */
/* static const char col_gb_red1[]     = "#cc241d"; */
/* static const char col_gb_red2[]     = "#fb4934"; */
/* static const char col_gb_green1[]   = "#98971a"; */
/* static const char col_gb_green2[]   = "#b8bb26"; */
/* static const char col_gb_yellow1[]  = "#d79921"; */
/* static const char col_gb_yellow2[]  = "#fabd2f"; */
/* static const char col_gb_blue1[]    = "#458588"; */
/* static const char col_gb_blue2[]    = "#83a598"; */
/* static const char col_gb_purple1[]  = "#b16286"; */
/* static const char col_gb_purple2[]  = "#83869b"; */
/* static const char col_gb_aqua1[]    = "#689d6a"; */
/* static const char col_gb_aqua2[]    = "#8ec07c"; */
/* static const char col_gb_gray1[]    = "#a89984"; */
/* static const char col_gb_gray2[]    = "#928374"; */
/* static const char col_gb_gray3[]    = "#665c54"; */
/* static const char col_gb_gray4[]    = "#3c3836"; */
/* static const char col_gb_gray5[]    = "#a89984"; */
/* static const char col_gb_orange1[]  = "#d65d0e"; */
/* static const char col_gb_orange2[]  = "#fe8019"; */

// Gruvbox colorscheme
/* static const char *colors[SchemeLast][2] = { */
/* 	/1*     fg         bg       *1/ */
/* 	[SchemeNorm] = { col_gb_fg, col_gb_bg }, */
/* 	[SchemeSel] = { col_gb_blue2, col_gb_bgs }, */
/* 	[SchemeSelHighlight] = { col_gb_orange2, col_gb_bgs}, */
/* 	[SchemeNormHighlight] = { col_gb_blue1, col_gb_gray4}, */
/* 	[SchemeOut] = { col_gb_green2, col_gb_green2}, */
/* }; */

// Oceanic next colorscheme
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_white, col_dark },
	[SchemeSel] = { col_dark, col_blue },
	[SchemeSelHighlight] = { col_red, col_blue },
	[SchemeNormHighlight] = { col_orange, col_dark },
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
