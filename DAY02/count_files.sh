#!/bin/bash
find . -type f \( -not -path ".*" -o -name "*.*", \) | ls -ln | wc -l
