pkgname=textinfile
pkgver=1.0
pkgrel=1
arch=('x86_64')
license=('MIT')

source=()

build() {
    cp "$startdir/Makefile" .
    cp "$startdir/textinfile.c" .
    make build
}

package() {
    install -Dm755 textinfile "$pkgdir/usr/bin/textinfile"
}
