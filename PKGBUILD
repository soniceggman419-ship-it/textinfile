pkgname=textinfile
pkgver=1.0
pkgrel=1
arch=('x86_64')
license=('MIT')

build() {
    gcc textinfile.c -o textinfile
}

package() {
    install -Dm755 textinfile "$pkgdir/usr/bin/textinfile"
}
