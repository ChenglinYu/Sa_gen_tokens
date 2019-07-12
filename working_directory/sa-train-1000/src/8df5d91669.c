#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_0[69];                                  // Tag.BODY
    char entity_8[49];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    int entity_6;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_6 = 4;                                       // Tag.BODY
    entity_1 = 30;                                      // Tag.BODY
    for(entity_2 = 4; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_8[entity_2] = 'M';                           // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_6] = 'y';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER