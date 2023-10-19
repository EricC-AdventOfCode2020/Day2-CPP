#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> read_input();
vector<string> split_str(string line, char split);

int part_1(const vector<string> data);
int part_2(const vector<string> data);

int main()
{
    vector<string> data = read_input();

    cout << "Part 1:" << part_1(data) << endl;
    cout << "Part 2:" << part_2(data) << endl;

    return 0;
}

vector<string> read_input()
{
    vector<string> data;

    ifstream stream;
    stream.open("./input");

    string line;

    if (stream.is_open())
    {
        while (getline(stream, line))
        {
            data.push_back(line);
        }
    }

    return data;
}
vector<string> split_str(string line, char split)
{
    // i love you stack overflow user "thelazydeveloper"

    stringstream test(line);
    string segment;
    vector<string> subStrings;

    while (getline(test, segment, split))
    {
        subStrings.push_back(segment);
    }

    return subStrings;
}

int part_1(const vector<string> data)
{
    // shit's no longer borked :D

    return 0;
}
int part_2(const vector<string> data)
{
}