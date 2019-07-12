#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = 10;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_1[86];                                   // Tag.BODY
    if (entity_2 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 19; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'i';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER