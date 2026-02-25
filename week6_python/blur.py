from PIL import Image, ImageFilter

before = Image.open("Gardening (1).jpg")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.jpg")