#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_2[21];                                   // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 59;                                       // Tag.BODY
    if (entity_8 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 45;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 68; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER