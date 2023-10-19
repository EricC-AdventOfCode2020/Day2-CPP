#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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
    vector<string> subStrings;

    string subLine = "";
    for (int i = 0; i < line.length(); i++)
    {
        // if (line.at(i) != split)
        //     subLine += line.at(i);
        // else
        // {
        //     // subStrings.push_back(subLine);
        //     cout << subLine << endl;
        //     subLine = "";
        // }
        if (line.at(i) == split)
        {
            cout << subLine << endl;
            subStrings.push_back(subLine);
            subLine = ""; 
            continue;
        }

        subLine += line.at(i);
    }

    return subStrings;
}

int part_1(const vector<string> data)
{
    // for (int i = 0; i < data.size(); i++)
    // {
    //     vector<string> sub = split_str(data[i], ':');

    //     for (int j = 0; j < sub.size(); j++)
    //         cout << sub[j] << ' ';
    //     cout << endl;
    // }

    vector<string> sub = split_str(data[0], ':');

    return 0;
}
int part_2(const vector<string> data)
{
}