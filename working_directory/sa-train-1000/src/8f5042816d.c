#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_8[10];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_3 = 0;             // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 60;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_1] = '5'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER