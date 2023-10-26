import cv2


image_path = 'download.png' 


image = cv2.imread(image_path)


if image is not None:
   
    height, width, _ = image.shape

   
    num_channels = image.shape[2]

   
    print(f"Image Size (Width x Height): {width} x {height}")
    print(f"Number of Channels: {num_channels}")

    
    cv2.imshow('Image', image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
else:
    print("Error: Unable to load the image.")

