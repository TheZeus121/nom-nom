#include <cstdlib>
#include <cstring>

int main(int argc, char** argv)
{
    if(argc < 2)
        return 0;
    char* tmp = new char[strlen(argv[1]) + 1];
    strcpy(tmp, argv[1]);
    char* command = new char[2 * strlen(tmp) + 12];
    strcpy(command, "mv ");
    strcat(command, tmp);
    strcat(command, ".backup ");
    strcat(command, tmp);
    system(command);
    delete[] command;
    delete[] tmp;
    return 0;
}
