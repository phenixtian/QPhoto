#include "manager.h"

int main(int argc, char *argv[])
{
    return Manager::instance()->startManager(argc, argv);
}
