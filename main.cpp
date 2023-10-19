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
    int count = 0;

    for (int i = 0; i < data.size(); i++)
    {
        vector<string> sub = split_str(data[i], ':');
        string pass = sub[1];

        vector<string> sub1 = split_str(sub[0], ' ');
        char character = sub1[1][0];

        vector<string> sub2 = split_str(sub1[0], '-');
        int min = stoi(sub2[0]);
        int max = stoi(sub2[1]);

        int appearanceCount = 0;
        for (int j = 0; j < pass.length(); j++)
        {
            if (pass.at(j) == character)
                appearanceCount++;
        }

        if (appearanceCount >= min && appearanceCount <= max)
            count++;
    }

    return count;
}
int part_2(const vector<string> data)
{
    int count = 0;

    for (int i = 0; i < data.size(); i++)
    {
        vector<string> sub = split_str(data[i], ':');
        string pass = sub[1];

        vector<string> sub1 = split_str(sub[0], ' ');
        char character = sub1[1][0];

        vector<string> sub2 = split_str(sub1[0], '-');
        int index1 = stoi(sub2[0]);
        int index2 = stoi(sub2[1]);

        if (pass[index1] == character)
        {
            if (pass[index2] != character)
                count++;
        }
        else if (pass[index2] == character)
        {
            if (pass[index1] != character)
                count++;
        }
    }

    return count;
}