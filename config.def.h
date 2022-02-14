/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const char *imgpath          = "img.xpm";
static const int imgwidth           = 1920;
static const int imgheight          = 1080;
static const int imgoffsetx         = 0;
static const int imgoffsety         = 0;
static const int showimgonlyatstart = 1;
