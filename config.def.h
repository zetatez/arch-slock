/* user and group to drop privileges to */
static const char *user  = "lorenzo";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "green",     /* during input */
	[FAILED] = "gold",      /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Crazy Leads to Genius!";

/* text color */
static const char * text_color = "yellow";

/* text size (must be a valid size: slock -f) */
/* static const char * font_name = "-misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-16"; */
static const char * font_name = "-misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-1";

/* slock -f */
/* -arphic-ar pl new kai extb-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-big5-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-big5.eten-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-cns11643-1 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-cns11643-2 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-gb2312.1980-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-jisx0201.1976-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-jisx0208.1983-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-jisx0208.1990-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-koi8-r */
/* -arphic-ar pl new sung extb-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-big5-0 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-big5.eten-0 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-cns11643-1 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-cns11643-2 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-gb2312.1980-0 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-jisx0201.1976-0 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-jisx0208.1983-0 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-jisx0208.1990-0 */
/* -arphic-ar pl new sung-medium-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-cns11643-1 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-cns11643-2 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-gb2312.1980-0 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-ar pl ukai cn-medium-r-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-cns11643-1 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-cns11643-2 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-gb2312.1980-0 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-ar pl uming cn-light-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu math tex gyre-medium-r-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu math tex gyre-medium-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu math tex gyre-medium-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu math tex gyre-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-6 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-6.8x */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-6.16 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans condensed-bold-r-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans condensed-medium-o-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-6 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-6.8x */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-6.16 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans light-extralight-r-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-ascii-0 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-ibm-cp437 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-ibm-cp850 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-ibm-cp852 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-ibm-cp866 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-1 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-2 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-3 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-4 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-5 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-7 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-9 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-10 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-13 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-15 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso8859-16 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-iso10646-1 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-koi8-e */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-koi8-r */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-koi8-ru */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-koi8-u */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-koi8-uni */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-microsoft-cp1252 */
/* -misc-dejavu sans mono-bold-o-normal--0-0-0-0-m-0-suneu-greek */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-ascii-0 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-ibm-cp437 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-ibm-cp850 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-ibm-cp852 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-ibm-cp866 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-1 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-2 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-3 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-4 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-5 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-6 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-6.8x */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-6.16 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-7 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-9 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-10 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-13 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-15 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-16 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso10646-1 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-koi8-e */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-koi8-r */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-koi8-ru */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-koi8-u */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-koi8-uni */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-microsoft-cp1252 */
/* -misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-suneu-greek */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-ascii-0 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-ibm-cp437 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-ibm-cp850 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-ibm-cp852 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-ibm-cp866 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-1 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-2 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-3 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-4 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-5 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-7 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-9 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-10 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-13 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-15 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso8859-16 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-iso10646-1 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-koi8-e */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-koi8-r */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-koi8-ru */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-koi8-u */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-koi8-uni */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-microsoft-cp1252 */
/* -misc-dejavu sans mono-medium-o-normal--0-0-0-0-m-0-suneu-greek */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-ascii-0 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-ibm-cp437 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-ibm-cp850 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-ibm-cp852 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-ibm-cp866 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-1 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-2 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-3 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-4 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-5 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-6 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-6.8x */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-6.16 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-7 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-9 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-10 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-13 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-15 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso8859-16 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso10646-1 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-koi8-e */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-koi8-r */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-koi8-ru */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-koi8-u */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-koi8-uni */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-microsoft-cp1252 */
/* -misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-suneu-greek */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans-bold-o-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-6 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-6.8x */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-6.16 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans-bold-r-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans-medium-o-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-ibm-cp437 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-6 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-6.8x */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-6.16 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-8 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu sans-medium-r-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif condensed-bold-i-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif condensed-bold-r-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif condensed-medium-i-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif condensed-medium-r-semicondensed--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif-bold-i-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif-bold-r-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif-medium-i-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-adobe-standard */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-ascii-0 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-ibm-cp850 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-ibm-cp852 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-ibm-cp866 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-1 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-2 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-3 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-4 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-5 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-7 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-9 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-10 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-13 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-15 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso8859-16 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-koi8-e */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-koi8-r */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-koi8-ru */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-koi8-u */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-koi8-uni */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-microsoft-cp1252 */
/* -misc-dejavu serif-medium-r-normal--0-0-0-0-p-0-suneu-greek */
/* -misc-fixed-medium-r-semicondensed--13-100-100-100-c-60-iso8859-1 */
/* -misc-fixed-medium-r-semicondensed--13-120-75-75-c-60-iso8859-1 */
/* 6x13 */
/* cursor */
/* fixed */
/* -misc-fixed-medium-r-semicondensed--0-0-75-75-c-0-iso8859-1 */
