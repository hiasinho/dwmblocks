//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
   /*Icon*/ /*Command*/            /*Update Interval*/	/*Update Signal*/
  /* {"M:",    "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",  30, 0}, */

  {"",      "cat /tmp/recordingicon 2>/dev/null",  0,  9},
  {"",      "battery",          5,  3},
  {"",      "news",             0,  6},
  {"",      "yaypackages",      0,  8},
  {"",      "volume",           0,  10},
  {"",      "memory",           10, 14},
  {"",      "disk",             10, 18},
  {"",      "keymap",           10, 12},
  {"",      "internet",         5,  4},
  {"",      "sb-traffic",       1,  16},
  /* {"",      "weathernow",       3600,  5}, */
  {"",      "clock",            60, 1},
  {"",      "i3strategyzer",    60, 8}
  /* {"",      "date '+%b %d (%a) %I:%M%p'",                               5,  0}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
