#include <iostream>
#include <string>
#include <fstream>
void ltrim(std::string& str)
{
    int pos{};
    while ((pos = str.find(',') ) != std::string::npos) {
        str.erase(str.begin() + pos);
    }
    for (int i = 0; str[i] == ' '; ++i)
    {
        str.erase(str.begin() + i);
        --i;
    }
}
int main() {
    std::string line;
    std::fstream fin("assm.txt");
    std::fstream fout("output.txt");
    if (fin.is_open()) {
        while (!fin.eof()) {
            fin >> line;
            ltrim(line);
            if (!line.empty()) {
                fout << line << std::endl;
            }
            line.clear();
        }
    }
    else {
        std::cout << "File is not open!!!" << std::endl;
    }
    return 0;
}