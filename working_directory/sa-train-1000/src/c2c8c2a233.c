#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_5[97];                                   // Tag.BODY
    entity_9 = 74;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    for(entity_6 = 40; entity_6 < entity_9; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[25];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5[entity_6] = 'V';                            // Tag.BUFWRITE_COND_SAFE
    entity_7 = 52;                                       // Tag.BODY
    entity_8[entity_7] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER