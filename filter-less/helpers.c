#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtBlue = (BYTE) round((image[i][j].rgbtBlue+image[i][j].rgbtGreen+image[i][j].rgbtRed)/3.0);
            image[i][j].rgbtGreen = (BYTE) round((image[i][j].rgbtBlue+image[i][j].rgbtGreen+image[i][j].rgbtRed)/3.0);
            image[i][j].rgbtRed = (BYTE) round((image[i][j].rgbtBlue+image[i][j].rgbtGreen+image[i][j].rgbtRed)/3.0);
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiaRed, sepiaGreen, sepiaBlue;
            sepiaRed = (int) round(0.396*image[i][j].rgbtRed + 0.769*image[i][j].rgbtGreen + 0.189*image[i][j].rgbtBlue);
            sepiaGreen = (int) round(0.349*image[i][j].rgbtRed + 0.686*image[i][j].rgbtGreen + 0.168*image[i][j].rgbtBlue);
            sepiaBlue = (int) round(0.272*image[i][j].rgbtRed + 0.534*image[i][j].rgbtGreen + 0.131*image[i][j].rgbtBlue);
            if (sepiaRed > 255)
            {
                image[i][j].rgbtRed = 255;
            }
            else
            {
                image[i][j].rgbtRed = (BYTE) sepiaRed;
            }
            if (sepiaGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }
            else
            {
                image[i][j].rgbtGreen = (BYTE) sepiaGreen;
            }
            if (sepiaBlue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }
            else
            {
                image[i][j].rgbtBlue = (BYTE) sepiaBlue;
            }


        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        RGBTRIPLE buffer;
        for (int j = 0; j < width/2; j++)
        {
            buffer = image[i][j];
            image[i][j] = image[i][width-j-1];
            image[i][width-j-1] = buffer;
        }
    }
    return;
}

// Blur image
//I tried to divided this into corner, edge, and the piexls in the middle, but I found a more fascinating way to solve this problem
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for(int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int rs = 0, gs = 0, bs = 0;
            int pc =0;
            for (int )
        }
    }
    return;
}
