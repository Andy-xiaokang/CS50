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
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    // for (int i = 0; i < height; i++)
    // {
    //     for (int j = 0; j < width; j++)
    //     {
    //         if (i == 0 || i == height - 1 || j == 0 || j== width - 1)
    //         {
    //             tmp[i][j].rgbtRed = tmp[i][j].rgbtGreen = tmp[i][j].rgbtBlue = 0;
    //         }
    //     }
    // }
    
    for (int i = 1; i < height-1; i++)
    {
        for (int j = 1; j < width - 1; j++)
        {
            int gxr, gxg, gxb;
            int gyr, gyg, gyb;
            gxr = image[i-1][j-1].rgbtRed*(-1)+ 0 + image[i-1][j+1].rgbtRed + image[i][j-1].rgbtRed*(-2) + 0 + image[i][j+1].rgbtRed*2 + image[i+1][j-1].rgbtRed*(-1) + 0 + image[i+1][j+1].rgbtRed*1;
            gxg = image[i-1][j-1].rgbtGreen*(-1)+ 0 + image[i-1][j+1].rgbtGreen + image[i][j-1].rgbtGreen*(-2) + 0 + image[i][j+1].rgbtGreen*2 + image[i+1][j-1].rgbtGreen*(-1) + 0 + image[i+1][j+1].rgbtGreen*1;
            gxb = image[i-1][j-1].rgbtBlue*(-1)+ 0 + image[i-1][j+1].rgbtBlue + image[i][j-1].rgbtBlue*(-2) + 0 + image[i][j+1].rgbtBlue*2 + image[i+1][j-1].rgbtBlue*(-1) + 0 + image[i+1][j+1].rgbtBlue*1;

            gyr = image[i-1][j-1].rgbtRed*(-1)+ image[i-1][j].rgbtRed*(-2) + image[i-1][j+1].rgbtRed*(-1) + 0 + image[i+1][j-1].rgbtRed*(1)+ image[i+1][j].rgbtRed*(2) + image[i+1][j+1].rgbtRed*(1);
            gyg = image[i-1][j-1].rgbtGreen*(-1)+ image[i-1][j].rgbtGreen*(-2) + image[i-1][j+1].rgbtGreen*(-1) + 0 + image[i+1][j-1].rgbtGreen*(1)+ image[i+1][j].rgbtGreen*(2) + image[i+1][j+1].rgbtGreen*(1);
            gyb = image[i-1][j-1].rgbtBlue*(-1)+ image[i-1][j].rgbtBlue*(-2) + image[i-1][j+1].rgbtBlue*(-1) + 0 + image[i+1][j-1].rgbtBlue*(1)+ image[i+1][j].rgbtBlue*(2) + image[i+1][j+1].rgbtBlue*(1);
            double a = round(sqrt(gxr*gxr+gyr*gyr));
            double b = round(sqrt(gxg*gxg+gyg*gyg));
            double c = round(sqrt(gxb*gxb+gyb*gyb));

            tmp[i][j].rgbtRed =  a > 255 ? 255 : a;
            tmp[i][j].rgbtGreen = b > 255 ? 255 : b;
            tmp[i][j].rgbtBlue = c > 255 ? 255 : c;
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
