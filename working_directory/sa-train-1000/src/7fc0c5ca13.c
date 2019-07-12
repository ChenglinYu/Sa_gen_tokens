#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[77];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = 60;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 20;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 16; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER