#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_6[43];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_9 = 61;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 62;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 55; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER