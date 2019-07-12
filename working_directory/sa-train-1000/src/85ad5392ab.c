#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_8[79];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = 84;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 31;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 20; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_4] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER