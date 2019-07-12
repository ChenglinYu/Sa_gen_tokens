#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = 50;            // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_6[80];        // Tag.BODY
    entity_7 = 51;            // Tag.BODY
    if(entity_7 < entity_3){  // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 50;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_7] = 'R'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER