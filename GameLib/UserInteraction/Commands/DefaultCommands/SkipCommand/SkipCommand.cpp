//
// Created by Artem Butko on 30.05.2020.
//

#include "SkipCommand.h"

void SkipCommand::Command()
{
    int number;
    if (player == "B") number = 0;
    else if (player == "D") number = 1;
    else number = 2;

    field->basesOnField[number]->gold++;
}
