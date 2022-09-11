#define KEYS 61
static Key keys_en[] = {
	{ "1","!", XK_1, 1 },
	{ "2","@", XK_2, 1 },
	{ "3","#", XK_3, 1 },
	{ "4","$", XK_4, 1 },
	{ "5","%", XK_5, 1 },
	{ "6","^", XK_6, 1 },
	{ "7","&", XK_7, 1 },
	{ "8","*", XK_8, 1 },
	{ "9","(", XK_9, 1 },
	{ "0",")", XK_0, 1 },
	{ "-","_", XK_minus, 1 },
	{ "=","+", XK_plus, 1 },
	{ "< Bksp",0, XK_BackSpace, 2 },
	{ 0 }, /* New row */
	{ "Tab",0, XK_Tab, 1 },
	{ 0, 0, XK_q, 1 },
	{ 0, 0, XK_w, 1 },
	{ 0, 0, XK_e, 1 },
	{ 0, 0, XK_r, 1 },
	{ 0, 0, XK_t, 1 },
	{ 0, 0, XK_y, 1 },
	{ 0, 0, XK_u, 1 },
	{ 0, 0, XK_i, 1 },
	{ 0, 0, XK_o, 1 },
	{ 0, 0, XK_p, 1 },
	{ "[","{", XK_bracketleft, 1 },
	{ "]", "}", XK_bracketright, 1 },
	{ "Enter", 0, XK_Return, 2 },
	{ 0 }, /* New row */
	{ "Escape", 0, XK_Escape, 1 },
	{ 0, 0, XK_a, 1 },
	{ 0, 0, XK_s, 1 },
	{ 0, 0, XK_d, 1 },
	{ 0, 0, XK_f, 1 },
	{ 0, 0, XK_g, 1 },
	{ 0, 0, XK_h, 1 },
	{ 0, 0, XK_j, 1 },
	{ 0, 0, XK_k, 1 },
	{ 0, 0, XK_l, 1 },
	{ ";",":", XK_semicolon, 1 },
	{ "'","\"", XK_exclam, 1 },
	{ "\\", "|", XK_backslash, 1 },
	{ 0 }, /* New row */
	{ "Shift", 0, XK_Shift_L, 1 },
	{ 0, 0, XK_z, 1 },
	{ 0, 0, XK_x, 1 },
	{ 0, 0, XK_c, 1 },
	{ 0, 0, XK_v, 1 },
	{ 0, 0, XK_b, 1 },
	{ 0, 0, XK_n, 1 },
	{ 0, 0, XK_m, 1 },
	{ ",", "<", XK_colon, 1 },
	{ ".", ">", XK_period, 1 },
	{ "/", "?", XK_slash, 1 },
	// { "Up", 0, XK_Up, 1 },
	// { "PrtSc", 0, XK_Print, 1 },
	{ 0 }, /* New row */
	{ "Ctrl",0,  XK_Control_L, 1 },
	{ "Super",0,  XK_Super_L, 1 },
	{ "Alt", 0, XK_Alt_L, 1 },
	{ "", 0, XK_space, 5 },
	{ "Up", 0, XK_Up, 1 },
	{ "Down", 0, XK_Down, 1 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
	{ 0, 0, XK_Cancel },
};

#define LAYERS 1
static char* layer_names[LAYERS] = {
	"en",
};

static Key* available_layers[LAYERS] = {
	keys_en,
};
