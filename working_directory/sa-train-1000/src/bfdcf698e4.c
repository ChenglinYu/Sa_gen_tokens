#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_1[44];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 30;                                       // Tag.BODY
    if (entity_5 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 78;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 13; entity_8 < entity_5; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER