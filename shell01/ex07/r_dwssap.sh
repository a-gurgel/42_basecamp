#!/bin/sh
cat /etc/passwd | awk -F":" '{print $1}' | awk "NR%2==0" | rev | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | sed 's/$/,/' |  tr '\n' ' ' | sed 's/..$/./' 