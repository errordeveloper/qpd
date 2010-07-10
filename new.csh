#!/bin/tcsh -f
mkdir -p $argv[1] && tar xjvf qpd_New.tbz -C $argv[1]
cd $argv[1] && qtcreator qpd.pro
