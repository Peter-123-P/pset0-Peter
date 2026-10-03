#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::to_string;

void pyramid(int n, bool up) 
{
    int largest = 1;
    for (int i = 1; i < n; i++) 
    {
        largest *= 2;
    }
    int w = to_string(largest).size() + 1;
    for (int row = 0; row < n; row++) 
    {
        int level = row;
        if (up == false) 
        {
            level = n - 1 - row;
        }
        int interval = (n - 1 - level) * w;

        for (int i = 0; i < interval; i++) 
        {
            cout << " ";
        }
        int number = 1;

        for (int i = 0; i <= level; i++) 
        {
            cout << number;
            if (level > 0) 
            {
                int digits = to_string(number).size();

                for (int s = 0; s < w - digits; s++) 
                {
                    cout << " ";
                }
            }

            if (i < level)
            {
                number *= 2;
            }
        }

        for (int i = 0; i < level; i++) 
        {
            number /= 2;
            cout << number;

            if (i < level - 1) {
                int digits = to_string(number).size();

                for (int s = 0; s < w - digits; s++) {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./pyramid number up/down\n";
        return 1;
    }

    string text = argv[1];
    int n = 0;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] < '0' || text[i] > '9') {
            cout << "Enter a whole number.\n";
            return 1;
        }

    }

    string dir = argv[2];

    if (dir == "up") {
        pyramid(n, true);
    } else if (dir == "down") {
        pyramid(n, false);
    } else {
        cout << "Choose up or down.\n";
        return 1;
    }
}