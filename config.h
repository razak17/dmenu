/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Dejavu San Mono for Powerline:size=10",
    "JoyPixels:size=10:antialias=true:autohint=true",
};
static const unsigned int bgalpha = OPAQUE;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#bbbbbb", "#1a1a1a"},
    [SchemeSel] = {"#030303", "#7ec0ee"},
    [SchemeSelHighlight] = {"#eeeeee", "#333333"},
    [SchemeNormHighlight] = {"#7ec0ee", "#333333"},
    [SchemeOut] = {"#1e2127", "#7ec0ee"},
};
static const unsigned int alphas[SchemeLast][2] = {
    /*		fgalpha		bgalphga	*/
    [SchemeNorm] = {fgalpha, bgalpha},
    [SchemeSel] = {fgalpha, bgalpha},
    [SchemeOut] = {fgalpha, bgalpha},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 17;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
