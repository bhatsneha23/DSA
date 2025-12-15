import qrcode
data = "C:\\Users\\Dell\\OneDrive\\Desktop\\imp2\\WhatsApp Image 2025-07-08 at 00.31.05_98c0f280.jpg"
qr = qrcode.make(data)
qr.save("qrcode.png")
print("qr code generated successfully")
