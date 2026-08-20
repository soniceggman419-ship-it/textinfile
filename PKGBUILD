pkgname=textinfile
pkgver=1.0
pkgrel=1
arch=('x86_64')
license=('MIT')

build() {
    cp "$startdir/Makefile" "$srcdir/Makefile"
    cp "$startdir/textinfile.c" "$srcdir/textinfile.c"
    make -C "$srcdir" build
}

package() {
    install -Dm755 "$srcdir/textinfile" "$pkgdir/usr/bin/textinfile"
}
