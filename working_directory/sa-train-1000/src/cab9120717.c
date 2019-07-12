#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_2[73];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 53;                                       // Tag.BODY
    char entity_0[7];                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_9 = 67;                                       // Tag.BODY
    for(entity_4 = 30; entity_4 < entity_8; entity_4++){ // Tag.BODY
    entity_0[entity_9] = 'J';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_2[entity_4] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER