int** flipAndInvertImage(int** image, int imageSize, int* imageColSize,
                         int* returnSize, int** returnColumnSizes)

{
    int i, j, temp;

    // Reverse each row
    for (i = 0; i < imageSize; i++)
    {
        for (j = 0; j < imageColSize[i] / 2; j++)
        {
            temp = image[i][j];

            image[i][j] = image[i][imageColSize[i] - 1 - j];

            image[i][imageColSize[i] - 1 - j] = temp;
        }
    }

    // Invert 0 and 1
    for (i = 0; i < imageSize; i++)
    {
        for (j = 0; j < imageColSize[i]; j++)
        {
            if (image[i][j] == 0)
            {
                image[i][j] = 1;
            }
            else
            {
                image[i][j] = 0;
            }
        }
    }

    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    return image;
}
