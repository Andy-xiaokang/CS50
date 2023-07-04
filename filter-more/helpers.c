#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtBlue = image[i][j].rgbtGreen =image[i][j].rgbtRed = (BYTE) round((image[i][j].rgbtBlue+image[i][j].rgbtGreen+image[i][j].rgbtRed)/3.0);
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
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for(int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int rs = 0, gs = 0, bs = 0;
            int pc =0;
            for (int row = -1; row <= 1; row++)
            {
                for (int col = -1; col <= 1; col++)
                {
                    if( row + i < 0 || row + i > height - 1)
                    {
                        continue;
                    }
                    if( col + j < 0 || col + j > width - 1)
                    {
                        continue;
                    }
                    pc++;
                    rs += image[i+row][j+col].rgbtRed;
                    gs += image[i+row][j+col].rgbtGreen;
                    bs += image[i+row][j+col].rgbtBlue;

                }
            }
            tmp[i][j].rgbtRed = (BYTE) round(rs/(float)pc);
            tmp[i][j].rgbtGreen = (BYTE) round(gs/(float)pc);
            tmp[i][j].rgbtBlue = (BYTE) round(bs/(float)pc);
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = tmp[i][j];
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIP
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j== width - 1)
            {
                image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlur = 0;
            }
            else
            {

            }
        }
    }
    return;
}
