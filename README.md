This is a simple one way control interface for _Pure Data_
from a QT application. It's a widget plugin for _QT Creator IDE_.

It works with recent _QT Creator 1.x_ and _QT Designer_,
but it is useless with the second.

To compile go to  `./qpd_SockWidg_QtDesigner/`
and use `qmake qpd_SockWidgPlugin.pro` then
`make && make install` it will normally install into:
`/usr/lib/qt4/plugins/designer/`

There will be a library file and the source code directory,
where the header file is meant to be found. This is convinient
to do for me at the moment. Later it will probably install a
library and a header file in `/usr/lib/` and `/usr/include/`.

You also want to append `/usr/lib/qt4/plugins/designer/`
to `/etc/ld.so.conf` file or `LD_LIBRARY_PATH` variable,
also some distributions use `/etc/ld.so.conf.d/` to store
extra library path for local use.

After it had been installed, use `new.csh MY_FIRST_qpd_app`
script and it should all work!

Send questions and suggestions to `errordeveloper at gmail com` please!
