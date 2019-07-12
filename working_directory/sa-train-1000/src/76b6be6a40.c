#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_5[71];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4 = 31;                                       // Tag.BODY
    for(entity_8 = 82; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 24;                                       // Tag.BODY
    entity_5[entity_8] = 'v';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[1];                                    // Tag.BODY
    entity_7[entity_9] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER