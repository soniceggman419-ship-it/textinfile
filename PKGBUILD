pkgname=textinfile
pkgver=1.0
pkgrel=1
arch=('x86_64')
license=('MIT')

build() {
    make
}

package() {
    install -Dm755 textinfile "$pkgdir/usr/bin/textinfile"
}
