pkgname=textinfile
pkgver=1.0
pkgrel=1
arch=('any')
license=('MIT')

build() {
    make
}

package() {
    install -Dm755 hello "$pkgdir/usr/bin/textinfile"
}
