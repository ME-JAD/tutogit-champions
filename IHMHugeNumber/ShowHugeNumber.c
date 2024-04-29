//
// Created by paul- on 29/04/2024.
//
#include "ShowHugeNumber.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *HugeUnsignedIntToString(const HugeUnsignedInt *hugeUnsignedInt) {
    const int stringLength = getHugeUnsignedIntLength(hugeUnsignedInt) + 1;
    char *hugeUnsignedIntInString = NULL;

    if (hugeUnsignedInt != NULL) {
        hugeUnsignedIntInString = malloc(stringLength * sizeof(HugeUnsignedInt));
        if (hugeUnsignedIntInString != NULL) {
            Node *node = hugeUnsignedInt->start;;
            for (int digitCounter = 0; (!isNodeEmpty(node)) && (digitCounter < stringLength); digitCounter++) {
                hugeUnsignedIntInString[digitCounter] = digitToChar(node->digit);
                node = node->next;
            }
            hugeUnsignedIntInString[stringLength - 1] = '\0';
        }
    }

    return hugeUnsignedIntInString;
}

void printHugeUnsignedInt(const HugeUnsignedInt *hugeUnsignedInt) {
    char *hugeUnsignedIntString = HugeUnsignedIntToString(hugeUnsignedInt);
    printf("%s\n", hugeUnsignedIntString);
    free(hugeUnsignedIntString);
}
