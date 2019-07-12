#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 57;            // Tag.BODY
    char entity_1[85];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    entity_7 = 87;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    char entity_9[69];        // Tag.BODY
    char entity_4[71];        // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_7] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 53;            // Tag.BODY
    entity_1[entity_2] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_4[entity_6] = '7'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER