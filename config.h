/* user and group to drop privileges to */
static const char *user  = "lorenzo";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "yellow",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Crazy Leads to Genius!";

/* text color */
static const char * text_color = "yellow";

/* text size (must be a valid size: slock -f) */
static const char * font_name = "-misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-16";
