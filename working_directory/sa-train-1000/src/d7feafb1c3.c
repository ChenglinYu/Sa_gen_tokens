#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_1[9];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 90;                                       // Tag.BODY
    for(entity_7 = 82; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 0;                                        // Tag.BODY
    entity_1[entity_7] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[73];                                   // Tag.BODY
    entity_5[entity_9] = 'L';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER