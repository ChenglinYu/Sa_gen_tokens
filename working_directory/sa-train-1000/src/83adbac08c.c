#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_6[5];         // Tag.BODY
    entity_2 = 60;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 58;            // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    entity_2 = 69;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 99;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_2] = 'o'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER