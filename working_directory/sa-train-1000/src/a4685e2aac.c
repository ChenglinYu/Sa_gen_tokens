#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[49];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = 22;                                       // Tag.BODY
    if (entity_7 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 14;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 20; entity_2 < entity_7; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER