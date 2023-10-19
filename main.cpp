#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> read_input();
vector<string> split_str();

int part_1();
int part_2();

int main()
{
    vector<string> data = read_input();

    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }
    
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

int part_1()
{
}
int part_2()
{
}