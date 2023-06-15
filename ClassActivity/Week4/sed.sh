#!/bin/bash

grep -E '([[:digit:]]).*[^[:digit:]]+.*([[:digit:]])|([[:digit:]])[^[:digit:]]+.*([[:digit:]])|([[:digit:]])[^[:digit:]]+([[:digit:]])|([[:digit:]])[^[:digit:]]+([[:digit:]]).*[^[:digit:]]+([[:digit:]])' $1
