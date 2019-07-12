#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 64;                                       // Tag.BODY
    char entity_9[42];                                   // Tag.BODY
    char entity_8[17];                                   // Tag.BODY
    entity_8[entity_3] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 17;                                       // Tag.BODY
    entity_7 = 34;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_2[37];                                   // Tag.BODY
    for(entity_6 = 96; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_7] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_6] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER