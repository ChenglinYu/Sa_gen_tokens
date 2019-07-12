#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    char entity_7[58];                                  // Tag.BODY
    entity_2 = 23;                                      // Tag.BODY
    for(entity_4 = 9; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_4] = 'y';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER