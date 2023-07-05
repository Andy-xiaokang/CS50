#include "helpers.h"
#include "math.h"

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
//reference from a very concise and precise way to calculate
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    int Gx[9] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
    int Gy[9] = {-1, -2, -1, 0, 0, 0, 1, 2, 1};

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int rx = 0, ry = 0;
            int gx = 0, gy = 0;
            int bx = 0, by = 0;
            int index = -1;
            for (int row = -1; row <= 1; row++ )
            {
                for (int col = -1; col <=1; col++)
                {
                    index++;
                    if (i + row < 0 || i + row > height - 1)
                    {
                        continue;
                    }
                    if (j + col < 0 || j + col > height - 1)
                    {
                        continue;
                    }
                    rx += Gx[index]*image[i+row][j+col].rgbtRed;
                    ry += Gy[index]*image[i+row][j+col].rgbtRed;

                    gx += Gx[index]*image[i+row][j+col].rgbtGreen;
                    gy += Gy[index]*image[i+row][j+col].rgbtGreen;

                    bx += Gx[index]*image[i+row][j+col].rgbtBlue;
                    by += Gy[index]*image[i+row][j+col].rgbtBlue;
                }
            }
            tmp[i][j].rgbtRed = round(sqrt(rx*rx+ry*ry)) > 255 ? 255 : round(sqrt(rx*rx+ry*ry));
            tmp[i][j].rgbtGreen = round(sqrt(gx*gx+gy*gy)) > 255 ? 255 : round(sqrt(gx*gx+gy*gy));
            tmp[i][j].rgbtBlue = round(sqrt(bx*bx+by*by)) > 255 ? 255 : round(sqrt(bx*bx+by*by));
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
