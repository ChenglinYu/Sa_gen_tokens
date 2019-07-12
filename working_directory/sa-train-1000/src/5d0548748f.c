#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_2[12];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_8 = 97;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_1[66];        // Tag.BODY
    entity_3 = 69;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 29;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = 'o'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_5] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER