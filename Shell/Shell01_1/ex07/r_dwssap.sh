#!/bin/sh
cat /etc/passwd | cut -d ':' -s -f1 | sed -n '1d;p;n' | rev | sort -r | awk 'NR=='$FT_LINE1', NR=='$FT_LINE2' {print $0}' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g'