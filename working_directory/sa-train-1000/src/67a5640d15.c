#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_9[14];                                   // Tag.BODY
    entity_7 = 63;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 15;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 24; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER