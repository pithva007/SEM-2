import qrcode

qr = qrcode.make("https:///")

qr.show()

qr.save("instagram_qr.png")