#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_1[16];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 32;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 92; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER