//테트리스 만들기

#include <iostream>

using namespace std;

int main()
{
    const int width = 12;
    const int height = 24;

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
            {
                cout << "ㅁ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}
