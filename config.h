#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "/home/oliver/scripts/dwm/dwm-volume get", 0, 1)   \
    X("", "/home/oliver/scripts/dwm/dwm-brightness get", 0, 2)   \
    X("", "/home/oliver/scripts/dwm/mullvad-vpn", 1, 4)   \
    X("", "/home/oliver/scripts/dwm/dwm-wifi", 1, 3)   \
    X("", "/home/oliver/scripts/dwm/dwm-battery", 5, 9) \
    X("", "date '+%a, %d %b %Y %H:%M'", 1, 10)

#endif  // CONFIG_H
