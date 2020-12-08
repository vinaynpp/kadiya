#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int noRooms = 0;
    int tileSize = 0;
    int tileBox = 0;
    int lengthMetre;
    int lengthCM;
    int heightMetre;
    int heightCM;
    int widthMetre;
    int widthCM;
    int totalLength;
    int totalWidth;
    int totalHeight;
    int roomTiles = 0;
    int totalTiles = 0;
    int tileCost;
    int roomTilesCost;
    int totalTilesCost = 0;


    int noLitres;
    int paintCost;
    int roomPaintsCost;
    int totalPaintsCost = 0;
    int totalWall;
    int roomPaint;
    int totalPaint = 0;

    int roomCost;
    int totalCost = 0;

    roomTiles++;

    cout << "GREETINGSS!!! " << endl;

    cout << "WELCOME TO E-KADIYA " << endl;

    cout << "Let's talk about money and standards" << endl;

    cout << "First the tiles" << endl;
    cout << "Please enter the number of rooms to be tiled: " << endl;
    cin >> noRooms;
    cout << "Please enter the tile size in centimetres: " << endl;
    cin >> tileSize;
    cout << "Cost of one tile in INR" << endl;
    cin >> tileCost;


    cout << "Now the paint" << endl;
    cout << "How many litres of paint will be required per square Metre?" << endl;
    cin >> noLitres;
    cout << "Cost of paint per Litre in INR" << endl;
    cin >> paintCost;

    for (int i = 0; i < noRooms; i++)
    {
        while (i++ < noRooms)
        {
            cout << "Please enter the room length in Metres, a space, then centimetres: " << endl;
            cin >> lengthMetre >> lengthCM;
            cout << "Please enter the room width in Metres, a space, then centimetres: " << endl;
            cin >> widthMetre >> widthCM;
            cout << "Please enter the room height in Metres, a space, then centimetres: " << endl;
            cin >> heightMetre >> heightCM;

            totalLength = ((lengthMetre * 100) + lengthCM);

            totalWidth = ((widthMetre * 100) + widthCM);
 
            roomTiles = ceil(totalLength / tileSize) * ceil(totalWidth / tileSize);
            totalTiles = (totalTiles + ceil(roomTiles));
            cout << "The room requires: " << roomTiles << " tiles." << endl
                 << endl;

            totalHeight = ((heightMetre * 100) + heightCM);
            totalWall = ((totalLength + totalWidth) * totalHeight * 2);
            roomPaint = ((totalWall /10000 ) * noLitres);
            totalPaint = (totalPaint + roomPaint) ;
            cout << "The room requires: " << roomPaint << " Litres of paint." << endl
                 << endl;
            

            
            roomTilesCost = (roomTiles * tileCost);
            totalTilesCost = (totalTilesCost + roomTilesCost);
            cout << "The room tiles cost is: " << roomTilesCost << " Rupees." << endl
                 << endl;

            roomPaintsCost = (roomPaint * paintCost);
            totalPaintsCost = (totalPaintsCost + roomPaintsCost);
            cout << "The room paint cost is: " << roomPaintsCost << " Rupees." << endl
                 << endl;

            roomCost = (roomTilesCost + roomPaintsCost);
            totalCost = (totalCost + roomCost);
            cout << "The room cost is: " << roomCost << " Rupees." << endl
                 << endl;            




        }
        cout << endl;
    }




    cout << "The total number of tiles required is: " << totalTiles << endl;
    cout << "The total paint required is: " << totalPaint << endl;
    cout << "The total cost of tiles is: " << totalTilesCost <<" Rupees." << endl;
    cout << "The total cost of Paint is: " << totalPaintsCost <<" Rupees." << endl;
    cout << "The total cost is: " << totalCost <<"  Rupees." << endl;




    return 0;
}
