#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_9 = 40;                                       // Tag.BODY
    char entity_7[99];                                   // Tag.BODY
    for(entity_3 = 56; entity_3 < entity_9; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[65];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_7[entity_3] = 'v';                            // Tag.BUFWRITE_COND_SAFE
    entity_2 = 0;                                        // Tag.BODY
    entity_8[entity_2] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER