#include <iostream>
#include <fstream>

int main()
{
    std::ofstream MessageFile("msg.txt");
    std::ofstream Append;
    Append.open("copy.txt", std::ios::trunc);

    int counter = 0;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            char c = counter++;
            Append << c << " ";
        }
        Append << "\n";
    }

    std::string buffer;
    std::ifstream GetText("temp.txt");
    while (getline(GetText, buffer))
    {
        Append << buffer << std::endl;
    }

    Append.close();
    GetText.close();

    if (MessageFile.is_open())
    {
        MessageFile << "Hey, how you doing?\n";
    }
    else
    {
        std::cout << "File not opened\n";
    }
    
    MessageFile.close();

    return 0;
}