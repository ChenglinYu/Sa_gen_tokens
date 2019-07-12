#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    char entity_5[12];                                   // Tag.BODY
    entity_3 = 13;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    if (entity_8 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 8;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 54; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER