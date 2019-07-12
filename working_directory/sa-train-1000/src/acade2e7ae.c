#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    entity_6 = 12;            // Tag.BODY
    char entity_7[0];         // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 3;             // Tag.BODY
    char entity_5[86];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_5[entity_6] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_3 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 66;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER