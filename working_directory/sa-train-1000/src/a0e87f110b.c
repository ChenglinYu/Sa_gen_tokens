#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[21];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_9[7];                                    // Tag.BODY
    entity_7 = 63;                                       // Tag.BODY
    entity_0 = 8;                                        // Tag.BODY
    for(entity_4 = 17; entity_4 < entity_0; entity_4++){ // Tag.BODY
    entity_9[entity_7] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_3[entity_4] = 'P';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER