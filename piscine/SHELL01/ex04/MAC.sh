#!/bin/sh
ifconfig | grep -o -E ".{2}:.{2}:.{2}:.{2}:.{2}:.{2}"
