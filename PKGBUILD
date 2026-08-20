pkgname=textinfile
pkgver=1.0
pkgrel=1
arch=('x86_64')
license=('MIT')
source=()

build() {
    make -C "$startdir" build
}

package() {
    install -Dm755 "$startdir/textinfile" "$pkgdir/usr/bin/textinfile"
}
