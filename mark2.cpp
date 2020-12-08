#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void GetNoRooms(int &noRooms);
void GetTileSize(int &tileSize);
void GetRoomTiles(int &roomTiles);

int main()
{
    int noRooms = 0;
    int tileSize = 0;
    int lengthFeet;
    int lengthInches;
    int widthFeet;
    int widthInches;
    int totalLength;
    int totalWidth;
    int roomTiles = 0;
    roomTiles++;

    cout << "Please enter the number of rooms to be tiled: " << endl;
    cin >> noRooms;
    cout << "Please enter the tile size in inches: " << endl;
    cin >> tileSize;

    for (int i = 0; i < noRooms; i++)
    {
        while (i++ < noRooms)
        {
            cout << "Please enter the room length in feet, a space, then inches: " << endl;
            cin >> lengthFeet >> lengthInches;
            cout << "Please enter the room width in feet, a space, then inches: " << endl;
            cin >> widthFeet >> widthInches;

            totalLength = ((lengthFeet * 12) + lengthInches);
            cout << totalLength << endl;
            totalWidth = ((widthFeet * 12) + widthInches);
            cout << totalWidth << endl;
            roomTiles = (totalLength / tileSize) * (totalWidth / tileSize);

            cout << "The room requires: " << roomTiles << " tiles." << endl
                 << endl;
        }
        cout << endl;
    }
    void GetTotalTiles(int &totalTiles);
    void GetNoBoxes(int &noBoxes);
    void GetTileBox(int &tileBox);
    {
        int totalTiles = 0;
        int noBoxes = 0;
        int tileBox = 20;
        int extraTiles = 0;
        totalTiles++;
        extraTiles++;

        totalTiles = (roomTiles * noRooms++);
        extraTiles = (widthFeet % tileSize);
        noBoxes = (totalTiles + extraTiles) / tileBox;

        cout << "The total number of tiles required is: " << totalTiles << endl;
        cout << "The total number of tile boxes needed is: " << noBoxes << endl;
        cout << "The number of tiles left over is: " << extraTiles << endl;
    }
    return 0;
}