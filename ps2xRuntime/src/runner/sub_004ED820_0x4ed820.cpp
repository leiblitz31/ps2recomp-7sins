#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED820
// Address: 0x4ed820 - 0x4f00d0
void sub_004ED820_0x4ed820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED820_0x4ed820");
#endif

    switch (ctx->pc) {
        case 0x4ed820u: goto label_4ed820;
        case 0x4ed824u: goto label_4ed824;
        case 0x4ed828u: goto label_4ed828;
        case 0x4ed82cu: goto label_4ed82c;
        case 0x4ed830u: goto label_4ed830;
        case 0x4ed834u: goto label_4ed834;
        case 0x4ed838u: goto label_4ed838;
        case 0x4ed83cu: goto label_4ed83c;
        case 0x4ed840u: goto label_4ed840;
        case 0x4ed844u: goto label_4ed844;
        case 0x4ed848u: goto label_4ed848;
        case 0x4ed84cu: goto label_4ed84c;
        case 0x4ed850u: goto label_4ed850;
        case 0x4ed854u: goto label_4ed854;
        case 0x4ed858u: goto label_4ed858;
        case 0x4ed85cu: goto label_4ed85c;
        case 0x4ed860u: goto label_4ed860;
        case 0x4ed864u: goto label_4ed864;
        case 0x4ed868u: goto label_4ed868;
        case 0x4ed86cu: goto label_4ed86c;
        case 0x4ed870u: goto label_4ed870;
        case 0x4ed874u: goto label_4ed874;
        case 0x4ed878u: goto label_4ed878;
        case 0x4ed87cu: goto label_4ed87c;
        case 0x4ed880u: goto label_4ed880;
        case 0x4ed884u: goto label_4ed884;
        case 0x4ed888u: goto label_4ed888;
        case 0x4ed88cu: goto label_4ed88c;
        case 0x4ed890u: goto label_4ed890;
        case 0x4ed894u: goto label_4ed894;
        case 0x4ed898u: goto label_4ed898;
        case 0x4ed89cu: goto label_4ed89c;
        case 0x4ed8a0u: goto label_4ed8a0;
        case 0x4ed8a4u: goto label_4ed8a4;
        case 0x4ed8a8u: goto label_4ed8a8;
        case 0x4ed8acu: goto label_4ed8ac;
        case 0x4ed8b0u: goto label_4ed8b0;
        case 0x4ed8b4u: goto label_4ed8b4;
        case 0x4ed8b8u: goto label_4ed8b8;
        case 0x4ed8bcu: goto label_4ed8bc;
        case 0x4ed8c0u: goto label_4ed8c0;
        case 0x4ed8c4u: goto label_4ed8c4;
        case 0x4ed8c8u: goto label_4ed8c8;
        case 0x4ed8ccu: goto label_4ed8cc;
        case 0x4ed8d0u: goto label_4ed8d0;
        case 0x4ed8d4u: goto label_4ed8d4;
        case 0x4ed8d8u: goto label_4ed8d8;
        case 0x4ed8dcu: goto label_4ed8dc;
        case 0x4ed8e0u: goto label_4ed8e0;
        case 0x4ed8e4u: goto label_4ed8e4;
        case 0x4ed8e8u: goto label_4ed8e8;
        case 0x4ed8ecu: goto label_4ed8ec;
        case 0x4ed8f0u: goto label_4ed8f0;
        case 0x4ed8f4u: goto label_4ed8f4;
        case 0x4ed8f8u: goto label_4ed8f8;
        case 0x4ed8fcu: goto label_4ed8fc;
        case 0x4ed900u: goto label_4ed900;
        case 0x4ed904u: goto label_4ed904;
        case 0x4ed908u: goto label_4ed908;
        case 0x4ed90cu: goto label_4ed90c;
        case 0x4ed910u: goto label_4ed910;
        case 0x4ed914u: goto label_4ed914;
        case 0x4ed918u: goto label_4ed918;
        case 0x4ed91cu: goto label_4ed91c;
        case 0x4ed920u: goto label_4ed920;
        case 0x4ed924u: goto label_4ed924;
        case 0x4ed928u: goto label_4ed928;
        case 0x4ed92cu: goto label_4ed92c;
        case 0x4ed930u: goto label_4ed930;
        case 0x4ed934u: goto label_4ed934;
        case 0x4ed938u: goto label_4ed938;
        case 0x4ed93cu: goto label_4ed93c;
        case 0x4ed940u: goto label_4ed940;
        case 0x4ed944u: goto label_4ed944;
        case 0x4ed948u: goto label_4ed948;
        case 0x4ed94cu: goto label_4ed94c;
        case 0x4ed950u: goto label_4ed950;
        case 0x4ed954u: goto label_4ed954;
        case 0x4ed958u: goto label_4ed958;
        case 0x4ed95cu: goto label_4ed95c;
        case 0x4ed960u: goto label_4ed960;
        case 0x4ed964u: goto label_4ed964;
        case 0x4ed968u: goto label_4ed968;
        case 0x4ed96cu: goto label_4ed96c;
        case 0x4ed970u: goto label_4ed970;
        case 0x4ed974u: goto label_4ed974;
        case 0x4ed978u: goto label_4ed978;
        case 0x4ed97cu: goto label_4ed97c;
        case 0x4ed980u: goto label_4ed980;
        case 0x4ed984u: goto label_4ed984;
        case 0x4ed988u: goto label_4ed988;
        case 0x4ed98cu: goto label_4ed98c;
        case 0x4ed990u: goto label_4ed990;
        case 0x4ed994u: goto label_4ed994;
        case 0x4ed998u: goto label_4ed998;
        case 0x4ed99cu: goto label_4ed99c;
        case 0x4ed9a0u: goto label_4ed9a0;
        case 0x4ed9a4u: goto label_4ed9a4;
        case 0x4ed9a8u: goto label_4ed9a8;
        case 0x4ed9acu: goto label_4ed9ac;
        case 0x4ed9b0u: goto label_4ed9b0;
        case 0x4ed9b4u: goto label_4ed9b4;
        case 0x4ed9b8u: goto label_4ed9b8;
        case 0x4ed9bcu: goto label_4ed9bc;
        case 0x4ed9c0u: goto label_4ed9c0;
        case 0x4ed9c4u: goto label_4ed9c4;
        case 0x4ed9c8u: goto label_4ed9c8;
        case 0x4ed9ccu: goto label_4ed9cc;
        case 0x4ed9d0u: goto label_4ed9d0;
        case 0x4ed9d4u: goto label_4ed9d4;
        case 0x4ed9d8u: goto label_4ed9d8;
        case 0x4ed9dcu: goto label_4ed9dc;
        case 0x4ed9e0u: goto label_4ed9e0;
        case 0x4ed9e4u: goto label_4ed9e4;
        case 0x4ed9e8u: goto label_4ed9e8;
        case 0x4ed9ecu: goto label_4ed9ec;
        case 0x4ed9f0u: goto label_4ed9f0;
        case 0x4ed9f4u: goto label_4ed9f4;
        case 0x4ed9f8u: goto label_4ed9f8;
        case 0x4ed9fcu: goto label_4ed9fc;
        case 0x4eda00u: goto label_4eda00;
        case 0x4eda04u: goto label_4eda04;
        case 0x4eda08u: goto label_4eda08;
        case 0x4eda0cu: goto label_4eda0c;
        case 0x4eda10u: goto label_4eda10;
        case 0x4eda14u: goto label_4eda14;
        case 0x4eda18u: goto label_4eda18;
        case 0x4eda1cu: goto label_4eda1c;
        case 0x4eda20u: goto label_4eda20;
        case 0x4eda24u: goto label_4eda24;
        case 0x4eda28u: goto label_4eda28;
        case 0x4eda2cu: goto label_4eda2c;
        case 0x4eda30u: goto label_4eda30;
        case 0x4eda34u: goto label_4eda34;
        case 0x4eda38u: goto label_4eda38;
        case 0x4eda3cu: goto label_4eda3c;
        case 0x4eda40u: goto label_4eda40;
        case 0x4eda44u: goto label_4eda44;
        case 0x4eda48u: goto label_4eda48;
        case 0x4eda4cu: goto label_4eda4c;
        case 0x4eda50u: goto label_4eda50;
        case 0x4eda54u: goto label_4eda54;
        case 0x4eda58u: goto label_4eda58;
        case 0x4eda5cu: goto label_4eda5c;
        case 0x4eda60u: goto label_4eda60;
        case 0x4eda64u: goto label_4eda64;
        case 0x4eda68u: goto label_4eda68;
        case 0x4eda6cu: goto label_4eda6c;
        case 0x4eda70u: goto label_4eda70;
        case 0x4eda74u: goto label_4eda74;
        case 0x4eda78u: goto label_4eda78;
        case 0x4eda7cu: goto label_4eda7c;
        case 0x4eda80u: goto label_4eda80;
        case 0x4eda84u: goto label_4eda84;
        case 0x4eda88u: goto label_4eda88;
        case 0x4eda8cu: goto label_4eda8c;
        case 0x4eda90u: goto label_4eda90;
        case 0x4eda94u: goto label_4eda94;
        case 0x4eda98u: goto label_4eda98;
        case 0x4eda9cu: goto label_4eda9c;
        case 0x4edaa0u: goto label_4edaa0;
        case 0x4edaa4u: goto label_4edaa4;
        case 0x4edaa8u: goto label_4edaa8;
        case 0x4edaacu: goto label_4edaac;
        case 0x4edab0u: goto label_4edab0;
        case 0x4edab4u: goto label_4edab4;
        case 0x4edab8u: goto label_4edab8;
        case 0x4edabcu: goto label_4edabc;
        case 0x4edac0u: goto label_4edac0;
        case 0x4edac4u: goto label_4edac4;
        case 0x4edac8u: goto label_4edac8;
        case 0x4edaccu: goto label_4edacc;
        case 0x4edad0u: goto label_4edad0;
        case 0x4edad4u: goto label_4edad4;
        case 0x4edad8u: goto label_4edad8;
        case 0x4edadcu: goto label_4edadc;
        case 0x4edae0u: goto label_4edae0;
        case 0x4edae4u: goto label_4edae4;
        case 0x4edae8u: goto label_4edae8;
        case 0x4edaecu: goto label_4edaec;
        case 0x4edaf0u: goto label_4edaf0;
        case 0x4edaf4u: goto label_4edaf4;
        case 0x4edaf8u: goto label_4edaf8;
        case 0x4edafcu: goto label_4edafc;
        case 0x4edb00u: goto label_4edb00;
        case 0x4edb04u: goto label_4edb04;
        case 0x4edb08u: goto label_4edb08;
        case 0x4edb0cu: goto label_4edb0c;
        case 0x4edb10u: goto label_4edb10;
        case 0x4edb14u: goto label_4edb14;
        case 0x4edb18u: goto label_4edb18;
        case 0x4edb1cu: goto label_4edb1c;
        case 0x4edb20u: goto label_4edb20;
        case 0x4edb24u: goto label_4edb24;
        case 0x4edb28u: goto label_4edb28;
        case 0x4edb2cu: goto label_4edb2c;
        case 0x4edb30u: goto label_4edb30;
        case 0x4edb34u: goto label_4edb34;
        case 0x4edb38u: goto label_4edb38;
        case 0x4edb3cu: goto label_4edb3c;
        case 0x4edb40u: goto label_4edb40;
        case 0x4edb44u: goto label_4edb44;
        case 0x4edb48u: goto label_4edb48;
        case 0x4edb4cu: goto label_4edb4c;
        case 0x4edb50u: goto label_4edb50;
        case 0x4edb54u: goto label_4edb54;
        case 0x4edb58u: goto label_4edb58;
        case 0x4edb5cu: goto label_4edb5c;
        case 0x4edb60u: goto label_4edb60;
        case 0x4edb64u: goto label_4edb64;
        case 0x4edb68u: goto label_4edb68;
        case 0x4edb6cu: goto label_4edb6c;
        case 0x4edb70u: goto label_4edb70;
        case 0x4edb74u: goto label_4edb74;
        case 0x4edb78u: goto label_4edb78;
        case 0x4edb7cu: goto label_4edb7c;
        case 0x4edb80u: goto label_4edb80;
        case 0x4edb84u: goto label_4edb84;
        case 0x4edb88u: goto label_4edb88;
        case 0x4edb8cu: goto label_4edb8c;
        case 0x4edb90u: goto label_4edb90;
        case 0x4edb94u: goto label_4edb94;
        case 0x4edb98u: goto label_4edb98;
        case 0x4edb9cu: goto label_4edb9c;
        case 0x4edba0u: goto label_4edba0;
        case 0x4edba4u: goto label_4edba4;
        case 0x4edba8u: goto label_4edba8;
        case 0x4edbacu: goto label_4edbac;
        case 0x4edbb0u: goto label_4edbb0;
        case 0x4edbb4u: goto label_4edbb4;
        case 0x4edbb8u: goto label_4edbb8;
        case 0x4edbbcu: goto label_4edbbc;
        case 0x4edbc0u: goto label_4edbc0;
        case 0x4edbc4u: goto label_4edbc4;
        case 0x4edbc8u: goto label_4edbc8;
        case 0x4edbccu: goto label_4edbcc;
        case 0x4edbd0u: goto label_4edbd0;
        case 0x4edbd4u: goto label_4edbd4;
        case 0x4edbd8u: goto label_4edbd8;
        case 0x4edbdcu: goto label_4edbdc;
        case 0x4edbe0u: goto label_4edbe0;
        case 0x4edbe4u: goto label_4edbe4;
        case 0x4edbe8u: goto label_4edbe8;
        case 0x4edbecu: goto label_4edbec;
        case 0x4edbf0u: goto label_4edbf0;
        case 0x4edbf4u: goto label_4edbf4;
        case 0x4edbf8u: goto label_4edbf8;
        case 0x4edbfcu: goto label_4edbfc;
        case 0x4edc00u: goto label_4edc00;
        case 0x4edc04u: goto label_4edc04;
        case 0x4edc08u: goto label_4edc08;
        case 0x4edc0cu: goto label_4edc0c;
        case 0x4edc10u: goto label_4edc10;
        case 0x4edc14u: goto label_4edc14;
        case 0x4edc18u: goto label_4edc18;
        case 0x4edc1cu: goto label_4edc1c;
        case 0x4edc20u: goto label_4edc20;
        case 0x4edc24u: goto label_4edc24;
        case 0x4edc28u: goto label_4edc28;
        case 0x4edc2cu: goto label_4edc2c;
        case 0x4edc30u: goto label_4edc30;
        case 0x4edc34u: goto label_4edc34;
        case 0x4edc38u: goto label_4edc38;
        case 0x4edc3cu: goto label_4edc3c;
        case 0x4edc40u: goto label_4edc40;
        case 0x4edc44u: goto label_4edc44;
        case 0x4edc48u: goto label_4edc48;
        case 0x4edc4cu: goto label_4edc4c;
        case 0x4edc50u: goto label_4edc50;
        case 0x4edc54u: goto label_4edc54;
        case 0x4edc58u: goto label_4edc58;
        case 0x4edc5cu: goto label_4edc5c;
        case 0x4edc60u: goto label_4edc60;
        case 0x4edc64u: goto label_4edc64;
        case 0x4edc68u: goto label_4edc68;
        case 0x4edc6cu: goto label_4edc6c;
        case 0x4edc70u: goto label_4edc70;
        case 0x4edc74u: goto label_4edc74;
        case 0x4edc78u: goto label_4edc78;
        case 0x4edc7cu: goto label_4edc7c;
        case 0x4edc80u: goto label_4edc80;
        case 0x4edc84u: goto label_4edc84;
        case 0x4edc88u: goto label_4edc88;
        case 0x4edc8cu: goto label_4edc8c;
        case 0x4edc90u: goto label_4edc90;
        case 0x4edc94u: goto label_4edc94;
        case 0x4edc98u: goto label_4edc98;
        case 0x4edc9cu: goto label_4edc9c;
        case 0x4edca0u: goto label_4edca0;
        case 0x4edca4u: goto label_4edca4;
        case 0x4edca8u: goto label_4edca8;
        case 0x4edcacu: goto label_4edcac;
        case 0x4edcb0u: goto label_4edcb0;
        case 0x4edcb4u: goto label_4edcb4;
        case 0x4edcb8u: goto label_4edcb8;
        case 0x4edcbcu: goto label_4edcbc;
        case 0x4edcc0u: goto label_4edcc0;
        case 0x4edcc4u: goto label_4edcc4;
        case 0x4edcc8u: goto label_4edcc8;
        case 0x4edcccu: goto label_4edccc;
        case 0x4edcd0u: goto label_4edcd0;
        case 0x4edcd4u: goto label_4edcd4;
        case 0x4edcd8u: goto label_4edcd8;
        case 0x4edcdcu: goto label_4edcdc;
        case 0x4edce0u: goto label_4edce0;
        case 0x4edce4u: goto label_4edce4;
        case 0x4edce8u: goto label_4edce8;
        case 0x4edcecu: goto label_4edcec;
        case 0x4edcf0u: goto label_4edcf0;
        case 0x4edcf4u: goto label_4edcf4;
        case 0x4edcf8u: goto label_4edcf8;
        case 0x4edcfcu: goto label_4edcfc;
        case 0x4edd00u: goto label_4edd00;
        case 0x4edd04u: goto label_4edd04;
        case 0x4edd08u: goto label_4edd08;
        case 0x4edd0cu: goto label_4edd0c;
        case 0x4edd10u: goto label_4edd10;
        case 0x4edd14u: goto label_4edd14;
        case 0x4edd18u: goto label_4edd18;
        case 0x4edd1cu: goto label_4edd1c;
        case 0x4edd20u: goto label_4edd20;
        case 0x4edd24u: goto label_4edd24;
        case 0x4edd28u: goto label_4edd28;
        case 0x4edd2cu: goto label_4edd2c;
        case 0x4edd30u: goto label_4edd30;
        case 0x4edd34u: goto label_4edd34;
        case 0x4edd38u: goto label_4edd38;
        case 0x4edd3cu: goto label_4edd3c;
        case 0x4edd40u: goto label_4edd40;
        case 0x4edd44u: goto label_4edd44;
        case 0x4edd48u: goto label_4edd48;
        case 0x4edd4cu: goto label_4edd4c;
        case 0x4edd50u: goto label_4edd50;
        case 0x4edd54u: goto label_4edd54;
        case 0x4edd58u: goto label_4edd58;
        case 0x4edd5cu: goto label_4edd5c;
        case 0x4edd60u: goto label_4edd60;
        case 0x4edd64u: goto label_4edd64;
        case 0x4edd68u: goto label_4edd68;
        case 0x4edd6cu: goto label_4edd6c;
        case 0x4edd70u: goto label_4edd70;
        case 0x4edd74u: goto label_4edd74;
        case 0x4edd78u: goto label_4edd78;
        case 0x4edd7cu: goto label_4edd7c;
        case 0x4edd80u: goto label_4edd80;
        case 0x4edd84u: goto label_4edd84;
        case 0x4edd88u: goto label_4edd88;
        case 0x4edd8cu: goto label_4edd8c;
        case 0x4edd90u: goto label_4edd90;
        case 0x4edd94u: goto label_4edd94;
        case 0x4edd98u: goto label_4edd98;
        case 0x4edd9cu: goto label_4edd9c;
        case 0x4edda0u: goto label_4edda0;
        case 0x4edda4u: goto label_4edda4;
        case 0x4edda8u: goto label_4edda8;
        case 0x4eddacu: goto label_4eddac;
        case 0x4eddb0u: goto label_4eddb0;
        case 0x4eddb4u: goto label_4eddb4;
        case 0x4eddb8u: goto label_4eddb8;
        case 0x4eddbcu: goto label_4eddbc;
        case 0x4eddc0u: goto label_4eddc0;
        case 0x4eddc4u: goto label_4eddc4;
        case 0x4eddc8u: goto label_4eddc8;
        case 0x4eddccu: goto label_4eddcc;
        case 0x4eddd0u: goto label_4eddd0;
        case 0x4eddd4u: goto label_4eddd4;
        case 0x4eddd8u: goto label_4eddd8;
        case 0x4edddcu: goto label_4edddc;
        case 0x4edde0u: goto label_4edde0;
        case 0x4edde4u: goto label_4edde4;
        case 0x4edde8u: goto label_4edde8;
        case 0x4eddecu: goto label_4eddec;
        case 0x4eddf0u: goto label_4eddf0;
        case 0x4eddf4u: goto label_4eddf4;
        case 0x4eddf8u: goto label_4eddf8;
        case 0x4eddfcu: goto label_4eddfc;
        case 0x4ede00u: goto label_4ede00;
        case 0x4ede04u: goto label_4ede04;
        case 0x4ede08u: goto label_4ede08;
        case 0x4ede0cu: goto label_4ede0c;
        case 0x4ede10u: goto label_4ede10;
        case 0x4ede14u: goto label_4ede14;
        case 0x4ede18u: goto label_4ede18;
        case 0x4ede1cu: goto label_4ede1c;
        case 0x4ede20u: goto label_4ede20;
        case 0x4ede24u: goto label_4ede24;
        case 0x4ede28u: goto label_4ede28;
        case 0x4ede2cu: goto label_4ede2c;
        case 0x4ede30u: goto label_4ede30;
        case 0x4ede34u: goto label_4ede34;
        case 0x4ede38u: goto label_4ede38;
        case 0x4ede3cu: goto label_4ede3c;
        case 0x4ede40u: goto label_4ede40;
        case 0x4ede44u: goto label_4ede44;
        case 0x4ede48u: goto label_4ede48;
        case 0x4ede4cu: goto label_4ede4c;
        case 0x4ede50u: goto label_4ede50;
        case 0x4ede54u: goto label_4ede54;
        case 0x4ede58u: goto label_4ede58;
        case 0x4ede5cu: goto label_4ede5c;
        case 0x4ede60u: goto label_4ede60;
        case 0x4ede64u: goto label_4ede64;
        case 0x4ede68u: goto label_4ede68;
        case 0x4ede6cu: goto label_4ede6c;
        case 0x4ede70u: goto label_4ede70;
        case 0x4ede74u: goto label_4ede74;
        case 0x4ede78u: goto label_4ede78;
        case 0x4ede7cu: goto label_4ede7c;
        case 0x4ede80u: goto label_4ede80;
        case 0x4ede84u: goto label_4ede84;
        case 0x4ede88u: goto label_4ede88;
        case 0x4ede8cu: goto label_4ede8c;
        case 0x4ede90u: goto label_4ede90;
        case 0x4ede94u: goto label_4ede94;
        case 0x4ede98u: goto label_4ede98;
        case 0x4ede9cu: goto label_4ede9c;
        case 0x4edea0u: goto label_4edea0;
        case 0x4edea4u: goto label_4edea4;
        case 0x4edea8u: goto label_4edea8;
        case 0x4edeacu: goto label_4edeac;
        case 0x4edeb0u: goto label_4edeb0;
        case 0x4edeb4u: goto label_4edeb4;
        case 0x4edeb8u: goto label_4edeb8;
        case 0x4edebcu: goto label_4edebc;
        case 0x4edec0u: goto label_4edec0;
        case 0x4edec4u: goto label_4edec4;
        case 0x4edec8u: goto label_4edec8;
        case 0x4edeccu: goto label_4edecc;
        case 0x4eded0u: goto label_4eded0;
        case 0x4eded4u: goto label_4eded4;
        case 0x4eded8u: goto label_4eded8;
        case 0x4ededcu: goto label_4ededc;
        case 0x4edee0u: goto label_4edee0;
        case 0x4edee4u: goto label_4edee4;
        case 0x4edee8u: goto label_4edee8;
        case 0x4edeecu: goto label_4edeec;
        case 0x4edef0u: goto label_4edef0;
        case 0x4edef4u: goto label_4edef4;
        case 0x4edef8u: goto label_4edef8;
        case 0x4edefcu: goto label_4edefc;
        case 0x4edf00u: goto label_4edf00;
        case 0x4edf04u: goto label_4edf04;
        case 0x4edf08u: goto label_4edf08;
        case 0x4edf0cu: goto label_4edf0c;
        case 0x4edf10u: goto label_4edf10;
        case 0x4edf14u: goto label_4edf14;
        case 0x4edf18u: goto label_4edf18;
        case 0x4edf1cu: goto label_4edf1c;
        case 0x4edf20u: goto label_4edf20;
        case 0x4edf24u: goto label_4edf24;
        case 0x4edf28u: goto label_4edf28;
        case 0x4edf2cu: goto label_4edf2c;
        case 0x4edf30u: goto label_4edf30;
        case 0x4edf34u: goto label_4edf34;
        case 0x4edf38u: goto label_4edf38;
        case 0x4edf3cu: goto label_4edf3c;
        case 0x4edf40u: goto label_4edf40;
        case 0x4edf44u: goto label_4edf44;
        case 0x4edf48u: goto label_4edf48;
        case 0x4edf4cu: goto label_4edf4c;
        case 0x4edf50u: goto label_4edf50;
        case 0x4edf54u: goto label_4edf54;
        case 0x4edf58u: goto label_4edf58;
        case 0x4edf5cu: goto label_4edf5c;
        case 0x4edf60u: goto label_4edf60;
        case 0x4edf64u: goto label_4edf64;
        case 0x4edf68u: goto label_4edf68;
        case 0x4edf6cu: goto label_4edf6c;
        case 0x4edf70u: goto label_4edf70;
        case 0x4edf74u: goto label_4edf74;
        case 0x4edf78u: goto label_4edf78;
        case 0x4edf7cu: goto label_4edf7c;
        case 0x4edf80u: goto label_4edf80;
        case 0x4edf84u: goto label_4edf84;
        case 0x4edf88u: goto label_4edf88;
        case 0x4edf8cu: goto label_4edf8c;
        case 0x4edf90u: goto label_4edf90;
        case 0x4edf94u: goto label_4edf94;
        case 0x4edf98u: goto label_4edf98;
        case 0x4edf9cu: goto label_4edf9c;
        case 0x4edfa0u: goto label_4edfa0;
        case 0x4edfa4u: goto label_4edfa4;
        case 0x4edfa8u: goto label_4edfa8;
        case 0x4edfacu: goto label_4edfac;
        case 0x4edfb0u: goto label_4edfb0;
        case 0x4edfb4u: goto label_4edfb4;
        case 0x4edfb8u: goto label_4edfb8;
        case 0x4edfbcu: goto label_4edfbc;
        case 0x4edfc0u: goto label_4edfc0;
        case 0x4edfc4u: goto label_4edfc4;
        case 0x4edfc8u: goto label_4edfc8;
        case 0x4edfccu: goto label_4edfcc;
        case 0x4edfd0u: goto label_4edfd0;
        case 0x4edfd4u: goto label_4edfd4;
        case 0x4edfd8u: goto label_4edfd8;
        case 0x4edfdcu: goto label_4edfdc;
        case 0x4edfe0u: goto label_4edfe0;
        case 0x4edfe4u: goto label_4edfe4;
        case 0x4edfe8u: goto label_4edfe8;
        case 0x4edfecu: goto label_4edfec;
        case 0x4edff0u: goto label_4edff0;
        case 0x4edff4u: goto label_4edff4;
        case 0x4edff8u: goto label_4edff8;
        case 0x4edffcu: goto label_4edffc;
        case 0x4ee000u: goto label_4ee000;
        case 0x4ee004u: goto label_4ee004;
        case 0x4ee008u: goto label_4ee008;
        case 0x4ee00cu: goto label_4ee00c;
        case 0x4ee010u: goto label_4ee010;
        case 0x4ee014u: goto label_4ee014;
        case 0x4ee018u: goto label_4ee018;
        case 0x4ee01cu: goto label_4ee01c;
        case 0x4ee020u: goto label_4ee020;
        case 0x4ee024u: goto label_4ee024;
        case 0x4ee028u: goto label_4ee028;
        case 0x4ee02cu: goto label_4ee02c;
        case 0x4ee030u: goto label_4ee030;
        case 0x4ee034u: goto label_4ee034;
        case 0x4ee038u: goto label_4ee038;
        case 0x4ee03cu: goto label_4ee03c;
        case 0x4ee040u: goto label_4ee040;
        case 0x4ee044u: goto label_4ee044;
        case 0x4ee048u: goto label_4ee048;
        case 0x4ee04cu: goto label_4ee04c;
        case 0x4ee050u: goto label_4ee050;
        case 0x4ee054u: goto label_4ee054;
        case 0x4ee058u: goto label_4ee058;
        case 0x4ee05cu: goto label_4ee05c;
        case 0x4ee060u: goto label_4ee060;
        case 0x4ee064u: goto label_4ee064;
        case 0x4ee068u: goto label_4ee068;
        case 0x4ee06cu: goto label_4ee06c;
        case 0x4ee070u: goto label_4ee070;
        case 0x4ee074u: goto label_4ee074;
        case 0x4ee078u: goto label_4ee078;
        case 0x4ee07cu: goto label_4ee07c;
        case 0x4ee080u: goto label_4ee080;
        case 0x4ee084u: goto label_4ee084;
        case 0x4ee088u: goto label_4ee088;
        case 0x4ee08cu: goto label_4ee08c;
        case 0x4ee090u: goto label_4ee090;
        case 0x4ee094u: goto label_4ee094;
        case 0x4ee098u: goto label_4ee098;
        case 0x4ee09cu: goto label_4ee09c;
        case 0x4ee0a0u: goto label_4ee0a0;
        case 0x4ee0a4u: goto label_4ee0a4;
        case 0x4ee0a8u: goto label_4ee0a8;
        case 0x4ee0acu: goto label_4ee0ac;
        case 0x4ee0b0u: goto label_4ee0b0;
        case 0x4ee0b4u: goto label_4ee0b4;
        case 0x4ee0b8u: goto label_4ee0b8;
        case 0x4ee0bcu: goto label_4ee0bc;
        case 0x4ee0c0u: goto label_4ee0c0;
        case 0x4ee0c4u: goto label_4ee0c4;
        case 0x4ee0c8u: goto label_4ee0c8;
        case 0x4ee0ccu: goto label_4ee0cc;
        case 0x4ee0d0u: goto label_4ee0d0;
        case 0x4ee0d4u: goto label_4ee0d4;
        case 0x4ee0d8u: goto label_4ee0d8;
        case 0x4ee0dcu: goto label_4ee0dc;
        case 0x4ee0e0u: goto label_4ee0e0;
        case 0x4ee0e4u: goto label_4ee0e4;
        case 0x4ee0e8u: goto label_4ee0e8;
        case 0x4ee0ecu: goto label_4ee0ec;
        case 0x4ee0f0u: goto label_4ee0f0;
        case 0x4ee0f4u: goto label_4ee0f4;
        case 0x4ee0f8u: goto label_4ee0f8;
        case 0x4ee0fcu: goto label_4ee0fc;
        case 0x4ee100u: goto label_4ee100;
        case 0x4ee104u: goto label_4ee104;
        case 0x4ee108u: goto label_4ee108;
        case 0x4ee10cu: goto label_4ee10c;
        case 0x4ee110u: goto label_4ee110;
        case 0x4ee114u: goto label_4ee114;
        case 0x4ee118u: goto label_4ee118;
        case 0x4ee11cu: goto label_4ee11c;
        case 0x4ee120u: goto label_4ee120;
        case 0x4ee124u: goto label_4ee124;
        case 0x4ee128u: goto label_4ee128;
        case 0x4ee12cu: goto label_4ee12c;
        case 0x4ee130u: goto label_4ee130;
        case 0x4ee134u: goto label_4ee134;
        case 0x4ee138u: goto label_4ee138;
        case 0x4ee13cu: goto label_4ee13c;
        case 0x4ee140u: goto label_4ee140;
        case 0x4ee144u: goto label_4ee144;
        case 0x4ee148u: goto label_4ee148;
        case 0x4ee14cu: goto label_4ee14c;
        case 0x4ee150u: goto label_4ee150;
        case 0x4ee154u: goto label_4ee154;
        case 0x4ee158u: goto label_4ee158;
        case 0x4ee15cu: goto label_4ee15c;
        case 0x4ee160u: goto label_4ee160;
        case 0x4ee164u: goto label_4ee164;
        case 0x4ee168u: goto label_4ee168;
        case 0x4ee16cu: goto label_4ee16c;
        case 0x4ee170u: goto label_4ee170;
        case 0x4ee174u: goto label_4ee174;
        case 0x4ee178u: goto label_4ee178;
        case 0x4ee17cu: goto label_4ee17c;
        case 0x4ee180u: goto label_4ee180;
        case 0x4ee184u: goto label_4ee184;
        case 0x4ee188u: goto label_4ee188;
        case 0x4ee18cu: goto label_4ee18c;
        case 0x4ee190u: goto label_4ee190;
        case 0x4ee194u: goto label_4ee194;
        case 0x4ee198u: goto label_4ee198;
        case 0x4ee19cu: goto label_4ee19c;
        case 0x4ee1a0u: goto label_4ee1a0;
        case 0x4ee1a4u: goto label_4ee1a4;
        case 0x4ee1a8u: goto label_4ee1a8;
        case 0x4ee1acu: goto label_4ee1ac;
        case 0x4ee1b0u: goto label_4ee1b0;
        case 0x4ee1b4u: goto label_4ee1b4;
        case 0x4ee1b8u: goto label_4ee1b8;
        case 0x4ee1bcu: goto label_4ee1bc;
        case 0x4ee1c0u: goto label_4ee1c0;
        case 0x4ee1c4u: goto label_4ee1c4;
        case 0x4ee1c8u: goto label_4ee1c8;
        case 0x4ee1ccu: goto label_4ee1cc;
        case 0x4ee1d0u: goto label_4ee1d0;
        case 0x4ee1d4u: goto label_4ee1d4;
        case 0x4ee1d8u: goto label_4ee1d8;
        case 0x4ee1dcu: goto label_4ee1dc;
        case 0x4ee1e0u: goto label_4ee1e0;
        case 0x4ee1e4u: goto label_4ee1e4;
        case 0x4ee1e8u: goto label_4ee1e8;
        case 0x4ee1ecu: goto label_4ee1ec;
        case 0x4ee1f0u: goto label_4ee1f0;
        case 0x4ee1f4u: goto label_4ee1f4;
        case 0x4ee1f8u: goto label_4ee1f8;
        case 0x4ee1fcu: goto label_4ee1fc;
        case 0x4ee200u: goto label_4ee200;
        case 0x4ee204u: goto label_4ee204;
        case 0x4ee208u: goto label_4ee208;
        case 0x4ee20cu: goto label_4ee20c;
        case 0x4ee210u: goto label_4ee210;
        case 0x4ee214u: goto label_4ee214;
        case 0x4ee218u: goto label_4ee218;
        case 0x4ee21cu: goto label_4ee21c;
        case 0x4ee220u: goto label_4ee220;
        case 0x4ee224u: goto label_4ee224;
        case 0x4ee228u: goto label_4ee228;
        case 0x4ee22cu: goto label_4ee22c;
        case 0x4ee230u: goto label_4ee230;
        case 0x4ee234u: goto label_4ee234;
        case 0x4ee238u: goto label_4ee238;
        case 0x4ee23cu: goto label_4ee23c;
        case 0x4ee240u: goto label_4ee240;
        case 0x4ee244u: goto label_4ee244;
        case 0x4ee248u: goto label_4ee248;
        case 0x4ee24cu: goto label_4ee24c;
        case 0x4ee250u: goto label_4ee250;
        case 0x4ee254u: goto label_4ee254;
        case 0x4ee258u: goto label_4ee258;
        case 0x4ee25cu: goto label_4ee25c;
        case 0x4ee260u: goto label_4ee260;
        case 0x4ee264u: goto label_4ee264;
        case 0x4ee268u: goto label_4ee268;
        case 0x4ee26cu: goto label_4ee26c;
        case 0x4ee270u: goto label_4ee270;
        case 0x4ee274u: goto label_4ee274;
        case 0x4ee278u: goto label_4ee278;
        case 0x4ee27cu: goto label_4ee27c;
        case 0x4ee280u: goto label_4ee280;
        case 0x4ee284u: goto label_4ee284;
        case 0x4ee288u: goto label_4ee288;
        case 0x4ee28cu: goto label_4ee28c;
        case 0x4ee290u: goto label_4ee290;
        case 0x4ee294u: goto label_4ee294;
        case 0x4ee298u: goto label_4ee298;
        case 0x4ee29cu: goto label_4ee29c;
        case 0x4ee2a0u: goto label_4ee2a0;
        case 0x4ee2a4u: goto label_4ee2a4;
        case 0x4ee2a8u: goto label_4ee2a8;
        case 0x4ee2acu: goto label_4ee2ac;
        case 0x4ee2b0u: goto label_4ee2b0;
        case 0x4ee2b4u: goto label_4ee2b4;
        case 0x4ee2b8u: goto label_4ee2b8;
        case 0x4ee2bcu: goto label_4ee2bc;
        case 0x4ee2c0u: goto label_4ee2c0;
        case 0x4ee2c4u: goto label_4ee2c4;
        case 0x4ee2c8u: goto label_4ee2c8;
        case 0x4ee2ccu: goto label_4ee2cc;
        case 0x4ee2d0u: goto label_4ee2d0;
        case 0x4ee2d4u: goto label_4ee2d4;
        case 0x4ee2d8u: goto label_4ee2d8;
        case 0x4ee2dcu: goto label_4ee2dc;
        case 0x4ee2e0u: goto label_4ee2e0;
        case 0x4ee2e4u: goto label_4ee2e4;
        case 0x4ee2e8u: goto label_4ee2e8;
        case 0x4ee2ecu: goto label_4ee2ec;
        case 0x4ee2f0u: goto label_4ee2f0;
        case 0x4ee2f4u: goto label_4ee2f4;
        case 0x4ee2f8u: goto label_4ee2f8;
        case 0x4ee2fcu: goto label_4ee2fc;
        case 0x4ee300u: goto label_4ee300;
        case 0x4ee304u: goto label_4ee304;
        case 0x4ee308u: goto label_4ee308;
        case 0x4ee30cu: goto label_4ee30c;
        case 0x4ee310u: goto label_4ee310;
        case 0x4ee314u: goto label_4ee314;
        case 0x4ee318u: goto label_4ee318;
        case 0x4ee31cu: goto label_4ee31c;
        case 0x4ee320u: goto label_4ee320;
        case 0x4ee324u: goto label_4ee324;
        case 0x4ee328u: goto label_4ee328;
        case 0x4ee32cu: goto label_4ee32c;
        case 0x4ee330u: goto label_4ee330;
        case 0x4ee334u: goto label_4ee334;
        case 0x4ee338u: goto label_4ee338;
        case 0x4ee33cu: goto label_4ee33c;
        case 0x4ee340u: goto label_4ee340;
        case 0x4ee344u: goto label_4ee344;
        case 0x4ee348u: goto label_4ee348;
        case 0x4ee34cu: goto label_4ee34c;
        case 0x4ee350u: goto label_4ee350;
        case 0x4ee354u: goto label_4ee354;
        case 0x4ee358u: goto label_4ee358;
        case 0x4ee35cu: goto label_4ee35c;
        case 0x4ee360u: goto label_4ee360;
        case 0x4ee364u: goto label_4ee364;
        case 0x4ee368u: goto label_4ee368;
        case 0x4ee36cu: goto label_4ee36c;
        case 0x4ee370u: goto label_4ee370;
        case 0x4ee374u: goto label_4ee374;
        case 0x4ee378u: goto label_4ee378;
        case 0x4ee37cu: goto label_4ee37c;
        case 0x4ee380u: goto label_4ee380;
        case 0x4ee384u: goto label_4ee384;
        case 0x4ee388u: goto label_4ee388;
        case 0x4ee38cu: goto label_4ee38c;
        case 0x4ee390u: goto label_4ee390;
        case 0x4ee394u: goto label_4ee394;
        case 0x4ee398u: goto label_4ee398;
        case 0x4ee39cu: goto label_4ee39c;
        case 0x4ee3a0u: goto label_4ee3a0;
        case 0x4ee3a4u: goto label_4ee3a4;
        case 0x4ee3a8u: goto label_4ee3a8;
        case 0x4ee3acu: goto label_4ee3ac;
        case 0x4ee3b0u: goto label_4ee3b0;
        case 0x4ee3b4u: goto label_4ee3b4;
        case 0x4ee3b8u: goto label_4ee3b8;
        case 0x4ee3bcu: goto label_4ee3bc;
        case 0x4ee3c0u: goto label_4ee3c0;
        case 0x4ee3c4u: goto label_4ee3c4;
        case 0x4ee3c8u: goto label_4ee3c8;
        case 0x4ee3ccu: goto label_4ee3cc;
        case 0x4ee3d0u: goto label_4ee3d0;
        case 0x4ee3d4u: goto label_4ee3d4;
        case 0x4ee3d8u: goto label_4ee3d8;
        case 0x4ee3dcu: goto label_4ee3dc;
        case 0x4ee3e0u: goto label_4ee3e0;
        case 0x4ee3e4u: goto label_4ee3e4;
        case 0x4ee3e8u: goto label_4ee3e8;
        case 0x4ee3ecu: goto label_4ee3ec;
        case 0x4ee3f0u: goto label_4ee3f0;
        case 0x4ee3f4u: goto label_4ee3f4;
        case 0x4ee3f8u: goto label_4ee3f8;
        case 0x4ee3fcu: goto label_4ee3fc;
        case 0x4ee400u: goto label_4ee400;
        case 0x4ee404u: goto label_4ee404;
        case 0x4ee408u: goto label_4ee408;
        case 0x4ee40cu: goto label_4ee40c;
        case 0x4ee410u: goto label_4ee410;
        case 0x4ee414u: goto label_4ee414;
        case 0x4ee418u: goto label_4ee418;
        case 0x4ee41cu: goto label_4ee41c;
        case 0x4ee420u: goto label_4ee420;
        case 0x4ee424u: goto label_4ee424;
        case 0x4ee428u: goto label_4ee428;
        case 0x4ee42cu: goto label_4ee42c;
        case 0x4ee430u: goto label_4ee430;
        case 0x4ee434u: goto label_4ee434;
        case 0x4ee438u: goto label_4ee438;
        case 0x4ee43cu: goto label_4ee43c;
        case 0x4ee440u: goto label_4ee440;
        case 0x4ee444u: goto label_4ee444;
        case 0x4ee448u: goto label_4ee448;
        case 0x4ee44cu: goto label_4ee44c;
        case 0x4ee450u: goto label_4ee450;
        case 0x4ee454u: goto label_4ee454;
        case 0x4ee458u: goto label_4ee458;
        case 0x4ee45cu: goto label_4ee45c;
        case 0x4ee460u: goto label_4ee460;
        case 0x4ee464u: goto label_4ee464;
        case 0x4ee468u: goto label_4ee468;
        case 0x4ee46cu: goto label_4ee46c;
        case 0x4ee470u: goto label_4ee470;
        case 0x4ee474u: goto label_4ee474;
        case 0x4ee478u: goto label_4ee478;
        case 0x4ee47cu: goto label_4ee47c;
        case 0x4ee480u: goto label_4ee480;
        case 0x4ee484u: goto label_4ee484;
        case 0x4ee488u: goto label_4ee488;
        case 0x4ee48cu: goto label_4ee48c;
        case 0x4ee490u: goto label_4ee490;
        case 0x4ee494u: goto label_4ee494;
        case 0x4ee498u: goto label_4ee498;
        case 0x4ee49cu: goto label_4ee49c;
        case 0x4ee4a0u: goto label_4ee4a0;
        case 0x4ee4a4u: goto label_4ee4a4;
        case 0x4ee4a8u: goto label_4ee4a8;
        case 0x4ee4acu: goto label_4ee4ac;
        case 0x4ee4b0u: goto label_4ee4b0;
        case 0x4ee4b4u: goto label_4ee4b4;
        case 0x4ee4b8u: goto label_4ee4b8;
        case 0x4ee4bcu: goto label_4ee4bc;
        case 0x4ee4c0u: goto label_4ee4c0;
        case 0x4ee4c4u: goto label_4ee4c4;
        case 0x4ee4c8u: goto label_4ee4c8;
        case 0x4ee4ccu: goto label_4ee4cc;
        case 0x4ee4d0u: goto label_4ee4d0;
        case 0x4ee4d4u: goto label_4ee4d4;
        case 0x4ee4d8u: goto label_4ee4d8;
        case 0x4ee4dcu: goto label_4ee4dc;
        case 0x4ee4e0u: goto label_4ee4e0;
        case 0x4ee4e4u: goto label_4ee4e4;
        case 0x4ee4e8u: goto label_4ee4e8;
        case 0x4ee4ecu: goto label_4ee4ec;
        case 0x4ee4f0u: goto label_4ee4f0;
        case 0x4ee4f4u: goto label_4ee4f4;
        case 0x4ee4f8u: goto label_4ee4f8;
        case 0x4ee4fcu: goto label_4ee4fc;
        case 0x4ee500u: goto label_4ee500;
        case 0x4ee504u: goto label_4ee504;
        case 0x4ee508u: goto label_4ee508;
        case 0x4ee50cu: goto label_4ee50c;
        case 0x4ee510u: goto label_4ee510;
        case 0x4ee514u: goto label_4ee514;
        case 0x4ee518u: goto label_4ee518;
        case 0x4ee51cu: goto label_4ee51c;
        case 0x4ee520u: goto label_4ee520;
        case 0x4ee524u: goto label_4ee524;
        case 0x4ee528u: goto label_4ee528;
        case 0x4ee52cu: goto label_4ee52c;
        case 0x4ee530u: goto label_4ee530;
        case 0x4ee534u: goto label_4ee534;
        case 0x4ee538u: goto label_4ee538;
        case 0x4ee53cu: goto label_4ee53c;
        case 0x4ee540u: goto label_4ee540;
        case 0x4ee544u: goto label_4ee544;
        case 0x4ee548u: goto label_4ee548;
        case 0x4ee54cu: goto label_4ee54c;
        case 0x4ee550u: goto label_4ee550;
        case 0x4ee554u: goto label_4ee554;
        case 0x4ee558u: goto label_4ee558;
        case 0x4ee55cu: goto label_4ee55c;
        case 0x4ee560u: goto label_4ee560;
        case 0x4ee564u: goto label_4ee564;
        case 0x4ee568u: goto label_4ee568;
        case 0x4ee56cu: goto label_4ee56c;
        case 0x4ee570u: goto label_4ee570;
        case 0x4ee574u: goto label_4ee574;
        case 0x4ee578u: goto label_4ee578;
        case 0x4ee57cu: goto label_4ee57c;
        case 0x4ee580u: goto label_4ee580;
        case 0x4ee584u: goto label_4ee584;
        case 0x4ee588u: goto label_4ee588;
        case 0x4ee58cu: goto label_4ee58c;
        case 0x4ee590u: goto label_4ee590;
        case 0x4ee594u: goto label_4ee594;
        case 0x4ee598u: goto label_4ee598;
        case 0x4ee59cu: goto label_4ee59c;
        case 0x4ee5a0u: goto label_4ee5a0;
        case 0x4ee5a4u: goto label_4ee5a4;
        case 0x4ee5a8u: goto label_4ee5a8;
        case 0x4ee5acu: goto label_4ee5ac;
        case 0x4ee5b0u: goto label_4ee5b0;
        case 0x4ee5b4u: goto label_4ee5b4;
        case 0x4ee5b8u: goto label_4ee5b8;
        case 0x4ee5bcu: goto label_4ee5bc;
        case 0x4ee5c0u: goto label_4ee5c0;
        case 0x4ee5c4u: goto label_4ee5c4;
        case 0x4ee5c8u: goto label_4ee5c8;
        case 0x4ee5ccu: goto label_4ee5cc;
        case 0x4ee5d0u: goto label_4ee5d0;
        case 0x4ee5d4u: goto label_4ee5d4;
        case 0x4ee5d8u: goto label_4ee5d8;
        case 0x4ee5dcu: goto label_4ee5dc;
        case 0x4ee5e0u: goto label_4ee5e0;
        case 0x4ee5e4u: goto label_4ee5e4;
        case 0x4ee5e8u: goto label_4ee5e8;
        case 0x4ee5ecu: goto label_4ee5ec;
        case 0x4ee5f0u: goto label_4ee5f0;
        case 0x4ee5f4u: goto label_4ee5f4;
        case 0x4ee5f8u: goto label_4ee5f8;
        case 0x4ee5fcu: goto label_4ee5fc;
        case 0x4ee600u: goto label_4ee600;
        case 0x4ee604u: goto label_4ee604;
        case 0x4ee608u: goto label_4ee608;
        case 0x4ee60cu: goto label_4ee60c;
        case 0x4ee610u: goto label_4ee610;
        case 0x4ee614u: goto label_4ee614;
        case 0x4ee618u: goto label_4ee618;
        case 0x4ee61cu: goto label_4ee61c;
        case 0x4ee620u: goto label_4ee620;
        case 0x4ee624u: goto label_4ee624;
        case 0x4ee628u: goto label_4ee628;
        case 0x4ee62cu: goto label_4ee62c;
        case 0x4ee630u: goto label_4ee630;
        case 0x4ee634u: goto label_4ee634;
        case 0x4ee638u: goto label_4ee638;
        case 0x4ee63cu: goto label_4ee63c;
        case 0x4ee640u: goto label_4ee640;
        case 0x4ee644u: goto label_4ee644;
        case 0x4ee648u: goto label_4ee648;
        case 0x4ee64cu: goto label_4ee64c;
        case 0x4ee650u: goto label_4ee650;
        case 0x4ee654u: goto label_4ee654;
        case 0x4ee658u: goto label_4ee658;
        case 0x4ee65cu: goto label_4ee65c;
        case 0x4ee660u: goto label_4ee660;
        case 0x4ee664u: goto label_4ee664;
        case 0x4ee668u: goto label_4ee668;
        case 0x4ee66cu: goto label_4ee66c;
        case 0x4ee670u: goto label_4ee670;
        case 0x4ee674u: goto label_4ee674;
        case 0x4ee678u: goto label_4ee678;
        case 0x4ee67cu: goto label_4ee67c;
        case 0x4ee680u: goto label_4ee680;
        case 0x4ee684u: goto label_4ee684;
        case 0x4ee688u: goto label_4ee688;
        case 0x4ee68cu: goto label_4ee68c;
        case 0x4ee690u: goto label_4ee690;
        case 0x4ee694u: goto label_4ee694;
        case 0x4ee698u: goto label_4ee698;
        case 0x4ee69cu: goto label_4ee69c;
        case 0x4ee6a0u: goto label_4ee6a0;
        case 0x4ee6a4u: goto label_4ee6a4;
        case 0x4ee6a8u: goto label_4ee6a8;
        case 0x4ee6acu: goto label_4ee6ac;
        case 0x4ee6b0u: goto label_4ee6b0;
        case 0x4ee6b4u: goto label_4ee6b4;
        case 0x4ee6b8u: goto label_4ee6b8;
        case 0x4ee6bcu: goto label_4ee6bc;
        case 0x4ee6c0u: goto label_4ee6c0;
        case 0x4ee6c4u: goto label_4ee6c4;
        case 0x4ee6c8u: goto label_4ee6c8;
        case 0x4ee6ccu: goto label_4ee6cc;
        case 0x4ee6d0u: goto label_4ee6d0;
        case 0x4ee6d4u: goto label_4ee6d4;
        case 0x4ee6d8u: goto label_4ee6d8;
        case 0x4ee6dcu: goto label_4ee6dc;
        case 0x4ee6e0u: goto label_4ee6e0;
        case 0x4ee6e4u: goto label_4ee6e4;
        case 0x4ee6e8u: goto label_4ee6e8;
        case 0x4ee6ecu: goto label_4ee6ec;
        case 0x4ee6f0u: goto label_4ee6f0;
        case 0x4ee6f4u: goto label_4ee6f4;
        case 0x4ee6f8u: goto label_4ee6f8;
        case 0x4ee6fcu: goto label_4ee6fc;
        case 0x4ee700u: goto label_4ee700;
        case 0x4ee704u: goto label_4ee704;
        case 0x4ee708u: goto label_4ee708;
        case 0x4ee70cu: goto label_4ee70c;
        case 0x4ee710u: goto label_4ee710;
        case 0x4ee714u: goto label_4ee714;
        case 0x4ee718u: goto label_4ee718;
        case 0x4ee71cu: goto label_4ee71c;
        case 0x4ee720u: goto label_4ee720;
        case 0x4ee724u: goto label_4ee724;
        case 0x4ee728u: goto label_4ee728;
        case 0x4ee72cu: goto label_4ee72c;
        case 0x4ee730u: goto label_4ee730;
        case 0x4ee734u: goto label_4ee734;
        case 0x4ee738u: goto label_4ee738;
        case 0x4ee73cu: goto label_4ee73c;
        case 0x4ee740u: goto label_4ee740;
        case 0x4ee744u: goto label_4ee744;
        case 0x4ee748u: goto label_4ee748;
        case 0x4ee74cu: goto label_4ee74c;
        case 0x4ee750u: goto label_4ee750;
        case 0x4ee754u: goto label_4ee754;
        case 0x4ee758u: goto label_4ee758;
        case 0x4ee75cu: goto label_4ee75c;
        case 0x4ee760u: goto label_4ee760;
        case 0x4ee764u: goto label_4ee764;
        case 0x4ee768u: goto label_4ee768;
        case 0x4ee76cu: goto label_4ee76c;
        case 0x4ee770u: goto label_4ee770;
        case 0x4ee774u: goto label_4ee774;
        case 0x4ee778u: goto label_4ee778;
        case 0x4ee77cu: goto label_4ee77c;
        case 0x4ee780u: goto label_4ee780;
        case 0x4ee784u: goto label_4ee784;
        case 0x4ee788u: goto label_4ee788;
        case 0x4ee78cu: goto label_4ee78c;
        case 0x4ee790u: goto label_4ee790;
        case 0x4ee794u: goto label_4ee794;
        case 0x4ee798u: goto label_4ee798;
        case 0x4ee79cu: goto label_4ee79c;
        case 0x4ee7a0u: goto label_4ee7a0;
        case 0x4ee7a4u: goto label_4ee7a4;
        case 0x4ee7a8u: goto label_4ee7a8;
        case 0x4ee7acu: goto label_4ee7ac;
        case 0x4ee7b0u: goto label_4ee7b0;
        case 0x4ee7b4u: goto label_4ee7b4;
        case 0x4ee7b8u: goto label_4ee7b8;
        case 0x4ee7bcu: goto label_4ee7bc;
        case 0x4ee7c0u: goto label_4ee7c0;
        case 0x4ee7c4u: goto label_4ee7c4;
        case 0x4ee7c8u: goto label_4ee7c8;
        case 0x4ee7ccu: goto label_4ee7cc;
        case 0x4ee7d0u: goto label_4ee7d0;
        case 0x4ee7d4u: goto label_4ee7d4;
        case 0x4ee7d8u: goto label_4ee7d8;
        case 0x4ee7dcu: goto label_4ee7dc;
        case 0x4ee7e0u: goto label_4ee7e0;
        case 0x4ee7e4u: goto label_4ee7e4;
        case 0x4ee7e8u: goto label_4ee7e8;
        case 0x4ee7ecu: goto label_4ee7ec;
        case 0x4ee7f0u: goto label_4ee7f0;
        case 0x4ee7f4u: goto label_4ee7f4;
        case 0x4ee7f8u: goto label_4ee7f8;
        case 0x4ee7fcu: goto label_4ee7fc;
        case 0x4ee800u: goto label_4ee800;
        case 0x4ee804u: goto label_4ee804;
        case 0x4ee808u: goto label_4ee808;
        case 0x4ee80cu: goto label_4ee80c;
        case 0x4ee810u: goto label_4ee810;
        case 0x4ee814u: goto label_4ee814;
        case 0x4ee818u: goto label_4ee818;
        case 0x4ee81cu: goto label_4ee81c;
        case 0x4ee820u: goto label_4ee820;
        case 0x4ee824u: goto label_4ee824;
        case 0x4ee828u: goto label_4ee828;
        case 0x4ee82cu: goto label_4ee82c;
        case 0x4ee830u: goto label_4ee830;
        case 0x4ee834u: goto label_4ee834;
        case 0x4ee838u: goto label_4ee838;
        case 0x4ee83cu: goto label_4ee83c;
        case 0x4ee840u: goto label_4ee840;
        case 0x4ee844u: goto label_4ee844;
        case 0x4ee848u: goto label_4ee848;
        case 0x4ee84cu: goto label_4ee84c;
        case 0x4ee850u: goto label_4ee850;
        case 0x4ee854u: goto label_4ee854;
        case 0x4ee858u: goto label_4ee858;
        case 0x4ee85cu: goto label_4ee85c;
        case 0x4ee860u: goto label_4ee860;
        case 0x4ee864u: goto label_4ee864;
        case 0x4ee868u: goto label_4ee868;
        case 0x4ee86cu: goto label_4ee86c;
        case 0x4ee870u: goto label_4ee870;
        case 0x4ee874u: goto label_4ee874;
        case 0x4ee878u: goto label_4ee878;
        case 0x4ee87cu: goto label_4ee87c;
        case 0x4ee880u: goto label_4ee880;
        case 0x4ee884u: goto label_4ee884;
        case 0x4ee888u: goto label_4ee888;
        case 0x4ee88cu: goto label_4ee88c;
        case 0x4ee890u: goto label_4ee890;
        case 0x4ee894u: goto label_4ee894;
        case 0x4ee898u: goto label_4ee898;
        case 0x4ee89cu: goto label_4ee89c;
        case 0x4ee8a0u: goto label_4ee8a0;
        case 0x4ee8a4u: goto label_4ee8a4;
        case 0x4ee8a8u: goto label_4ee8a8;
        case 0x4ee8acu: goto label_4ee8ac;
        case 0x4ee8b0u: goto label_4ee8b0;
        case 0x4ee8b4u: goto label_4ee8b4;
        case 0x4ee8b8u: goto label_4ee8b8;
        case 0x4ee8bcu: goto label_4ee8bc;
        case 0x4ee8c0u: goto label_4ee8c0;
        case 0x4ee8c4u: goto label_4ee8c4;
        case 0x4ee8c8u: goto label_4ee8c8;
        case 0x4ee8ccu: goto label_4ee8cc;
        case 0x4ee8d0u: goto label_4ee8d0;
        case 0x4ee8d4u: goto label_4ee8d4;
        case 0x4ee8d8u: goto label_4ee8d8;
        case 0x4ee8dcu: goto label_4ee8dc;
        case 0x4ee8e0u: goto label_4ee8e0;
        case 0x4ee8e4u: goto label_4ee8e4;
        case 0x4ee8e8u: goto label_4ee8e8;
        case 0x4ee8ecu: goto label_4ee8ec;
        case 0x4ee8f0u: goto label_4ee8f0;
        case 0x4ee8f4u: goto label_4ee8f4;
        case 0x4ee8f8u: goto label_4ee8f8;
        case 0x4ee8fcu: goto label_4ee8fc;
        case 0x4ee900u: goto label_4ee900;
        case 0x4ee904u: goto label_4ee904;
        case 0x4ee908u: goto label_4ee908;
        case 0x4ee90cu: goto label_4ee90c;
        case 0x4ee910u: goto label_4ee910;
        case 0x4ee914u: goto label_4ee914;
        case 0x4ee918u: goto label_4ee918;
        case 0x4ee91cu: goto label_4ee91c;
        case 0x4ee920u: goto label_4ee920;
        case 0x4ee924u: goto label_4ee924;
        case 0x4ee928u: goto label_4ee928;
        case 0x4ee92cu: goto label_4ee92c;
        case 0x4ee930u: goto label_4ee930;
        case 0x4ee934u: goto label_4ee934;
        case 0x4ee938u: goto label_4ee938;
        case 0x4ee93cu: goto label_4ee93c;
        case 0x4ee940u: goto label_4ee940;
        case 0x4ee944u: goto label_4ee944;
        case 0x4ee948u: goto label_4ee948;
        case 0x4ee94cu: goto label_4ee94c;
        case 0x4ee950u: goto label_4ee950;
        case 0x4ee954u: goto label_4ee954;
        case 0x4ee958u: goto label_4ee958;
        case 0x4ee95cu: goto label_4ee95c;
        case 0x4ee960u: goto label_4ee960;
        case 0x4ee964u: goto label_4ee964;
        case 0x4ee968u: goto label_4ee968;
        case 0x4ee96cu: goto label_4ee96c;
        case 0x4ee970u: goto label_4ee970;
        case 0x4ee974u: goto label_4ee974;
        case 0x4ee978u: goto label_4ee978;
        case 0x4ee97cu: goto label_4ee97c;
        case 0x4ee980u: goto label_4ee980;
        case 0x4ee984u: goto label_4ee984;
        case 0x4ee988u: goto label_4ee988;
        case 0x4ee98cu: goto label_4ee98c;
        case 0x4ee990u: goto label_4ee990;
        case 0x4ee994u: goto label_4ee994;
        case 0x4ee998u: goto label_4ee998;
        case 0x4ee99cu: goto label_4ee99c;
        case 0x4ee9a0u: goto label_4ee9a0;
        case 0x4ee9a4u: goto label_4ee9a4;
        case 0x4ee9a8u: goto label_4ee9a8;
        case 0x4ee9acu: goto label_4ee9ac;
        case 0x4ee9b0u: goto label_4ee9b0;
        case 0x4ee9b4u: goto label_4ee9b4;
        case 0x4ee9b8u: goto label_4ee9b8;
        case 0x4ee9bcu: goto label_4ee9bc;
        case 0x4ee9c0u: goto label_4ee9c0;
        case 0x4ee9c4u: goto label_4ee9c4;
        case 0x4ee9c8u: goto label_4ee9c8;
        case 0x4ee9ccu: goto label_4ee9cc;
        case 0x4ee9d0u: goto label_4ee9d0;
        case 0x4ee9d4u: goto label_4ee9d4;
        case 0x4ee9d8u: goto label_4ee9d8;
        case 0x4ee9dcu: goto label_4ee9dc;
        case 0x4ee9e0u: goto label_4ee9e0;
        case 0x4ee9e4u: goto label_4ee9e4;
        case 0x4ee9e8u: goto label_4ee9e8;
        case 0x4ee9ecu: goto label_4ee9ec;
        case 0x4ee9f0u: goto label_4ee9f0;
        case 0x4ee9f4u: goto label_4ee9f4;
        case 0x4ee9f8u: goto label_4ee9f8;
        case 0x4ee9fcu: goto label_4ee9fc;
        case 0x4eea00u: goto label_4eea00;
        case 0x4eea04u: goto label_4eea04;
        case 0x4eea08u: goto label_4eea08;
        case 0x4eea0cu: goto label_4eea0c;
        case 0x4eea10u: goto label_4eea10;
        case 0x4eea14u: goto label_4eea14;
        case 0x4eea18u: goto label_4eea18;
        case 0x4eea1cu: goto label_4eea1c;
        case 0x4eea20u: goto label_4eea20;
        case 0x4eea24u: goto label_4eea24;
        case 0x4eea28u: goto label_4eea28;
        case 0x4eea2cu: goto label_4eea2c;
        case 0x4eea30u: goto label_4eea30;
        case 0x4eea34u: goto label_4eea34;
        case 0x4eea38u: goto label_4eea38;
        case 0x4eea3cu: goto label_4eea3c;
        case 0x4eea40u: goto label_4eea40;
        case 0x4eea44u: goto label_4eea44;
        case 0x4eea48u: goto label_4eea48;
        case 0x4eea4cu: goto label_4eea4c;
        case 0x4eea50u: goto label_4eea50;
        case 0x4eea54u: goto label_4eea54;
        case 0x4eea58u: goto label_4eea58;
        case 0x4eea5cu: goto label_4eea5c;
        case 0x4eea60u: goto label_4eea60;
        case 0x4eea64u: goto label_4eea64;
        case 0x4eea68u: goto label_4eea68;
        case 0x4eea6cu: goto label_4eea6c;
        case 0x4eea70u: goto label_4eea70;
        case 0x4eea74u: goto label_4eea74;
        case 0x4eea78u: goto label_4eea78;
        case 0x4eea7cu: goto label_4eea7c;
        case 0x4eea80u: goto label_4eea80;
        case 0x4eea84u: goto label_4eea84;
        case 0x4eea88u: goto label_4eea88;
        case 0x4eea8cu: goto label_4eea8c;
        case 0x4eea90u: goto label_4eea90;
        case 0x4eea94u: goto label_4eea94;
        case 0x4eea98u: goto label_4eea98;
        case 0x4eea9cu: goto label_4eea9c;
        case 0x4eeaa0u: goto label_4eeaa0;
        case 0x4eeaa4u: goto label_4eeaa4;
        case 0x4eeaa8u: goto label_4eeaa8;
        case 0x4eeaacu: goto label_4eeaac;
        case 0x4eeab0u: goto label_4eeab0;
        case 0x4eeab4u: goto label_4eeab4;
        case 0x4eeab8u: goto label_4eeab8;
        case 0x4eeabcu: goto label_4eeabc;
        case 0x4eeac0u: goto label_4eeac0;
        case 0x4eeac4u: goto label_4eeac4;
        case 0x4eeac8u: goto label_4eeac8;
        case 0x4eeaccu: goto label_4eeacc;
        case 0x4eead0u: goto label_4eead0;
        case 0x4eead4u: goto label_4eead4;
        case 0x4eead8u: goto label_4eead8;
        case 0x4eeadcu: goto label_4eeadc;
        case 0x4eeae0u: goto label_4eeae0;
        case 0x4eeae4u: goto label_4eeae4;
        case 0x4eeae8u: goto label_4eeae8;
        case 0x4eeaecu: goto label_4eeaec;
        case 0x4eeaf0u: goto label_4eeaf0;
        case 0x4eeaf4u: goto label_4eeaf4;
        case 0x4eeaf8u: goto label_4eeaf8;
        case 0x4eeafcu: goto label_4eeafc;
        case 0x4eeb00u: goto label_4eeb00;
        case 0x4eeb04u: goto label_4eeb04;
        case 0x4eeb08u: goto label_4eeb08;
        case 0x4eeb0cu: goto label_4eeb0c;
        case 0x4eeb10u: goto label_4eeb10;
        case 0x4eeb14u: goto label_4eeb14;
        case 0x4eeb18u: goto label_4eeb18;
        case 0x4eeb1cu: goto label_4eeb1c;
        case 0x4eeb20u: goto label_4eeb20;
        case 0x4eeb24u: goto label_4eeb24;
        case 0x4eeb28u: goto label_4eeb28;
        case 0x4eeb2cu: goto label_4eeb2c;
        case 0x4eeb30u: goto label_4eeb30;
        case 0x4eeb34u: goto label_4eeb34;
        case 0x4eeb38u: goto label_4eeb38;
        case 0x4eeb3cu: goto label_4eeb3c;
        case 0x4eeb40u: goto label_4eeb40;
        case 0x4eeb44u: goto label_4eeb44;
        case 0x4eeb48u: goto label_4eeb48;
        case 0x4eeb4cu: goto label_4eeb4c;
        case 0x4eeb50u: goto label_4eeb50;
        case 0x4eeb54u: goto label_4eeb54;
        case 0x4eeb58u: goto label_4eeb58;
        case 0x4eeb5cu: goto label_4eeb5c;
        case 0x4eeb60u: goto label_4eeb60;
        case 0x4eeb64u: goto label_4eeb64;
        case 0x4eeb68u: goto label_4eeb68;
        case 0x4eeb6cu: goto label_4eeb6c;
        case 0x4eeb70u: goto label_4eeb70;
        case 0x4eeb74u: goto label_4eeb74;
        case 0x4eeb78u: goto label_4eeb78;
        case 0x4eeb7cu: goto label_4eeb7c;
        case 0x4eeb80u: goto label_4eeb80;
        case 0x4eeb84u: goto label_4eeb84;
        case 0x4eeb88u: goto label_4eeb88;
        case 0x4eeb8cu: goto label_4eeb8c;
        case 0x4eeb90u: goto label_4eeb90;
        case 0x4eeb94u: goto label_4eeb94;
        case 0x4eeb98u: goto label_4eeb98;
        case 0x4eeb9cu: goto label_4eeb9c;
        case 0x4eeba0u: goto label_4eeba0;
        case 0x4eeba4u: goto label_4eeba4;
        case 0x4eeba8u: goto label_4eeba8;
        case 0x4eebacu: goto label_4eebac;
        case 0x4eebb0u: goto label_4eebb0;
        case 0x4eebb4u: goto label_4eebb4;
        case 0x4eebb8u: goto label_4eebb8;
        case 0x4eebbcu: goto label_4eebbc;
        case 0x4eebc0u: goto label_4eebc0;
        case 0x4eebc4u: goto label_4eebc4;
        case 0x4eebc8u: goto label_4eebc8;
        case 0x4eebccu: goto label_4eebcc;
        case 0x4eebd0u: goto label_4eebd0;
        case 0x4eebd4u: goto label_4eebd4;
        case 0x4eebd8u: goto label_4eebd8;
        case 0x4eebdcu: goto label_4eebdc;
        case 0x4eebe0u: goto label_4eebe0;
        case 0x4eebe4u: goto label_4eebe4;
        case 0x4eebe8u: goto label_4eebe8;
        case 0x4eebecu: goto label_4eebec;
        case 0x4eebf0u: goto label_4eebf0;
        case 0x4eebf4u: goto label_4eebf4;
        case 0x4eebf8u: goto label_4eebf8;
        case 0x4eebfcu: goto label_4eebfc;
        case 0x4eec00u: goto label_4eec00;
        case 0x4eec04u: goto label_4eec04;
        case 0x4eec08u: goto label_4eec08;
        case 0x4eec0cu: goto label_4eec0c;
        case 0x4eec10u: goto label_4eec10;
        case 0x4eec14u: goto label_4eec14;
        case 0x4eec18u: goto label_4eec18;
        case 0x4eec1cu: goto label_4eec1c;
        case 0x4eec20u: goto label_4eec20;
        case 0x4eec24u: goto label_4eec24;
        case 0x4eec28u: goto label_4eec28;
        case 0x4eec2cu: goto label_4eec2c;
        case 0x4eec30u: goto label_4eec30;
        case 0x4eec34u: goto label_4eec34;
        case 0x4eec38u: goto label_4eec38;
        case 0x4eec3cu: goto label_4eec3c;
        case 0x4eec40u: goto label_4eec40;
        case 0x4eec44u: goto label_4eec44;
        case 0x4eec48u: goto label_4eec48;
        case 0x4eec4cu: goto label_4eec4c;
        case 0x4eec50u: goto label_4eec50;
        case 0x4eec54u: goto label_4eec54;
        case 0x4eec58u: goto label_4eec58;
        case 0x4eec5cu: goto label_4eec5c;
        case 0x4eec60u: goto label_4eec60;
        case 0x4eec64u: goto label_4eec64;
        case 0x4eec68u: goto label_4eec68;
        case 0x4eec6cu: goto label_4eec6c;
        case 0x4eec70u: goto label_4eec70;
        case 0x4eec74u: goto label_4eec74;
        case 0x4eec78u: goto label_4eec78;
        case 0x4eec7cu: goto label_4eec7c;
        case 0x4eec80u: goto label_4eec80;
        case 0x4eec84u: goto label_4eec84;
        case 0x4eec88u: goto label_4eec88;
        case 0x4eec8cu: goto label_4eec8c;
        case 0x4eec90u: goto label_4eec90;
        case 0x4eec94u: goto label_4eec94;
        case 0x4eec98u: goto label_4eec98;
        case 0x4eec9cu: goto label_4eec9c;
        case 0x4eeca0u: goto label_4eeca0;
        case 0x4eeca4u: goto label_4eeca4;
        case 0x4eeca8u: goto label_4eeca8;
        case 0x4eecacu: goto label_4eecac;
        case 0x4eecb0u: goto label_4eecb0;
        case 0x4eecb4u: goto label_4eecb4;
        case 0x4eecb8u: goto label_4eecb8;
        case 0x4eecbcu: goto label_4eecbc;
        case 0x4eecc0u: goto label_4eecc0;
        case 0x4eecc4u: goto label_4eecc4;
        case 0x4eecc8u: goto label_4eecc8;
        case 0x4eecccu: goto label_4eeccc;
        case 0x4eecd0u: goto label_4eecd0;
        case 0x4eecd4u: goto label_4eecd4;
        case 0x4eecd8u: goto label_4eecd8;
        case 0x4eecdcu: goto label_4eecdc;
        case 0x4eece0u: goto label_4eece0;
        case 0x4eece4u: goto label_4eece4;
        case 0x4eece8u: goto label_4eece8;
        case 0x4eececu: goto label_4eecec;
        case 0x4eecf0u: goto label_4eecf0;
        case 0x4eecf4u: goto label_4eecf4;
        case 0x4eecf8u: goto label_4eecf8;
        case 0x4eecfcu: goto label_4eecfc;
        case 0x4eed00u: goto label_4eed00;
        case 0x4eed04u: goto label_4eed04;
        case 0x4eed08u: goto label_4eed08;
        case 0x4eed0cu: goto label_4eed0c;
        case 0x4eed10u: goto label_4eed10;
        case 0x4eed14u: goto label_4eed14;
        case 0x4eed18u: goto label_4eed18;
        case 0x4eed1cu: goto label_4eed1c;
        case 0x4eed20u: goto label_4eed20;
        case 0x4eed24u: goto label_4eed24;
        case 0x4eed28u: goto label_4eed28;
        case 0x4eed2cu: goto label_4eed2c;
        case 0x4eed30u: goto label_4eed30;
        case 0x4eed34u: goto label_4eed34;
        case 0x4eed38u: goto label_4eed38;
        case 0x4eed3cu: goto label_4eed3c;
        case 0x4eed40u: goto label_4eed40;
        case 0x4eed44u: goto label_4eed44;
        case 0x4eed48u: goto label_4eed48;
        case 0x4eed4cu: goto label_4eed4c;
        case 0x4eed50u: goto label_4eed50;
        case 0x4eed54u: goto label_4eed54;
        case 0x4eed58u: goto label_4eed58;
        case 0x4eed5cu: goto label_4eed5c;
        case 0x4eed60u: goto label_4eed60;
        case 0x4eed64u: goto label_4eed64;
        case 0x4eed68u: goto label_4eed68;
        case 0x4eed6cu: goto label_4eed6c;
        case 0x4eed70u: goto label_4eed70;
        case 0x4eed74u: goto label_4eed74;
        case 0x4eed78u: goto label_4eed78;
        case 0x4eed7cu: goto label_4eed7c;
        case 0x4eed80u: goto label_4eed80;
        case 0x4eed84u: goto label_4eed84;
        case 0x4eed88u: goto label_4eed88;
        case 0x4eed8cu: goto label_4eed8c;
        case 0x4eed90u: goto label_4eed90;
        case 0x4eed94u: goto label_4eed94;
        case 0x4eed98u: goto label_4eed98;
        case 0x4eed9cu: goto label_4eed9c;
        case 0x4eeda0u: goto label_4eeda0;
        case 0x4eeda4u: goto label_4eeda4;
        case 0x4eeda8u: goto label_4eeda8;
        case 0x4eedacu: goto label_4eedac;
        case 0x4eedb0u: goto label_4eedb0;
        case 0x4eedb4u: goto label_4eedb4;
        case 0x4eedb8u: goto label_4eedb8;
        case 0x4eedbcu: goto label_4eedbc;
        case 0x4eedc0u: goto label_4eedc0;
        case 0x4eedc4u: goto label_4eedc4;
        case 0x4eedc8u: goto label_4eedc8;
        case 0x4eedccu: goto label_4eedcc;
        case 0x4eedd0u: goto label_4eedd0;
        case 0x4eedd4u: goto label_4eedd4;
        case 0x4eedd8u: goto label_4eedd8;
        case 0x4eeddcu: goto label_4eeddc;
        case 0x4eede0u: goto label_4eede0;
        case 0x4eede4u: goto label_4eede4;
        case 0x4eede8u: goto label_4eede8;
        case 0x4eedecu: goto label_4eedec;
        case 0x4eedf0u: goto label_4eedf0;
        case 0x4eedf4u: goto label_4eedf4;
        case 0x4eedf8u: goto label_4eedf8;
        case 0x4eedfcu: goto label_4eedfc;
        case 0x4eee00u: goto label_4eee00;
        case 0x4eee04u: goto label_4eee04;
        case 0x4eee08u: goto label_4eee08;
        case 0x4eee0cu: goto label_4eee0c;
        case 0x4eee10u: goto label_4eee10;
        case 0x4eee14u: goto label_4eee14;
        case 0x4eee18u: goto label_4eee18;
        case 0x4eee1cu: goto label_4eee1c;
        case 0x4eee20u: goto label_4eee20;
        case 0x4eee24u: goto label_4eee24;
        case 0x4eee28u: goto label_4eee28;
        case 0x4eee2cu: goto label_4eee2c;
        case 0x4eee30u: goto label_4eee30;
        case 0x4eee34u: goto label_4eee34;
        case 0x4eee38u: goto label_4eee38;
        case 0x4eee3cu: goto label_4eee3c;
        case 0x4eee40u: goto label_4eee40;
        case 0x4eee44u: goto label_4eee44;
        case 0x4eee48u: goto label_4eee48;
        case 0x4eee4cu: goto label_4eee4c;
        case 0x4eee50u: goto label_4eee50;
        case 0x4eee54u: goto label_4eee54;
        case 0x4eee58u: goto label_4eee58;
        case 0x4eee5cu: goto label_4eee5c;
        case 0x4eee60u: goto label_4eee60;
        case 0x4eee64u: goto label_4eee64;
        case 0x4eee68u: goto label_4eee68;
        case 0x4eee6cu: goto label_4eee6c;
        case 0x4eee70u: goto label_4eee70;
        case 0x4eee74u: goto label_4eee74;
        case 0x4eee78u: goto label_4eee78;
        case 0x4eee7cu: goto label_4eee7c;
        case 0x4eee80u: goto label_4eee80;
        case 0x4eee84u: goto label_4eee84;
        case 0x4eee88u: goto label_4eee88;
        case 0x4eee8cu: goto label_4eee8c;
        case 0x4eee90u: goto label_4eee90;
        case 0x4eee94u: goto label_4eee94;
        case 0x4eee98u: goto label_4eee98;
        case 0x4eee9cu: goto label_4eee9c;
        case 0x4eeea0u: goto label_4eeea0;
        case 0x4eeea4u: goto label_4eeea4;
        case 0x4eeea8u: goto label_4eeea8;
        case 0x4eeeacu: goto label_4eeeac;
        case 0x4eeeb0u: goto label_4eeeb0;
        case 0x4eeeb4u: goto label_4eeeb4;
        case 0x4eeeb8u: goto label_4eeeb8;
        case 0x4eeebcu: goto label_4eeebc;
        case 0x4eeec0u: goto label_4eeec0;
        case 0x4eeec4u: goto label_4eeec4;
        case 0x4eeec8u: goto label_4eeec8;
        case 0x4eeeccu: goto label_4eeecc;
        case 0x4eeed0u: goto label_4eeed0;
        case 0x4eeed4u: goto label_4eeed4;
        case 0x4eeed8u: goto label_4eeed8;
        case 0x4eeedcu: goto label_4eeedc;
        case 0x4eeee0u: goto label_4eeee0;
        case 0x4eeee4u: goto label_4eeee4;
        case 0x4eeee8u: goto label_4eeee8;
        case 0x4eeeecu: goto label_4eeeec;
        case 0x4eeef0u: goto label_4eeef0;
        case 0x4eeef4u: goto label_4eeef4;
        case 0x4eeef8u: goto label_4eeef8;
        case 0x4eeefcu: goto label_4eeefc;
        case 0x4eef00u: goto label_4eef00;
        case 0x4eef04u: goto label_4eef04;
        case 0x4eef08u: goto label_4eef08;
        case 0x4eef0cu: goto label_4eef0c;
        case 0x4eef10u: goto label_4eef10;
        case 0x4eef14u: goto label_4eef14;
        case 0x4eef18u: goto label_4eef18;
        case 0x4eef1cu: goto label_4eef1c;
        case 0x4eef20u: goto label_4eef20;
        case 0x4eef24u: goto label_4eef24;
        case 0x4eef28u: goto label_4eef28;
        case 0x4eef2cu: goto label_4eef2c;
        case 0x4eef30u: goto label_4eef30;
        case 0x4eef34u: goto label_4eef34;
        case 0x4eef38u: goto label_4eef38;
        case 0x4eef3cu: goto label_4eef3c;
        case 0x4eef40u: goto label_4eef40;
        case 0x4eef44u: goto label_4eef44;
        case 0x4eef48u: goto label_4eef48;
        case 0x4eef4cu: goto label_4eef4c;
        case 0x4eef50u: goto label_4eef50;
        case 0x4eef54u: goto label_4eef54;
        case 0x4eef58u: goto label_4eef58;
        case 0x4eef5cu: goto label_4eef5c;
        case 0x4eef60u: goto label_4eef60;
        case 0x4eef64u: goto label_4eef64;
        case 0x4eef68u: goto label_4eef68;
        case 0x4eef6cu: goto label_4eef6c;
        case 0x4eef70u: goto label_4eef70;
        case 0x4eef74u: goto label_4eef74;
        case 0x4eef78u: goto label_4eef78;
        case 0x4eef7cu: goto label_4eef7c;
        case 0x4eef80u: goto label_4eef80;
        case 0x4eef84u: goto label_4eef84;
        case 0x4eef88u: goto label_4eef88;
        case 0x4eef8cu: goto label_4eef8c;
        case 0x4eef90u: goto label_4eef90;
        case 0x4eef94u: goto label_4eef94;
        case 0x4eef98u: goto label_4eef98;
        case 0x4eef9cu: goto label_4eef9c;
        case 0x4eefa0u: goto label_4eefa0;
        case 0x4eefa4u: goto label_4eefa4;
        case 0x4eefa8u: goto label_4eefa8;
        case 0x4eefacu: goto label_4eefac;
        case 0x4eefb0u: goto label_4eefb0;
        case 0x4eefb4u: goto label_4eefb4;
        case 0x4eefb8u: goto label_4eefb8;
        case 0x4eefbcu: goto label_4eefbc;
        case 0x4eefc0u: goto label_4eefc0;
        case 0x4eefc4u: goto label_4eefc4;
        case 0x4eefc8u: goto label_4eefc8;
        case 0x4eefccu: goto label_4eefcc;
        case 0x4eefd0u: goto label_4eefd0;
        case 0x4eefd4u: goto label_4eefd4;
        case 0x4eefd8u: goto label_4eefd8;
        case 0x4eefdcu: goto label_4eefdc;
        case 0x4eefe0u: goto label_4eefe0;
        case 0x4eefe4u: goto label_4eefe4;
        case 0x4eefe8u: goto label_4eefe8;
        case 0x4eefecu: goto label_4eefec;
        case 0x4eeff0u: goto label_4eeff0;
        case 0x4eeff4u: goto label_4eeff4;
        case 0x4eeff8u: goto label_4eeff8;
        case 0x4eeffcu: goto label_4eeffc;
        case 0x4ef000u: goto label_4ef000;
        case 0x4ef004u: goto label_4ef004;
        case 0x4ef008u: goto label_4ef008;
        case 0x4ef00cu: goto label_4ef00c;
        case 0x4ef010u: goto label_4ef010;
        case 0x4ef014u: goto label_4ef014;
        case 0x4ef018u: goto label_4ef018;
        case 0x4ef01cu: goto label_4ef01c;
        case 0x4ef020u: goto label_4ef020;
        case 0x4ef024u: goto label_4ef024;
        case 0x4ef028u: goto label_4ef028;
        case 0x4ef02cu: goto label_4ef02c;
        case 0x4ef030u: goto label_4ef030;
        case 0x4ef034u: goto label_4ef034;
        case 0x4ef038u: goto label_4ef038;
        case 0x4ef03cu: goto label_4ef03c;
        case 0x4ef040u: goto label_4ef040;
        case 0x4ef044u: goto label_4ef044;
        case 0x4ef048u: goto label_4ef048;
        case 0x4ef04cu: goto label_4ef04c;
        case 0x4ef050u: goto label_4ef050;
        case 0x4ef054u: goto label_4ef054;
        case 0x4ef058u: goto label_4ef058;
        case 0x4ef05cu: goto label_4ef05c;
        case 0x4ef060u: goto label_4ef060;
        case 0x4ef064u: goto label_4ef064;
        case 0x4ef068u: goto label_4ef068;
        case 0x4ef06cu: goto label_4ef06c;
        case 0x4ef070u: goto label_4ef070;
        case 0x4ef074u: goto label_4ef074;
        case 0x4ef078u: goto label_4ef078;
        case 0x4ef07cu: goto label_4ef07c;
        case 0x4ef080u: goto label_4ef080;
        case 0x4ef084u: goto label_4ef084;
        case 0x4ef088u: goto label_4ef088;
        case 0x4ef08cu: goto label_4ef08c;
        case 0x4ef090u: goto label_4ef090;
        case 0x4ef094u: goto label_4ef094;
        case 0x4ef098u: goto label_4ef098;
        case 0x4ef09cu: goto label_4ef09c;
        case 0x4ef0a0u: goto label_4ef0a0;
        case 0x4ef0a4u: goto label_4ef0a4;
        case 0x4ef0a8u: goto label_4ef0a8;
        case 0x4ef0acu: goto label_4ef0ac;
        case 0x4ef0b0u: goto label_4ef0b0;
        case 0x4ef0b4u: goto label_4ef0b4;
        case 0x4ef0b8u: goto label_4ef0b8;
        case 0x4ef0bcu: goto label_4ef0bc;
        case 0x4ef0c0u: goto label_4ef0c0;
        case 0x4ef0c4u: goto label_4ef0c4;
        case 0x4ef0c8u: goto label_4ef0c8;
        case 0x4ef0ccu: goto label_4ef0cc;
        case 0x4ef0d0u: goto label_4ef0d0;
        case 0x4ef0d4u: goto label_4ef0d4;
        case 0x4ef0d8u: goto label_4ef0d8;
        case 0x4ef0dcu: goto label_4ef0dc;
        case 0x4ef0e0u: goto label_4ef0e0;
        case 0x4ef0e4u: goto label_4ef0e4;
        case 0x4ef0e8u: goto label_4ef0e8;
        case 0x4ef0ecu: goto label_4ef0ec;
        case 0x4ef0f0u: goto label_4ef0f0;
        case 0x4ef0f4u: goto label_4ef0f4;
        case 0x4ef0f8u: goto label_4ef0f8;
        case 0x4ef0fcu: goto label_4ef0fc;
        case 0x4ef100u: goto label_4ef100;
        case 0x4ef104u: goto label_4ef104;
        case 0x4ef108u: goto label_4ef108;
        case 0x4ef10cu: goto label_4ef10c;
        case 0x4ef110u: goto label_4ef110;
        case 0x4ef114u: goto label_4ef114;
        case 0x4ef118u: goto label_4ef118;
        case 0x4ef11cu: goto label_4ef11c;
        case 0x4ef120u: goto label_4ef120;
        case 0x4ef124u: goto label_4ef124;
        case 0x4ef128u: goto label_4ef128;
        case 0x4ef12cu: goto label_4ef12c;
        case 0x4ef130u: goto label_4ef130;
        case 0x4ef134u: goto label_4ef134;
        case 0x4ef138u: goto label_4ef138;
        case 0x4ef13cu: goto label_4ef13c;
        case 0x4ef140u: goto label_4ef140;
        case 0x4ef144u: goto label_4ef144;
        case 0x4ef148u: goto label_4ef148;
        case 0x4ef14cu: goto label_4ef14c;
        case 0x4ef150u: goto label_4ef150;
        case 0x4ef154u: goto label_4ef154;
        case 0x4ef158u: goto label_4ef158;
        case 0x4ef15cu: goto label_4ef15c;
        case 0x4ef160u: goto label_4ef160;
        case 0x4ef164u: goto label_4ef164;
        case 0x4ef168u: goto label_4ef168;
        case 0x4ef16cu: goto label_4ef16c;
        case 0x4ef170u: goto label_4ef170;
        case 0x4ef174u: goto label_4ef174;
        case 0x4ef178u: goto label_4ef178;
        case 0x4ef17cu: goto label_4ef17c;
        case 0x4ef180u: goto label_4ef180;
        case 0x4ef184u: goto label_4ef184;
        case 0x4ef188u: goto label_4ef188;
        case 0x4ef18cu: goto label_4ef18c;
        case 0x4ef190u: goto label_4ef190;
        case 0x4ef194u: goto label_4ef194;
        case 0x4ef198u: goto label_4ef198;
        case 0x4ef19cu: goto label_4ef19c;
        case 0x4ef1a0u: goto label_4ef1a0;
        case 0x4ef1a4u: goto label_4ef1a4;
        case 0x4ef1a8u: goto label_4ef1a8;
        case 0x4ef1acu: goto label_4ef1ac;
        case 0x4ef1b0u: goto label_4ef1b0;
        case 0x4ef1b4u: goto label_4ef1b4;
        case 0x4ef1b8u: goto label_4ef1b8;
        case 0x4ef1bcu: goto label_4ef1bc;
        case 0x4ef1c0u: goto label_4ef1c0;
        case 0x4ef1c4u: goto label_4ef1c4;
        case 0x4ef1c8u: goto label_4ef1c8;
        case 0x4ef1ccu: goto label_4ef1cc;
        case 0x4ef1d0u: goto label_4ef1d0;
        case 0x4ef1d4u: goto label_4ef1d4;
        case 0x4ef1d8u: goto label_4ef1d8;
        case 0x4ef1dcu: goto label_4ef1dc;
        case 0x4ef1e0u: goto label_4ef1e0;
        case 0x4ef1e4u: goto label_4ef1e4;
        case 0x4ef1e8u: goto label_4ef1e8;
        case 0x4ef1ecu: goto label_4ef1ec;
        case 0x4ef1f0u: goto label_4ef1f0;
        case 0x4ef1f4u: goto label_4ef1f4;
        case 0x4ef1f8u: goto label_4ef1f8;
        case 0x4ef1fcu: goto label_4ef1fc;
        case 0x4ef200u: goto label_4ef200;
        case 0x4ef204u: goto label_4ef204;
        case 0x4ef208u: goto label_4ef208;
        case 0x4ef20cu: goto label_4ef20c;
        case 0x4ef210u: goto label_4ef210;
        case 0x4ef214u: goto label_4ef214;
        case 0x4ef218u: goto label_4ef218;
        case 0x4ef21cu: goto label_4ef21c;
        case 0x4ef220u: goto label_4ef220;
        case 0x4ef224u: goto label_4ef224;
        case 0x4ef228u: goto label_4ef228;
        case 0x4ef22cu: goto label_4ef22c;
        case 0x4ef230u: goto label_4ef230;
        case 0x4ef234u: goto label_4ef234;
        case 0x4ef238u: goto label_4ef238;
        case 0x4ef23cu: goto label_4ef23c;
        case 0x4ef240u: goto label_4ef240;
        case 0x4ef244u: goto label_4ef244;
        case 0x4ef248u: goto label_4ef248;
        case 0x4ef24cu: goto label_4ef24c;
        case 0x4ef250u: goto label_4ef250;
        case 0x4ef254u: goto label_4ef254;
        case 0x4ef258u: goto label_4ef258;
        case 0x4ef25cu: goto label_4ef25c;
        case 0x4ef260u: goto label_4ef260;
        case 0x4ef264u: goto label_4ef264;
        case 0x4ef268u: goto label_4ef268;
        case 0x4ef26cu: goto label_4ef26c;
        case 0x4ef270u: goto label_4ef270;
        case 0x4ef274u: goto label_4ef274;
        case 0x4ef278u: goto label_4ef278;
        case 0x4ef27cu: goto label_4ef27c;
        case 0x4ef280u: goto label_4ef280;
        case 0x4ef284u: goto label_4ef284;
        case 0x4ef288u: goto label_4ef288;
        case 0x4ef28cu: goto label_4ef28c;
        case 0x4ef290u: goto label_4ef290;
        case 0x4ef294u: goto label_4ef294;
        case 0x4ef298u: goto label_4ef298;
        case 0x4ef29cu: goto label_4ef29c;
        case 0x4ef2a0u: goto label_4ef2a0;
        case 0x4ef2a4u: goto label_4ef2a4;
        case 0x4ef2a8u: goto label_4ef2a8;
        case 0x4ef2acu: goto label_4ef2ac;
        case 0x4ef2b0u: goto label_4ef2b0;
        case 0x4ef2b4u: goto label_4ef2b4;
        case 0x4ef2b8u: goto label_4ef2b8;
        case 0x4ef2bcu: goto label_4ef2bc;
        case 0x4ef2c0u: goto label_4ef2c0;
        case 0x4ef2c4u: goto label_4ef2c4;
        case 0x4ef2c8u: goto label_4ef2c8;
        case 0x4ef2ccu: goto label_4ef2cc;
        case 0x4ef2d0u: goto label_4ef2d0;
        case 0x4ef2d4u: goto label_4ef2d4;
        case 0x4ef2d8u: goto label_4ef2d8;
        case 0x4ef2dcu: goto label_4ef2dc;
        case 0x4ef2e0u: goto label_4ef2e0;
        case 0x4ef2e4u: goto label_4ef2e4;
        case 0x4ef2e8u: goto label_4ef2e8;
        case 0x4ef2ecu: goto label_4ef2ec;
        case 0x4ef2f0u: goto label_4ef2f0;
        case 0x4ef2f4u: goto label_4ef2f4;
        case 0x4ef2f8u: goto label_4ef2f8;
        case 0x4ef2fcu: goto label_4ef2fc;
        case 0x4ef300u: goto label_4ef300;
        case 0x4ef304u: goto label_4ef304;
        case 0x4ef308u: goto label_4ef308;
        case 0x4ef30cu: goto label_4ef30c;
        case 0x4ef310u: goto label_4ef310;
        case 0x4ef314u: goto label_4ef314;
        case 0x4ef318u: goto label_4ef318;
        case 0x4ef31cu: goto label_4ef31c;
        case 0x4ef320u: goto label_4ef320;
        case 0x4ef324u: goto label_4ef324;
        case 0x4ef328u: goto label_4ef328;
        case 0x4ef32cu: goto label_4ef32c;
        case 0x4ef330u: goto label_4ef330;
        case 0x4ef334u: goto label_4ef334;
        case 0x4ef338u: goto label_4ef338;
        case 0x4ef33cu: goto label_4ef33c;
        case 0x4ef340u: goto label_4ef340;
        case 0x4ef344u: goto label_4ef344;
        case 0x4ef348u: goto label_4ef348;
        case 0x4ef34cu: goto label_4ef34c;
        case 0x4ef350u: goto label_4ef350;
        case 0x4ef354u: goto label_4ef354;
        case 0x4ef358u: goto label_4ef358;
        case 0x4ef35cu: goto label_4ef35c;
        case 0x4ef360u: goto label_4ef360;
        case 0x4ef364u: goto label_4ef364;
        case 0x4ef368u: goto label_4ef368;
        case 0x4ef36cu: goto label_4ef36c;
        case 0x4ef370u: goto label_4ef370;
        case 0x4ef374u: goto label_4ef374;
        case 0x4ef378u: goto label_4ef378;
        case 0x4ef37cu: goto label_4ef37c;
        case 0x4ef380u: goto label_4ef380;
        case 0x4ef384u: goto label_4ef384;
        case 0x4ef388u: goto label_4ef388;
        case 0x4ef38cu: goto label_4ef38c;
        case 0x4ef390u: goto label_4ef390;
        case 0x4ef394u: goto label_4ef394;
        case 0x4ef398u: goto label_4ef398;
        case 0x4ef39cu: goto label_4ef39c;
        case 0x4ef3a0u: goto label_4ef3a0;
        case 0x4ef3a4u: goto label_4ef3a4;
        case 0x4ef3a8u: goto label_4ef3a8;
        case 0x4ef3acu: goto label_4ef3ac;
        case 0x4ef3b0u: goto label_4ef3b0;
        case 0x4ef3b4u: goto label_4ef3b4;
        case 0x4ef3b8u: goto label_4ef3b8;
        case 0x4ef3bcu: goto label_4ef3bc;
        case 0x4ef3c0u: goto label_4ef3c0;
        case 0x4ef3c4u: goto label_4ef3c4;
        case 0x4ef3c8u: goto label_4ef3c8;
        case 0x4ef3ccu: goto label_4ef3cc;
        case 0x4ef3d0u: goto label_4ef3d0;
        case 0x4ef3d4u: goto label_4ef3d4;
        case 0x4ef3d8u: goto label_4ef3d8;
        case 0x4ef3dcu: goto label_4ef3dc;
        case 0x4ef3e0u: goto label_4ef3e0;
        case 0x4ef3e4u: goto label_4ef3e4;
        case 0x4ef3e8u: goto label_4ef3e8;
        case 0x4ef3ecu: goto label_4ef3ec;
        case 0x4ef3f0u: goto label_4ef3f0;
        case 0x4ef3f4u: goto label_4ef3f4;
        case 0x4ef3f8u: goto label_4ef3f8;
        case 0x4ef3fcu: goto label_4ef3fc;
        case 0x4ef400u: goto label_4ef400;
        case 0x4ef404u: goto label_4ef404;
        case 0x4ef408u: goto label_4ef408;
        case 0x4ef40cu: goto label_4ef40c;
        case 0x4ef410u: goto label_4ef410;
        case 0x4ef414u: goto label_4ef414;
        case 0x4ef418u: goto label_4ef418;
        case 0x4ef41cu: goto label_4ef41c;
        case 0x4ef420u: goto label_4ef420;
        case 0x4ef424u: goto label_4ef424;
        case 0x4ef428u: goto label_4ef428;
        case 0x4ef42cu: goto label_4ef42c;
        case 0x4ef430u: goto label_4ef430;
        case 0x4ef434u: goto label_4ef434;
        case 0x4ef438u: goto label_4ef438;
        case 0x4ef43cu: goto label_4ef43c;
        case 0x4ef440u: goto label_4ef440;
        case 0x4ef444u: goto label_4ef444;
        case 0x4ef448u: goto label_4ef448;
        case 0x4ef44cu: goto label_4ef44c;
        case 0x4ef450u: goto label_4ef450;
        case 0x4ef454u: goto label_4ef454;
        case 0x4ef458u: goto label_4ef458;
        case 0x4ef45cu: goto label_4ef45c;
        case 0x4ef460u: goto label_4ef460;
        case 0x4ef464u: goto label_4ef464;
        case 0x4ef468u: goto label_4ef468;
        case 0x4ef46cu: goto label_4ef46c;
        case 0x4ef470u: goto label_4ef470;
        case 0x4ef474u: goto label_4ef474;
        case 0x4ef478u: goto label_4ef478;
        case 0x4ef47cu: goto label_4ef47c;
        case 0x4ef480u: goto label_4ef480;
        case 0x4ef484u: goto label_4ef484;
        case 0x4ef488u: goto label_4ef488;
        case 0x4ef48cu: goto label_4ef48c;
        case 0x4ef490u: goto label_4ef490;
        case 0x4ef494u: goto label_4ef494;
        case 0x4ef498u: goto label_4ef498;
        case 0x4ef49cu: goto label_4ef49c;
        case 0x4ef4a0u: goto label_4ef4a0;
        case 0x4ef4a4u: goto label_4ef4a4;
        case 0x4ef4a8u: goto label_4ef4a8;
        case 0x4ef4acu: goto label_4ef4ac;
        case 0x4ef4b0u: goto label_4ef4b0;
        case 0x4ef4b4u: goto label_4ef4b4;
        case 0x4ef4b8u: goto label_4ef4b8;
        case 0x4ef4bcu: goto label_4ef4bc;
        case 0x4ef4c0u: goto label_4ef4c0;
        case 0x4ef4c4u: goto label_4ef4c4;
        case 0x4ef4c8u: goto label_4ef4c8;
        case 0x4ef4ccu: goto label_4ef4cc;
        case 0x4ef4d0u: goto label_4ef4d0;
        case 0x4ef4d4u: goto label_4ef4d4;
        case 0x4ef4d8u: goto label_4ef4d8;
        case 0x4ef4dcu: goto label_4ef4dc;
        case 0x4ef4e0u: goto label_4ef4e0;
        case 0x4ef4e4u: goto label_4ef4e4;
        case 0x4ef4e8u: goto label_4ef4e8;
        case 0x4ef4ecu: goto label_4ef4ec;
        case 0x4ef4f0u: goto label_4ef4f0;
        case 0x4ef4f4u: goto label_4ef4f4;
        case 0x4ef4f8u: goto label_4ef4f8;
        case 0x4ef4fcu: goto label_4ef4fc;
        case 0x4ef500u: goto label_4ef500;
        case 0x4ef504u: goto label_4ef504;
        case 0x4ef508u: goto label_4ef508;
        case 0x4ef50cu: goto label_4ef50c;
        case 0x4ef510u: goto label_4ef510;
        case 0x4ef514u: goto label_4ef514;
        case 0x4ef518u: goto label_4ef518;
        case 0x4ef51cu: goto label_4ef51c;
        case 0x4ef520u: goto label_4ef520;
        case 0x4ef524u: goto label_4ef524;
        case 0x4ef528u: goto label_4ef528;
        case 0x4ef52cu: goto label_4ef52c;
        case 0x4ef530u: goto label_4ef530;
        case 0x4ef534u: goto label_4ef534;
        case 0x4ef538u: goto label_4ef538;
        case 0x4ef53cu: goto label_4ef53c;
        case 0x4ef540u: goto label_4ef540;
        case 0x4ef544u: goto label_4ef544;
        case 0x4ef548u: goto label_4ef548;
        case 0x4ef54cu: goto label_4ef54c;
        case 0x4ef550u: goto label_4ef550;
        case 0x4ef554u: goto label_4ef554;
        case 0x4ef558u: goto label_4ef558;
        case 0x4ef55cu: goto label_4ef55c;
        case 0x4ef560u: goto label_4ef560;
        case 0x4ef564u: goto label_4ef564;
        case 0x4ef568u: goto label_4ef568;
        case 0x4ef56cu: goto label_4ef56c;
        case 0x4ef570u: goto label_4ef570;
        case 0x4ef574u: goto label_4ef574;
        case 0x4ef578u: goto label_4ef578;
        case 0x4ef57cu: goto label_4ef57c;
        case 0x4ef580u: goto label_4ef580;
        case 0x4ef584u: goto label_4ef584;
        case 0x4ef588u: goto label_4ef588;
        case 0x4ef58cu: goto label_4ef58c;
        case 0x4ef590u: goto label_4ef590;
        case 0x4ef594u: goto label_4ef594;
        case 0x4ef598u: goto label_4ef598;
        case 0x4ef59cu: goto label_4ef59c;
        case 0x4ef5a0u: goto label_4ef5a0;
        case 0x4ef5a4u: goto label_4ef5a4;
        case 0x4ef5a8u: goto label_4ef5a8;
        case 0x4ef5acu: goto label_4ef5ac;
        case 0x4ef5b0u: goto label_4ef5b0;
        case 0x4ef5b4u: goto label_4ef5b4;
        case 0x4ef5b8u: goto label_4ef5b8;
        case 0x4ef5bcu: goto label_4ef5bc;
        case 0x4ef5c0u: goto label_4ef5c0;
        case 0x4ef5c4u: goto label_4ef5c4;
        case 0x4ef5c8u: goto label_4ef5c8;
        case 0x4ef5ccu: goto label_4ef5cc;
        case 0x4ef5d0u: goto label_4ef5d0;
        case 0x4ef5d4u: goto label_4ef5d4;
        case 0x4ef5d8u: goto label_4ef5d8;
        case 0x4ef5dcu: goto label_4ef5dc;
        case 0x4ef5e0u: goto label_4ef5e0;
        case 0x4ef5e4u: goto label_4ef5e4;
        case 0x4ef5e8u: goto label_4ef5e8;
        case 0x4ef5ecu: goto label_4ef5ec;
        case 0x4ef5f0u: goto label_4ef5f0;
        case 0x4ef5f4u: goto label_4ef5f4;
        case 0x4ef5f8u: goto label_4ef5f8;
        case 0x4ef5fcu: goto label_4ef5fc;
        case 0x4ef600u: goto label_4ef600;
        case 0x4ef604u: goto label_4ef604;
        case 0x4ef608u: goto label_4ef608;
        case 0x4ef60cu: goto label_4ef60c;
        case 0x4ef610u: goto label_4ef610;
        case 0x4ef614u: goto label_4ef614;
        case 0x4ef618u: goto label_4ef618;
        case 0x4ef61cu: goto label_4ef61c;
        case 0x4ef620u: goto label_4ef620;
        case 0x4ef624u: goto label_4ef624;
        case 0x4ef628u: goto label_4ef628;
        case 0x4ef62cu: goto label_4ef62c;
        case 0x4ef630u: goto label_4ef630;
        case 0x4ef634u: goto label_4ef634;
        case 0x4ef638u: goto label_4ef638;
        case 0x4ef63cu: goto label_4ef63c;
        case 0x4ef640u: goto label_4ef640;
        case 0x4ef644u: goto label_4ef644;
        case 0x4ef648u: goto label_4ef648;
        case 0x4ef64cu: goto label_4ef64c;
        case 0x4ef650u: goto label_4ef650;
        case 0x4ef654u: goto label_4ef654;
        case 0x4ef658u: goto label_4ef658;
        case 0x4ef65cu: goto label_4ef65c;
        case 0x4ef660u: goto label_4ef660;
        case 0x4ef664u: goto label_4ef664;
        case 0x4ef668u: goto label_4ef668;
        case 0x4ef66cu: goto label_4ef66c;
        case 0x4ef670u: goto label_4ef670;
        case 0x4ef674u: goto label_4ef674;
        case 0x4ef678u: goto label_4ef678;
        case 0x4ef67cu: goto label_4ef67c;
        case 0x4ef680u: goto label_4ef680;
        case 0x4ef684u: goto label_4ef684;
        case 0x4ef688u: goto label_4ef688;
        case 0x4ef68cu: goto label_4ef68c;
        case 0x4ef690u: goto label_4ef690;
        case 0x4ef694u: goto label_4ef694;
        case 0x4ef698u: goto label_4ef698;
        case 0x4ef69cu: goto label_4ef69c;
        case 0x4ef6a0u: goto label_4ef6a0;
        case 0x4ef6a4u: goto label_4ef6a4;
        case 0x4ef6a8u: goto label_4ef6a8;
        case 0x4ef6acu: goto label_4ef6ac;
        case 0x4ef6b0u: goto label_4ef6b0;
        case 0x4ef6b4u: goto label_4ef6b4;
        case 0x4ef6b8u: goto label_4ef6b8;
        case 0x4ef6bcu: goto label_4ef6bc;
        case 0x4ef6c0u: goto label_4ef6c0;
        case 0x4ef6c4u: goto label_4ef6c4;
        case 0x4ef6c8u: goto label_4ef6c8;
        case 0x4ef6ccu: goto label_4ef6cc;
        case 0x4ef6d0u: goto label_4ef6d0;
        case 0x4ef6d4u: goto label_4ef6d4;
        case 0x4ef6d8u: goto label_4ef6d8;
        case 0x4ef6dcu: goto label_4ef6dc;
        case 0x4ef6e0u: goto label_4ef6e0;
        case 0x4ef6e4u: goto label_4ef6e4;
        case 0x4ef6e8u: goto label_4ef6e8;
        case 0x4ef6ecu: goto label_4ef6ec;
        case 0x4ef6f0u: goto label_4ef6f0;
        case 0x4ef6f4u: goto label_4ef6f4;
        case 0x4ef6f8u: goto label_4ef6f8;
        case 0x4ef6fcu: goto label_4ef6fc;
        case 0x4ef700u: goto label_4ef700;
        case 0x4ef704u: goto label_4ef704;
        case 0x4ef708u: goto label_4ef708;
        case 0x4ef70cu: goto label_4ef70c;
        case 0x4ef710u: goto label_4ef710;
        case 0x4ef714u: goto label_4ef714;
        case 0x4ef718u: goto label_4ef718;
        case 0x4ef71cu: goto label_4ef71c;
        case 0x4ef720u: goto label_4ef720;
        case 0x4ef724u: goto label_4ef724;
        case 0x4ef728u: goto label_4ef728;
        case 0x4ef72cu: goto label_4ef72c;
        case 0x4ef730u: goto label_4ef730;
        case 0x4ef734u: goto label_4ef734;
        case 0x4ef738u: goto label_4ef738;
        case 0x4ef73cu: goto label_4ef73c;
        case 0x4ef740u: goto label_4ef740;
        case 0x4ef744u: goto label_4ef744;
        case 0x4ef748u: goto label_4ef748;
        case 0x4ef74cu: goto label_4ef74c;
        case 0x4ef750u: goto label_4ef750;
        case 0x4ef754u: goto label_4ef754;
        case 0x4ef758u: goto label_4ef758;
        case 0x4ef75cu: goto label_4ef75c;
        case 0x4ef760u: goto label_4ef760;
        case 0x4ef764u: goto label_4ef764;
        case 0x4ef768u: goto label_4ef768;
        case 0x4ef76cu: goto label_4ef76c;
        case 0x4ef770u: goto label_4ef770;
        case 0x4ef774u: goto label_4ef774;
        case 0x4ef778u: goto label_4ef778;
        case 0x4ef77cu: goto label_4ef77c;
        case 0x4ef780u: goto label_4ef780;
        case 0x4ef784u: goto label_4ef784;
        case 0x4ef788u: goto label_4ef788;
        case 0x4ef78cu: goto label_4ef78c;
        case 0x4ef790u: goto label_4ef790;
        case 0x4ef794u: goto label_4ef794;
        case 0x4ef798u: goto label_4ef798;
        case 0x4ef79cu: goto label_4ef79c;
        case 0x4ef7a0u: goto label_4ef7a0;
        case 0x4ef7a4u: goto label_4ef7a4;
        case 0x4ef7a8u: goto label_4ef7a8;
        case 0x4ef7acu: goto label_4ef7ac;
        case 0x4ef7b0u: goto label_4ef7b0;
        case 0x4ef7b4u: goto label_4ef7b4;
        case 0x4ef7b8u: goto label_4ef7b8;
        case 0x4ef7bcu: goto label_4ef7bc;
        case 0x4ef7c0u: goto label_4ef7c0;
        case 0x4ef7c4u: goto label_4ef7c4;
        case 0x4ef7c8u: goto label_4ef7c8;
        case 0x4ef7ccu: goto label_4ef7cc;
        case 0x4ef7d0u: goto label_4ef7d0;
        case 0x4ef7d4u: goto label_4ef7d4;
        case 0x4ef7d8u: goto label_4ef7d8;
        case 0x4ef7dcu: goto label_4ef7dc;
        case 0x4ef7e0u: goto label_4ef7e0;
        case 0x4ef7e4u: goto label_4ef7e4;
        case 0x4ef7e8u: goto label_4ef7e8;
        case 0x4ef7ecu: goto label_4ef7ec;
        case 0x4ef7f0u: goto label_4ef7f0;
        case 0x4ef7f4u: goto label_4ef7f4;
        case 0x4ef7f8u: goto label_4ef7f8;
        case 0x4ef7fcu: goto label_4ef7fc;
        case 0x4ef800u: goto label_4ef800;
        case 0x4ef804u: goto label_4ef804;
        case 0x4ef808u: goto label_4ef808;
        case 0x4ef80cu: goto label_4ef80c;
        case 0x4ef810u: goto label_4ef810;
        case 0x4ef814u: goto label_4ef814;
        case 0x4ef818u: goto label_4ef818;
        case 0x4ef81cu: goto label_4ef81c;
        case 0x4ef820u: goto label_4ef820;
        case 0x4ef824u: goto label_4ef824;
        case 0x4ef828u: goto label_4ef828;
        case 0x4ef82cu: goto label_4ef82c;
        case 0x4ef830u: goto label_4ef830;
        case 0x4ef834u: goto label_4ef834;
        case 0x4ef838u: goto label_4ef838;
        case 0x4ef83cu: goto label_4ef83c;
        case 0x4ef840u: goto label_4ef840;
        case 0x4ef844u: goto label_4ef844;
        case 0x4ef848u: goto label_4ef848;
        case 0x4ef84cu: goto label_4ef84c;
        case 0x4ef850u: goto label_4ef850;
        case 0x4ef854u: goto label_4ef854;
        case 0x4ef858u: goto label_4ef858;
        case 0x4ef85cu: goto label_4ef85c;
        case 0x4ef860u: goto label_4ef860;
        case 0x4ef864u: goto label_4ef864;
        case 0x4ef868u: goto label_4ef868;
        case 0x4ef86cu: goto label_4ef86c;
        case 0x4ef870u: goto label_4ef870;
        case 0x4ef874u: goto label_4ef874;
        case 0x4ef878u: goto label_4ef878;
        case 0x4ef87cu: goto label_4ef87c;
        case 0x4ef880u: goto label_4ef880;
        case 0x4ef884u: goto label_4ef884;
        case 0x4ef888u: goto label_4ef888;
        case 0x4ef88cu: goto label_4ef88c;
        case 0x4ef890u: goto label_4ef890;
        case 0x4ef894u: goto label_4ef894;
        case 0x4ef898u: goto label_4ef898;
        case 0x4ef89cu: goto label_4ef89c;
        case 0x4ef8a0u: goto label_4ef8a0;
        case 0x4ef8a4u: goto label_4ef8a4;
        case 0x4ef8a8u: goto label_4ef8a8;
        case 0x4ef8acu: goto label_4ef8ac;
        case 0x4ef8b0u: goto label_4ef8b0;
        case 0x4ef8b4u: goto label_4ef8b4;
        case 0x4ef8b8u: goto label_4ef8b8;
        case 0x4ef8bcu: goto label_4ef8bc;
        case 0x4ef8c0u: goto label_4ef8c0;
        case 0x4ef8c4u: goto label_4ef8c4;
        case 0x4ef8c8u: goto label_4ef8c8;
        case 0x4ef8ccu: goto label_4ef8cc;
        case 0x4ef8d0u: goto label_4ef8d0;
        case 0x4ef8d4u: goto label_4ef8d4;
        case 0x4ef8d8u: goto label_4ef8d8;
        case 0x4ef8dcu: goto label_4ef8dc;
        case 0x4ef8e0u: goto label_4ef8e0;
        case 0x4ef8e4u: goto label_4ef8e4;
        case 0x4ef8e8u: goto label_4ef8e8;
        case 0x4ef8ecu: goto label_4ef8ec;
        case 0x4ef8f0u: goto label_4ef8f0;
        case 0x4ef8f4u: goto label_4ef8f4;
        case 0x4ef8f8u: goto label_4ef8f8;
        case 0x4ef8fcu: goto label_4ef8fc;
        case 0x4ef900u: goto label_4ef900;
        case 0x4ef904u: goto label_4ef904;
        case 0x4ef908u: goto label_4ef908;
        case 0x4ef90cu: goto label_4ef90c;
        case 0x4ef910u: goto label_4ef910;
        case 0x4ef914u: goto label_4ef914;
        case 0x4ef918u: goto label_4ef918;
        case 0x4ef91cu: goto label_4ef91c;
        case 0x4ef920u: goto label_4ef920;
        case 0x4ef924u: goto label_4ef924;
        case 0x4ef928u: goto label_4ef928;
        case 0x4ef92cu: goto label_4ef92c;
        case 0x4ef930u: goto label_4ef930;
        case 0x4ef934u: goto label_4ef934;
        case 0x4ef938u: goto label_4ef938;
        case 0x4ef93cu: goto label_4ef93c;
        case 0x4ef940u: goto label_4ef940;
        case 0x4ef944u: goto label_4ef944;
        case 0x4ef948u: goto label_4ef948;
        case 0x4ef94cu: goto label_4ef94c;
        case 0x4ef950u: goto label_4ef950;
        case 0x4ef954u: goto label_4ef954;
        case 0x4ef958u: goto label_4ef958;
        case 0x4ef95cu: goto label_4ef95c;
        case 0x4ef960u: goto label_4ef960;
        case 0x4ef964u: goto label_4ef964;
        case 0x4ef968u: goto label_4ef968;
        case 0x4ef96cu: goto label_4ef96c;
        case 0x4ef970u: goto label_4ef970;
        case 0x4ef974u: goto label_4ef974;
        case 0x4ef978u: goto label_4ef978;
        case 0x4ef97cu: goto label_4ef97c;
        case 0x4ef980u: goto label_4ef980;
        case 0x4ef984u: goto label_4ef984;
        case 0x4ef988u: goto label_4ef988;
        case 0x4ef98cu: goto label_4ef98c;
        case 0x4ef990u: goto label_4ef990;
        case 0x4ef994u: goto label_4ef994;
        case 0x4ef998u: goto label_4ef998;
        case 0x4ef99cu: goto label_4ef99c;
        case 0x4ef9a0u: goto label_4ef9a0;
        case 0x4ef9a4u: goto label_4ef9a4;
        case 0x4ef9a8u: goto label_4ef9a8;
        case 0x4ef9acu: goto label_4ef9ac;
        case 0x4ef9b0u: goto label_4ef9b0;
        case 0x4ef9b4u: goto label_4ef9b4;
        case 0x4ef9b8u: goto label_4ef9b8;
        case 0x4ef9bcu: goto label_4ef9bc;
        case 0x4ef9c0u: goto label_4ef9c0;
        case 0x4ef9c4u: goto label_4ef9c4;
        case 0x4ef9c8u: goto label_4ef9c8;
        case 0x4ef9ccu: goto label_4ef9cc;
        case 0x4ef9d0u: goto label_4ef9d0;
        case 0x4ef9d4u: goto label_4ef9d4;
        case 0x4ef9d8u: goto label_4ef9d8;
        case 0x4ef9dcu: goto label_4ef9dc;
        case 0x4ef9e0u: goto label_4ef9e0;
        case 0x4ef9e4u: goto label_4ef9e4;
        case 0x4ef9e8u: goto label_4ef9e8;
        case 0x4ef9ecu: goto label_4ef9ec;
        case 0x4ef9f0u: goto label_4ef9f0;
        case 0x4ef9f4u: goto label_4ef9f4;
        case 0x4ef9f8u: goto label_4ef9f8;
        case 0x4ef9fcu: goto label_4ef9fc;
        case 0x4efa00u: goto label_4efa00;
        case 0x4efa04u: goto label_4efa04;
        case 0x4efa08u: goto label_4efa08;
        case 0x4efa0cu: goto label_4efa0c;
        case 0x4efa10u: goto label_4efa10;
        case 0x4efa14u: goto label_4efa14;
        case 0x4efa18u: goto label_4efa18;
        case 0x4efa1cu: goto label_4efa1c;
        case 0x4efa20u: goto label_4efa20;
        case 0x4efa24u: goto label_4efa24;
        case 0x4efa28u: goto label_4efa28;
        case 0x4efa2cu: goto label_4efa2c;
        case 0x4efa30u: goto label_4efa30;
        case 0x4efa34u: goto label_4efa34;
        case 0x4efa38u: goto label_4efa38;
        case 0x4efa3cu: goto label_4efa3c;
        case 0x4efa40u: goto label_4efa40;
        case 0x4efa44u: goto label_4efa44;
        case 0x4efa48u: goto label_4efa48;
        case 0x4efa4cu: goto label_4efa4c;
        case 0x4efa50u: goto label_4efa50;
        case 0x4efa54u: goto label_4efa54;
        case 0x4efa58u: goto label_4efa58;
        case 0x4efa5cu: goto label_4efa5c;
        case 0x4efa60u: goto label_4efa60;
        case 0x4efa64u: goto label_4efa64;
        case 0x4efa68u: goto label_4efa68;
        case 0x4efa6cu: goto label_4efa6c;
        case 0x4efa70u: goto label_4efa70;
        case 0x4efa74u: goto label_4efa74;
        case 0x4efa78u: goto label_4efa78;
        case 0x4efa7cu: goto label_4efa7c;
        case 0x4efa80u: goto label_4efa80;
        case 0x4efa84u: goto label_4efa84;
        case 0x4efa88u: goto label_4efa88;
        case 0x4efa8cu: goto label_4efa8c;
        case 0x4efa90u: goto label_4efa90;
        case 0x4efa94u: goto label_4efa94;
        case 0x4efa98u: goto label_4efa98;
        case 0x4efa9cu: goto label_4efa9c;
        case 0x4efaa0u: goto label_4efaa0;
        case 0x4efaa4u: goto label_4efaa4;
        case 0x4efaa8u: goto label_4efaa8;
        case 0x4efaacu: goto label_4efaac;
        case 0x4efab0u: goto label_4efab0;
        case 0x4efab4u: goto label_4efab4;
        case 0x4efab8u: goto label_4efab8;
        case 0x4efabcu: goto label_4efabc;
        case 0x4efac0u: goto label_4efac0;
        case 0x4efac4u: goto label_4efac4;
        case 0x4efac8u: goto label_4efac8;
        case 0x4efaccu: goto label_4efacc;
        case 0x4efad0u: goto label_4efad0;
        case 0x4efad4u: goto label_4efad4;
        case 0x4efad8u: goto label_4efad8;
        case 0x4efadcu: goto label_4efadc;
        case 0x4efae0u: goto label_4efae0;
        case 0x4efae4u: goto label_4efae4;
        case 0x4efae8u: goto label_4efae8;
        case 0x4efaecu: goto label_4efaec;
        case 0x4efaf0u: goto label_4efaf0;
        case 0x4efaf4u: goto label_4efaf4;
        case 0x4efaf8u: goto label_4efaf8;
        case 0x4efafcu: goto label_4efafc;
        case 0x4efb00u: goto label_4efb00;
        case 0x4efb04u: goto label_4efb04;
        case 0x4efb08u: goto label_4efb08;
        case 0x4efb0cu: goto label_4efb0c;
        case 0x4efb10u: goto label_4efb10;
        case 0x4efb14u: goto label_4efb14;
        case 0x4efb18u: goto label_4efb18;
        case 0x4efb1cu: goto label_4efb1c;
        case 0x4efb20u: goto label_4efb20;
        case 0x4efb24u: goto label_4efb24;
        case 0x4efb28u: goto label_4efb28;
        case 0x4efb2cu: goto label_4efb2c;
        case 0x4efb30u: goto label_4efb30;
        case 0x4efb34u: goto label_4efb34;
        case 0x4efb38u: goto label_4efb38;
        case 0x4efb3cu: goto label_4efb3c;
        case 0x4efb40u: goto label_4efb40;
        case 0x4efb44u: goto label_4efb44;
        case 0x4efb48u: goto label_4efb48;
        case 0x4efb4cu: goto label_4efb4c;
        case 0x4efb50u: goto label_4efb50;
        case 0x4efb54u: goto label_4efb54;
        case 0x4efb58u: goto label_4efb58;
        case 0x4efb5cu: goto label_4efb5c;
        case 0x4efb60u: goto label_4efb60;
        case 0x4efb64u: goto label_4efb64;
        case 0x4efb68u: goto label_4efb68;
        case 0x4efb6cu: goto label_4efb6c;
        case 0x4efb70u: goto label_4efb70;
        case 0x4efb74u: goto label_4efb74;
        case 0x4efb78u: goto label_4efb78;
        case 0x4efb7cu: goto label_4efb7c;
        case 0x4efb80u: goto label_4efb80;
        case 0x4efb84u: goto label_4efb84;
        case 0x4efb88u: goto label_4efb88;
        case 0x4efb8cu: goto label_4efb8c;
        case 0x4efb90u: goto label_4efb90;
        case 0x4efb94u: goto label_4efb94;
        case 0x4efb98u: goto label_4efb98;
        case 0x4efb9cu: goto label_4efb9c;
        case 0x4efba0u: goto label_4efba0;
        case 0x4efba4u: goto label_4efba4;
        case 0x4efba8u: goto label_4efba8;
        case 0x4efbacu: goto label_4efbac;
        case 0x4efbb0u: goto label_4efbb0;
        case 0x4efbb4u: goto label_4efbb4;
        case 0x4efbb8u: goto label_4efbb8;
        case 0x4efbbcu: goto label_4efbbc;
        case 0x4efbc0u: goto label_4efbc0;
        case 0x4efbc4u: goto label_4efbc4;
        case 0x4efbc8u: goto label_4efbc8;
        case 0x4efbccu: goto label_4efbcc;
        case 0x4efbd0u: goto label_4efbd0;
        case 0x4efbd4u: goto label_4efbd4;
        case 0x4efbd8u: goto label_4efbd8;
        case 0x4efbdcu: goto label_4efbdc;
        case 0x4efbe0u: goto label_4efbe0;
        case 0x4efbe4u: goto label_4efbe4;
        case 0x4efbe8u: goto label_4efbe8;
        case 0x4efbecu: goto label_4efbec;
        case 0x4efbf0u: goto label_4efbf0;
        case 0x4efbf4u: goto label_4efbf4;
        case 0x4efbf8u: goto label_4efbf8;
        case 0x4efbfcu: goto label_4efbfc;
        case 0x4efc00u: goto label_4efc00;
        case 0x4efc04u: goto label_4efc04;
        case 0x4efc08u: goto label_4efc08;
        case 0x4efc0cu: goto label_4efc0c;
        case 0x4efc10u: goto label_4efc10;
        case 0x4efc14u: goto label_4efc14;
        case 0x4efc18u: goto label_4efc18;
        case 0x4efc1cu: goto label_4efc1c;
        case 0x4efc20u: goto label_4efc20;
        case 0x4efc24u: goto label_4efc24;
        case 0x4efc28u: goto label_4efc28;
        case 0x4efc2cu: goto label_4efc2c;
        case 0x4efc30u: goto label_4efc30;
        case 0x4efc34u: goto label_4efc34;
        case 0x4efc38u: goto label_4efc38;
        case 0x4efc3cu: goto label_4efc3c;
        case 0x4efc40u: goto label_4efc40;
        case 0x4efc44u: goto label_4efc44;
        case 0x4efc48u: goto label_4efc48;
        case 0x4efc4cu: goto label_4efc4c;
        case 0x4efc50u: goto label_4efc50;
        case 0x4efc54u: goto label_4efc54;
        case 0x4efc58u: goto label_4efc58;
        case 0x4efc5cu: goto label_4efc5c;
        case 0x4efc60u: goto label_4efc60;
        case 0x4efc64u: goto label_4efc64;
        case 0x4efc68u: goto label_4efc68;
        case 0x4efc6cu: goto label_4efc6c;
        case 0x4efc70u: goto label_4efc70;
        case 0x4efc74u: goto label_4efc74;
        case 0x4efc78u: goto label_4efc78;
        case 0x4efc7cu: goto label_4efc7c;
        case 0x4efc80u: goto label_4efc80;
        case 0x4efc84u: goto label_4efc84;
        case 0x4efc88u: goto label_4efc88;
        case 0x4efc8cu: goto label_4efc8c;
        case 0x4efc90u: goto label_4efc90;
        case 0x4efc94u: goto label_4efc94;
        case 0x4efc98u: goto label_4efc98;
        case 0x4efc9cu: goto label_4efc9c;
        case 0x4efca0u: goto label_4efca0;
        case 0x4efca4u: goto label_4efca4;
        case 0x4efca8u: goto label_4efca8;
        case 0x4efcacu: goto label_4efcac;
        case 0x4efcb0u: goto label_4efcb0;
        case 0x4efcb4u: goto label_4efcb4;
        case 0x4efcb8u: goto label_4efcb8;
        case 0x4efcbcu: goto label_4efcbc;
        case 0x4efcc0u: goto label_4efcc0;
        case 0x4efcc4u: goto label_4efcc4;
        case 0x4efcc8u: goto label_4efcc8;
        case 0x4efcccu: goto label_4efccc;
        case 0x4efcd0u: goto label_4efcd0;
        case 0x4efcd4u: goto label_4efcd4;
        case 0x4efcd8u: goto label_4efcd8;
        case 0x4efcdcu: goto label_4efcdc;
        case 0x4efce0u: goto label_4efce0;
        case 0x4efce4u: goto label_4efce4;
        case 0x4efce8u: goto label_4efce8;
        case 0x4efcecu: goto label_4efcec;
        case 0x4efcf0u: goto label_4efcf0;
        case 0x4efcf4u: goto label_4efcf4;
        case 0x4efcf8u: goto label_4efcf8;
        case 0x4efcfcu: goto label_4efcfc;
        case 0x4efd00u: goto label_4efd00;
        case 0x4efd04u: goto label_4efd04;
        case 0x4efd08u: goto label_4efd08;
        case 0x4efd0cu: goto label_4efd0c;
        case 0x4efd10u: goto label_4efd10;
        case 0x4efd14u: goto label_4efd14;
        case 0x4efd18u: goto label_4efd18;
        case 0x4efd1cu: goto label_4efd1c;
        case 0x4efd20u: goto label_4efd20;
        case 0x4efd24u: goto label_4efd24;
        case 0x4efd28u: goto label_4efd28;
        case 0x4efd2cu: goto label_4efd2c;
        case 0x4efd30u: goto label_4efd30;
        case 0x4efd34u: goto label_4efd34;
        case 0x4efd38u: goto label_4efd38;
        case 0x4efd3cu: goto label_4efd3c;
        case 0x4efd40u: goto label_4efd40;
        case 0x4efd44u: goto label_4efd44;
        case 0x4efd48u: goto label_4efd48;
        case 0x4efd4cu: goto label_4efd4c;
        case 0x4efd50u: goto label_4efd50;
        case 0x4efd54u: goto label_4efd54;
        case 0x4efd58u: goto label_4efd58;
        case 0x4efd5cu: goto label_4efd5c;
        case 0x4efd60u: goto label_4efd60;
        case 0x4efd64u: goto label_4efd64;
        case 0x4efd68u: goto label_4efd68;
        case 0x4efd6cu: goto label_4efd6c;
        case 0x4efd70u: goto label_4efd70;
        case 0x4efd74u: goto label_4efd74;
        case 0x4efd78u: goto label_4efd78;
        case 0x4efd7cu: goto label_4efd7c;
        case 0x4efd80u: goto label_4efd80;
        case 0x4efd84u: goto label_4efd84;
        case 0x4efd88u: goto label_4efd88;
        case 0x4efd8cu: goto label_4efd8c;
        case 0x4efd90u: goto label_4efd90;
        case 0x4efd94u: goto label_4efd94;
        case 0x4efd98u: goto label_4efd98;
        case 0x4efd9cu: goto label_4efd9c;
        case 0x4efda0u: goto label_4efda0;
        case 0x4efda4u: goto label_4efda4;
        case 0x4efda8u: goto label_4efda8;
        case 0x4efdacu: goto label_4efdac;
        case 0x4efdb0u: goto label_4efdb0;
        case 0x4efdb4u: goto label_4efdb4;
        case 0x4efdb8u: goto label_4efdb8;
        case 0x4efdbcu: goto label_4efdbc;
        case 0x4efdc0u: goto label_4efdc0;
        case 0x4efdc4u: goto label_4efdc4;
        case 0x4efdc8u: goto label_4efdc8;
        case 0x4efdccu: goto label_4efdcc;
        case 0x4efdd0u: goto label_4efdd0;
        case 0x4efdd4u: goto label_4efdd4;
        case 0x4efdd8u: goto label_4efdd8;
        case 0x4efddcu: goto label_4efddc;
        case 0x4efde0u: goto label_4efde0;
        case 0x4efde4u: goto label_4efde4;
        case 0x4efde8u: goto label_4efde8;
        case 0x4efdecu: goto label_4efdec;
        case 0x4efdf0u: goto label_4efdf0;
        case 0x4efdf4u: goto label_4efdf4;
        case 0x4efdf8u: goto label_4efdf8;
        case 0x4efdfcu: goto label_4efdfc;
        case 0x4efe00u: goto label_4efe00;
        case 0x4efe04u: goto label_4efe04;
        case 0x4efe08u: goto label_4efe08;
        case 0x4efe0cu: goto label_4efe0c;
        case 0x4efe10u: goto label_4efe10;
        case 0x4efe14u: goto label_4efe14;
        case 0x4efe18u: goto label_4efe18;
        case 0x4efe1cu: goto label_4efe1c;
        case 0x4efe20u: goto label_4efe20;
        case 0x4efe24u: goto label_4efe24;
        case 0x4efe28u: goto label_4efe28;
        case 0x4efe2cu: goto label_4efe2c;
        case 0x4efe30u: goto label_4efe30;
        case 0x4efe34u: goto label_4efe34;
        case 0x4efe38u: goto label_4efe38;
        case 0x4efe3cu: goto label_4efe3c;
        case 0x4efe40u: goto label_4efe40;
        case 0x4efe44u: goto label_4efe44;
        case 0x4efe48u: goto label_4efe48;
        case 0x4efe4cu: goto label_4efe4c;
        case 0x4efe50u: goto label_4efe50;
        case 0x4efe54u: goto label_4efe54;
        case 0x4efe58u: goto label_4efe58;
        case 0x4efe5cu: goto label_4efe5c;
        case 0x4efe60u: goto label_4efe60;
        case 0x4efe64u: goto label_4efe64;
        case 0x4efe68u: goto label_4efe68;
        case 0x4efe6cu: goto label_4efe6c;
        case 0x4efe70u: goto label_4efe70;
        case 0x4efe74u: goto label_4efe74;
        case 0x4efe78u: goto label_4efe78;
        case 0x4efe7cu: goto label_4efe7c;
        case 0x4efe80u: goto label_4efe80;
        case 0x4efe84u: goto label_4efe84;
        case 0x4efe88u: goto label_4efe88;
        case 0x4efe8cu: goto label_4efe8c;
        case 0x4efe90u: goto label_4efe90;
        case 0x4efe94u: goto label_4efe94;
        case 0x4efe98u: goto label_4efe98;
        case 0x4efe9cu: goto label_4efe9c;
        case 0x4efea0u: goto label_4efea0;
        case 0x4efea4u: goto label_4efea4;
        case 0x4efea8u: goto label_4efea8;
        case 0x4efeacu: goto label_4efeac;
        case 0x4efeb0u: goto label_4efeb0;
        case 0x4efeb4u: goto label_4efeb4;
        case 0x4efeb8u: goto label_4efeb8;
        case 0x4efebcu: goto label_4efebc;
        case 0x4efec0u: goto label_4efec0;
        case 0x4efec4u: goto label_4efec4;
        case 0x4efec8u: goto label_4efec8;
        case 0x4efeccu: goto label_4efecc;
        case 0x4efed0u: goto label_4efed0;
        case 0x4efed4u: goto label_4efed4;
        case 0x4efed8u: goto label_4efed8;
        case 0x4efedcu: goto label_4efedc;
        case 0x4efee0u: goto label_4efee0;
        case 0x4efee4u: goto label_4efee4;
        case 0x4efee8u: goto label_4efee8;
        case 0x4efeecu: goto label_4efeec;
        case 0x4efef0u: goto label_4efef0;
        case 0x4efef4u: goto label_4efef4;
        case 0x4efef8u: goto label_4efef8;
        case 0x4efefcu: goto label_4efefc;
        case 0x4eff00u: goto label_4eff00;
        case 0x4eff04u: goto label_4eff04;
        case 0x4eff08u: goto label_4eff08;
        case 0x4eff0cu: goto label_4eff0c;
        case 0x4eff10u: goto label_4eff10;
        case 0x4eff14u: goto label_4eff14;
        case 0x4eff18u: goto label_4eff18;
        case 0x4eff1cu: goto label_4eff1c;
        case 0x4eff20u: goto label_4eff20;
        case 0x4eff24u: goto label_4eff24;
        case 0x4eff28u: goto label_4eff28;
        case 0x4eff2cu: goto label_4eff2c;
        case 0x4eff30u: goto label_4eff30;
        case 0x4eff34u: goto label_4eff34;
        case 0x4eff38u: goto label_4eff38;
        case 0x4eff3cu: goto label_4eff3c;
        case 0x4eff40u: goto label_4eff40;
        case 0x4eff44u: goto label_4eff44;
        case 0x4eff48u: goto label_4eff48;
        case 0x4eff4cu: goto label_4eff4c;
        case 0x4eff50u: goto label_4eff50;
        case 0x4eff54u: goto label_4eff54;
        case 0x4eff58u: goto label_4eff58;
        case 0x4eff5cu: goto label_4eff5c;
        case 0x4eff60u: goto label_4eff60;
        case 0x4eff64u: goto label_4eff64;
        case 0x4eff68u: goto label_4eff68;
        case 0x4eff6cu: goto label_4eff6c;
        case 0x4eff70u: goto label_4eff70;
        case 0x4eff74u: goto label_4eff74;
        case 0x4eff78u: goto label_4eff78;
        case 0x4eff7cu: goto label_4eff7c;
        case 0x4eff80u: goto label_4eff80;
        case 0x4eff84u: goto label_4eff84;
        case 0x4eff88u: goto label_4eff88;
        case 0x4eff8cu: goto label_4eff8c;
        case 0x4eff90u: goto label_4eff90;
        case 0x4eff94u: goto label_4eff94;
        case 0x4eff98u: goto label_4eff98;
        case 0x4eff9cu: goto label_4eff9c;
        case 0x4effa0u: goto label_4effa0;
        case 0x4effa4u: goto label_4effa4;
        case 0x4effa8u: goto label_4effa8;
        case 0x4effacu: goto label_4effac;
        case 0x4effb0u: goto label_4effb0;
        case 0x4effb4u: goto label_4effb4;
        case 0x4effb8u: goto label_4effb8;
        case 0x4effbcu: goto label_4effbc;
        case 0x4effc0u: goto label_4effc0;
        case 0x4effc4u: goto label_4effc4;
        case 0x4effc8u: goto label_4effc8;
        case 0x4effccu: goto label_4effcc;
        case 0x4effd0u: goto label_4effd0;
        case 0x4effd4u: goto label_4effd4;
        case 0x4effd8u: goto label_4effd8;
        case 0x4effdcu: goto label_4effdc;
        case 0x4effe0u: goto label_4effe0;
        case 0x4effe4u: goto label_4effe4;
        case 0x4effe8u: goto label_4effe8;
        case 0x4effecu: goto label_4effec;
        case 0x4efff0u: goto label_4efff0;
        case 0x4efff4u: goto label_4efff4;
        case 0x4efff8u: goto label_4efff8;
        case 0x4efffcu: goto label_4efffc;
        case 0x4f0000u: goto label_4f0000;
        case 0x4f0004u: goto label_4f0004;
        case 0x4f0008u: goto label_4f0008;
        case 0x4f000cu: goto label_4f000c;
        case 0x4f0010u: goto label_4f0010;
        case 0x4f0014u: goto label_4f0014;
        case 0x4f0018u: goto label_4f0018;
        case 0x4f001cu: goto label_4f001c;
        case 0x4f0020u: goto label_4f0020;
        case 0x4f0024u: goto label_4f0024;
        case 0x4f0028u: goto label_4f0028;
        case 0x4f002cu: goto label_4f002c;
        case 0x4f0030u: goto label_4f0030;
        case 0x4f0034u: goto label_4f0034;
        case 0x4f0038u: goto label_4f0038;
        case 0x4f003cu: goto label_4f003c;
        case 0x4f0040u: goto label_4f0040;
        case 0x4f0044u: goto label_4f0044;
        case 0x4f0048u: goto label_4f0048;
        case 0x4f004cu: goto label_4f004c;
        case 0x4f0050u: goto label_4f0050;
        case 0x4f0054u: goto label_4f0054;
        case 0x4f0058u: goto label_4f0058;
        case 0x4f005cu: goto label_4f005c;
        case 0x4f0060u: goto label_4f0060;
        case 0x4f0064u: goto label_4f0064;
        case 0x4f0068u: goto label_4f0068;
        case 0x4f006cu: goto label_4f006c;
        case 0x4f0070u: goto label_4f0070;
        case 0x4f0074u: goto label_4f0074;
        case 0x4f0078u: goto label_4f0078;
        case 0x4f007cu: goto label_4f007c;
        case 0x4f0080u: goto label_4f0080;
        case 0x4f0084u: goto label_4f0084;
        case 0x4f0088u: goto label_4f0088;
        case 0x4f008cu: goto label_4f008c;
        case 0x4f0090u: goto label_4f0090;
        case 0x4f0094u: goto label_4f0094;
        case 0x4f0098u: goto label_4f0098;
        case 0x4f009cu: goto label_4f009c;
        case 0x4f00a0u: goto label_4f00a0;
        case 0x4f00a4u: goto label_4f00a4;
        case 0x4f00a8u: goto label_4f00a8;
        case 0x4f00acu: goto label_4f00ac;
        case 0x4f00b0u: goto label_4f00b0;
        case 0x4f00b4u: goto label_4f00b4;
        case 0x4f00b8u: goto label_4f00b8;
        case 0x4f00bcu: goto label_4f00bc;
        case 0x4f00c0u: goto label_4f00c0;
        case 0x4f00c4u: goto label_4f00c4;
        case 0x4f00c8u: goto label_4f00c8;
        case 0x4f00ccu: goto label_4f00cc;
        default: break;
    }

    ctx->pc = 0x4ed820u;

label_4ed820:
    // 0x4ed820: 0x3d207325  .word       0x3D207325                   # lui         $zero, 0x7325 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed820u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)29477 << 16));
label_4ed824:
    // 0x4ed824: 0x5e5b2520  .word       0x5E5B2520                   # bgtzl       $s2, . + 4 + (0x2520 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_4ed828:
    if (ctx->pc == 0x4ED828u) {
        ctx->pc = 0x4ED828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED824u;
        // 0x4ed828: 0x5e0a5e0d  .word       0x5E0A5E0D                   # bgtzl       $s0, . + 4 + (0x5E0D << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4ED828 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED82Cu;
        goto label_4ed82c;
    }
    ctx->pc = 0x4ED824u;
    {
        const bool branch_taken_0x4ed824 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x4ed824) {
            ctx->pc = 0x4ED828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED824u;
            // 0x4ed828: 0x5e0a5e0d  .word       0x5E0A5E0D                   # bgtzl       $s0, . + 4 + (0x5E0D << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4ED828 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6CA8u;
            return;
        }
    }
    ctx->pc = 0x4ED82Cu;
label_4ed82c:
    // 0x4ed82c: 0xa735d00  j           func_9CD7400
label_4ed830:
    if (ctx->pc == 0x4ED830u) {
        ctx->pc = 0x4ED834u;
        goto label_4ed834;
    }
    ctx->pc = 0x4ED82Cu;
    ctx->pc = 0x9CD7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CD7400u, 0x4ED82Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4ED834u;
label_4ed834:
    // 0x4ed834: 0x0  nop
    ctx->pc = 0x4ed834u;
    // NOP
label_4ed838:
    // 0x4ed838: 0x25207525  addiu       $zero, $t1, 0x7525
    ctx->pc = 0x4ed838u;
    // NOP (addiu $zero, ...)
label_4ed83c:
    // 0x4ed83c: 0x75252075  .word       0x75252075                   # INVALID     $t1, $a1, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed83cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED83C raw=0x75252075");
label_4ed840:
    // 0x4ed840: 0x752520  .word       0x00752520                   # add         $a0, $v1, $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed840u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_4ed844:
    // 0x4ed844: 0x0  nop
    ctx->pc = 0x4ed844u;
    // NOP
label_4ed848:
    // 0x4ed848: 0x68706c61  ldl         $s0, 0x6C61($v1)
    ctx->pc = 0x4ed848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_4ed84c:
    // 0x4ed84c: 0x6b625f61  ldl         $v0, 0x5F61($k1)
    ctx->pc = 0x4ed84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4ed850:
    // 0x4ed850: 0x0  nop
    ctx->pc = 0x4ed850u;
    // NOP
label_4ed854:
    // 0x4ed854: 0x0  nop
    ctx->pc = 0x4ed854u;
    // NOP
label_4ed858:
    // 0x4ed858: 0x6c6c6f63  ldr         $t4, 0x6F63($v1)
    ctx->pc = 0x4ed858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4ed85c:
    // 0x4ed85c: 0x6f697369  ldr         $t1, 0x7369($k1)
    ctx->pc = 0x4ed85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ed860:
    // 0x4ed860: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed860u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4ed864:
    // 0x4ed864: 0x0  nop
    ctx->pc = 0x4ed864u;
    // NOP
label_4ed868:
    // 0x4ed868: 0x642e7866  daddiu      $t6, $at, 0x7866
    ctx->pc = 0x4ed868u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)30822);
label_4ed86c:
    // 0x4ed86c: 0x79616c65  lq          $at, 0x6C65($t3)
    ctx->pc = 0x4ed86cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27749)));
label_4ed870:
    // 0x4ed870: 0x0  nop
    ctx->pc = 0x4ed870u;
    // NOP
label_4ed874:
    // 0x4ed874: 0x0  nop
    ctx->pc = 0x4ed874u;
    // NOP
label_4ed878:
    // 0x4ed878: 0x6873656d  ldl         $s3, 0x656D($v1)
    ctx->pc = 0x4ed878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4ed87c:
    // 0x4ed87c: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4ed87cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4ed880:
    // 0x4ed880: 0x706f742e  .word       0x706F742E                   # INVALID     $v1, $t7, 0x742E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed880u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ED880 raw=0x706F742E");
label_4ed884:
    // 0x4ed884: 0x0  nop
    ctx->pc = 0x4ed884u;
    // NOP
label_4ed888:
    // 0x4ed888: 0x0  nop
    ctx->pc = 0x4ed888u;
    // NOP
label_4ed88c:
    // 0x4ed88c: 0x0  nop
    ctx->pc = 0x4ed88cu;
    // NOP
label_4ed890:
    // 0x4ed890: 0x6873656d  ldl         $s3, 0x656D($v1)
    ctx->pc = 0x4ed890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4ed894:
    // 0x4ed894: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4ed894u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4ed898:
    // 0x4ed898: 0x746f622e  .word       0x746F622E                   # INVALID     $v1, $t7, 0x622E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed898u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED898 raw=0x746F622E");
label_4ed89c:
    // 0x4ed89c: 0x6d6f74  teq         $v1, $t5, 445
    ctx->pc = 0x4ed89cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_4ed8a0:
    // 0x4ed8a0: 0x635f7866  daddi       $ra, $k0, 0x7866
    ctx->pc = 0x4ed8a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4ed8a4:
    // 0x4ed8a4: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4ed8a4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4ed8a8:
    // 0x4ed8a8: 0x706f7465  .word       0x706F7465                   # INVALID     $v1, $t7, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed8a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4ED8A8 raw=0x706F7465");
label_4ed8ac:
    // 0x4ed8ac: 0x0  nop
    ctx->pc = 0x4ed8acu;
    // NOP
label_4ed8b0:
    // 0x4ed8b0: 0x635f7866  daddi       $ra, $k0, 0x7866
    ctx->pc = 0x4ed8b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4ed8b4:
    // 0x4ed8b4: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4ed8b4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4ed8b8:
    // 0x4ed8b8: 0x746f6265  .word       0x746F6265                   # INVALID     $v1, $t7, 0x6265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed8b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED8B8 raw=0x746F6265");
label_4ed8bc:
    // 0x4ed8bc: 0x6d6f74  teq         $v1, $t5, 445
    ctx->pc = 0x4ed8bcu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_4ed8c0:
    // 0x4ed8c0: 0x762e7866  .word       0x762E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed8c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED8C0 raw=0x762E7866");
label_4ed8c4:
    // 0x4ed8c4: 0x61757369  daddi       $s5, $t3, 0x7369
    ctx->pc = 0x4ed8c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4ed8c8:
    // 0x4ed8c8: 0x6c6e6f6c  ldr         $t6, 0x6F6C($v1)
    ctx->pc = 0x4ed8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4ed8cc:
    // 0x4ed8cc: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed8ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4ED8CC raw=0x00000079");
label_4ed8d0:
    // 0x4ed8d0: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed8d0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED8D0 raw=0x732E7866");
label_4ed8d4:
    // 0x4ed8d4: 0x6c6c616d  ldr         $t4, 0x616D($v1)
    ctx->pc = 0x4ed8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4ed8d8:
    // 0x4ed8d8: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x4ed8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ed8dc:
    // 0x4ed8dc: 0x61683f2e  daddi       $t0, $t3, 0x3F2E
    ctx->pc = 0x4ed8dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)16174; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_4ed8e0:
    // 0x4ed8e0: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed8e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4ed8e4:
    // 0x4ed8e4: 0x0  nop
    ctx->pc = 0x4ed8e4u;
    // NOP
label_4ed8e8:
    // 0x4ed8e8: 0x0  nop
    ctx->pc = 0x4ed8e8u;
    // NOP
label_4ed8ec:
    // 0x4ed8ec: 0x0  nop
    ctx->pc = 0x4ed8ecu;
    // NOP
label_4ed8f0:
    // 0x4ed8f0: 0x702e7866  .word       0x702E7866                   # INVALID     $at, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed8f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED8F0 raw=0x702E7866");
label_4ed8f4:
    // 0x4ed8f4: 0x79737472  lq          $s3, 0x7472($t3)
    ctx->pc = 0x4ed8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 29810)));
label_4ed8f8:
    // 0x4ed8f8: 0x683f2e73  ldl         $ra, 0x2E73($at)
    ctx->pc = 0x4ed8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 11891); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4ed8fc:
    // 0x4ed8fc: 0x646e61  .word       0x00646E61                   # addu        $t5, $v1, $a0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed8fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ed900:
    // 0x4ed900: 0x0  nop
    ctx->pc = 0x4ed900u;
    // NOP
label_4ed904:
    // 0x4ed904: 0x0  nop
    ctx->pc = 0x4ed904u;
    // NOP
label_4ed908:
    // 0x4ed908: 0x0  nop
    ctx->pc = 0x4ed908u;
    // NOP
label_4ed90c:
    // 0x4ed90c: 0x0  nop
    ctx->pc = 0x4ed90cu;
    // NOP
label_4ed910:
    // 0x4ed910: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed910u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ed914:
    // 0x4ed914: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed914u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ed918:
    // 0x4ed918: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4ed918u;
    // CACHE instruction (ignored)
label_4ed91c:
    // 0x4ed91c: 0x0  nop
    ctx->pc = 0x4ed91cu;
    // NOP
label_4ed920:
    // 0x4ed920: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4ed920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4ed924:
    // 0x4ed924: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4ed924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4ed928:
    // 0x4ed928: 0x30306574  andi        $s0, $at, 0x6574
    ctx->pc = 0x4ed928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25972);
label_4ed92c:
    // 0x4ed92c: 0x315f  .word       0x0000315F                   # ddivu       $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed92cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4ED92C raw=0x0000315F");
label_4ed930:
    // 0x4ed930: 0x745f3177  .word       0x745F3177                   # INVALID     $v0, $ra, 0x3177 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed930u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED930 raw=0x745F3177");
label_4ed934:
    // 0x4ed934: 0x6265645f  daddi       $a1, $s3, 0x645F
    ctx->pc = 0x4ed934u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25695; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ed938:
    // 0x4ed938: 0x65647261  daddiu      $a0, $t3, 0x7261
    ctx->pc = 0x4ed938u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
label_4ed93c:
    // 0x4ed93c: 0x30307275  andi        $s0, $at, 0x7275
    ctx->pc = 0x4ed93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29301);
label_4ed940:
    // 0x4ed940: 0x775f305f  .word       0x775F305F                   # INVALID     $k0, $ra, 0x305F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed940u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED940 raw=0x775F305F");
label_4ed944:
    // 0x4ed944: 0x5f726165  .word       0x5F726165                   # bgtzl       $k1, . + 4 + (0x6165 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_4ed948:
    if (ctx->pc == 0x4ED948u) {
        ctx->pc = 0x4ED948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED944u;
        // 0x4ed948: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED94Cu;
        goto label_4ed94c;
    }
    ctx->pc = 0x4ED944u;
    {
        const bool branch_taken_0x4ed944 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ed944) {
            ctx->pc = 0x4ED948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED944u;
            // 0x4ed948: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x505EDCu;
            return;
        }
    }
    ctx->pc = 0x4ED94Cu;
label_4ed94c:
    // 0x4ed94c: 0x0  nop
    ctx->pc = 0x4ed94cu;
    // NOP
label_4ed950:
    // 0x4ed950: 0x625f3177  daddi       $ra, $s2, 0x3177
    ctx->pc = 0x4ed950u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)12663; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4ed954:
    // 0x4ed954: 0x6e6f6c5f  ldr         $t7, 0x6C5F($s3)
    ctx->pc = 0x4ed954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ed958:
    // 0x4ed958: 0x65726467  daddiu      $s2, $t3, 0x6467
    ctx->pc = 0x4ed958u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25703);
label_4ed95c:
    // 0x4ed95c: 0x30307373  andi        $s0, $at, 0x7373
    ctx->pc = 0x4ed95cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29555);
label_4ed960:
    // 0x4ed960: 0x775f305f  .word       0x775F305F                   # INVALID     $k0, $ra, 0x305F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed960u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED960 raw=0x775F305F");
label_4ed964:
    // 0x4ed964: 0x5f726165  .word       0x5F726165                   # bgtzl       $k1, . + 4 + (0x6165 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_4ed968:
    if (ctx->pc == 0x4ED968u) {
        ctx->pc = 0x4ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED964u;
        // 0x4ed968: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED96Cu;
        goto label_4ed96c;
    }
    ctx->pc = 0x4ED964u;
    {
        const bool branch_taken_0x4ed964 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ed964) {
            ctx->pc = 0x4ED968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED964u;
            // 0x4ed968: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x505EFCu;
            return;
        }
    }
    ctx->pc = 0x4ED96Cu;
label_4ed96c:
    // 0x4ed96c: 0x0  nop
    ctx->pc = 0x4ed96cu;
    // NOP
label_4ed970:
    // 0x4ed970: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4ed970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4ed974:
    // 0x4ed974: 0x65732e72  daddiu      $s3, $t3, 0x2E72
    ctx->pc = 0x4ed974u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11890);
label_4ed978:
    // 0x4ed978: 0x6578  dsll        $t4, $zero, 21
    ctx->pc = 0x4ed978u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 21);
label_4ed97c:
    // 0x4ed97c: 0x0  nop
    ctx->pc = 0x4ed97cu;
    // NOP
label_4ed980:
    // 0x4ed980: 0x6e5f306d  ldr         $ra, 0x306D($s2)
    ctx->pc = 0x4ed980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12397); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4ed984:
    // 0x4ed984: 0x6174735f  daddi       $s4, $t3, 0x735F
    ctx->pc = 0x4ed984u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29535; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ed988:
    // 0x4ed988: 0x775f646e  .word       0x775F646E                   # INVALID     $k0, $ra, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed988u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED988 raw=0x775F646E");
label_4ed98c:
    // 0x4ed98c: 0x30746961  andi        $s4, $v1, 0x6961
    ctx->pc = 0x4ed98cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26977);
label_4ed990:
    // 0x4ed990: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4ed990u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ed994:
    // 0x4ed994: 0x0  nop
    ctx->pc = 0x4ed994u;
    // NOP
label_4ed998:
    // 0x4ed998: 0x0  nop
    ctx->pc = 0x4ed998u;
    // NOP
label_4ed99c:
    // 0x4ed99c: 0x0  nop
    ctx->pc = 0x4ed99cu;
    // NOP
label_4ed9a0:
    // 0x4ed9a0: 0x6e5f3077  ldr         $ra, 0x3077($s2)
    ctx->pc = 0x4ed9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4ed9a4:
    // 0x4ed9a4: 0x6174735f  daddi       $s4, $t3, 0x735F
    ctx->pc = 0x4ed9a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29535; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ed9a8:
    // 0x4ed9a8: 0x775f646e  .word       0x775F646E                   # INVALID     $k0, $ra, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed9a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED9A8 raw=0x775F646E");
label_4ed9ac:
    // 0x4ed9ac: 0x30746961  andi        $s4, $v1, 0x6961
    ctx->pc = 0x4ed9acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26977);
label_4ed9b0:
    // 0x4ed9b0: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4ed9b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ed9b4:
    // 0x4ed9b4: 0x0  nop
    ctx->pc = 0x4ed9b4u;
    // NOP
label_4ed9b8:
    // 0x4ed9b8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x4ed9b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4ed9bc:
    // 0x4ed9bc: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x4ed9bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4ED9BC raw=0x0000001C");
label_4ed9c0:
    // 0x4ed9c0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4ed9c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4ed9c4:
    // 0x4ed9c4: 0x0  nop
    ctx->pc = 0x4ed9c4u;
    // NOP
label_4ed9c8:
    // 0x4ed9c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed9c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ed9cc:
    // 0x4ed9cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed9ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ed9d0:
    // 0x4ed9d0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4ed9d0u;
    // CACHE instruction (ignored)
label_4ed9d4:
    // 0x4ed9d4: 0x0  nop
    ctx->pc = 0x4ed9d4u;
    // NOP
label_4ed9d8:
    // 0x4ed9d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed9d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ed9dc:
    // 0x4ed9dc: 0x0  nop
    ctx->pc = 0x4ed9dcu;
    // NOP
label_4ed9e0:
    // 0x4ed9e0: 0x0  nop
    ctx->pc = 0x4ed9e0u;
    // NOP
label_4ed9e4:
    // 0x4ed9e4: 0x0  nop
    ctx->pc = 0x4ed9e4u;
    // NOP
label_4ed9e8:
    // 0x4ed9e8: 0x0  nop
    ctx->pc = 0x4ed9e8u;
    // NOP
label_4ed9ec:
    // 0x4ed9ec: 0x0  nop
    ctx->pc = 0x4ed9ecu;
    // NOP
label_4ed9f0:
    // 0x4ed9f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed9f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ed9f4:
    // 0x4ed9f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed9f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ed9f8:
    // 0x4ed9f8: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed9f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED9F8 raw=0x7472705C");
label_4ed9fc:
    // 0x4ed9fc: 0x5c737973  .word       0x5C737973                   # bgtzl       $v1, . + 4 + (0x7973 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4eda00:
    if (ctx->pc == 0x4EDA00u) {
        ctx->pc = 0x4EDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED9FCu;
        // 0x4eda00: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA04u;
        goto label_4eda04;
    }
    ctx->pc = 0x4ED9FCu;
    {
        const bool branch_taken_0x4ed9fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4ed9fc) {
            ctx->pc = 0x4EDA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED9FCu;
            // 0x4eda00: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50BFCCu;
            return;
        }
    }
    ctx->pc = 0x4EDA04u;
label_4eda04:
    // 0x4eda04: 0x0  nop
    ctx->pc = 0x4eda04u;
    // NOP
label_4eda08:
    // 0x4eda08: 0x0  nop
    ctx->pc = 0x4eda08u;
    // NOP
label_4eda0c:
    // 0x4eda0c: 0x0  nop
    ctx->pc = 0x4eda0cu;
    // NOP
label_4eda10:
    // 0x4eda10: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4eda10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4eda14:
    // 0x4eda14: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4eda14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4eda18:
    // 0x4eda18: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eda18u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDA18 raw=0x7469625C");
label_4eda1c:
    // 0x4eda1c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eda1cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4EDA1C raw=0x7370616D");
label_4eda20:
    // 0x4eda20: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4eda20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
label_4eda24:
    // 0x4eda24: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4eda24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
label_4eda28:
    // 0x4eda28: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4eda28u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
label_4eda2c:
    // 0x4eda2c: 0x78665c73  lq          $a2, 0x5C73($v1)
    ctx->pc = 0x4eda2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 23667)));
label_4eda30:
    // 0x4eda30: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eda30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4EDA30 raw=0x0000005C");
label_4eda34:
    // 0x4eda34: 0x0  nop
    ctx->pc = 0x4eda34u;
    // NOP
label_4eda38:
    // 0x4eda38: 0x0  nop
    ctx->pc = 0x4eda38u;
    // NOP
label_4eda3c:
    // 0x4eda3c: 0x0  nop
    ctx->pc = 0x4eda3cu;
    // NOP
label_4eda40:
    // 0x4eda40: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4eda40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4eda44:
    // 0x4eda44: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4eda48:
    if (ctx->pc == 0x4EDA48u) {
        ctx->pc = 0x4EDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA44u;
        // 0x4eda48: 0x47415246  .word       0x47415246                   # INVALID     $k0, $at, 0x5246 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x6 at 0x4EDA48 raw=0x47415246");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA4Cu;
        goto label_4eda4c;
    }
    ctx->pc = 0x4EDA44u;
    {
        const bool branch_taken_0x4eda44 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4eda44) {
            ctx->pc = 0x4EDA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDA44u;
            // 0x4eda48: 0x47415246  .word       0x47415246                   # INVALID     $k0, $at, 0x5246 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x6 at 0x4EDA48 raw=0x47415246");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A7C4u;
            return;
        }
    }
    ctx->pc = 0x4EDA4Cu;
label_4eda4c:
    // 0x4eda4c: 0x54494c49  bnel        $v0, $t1, . + 4 + (0x4C49 << 2)
label_4eda50:
    if (ctx->pc == 0x4EDA50u) {
        ctx->pc = 0x4EDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA4Cu;
        // 0x4eda50: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4EDA50 raw=0x00000045");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA54u;
        goto label_4eda54;
    }
    ctx->pc = 0x4EDA4Cu;
    {
        const bool branch_taken_0x4eda4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x4eda4c) {
            ctx->pc = 0x4EDA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDA4Cu;
            // 0x4eda50: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4EDA50 raw=0x00000045");
            ctx->in_delay_slot = false;
            ctx->pc = 0x500B74u;
            return;
        }
    }
    ctx->pc = 0x4EDA54u;
label_4eda54:
    // 0x4eda54: 0x0  nop
    ctx->pc = 0x4eda54u;
    // NOP
label_4eda58:
    // 0x4eda58: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4eda58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4eda5c:
    // 0x4eda5c: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4eda60:
    if (ctx->pc == 0x4EDA60u) {
        ctx->pc = 0x4EDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA5Cu;
        // 0x4eda60: 0x4843414d  .word       0x4843414D                   # cfc2.i      $v1, $vi8 # 0000014C <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[8]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA64u;
        goto label_4eda64;
    }
    ctx->pc = 0x4EDA5Cu;
    {
        const bool branch_taken_0x4eda5c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4eda5c) {
            ctx->pc = 0x4EDA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDA5Cu;
            // 0x4eda60: 0x4843414d  .word       0x4843414D                   # cfc2.i      $v1, $vi8 # 0000014C <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[8]));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A7DCu;
            return;
        }
    }
    ctx->pc = 0x4EDA64u;
label_4eda64:
    // 0x4eda64: 0x4f  sync
    ctx->pc = 0x4eda64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4eda68:
    // 0x4eda68: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4eda68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4eda6c:
    // 0x4eda6c: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4eda70:
    if (ctx->pc == 0x4EDA70u) {
        ctx->pc = 0x4EDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA6Cu;
        // 0x4eda70: 0x4f4d5548  .word       0x4F4D5548                   # INVALID     $k0, $t5, 0x5548 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x4EDA70 raw=0x4F4D5548");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA74u;
        goto label_4eda74;
    }
    ctx->pc = 0x4EDA6Cu;
    {
        const bool branch_taken_0x4eda6c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4eda6c) {
            ctx->pc = 0x4EDA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDA6Cu;
            // 0x4eda70: 0x4f4d5548  .word       0x4F4D5548                   # INVALID     $k0, $t5, 0x5548 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4EDA70 raw=0x4F4D5548");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A7ECu;
            return;
        }
    }
    ctx->pc = 0x4EDA74u;
label_4eda74:
    // 0x4eda74: 0x5255  .word       0x00005255                   # INVALID     $zero, $zero, 0x5255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eda74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4EDA74 raw=0x00005255");
label_4eda78:
    // 0x4eda78: 0x0  nop
    ctx->pc = 0x4eda78u;
    // NOP
label_4eda7c:
    // 0x4eda7c: 0x0  nop
    ctx->pc = 0x4eda7cu;
    // NOP
label_4eda80:
    // 0x4eda80: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4eda80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4eda84:
    // 0x4eda84: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4eda88:
    if (ctx->pc == 0x4EDA88u) {
        ctx->pc = 0x4EDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA84u;
        // 0x4eda88: 0x544c5543  bnel        $v0, $t4, . + 4 + (0x5543 << 2) (Delay Slot)
        // Likely branch instruction at 0x4EDA88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA8Cu;
        goto label_4eda8c;
    }
    ctx->pc = 0x4EDA84u;
    {
        const bool branch_taken_0x4eda84 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4eda84) {
            ctx->pc = 0x4EDA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDA84u;
            // 0x4eda88: 0x544c5543  bnel        $v0, $t4, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x4EDA88 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A804u;
            return;
        }
    }
    ctx->pc = 0x4EDA8Cu;
label_4eda8c:
    // 0x4eda8c: 0x455255  .word       0x00455255                   # INVALID     $v0, $a1, 0x5255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eda8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4EDA8C raw=0x00455255");
label_4eda90:
    // 0x4eda90: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4eda90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4eda94:
    // 0x4eda94: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4eda98:
    if (ctx->pc == 0x4EDA98u) {
        ctx->pc = 0x4EDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDA94u;
        // 0x4eda98: 0x45584553  .word       0x45584553                   # INVALID     $t2, $t8, 0x4553 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x4EDA98 raw=0x45584553");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDA9Cu;
        goto label_4eda9c;
    }
    ctx->pc = 0x4EDA94u;
    {
        const bool branch_taken_0x4eda94 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4eda94) {
            ctx->pc = 0x4EDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDA94u;
            // 0x4eda98: 0x45584553  .word       0x45584553                   # INVALID     $t2, $t8, 0x4553 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x4EDA98 raw=0x45584553");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A814u;
            return;
        }
    }
    ctx->pc = 0x4EDA9Cu;
label_4eda9c:
    // 0x4eda9c: 0x0  nop
    ctx->pc = 0x4eda9cu;
    // NOP
label_4edaa0:
    // 0x4edaa0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4edaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edaa4:
    // 0x4edaa4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4edaa8:
    if (ctx->pc == 0x4EDAA8u) {
        ctx->pc = 0x4EDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDAA4u;
        // 0x4edaa8: 0x54414c46  bnel        $v0, $at, . + 4 + (0x4C46 << 2) (Delay Slot)
        // Likely branch instruction at 0x4EDAA8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDAACu;
        goto label_4edaac;
    }
    ctx->pc = 0x4EDAA4u;
    {
        const bool branch_taken_0x4edaa4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edaa4) {
            ctx->pc = 0x4EDAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDAA4u;
            // 0x4edaa8: 0x54414c46  bnel        $v0, $at, . + 4 + (0x4C46 << 2) (Delay Slot)
            // Likely branch instruction at 0x4EDAA8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A824u;
            return;
        }
    }
    ctx->pc = 0x4EDAACu;
label_4edaac:
    // 0x4edaac: 0x49524554  .word       0x49524554                   # INVALID     $t2, $s2, 0x4554 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4edaacu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4EDAAC raw=0x49524554");
label_4edab0:
    // 0x4edab0: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edab0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4EDAB0 raw=0x00000045");
label_4edab4:
    // 0x4edab4: 0x0  nop
    ctx->pc = 0x4edab4u;
    // NOP
label_4edab8:
    // 0x4edab8: 0x0  nop
    ctx->pc = 0x4edab8u;
    // NOP
label_4edabc:
    // 0x4edabc: 0x0  nop
    ctx->pc = 0x4edabcu;
    // NOP
label_4edac0:
    // 0x4edac0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4edac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edac4:
    // 0x4edac4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4edac8:
    if (ctx->pc == 0x4EDAC8u) {
        ctx->pc = 0x4EDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDAC4u;
        // 0x4edac8: 0x49524553  .word       0x49524553                   # INVALID     $t2, $s2, 0x4553 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4EDAC8 raw=0x49524553");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDACCu;
        goto label_4edacc;
    }
    ctx->pc = 0x4EDAC4u;
    {
        const bool branch_taken_0x4edac4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edac4) {
            ctx->pc = 0x4EDAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDAC4u;
            // 0x4edac8: 0x49524553  .word       0x49524553                   # INVALID     $t2, $s2, 0x4553 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4EDAC8 raw=0x49524553");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A844u;
            return;
        }
    }
    ctx->pc = 0x4EDACCu;
label_4edacc:
    // 0x4edacc: 0x585545  .word       0x00585545                   # INVALID     $v0, $t8, 0x5545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edaccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4EDACC raw=0x00585545");
label_4edad0:
    // 0x4edad0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4edad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edad4:
    // 0x4edad4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4edad8:
    if (ctx->pc == 0x4EDAD8u) {
        ctx->pc = 0x4EDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDAD4u;
        // 0x4edad8: 0x5f57454e  .word       0x5F57454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDAD8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDADCu;
        goto label_4edadc;
    }
    ctx->pc = 0x4EDAD4u;
    {
        const bool branch_taken_0x4edad4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edad4) {
            ctx->pc = 0x4EDAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDAD4u;
            // 0x4edad8: 0x5f57454e  .word       0x5F57454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDAD8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A854u;
            return;
        }
    }
    ctx->pc = 0x4EDADCu;
label_4edadc:
    // 0x4edadc: 0x454741  .word       0x00454741                   # INVALID     $v0, $a1, 0x4741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edadcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDADC raw=0x00454741");
label_4edae0:
    // 0x4edae0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4edae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edae4:
    // 0x4edae4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4edae8:
    if (ctx->pc == 0x4EDAE8u) {
        ctx->pc = 0x4EDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDAE4u;
        // 0x4edae8: 0x45475241  .word       0x45475241                   # INVALID     $t2, $a3, 0x5241 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x4EDAE8 raw=0x45475241");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDAECu;
        goto label_4edaec;
    }
    ctx->pc = 0x4EDAE4u;
    {
        const bool branch_taken_0x4edae4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edae4) {
            ctx->pc = 0x4EDAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDAE4u;
            // 0x4edae8: 0x45475241  .word       0x45475241                   # INVALID     $t2, $a3, 0x5241 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x4EDAE8 raw=0x45475241");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A864u;
            return;
        }
    }
    ctx->pc = 0x4EDAECu;
label_4edaec:
    // 0x4edaec: 0x544e  .word       0x0000544E                   # INVALID     $zero, $zero, 0x544E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edaecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4EDAEC raw=0x0000544E");
label_4edaf0:
    // 0x4edaf0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4edaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edaf4:
    // 0x4edaf4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4edaf8:
    if (ctx->pc == 0x4EDAF8u) {
        ctx->pc = 0x4EDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDAF4u;
        // 0x4edaf8: 0x474f5244  .word       0x474F5244                   # INVALID     $k0, $t7, 0x5244 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x4 at 0x4EDAF8 raw=0x474F5244");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDAFCu;
        goto label_4edafc;
    }
    ctx->pc = 0x4EDAF4u;
    {
        const bool branch_taken_0x4edaf4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edaf4) {
            ctx->pc = 0x4EDAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDAF4u;
            // 0x4edaf8: 0x474f5244  .word       0x474F5244                   # INVALID     $k0, $t7, 0x5244 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x4 at 0x4EDAF8 raw=0x474F5244");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A874u;
            return;
        }
    }
    ctx->pc = 0x4EDAFCu;
label_4edafc:
    // 0x4edafc: 0x4555  .word       0x00004555                   # INVALID     $zero, $zero, 0x4555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edafcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4EDAFC raw=0x00004555");
label_4edb00:
    // 0x4edb00: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4edb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edb04:
    // 0x4edb04: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4edb08:
    if (ctx->pc == 0x4EDB08u) {
        ctx->pc = 0x4EDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDB04u;
        // 0x4edb08: 0x5f54454a  .word       0x5F54454A                   # bgtzl       $k0, . + 4 + (0x454A << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDB08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDB0Cu;
        goto label_4edb0c;
    }
    ctx->pc = 0x4EDB04u;
    {
        const bool branch_taken_0x4edb04 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edb04) {
            ctx->pc = 0x4EDB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDB04u;
            // 0x4edb08: 0x5f54454a  .word       0x5F54454A                   # bgtzl       $k0, . + 4 + (0x454A << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDB08 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A884u;
            return;
        }
    }
    ctx->pc = 0x4EDB0Cu;
label_4edb0c:
    // 0x4edb0c: 0x544553  .word       0x00544553                   # mtlo        $v0 # 00144540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edb0cu;
    ctx->lo = GPR_U64(ctx, 2);
label_4edb10:
    // 0x4edb10: 0x6d2e7866  ldr         $t6, 0x7866($t1)
    ctx->pc = 0x4edb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4edb14:
    // 0x4edb14: 0x6870726f  ldl         $s0, 0x726F($v1)
    ctx->pc = 0x4edb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_4edb18:
    // 0x4edb18: 0x696e612e  ldl         $t6, 0x612E($t3)
    ctx->pc = 0x4edb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4edb1c:
    // 0x4edb1c: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edb1cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edb20:
    // 0x4edb20: 0x0  nop
    ctx->pc = 0x4edb20u;
    // NOP
label_4edb24:
    // 0x4edb24: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edb24u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4edb28:
    // 0x4edb28: 0x0  nop
    ctx->pc = 0x4edb28u;
    // NOP
label_4edb2c:
    // 0x4edb2c: 0x0  nop
    ctx->pc = 0x4edb2cu;
    // NOP
label_4edb30:
    // 0x4edb30: 0x65645f61  daddiu      $a0, $t3, 0x5F61
    ctx->pc = 0x4edb30u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24417);
label_4edb34:
    // 0x4edb34: 0x6c756166  ldr         $s5, 0x6166($v1)
    ctx->pc = 0x4edb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4edb38:
    // 0x4edb38: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4edb38u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edb3c:
    // 0x4edb3c: 0x0  nop
    ctx->pc = 0x4edb3cu;
    // NOP
label_4edb40:
    // 0x4edb40: 0x65645f62  daddiu      $a0, $t3, 0x5F62
    ctx->pc = 0x4edb40u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24418);
label_4edb44:
    // 0x4edb44: 0x6c756166  ldr         $s5, 0x6166($v1)
    ctx->pc = 0x4edb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4edb48:
    // 0x4edb48: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4edb48u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edb4c:
    // 0x4edb4c: 0x0  nop
    ctx->pc = 0x4edb4cu;
    // NOP
label_4edb50:
    // 0x4edb50: 0x65645f63  daddiu      $a0, $t3, 0x5F63
    ctx->pc = 0x4edb50u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24419);
label_4edb54:
    // 0x4edb54: 0x6c756166  ldr         $s5, 0x6166($v1)
    ctx->pc = 0x4edb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4edb58:
    // 0x4edb58: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4edb58u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edb5c:
    // 0x4edb5c: 0x0  nop
    ctx->pc = 0x4edb5cu;
    // NOP
label_4edb60:
    // 0x4edb60: 0x65645f64  daddiu      $a0, $t3, 0x5F64
    ctx->pc = 0x4edb60u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24420);
label_4edb64:
    // 0x4edb64: 0x6c756166  ldr         $s5, 0x6166($v1)
    ctx->pc = 0x4edb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4edb68:
    // 0x4edb68: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4edb68u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edb6c:
    // 0x4edb6c: 0x0  nop
    ctx->pc = 0x4edb6cu;
    // NOP
label_4edb70:
    // 0x4edb70: 0x6e617473  ldr         $at, 0x7473($s3)
    ctx->pc = 0x4edb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4edb74:
    // 0x4edb74: 0x61735f64  daddi       $s3, $t3, 0x5F64
    ctx->pc = 0x4edb74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24420; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_4edb78:
    // 0x4edb78: 0x616d6f64  daddi       $t5, $t3, 0x6F64
    ctx->pc = 0x4edb78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28516; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4edb7c:
    // 0x4edb7c: 0x6f73  tltu        $zero, $zero, 445
    ctx->pc = 0x4edb7cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edb80:
    // 0x4edb80: 0x76617263  .word       0x76617263                   # INVALID     $s3, $at, 0x7263 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edb80u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDB80 raw=0x76617263");
label_4edb84:
    // 0x4edb84: 0x65686361  daddiu      $t0, $t3, 0x6361
    ctx->pc = 0x4edb84u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
label_4edb88:
    // 0x4edb88: 0x315f  .word       0x0000315F                   # ddivu       $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edb88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4EDB88 raw=0x0000315F");
label_4edb8c:
    // 0x4edb8c: 0x0  nop
    ctx->pc = 0x4edb8cu;
    // NOP
label_4edb90:
    // 0x4edb90: 0x6e617473  ldr         $at, 0x7473($s3)
    ctx->pc = 0x4edb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4edb94:
    // 0x4edb94: 0x756d5f64  .word       0x756D5F64                   # INVALID     $t3, $t5, 0x5F64 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edb94u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDB94 raw=0x756D5F64");
label_4edb98:
    // 0x4edb98: 0x756373  tltu        $v1, $s5, 397
    ctx->pc = 0x4edb98u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_4edb9c:
    // 0x4edb9c: 0x0  nop
    ctx->pc = 0x4edb9cu;
    // NOP
label_4edba0:
    // 0x4edba0: 0x746c6168  .word       0x746C6168                   # INVALID     $v1, $t4, 0x6168 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edba0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDBA0 raw=0x746C6168");
label_4edba4:
    // 0x4edba4: 0x5f657265  .word       0x5F657265                   # bgtzl       $k1, . + 4 + (0x7265 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_4edba8:
    if (ctx->pc == 0x4EDBA8u) {
        ctx->pc = 0x4EDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDBA4u;
        // 0x4edba8: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDBACu;
        goto label_4edbac;
    }
    ctx->pc = 0x4EDBA4u;
    {
        const bool branch_taken_0x4edba4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4edba4) {
            ctx->pc = 0x4EDBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDBA4u;
            // 0x4edba8: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A53Cu;
            return;
        }
    }
    ctx->pc = 0x4EDBACu;
label_4edbac:
    // 0x4edbac: 0x0  nop
    ctx->pc = 0x4edbacu;
    // NOP
label_4edbb0:
    // 0x4edbb0: 0x7474696c  .word       0x7474696C                   # INVALID     $v1, $s4, 0x696C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edbb0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDBB0 raw=0x7474696C");
label_4edbb4:
    // 0x4edbb4: 0x7473656c  .word       0x7473656C                   # INVALID     $v1, $s3, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edbb4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDBB4 raw=0x7473656C");
label_4edbb8:
    // 0x4edbb8: 0x65676761  daddiu      $a3, $t3, 0x6761
    ctx->pc = 0x4edbb8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26465);
label_4edbbc:
    // 0x4edbbc: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4edbbcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edbc0:
    // 0x4edbc0: 0x73696877  .word       0x73696877                   # psrah       $t5, $t1, 1 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edbc0u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 9), 1));
label_4edbc4:
    // 0x4edbc4: 0x315f796b  andi        $ra, $t2, 0x796B
    ctx->pc = 0x4edbc4u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31083);
label_4edbc8:
    // 0x4edbc8: 0x0  nop
    ctx->pc = 0x4edbc8u;
    // NOP
label_4edbcc:
    // 0x4edbcc: 0x0  nop
    ctx->pc = 0x4edbccu;
    // NOP
label_4edbd0:
    // 0x4edbd0: 0x0  nop
    ctx->pc = 0x4edbd0u;
    // NOP
label_4edbd4:
    // 0x4edbd4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edbd4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4edbd8:
    // 0x4edbd8: 0x0  nop
    ctx->pc = 0x4edbd8u;
    // NOP
label_4edbdc:
    // 0x4edbdc: 0x0  nop
    ctx->pc = 0x4edbdcu;
    // NOP
label_4edbe0:
    // 0x4edbe0: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4edbe4:
    if (ctx->pc == 0x4EDBE4u) {
        ctx->pc = 0x4EDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDBE0u;
        // 0x4edbe4: 0x69727453  ldl         $s2, 0x7453($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDBE8u;
        goto label_4edbe8;
    }
    ctx->pc = 0x4EDBE0u;
    {
        const bool branch_taken_0x4edbe0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4edbe0) {
            ctx->pc = 0x4EDBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDBE0u;
            // 0x4edbe4: 0x69727453  ldl         $s2, 0x7453($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF100u;
            return;
        }
    }
    ctx->pc = 0x4EDBE8u;
label_4edbe8:
    // 0x4edbe8: 0x6957656b  ldl         $s7, 0x656B($t2)
    ctx->pc = 0x4edbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25963); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_4edbec:
    // 0x4edbec: 0x6874  teq         $zero, $zero, 417
    ctx->pc = 0x4edbecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edbf0:
    // 0x4edbf0: 0x746f6f66  .word       0x746F6F66                   # INVALID     $v1, $t7, 0x6F66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edbf0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDBF0 raw=0x746F6F66");
label_4edbf4:
    // 0x4edbf4: 0x70657473  .word       0x70657473                   # INVALID     $v1, $a1, 0x7473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edbf4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EDBF4 raw=0x70657473");
label_4edbf8:
    // 0x4edbf8: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4edbf8u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edbfc:
    // 0x4edbfc: 0x0  nop
    ctx->pc = 0x4edbfcu;
    // NOP
label_4edc00:
    // 0x4edc00: 0x0  nop
    ctx->pc = 0x4edc00u;
    // NOP
label_4edc04:
    // 0x4edc04: 0x0  nop
    ctx->pc = 0x4edc04u;
    // NOP
label_4edc08:
    // 0x4edc08: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edc08u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4edc0c:
    // 0x4edc0c: 0x0  nop
    ctx->pc = 0x4edc0cu;
    // NOP
label_4edc10:
    // 0x4edc10: 0x0  nop
    ctx->pc = 0x4edc10u;
    // NOP
label_4edc14:
    // 0x4edc14: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edc14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4edc18:
    // 0x4edc18: 0x0  nop
    ctx->pc = 0x4edc18u;
    // NOP
label_4edc1c:
    // 0x4edc1c: 0x0  nop
    ctx->pc = 0x4edc1cu;
    // NOP
label_4edc20:
    // 0x4edc20: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4edc20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4edc24:
    // 0x4edc24: 0x2e6d696e  sltiu       $t5, $s3, 0x696E
    ctx->pc = 0x4edc24u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26990) ? 1 : 0);
label_4edc28:
    // 0x4edc28: 0x63657073  daddi       $a1, $k1, 0x7073
    ctx->pc = 0x4edc28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28787; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edc2c:
    // 0x4edc2c: 0x6c6169  .word       0x006C6169                   # mtsa        $v1 # 000C6140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4edc2cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4edc30:
    // 0x4edc30: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4edc30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4edc34:
    // 0x4edc34: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4edc34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4edc38:
    // 0x4edc38: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4edc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4edc3c:
    // 0x4edc3c: 0x6f5c736d  ldr         $gp, 0x736D($k0)
    ctx->pc = 0x4edc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29549); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
label_4edc40:
    // 0x4edc40: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x4edc40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edc44:
    // 0x4edc44: 0x5c7374  teq         $v0, $gp, 461
    ctx->pc = 0x4edc44u;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_4edc48:
    // 0x4edc48: 0x0  nop
    ctx->pc = 0x4edc48u;
    // NOP
label_4edc4c:
    // 0x4edc4c: 0x0  nop
    ctx->pc = 0x4edc4cu;
    // NOP
label_4edc50:
    // 0x4edc50: 0x722e7866  .word       0x722E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edc50u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EDC50 raw=0x722E7866");
label_4edc54:
    // 0x4edc54: 0x6a646165  ldl         $a0, 0x6165($s3)
    ctx->pc = 0x4edc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4edc58:
    // 0x4edc58: 0x2e747375  sltiu       $s4, $s3, 0x7375
    ctx->pc = 0x4edc58u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29557) ? 1 : 0);
label_4edc5c:
    // 0x4edc5c: 0x74736964  .word       0x74736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edc5cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDC5C raw=0x74736964");
label_4edc60:
    // 0x4edc60: 0x0  nop
    ctx->pc = 0x4edc60u;
    // NOP
label_4edc64:
    // 0x4edc64: 0x0  nop
    ctx->pc = 0x4edc64u;
    // NOP
label_4edc68:
    // 0x4edc68: 0x0  nop
    ctx->pc = 0x4edc68u;
    // NOP
label_4edc6c:
    // 0x4edc6c: 0x0  nop
    ctx->pc = 0x4edc6cu;
    // NOP
label_4edc70:
    // 0x4edc70: 0x722e7866  .word       0x722E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edc70u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EDC70 raw=0x722E7866");
label_4edc74:
    // 0x4edc74: 0x6a646165  ldl         $a0, 0x6165($s3)
    ctx->pc = 0x4edc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4edc78:
    // 0x4edc78: 0x2e747375  sltiu       $s4, $s3, 0x7375
    ctx->pc = 0x4edc78u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29557) ? 1 : 0);
label_4edc7c:
    // 0x4edc7c: 0x65636166  daddiu      $v1, $t3, 0x6166
    ctx->pc = 0x4edc7cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
label_4edc80:
    // 0x4edc80: 0x63616632  daddi       $at, $k1, 0x6632
    ctx->pc = 0x4edc80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26162; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4edc84:
    // 0x4edc84: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edc84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4edc88:
    // 0x4edc88: 0x0  nop
    ctx->pc = 0x4edc88u;
    // NOP
label_4edc8c:
    // 0x4edc8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edc8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4edc90:
    // 0x4edc90: 0x0  nop
    ctx->pc = 0x4edc90u;
    // NOP
label_4edc94:
    // 0x4edc94: 0x0  nop
    ctx->pc = 0x4edc94u;
    // NOP
label_4edc98:
    // 0x4edc98: 0x0  nop
    ctx->pc = 0x4edc98u;
    // NOP
label_4edc9c:
    // 0x4edc9c: 0x0  nop
    ctx->pc = 0x4edc9cu;
    // NOP
label_4edca0:
    // 0x4edca0: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4edca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4edca4:
    // 0x4edca4: 0x61656872  daddi       $a1, $t3, 0x6872
    ctx->pc = 0x4edca4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26738; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edca8:
    // 0x4edca8: 0x72702e64  .word       0x72702E64                   # INVALID     $s3, $s0, 0x2E64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edca8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4EDCA8 raw=0x72702E64");
label_4edcac:
    // 0x4edcac: 0x73797374  .word       0x73797374                   # psllh       $t6, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edcacu;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
label_4edcb0:
    // 0x4edcb0: 0x6d616e2e  ldr         $at, 0x6E2E($t3)
    ctx->pc = 0x4edcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28206); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4edcb4:
    // 0x4edcb4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edcb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4edcb8:
    // 0x4edcb8: 0x0  nop
    ctx->pc = 0x4edcb8u;
    // NOP
label_4edcbc:
    // 0x4edcbc: 0x0  nop
    ctx->pc = 0x4edcbcu;
    // NOP
label_4edcc0:
    // 0x4edcc0: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4edcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4edcc4:
    // 0x4edcc4: 0x61656872  daddi       $a1, $t3, 0x6872
    ctx->pc = 0x4edcc4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26738; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edcc8:
    // 0x4edcc8: 0x72702e64  .word       0x72702E64                   # INVALID     $s3, $s0, 0x2E64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edcc8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4EDCC8 raw=0x72702E64");
label_4edccc:
    // 0x4edccc: 0x73797374  .word       0x73797374                   # psllh       $t6, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edcccu;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
label_4edcd0:
    // 0x4edcd0: 0x7275642e  .word       0x7275642E                   # INVALID     $s3, $s5, 0x642E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edcd0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4EDCD0 raw=0x7275642E");
label_4edcd4:
    // 0x4edcd4: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4edcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4edcd8:
    // 0x4edcd8: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edcd8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4edcdc:
    // 0x4edcdc: 0x0  nop
    ctx->pc = 0x4edcdcu;
    // NOP
label_4edce0:
    // 0x4edce0: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4edce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4edce4:
    // 0x4edce4: 0x61656872  daddi       $a1, $t3, 0x6872
    ctx->pc = 0x4edce4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26738; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edce8:
    // 0x4edce8: 0x72702e64  .word       0x72702E64                   # INVALID     $s3, $s0, 0x2E64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edce8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4EDCE8 raw=0x72702E64");
label_4edcec:
    // 0x4edcec: 0x73797374  .word       0x73797374                   # psllh       $t6, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edcecu;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
label_4edcf0:
    // 0x4edcf0: 0x6d756e2e  ldr         $s5, 0x6E2E($t3)
    ctx->pc = 0x4edcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28206); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4edcf4:
    // 0x4edcf4: 0x726562  .word       0x00726562                   # sub         $t4, $v1, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edcf4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 18), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_4edcf8:
    // 0x4edcf8: 0x0  nop
    ctx->pc = 0x4edcf8u;
    // NOP
label_4edcfc:
    // 0x4edcfc: 0x0  nop
    ctx->pc = 0x4edcfcu;
    // NOP
label_4edd00:
    // 0x4edd00: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4edd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4edd04:
    // 0x4edd04: 0x61656872  daddi       $a1, $t3, 0x6872
    ctx->pc = 0x4edd04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26738; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edd08:
    // 0x4edd08: 0x72702e64  .word       0x72702E64                   # INVALID     $s3, $s0, 0x2E64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edd08u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4EDD08 raw=0x72702E64");
label_4edd0c:
    // 0x4edd0c: 0x73797374  .word       0x73797374                   # psllh       $t6, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edd0cu;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
label_4edd10:
    // 0x4edd10: 0x7a69732e  lq          $t1, 0x732E($s3)
    ctx->pc = 0x4edd10u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29486)));
label_4edd14:
    // 0x4edd14: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edd14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4edd18:
    // 0x4edd18: 0x0  nop
    ctx->pc = 0x4edd18u;
    // NOP
label_4edd1c:
    // 0x4edd1c: 0x0  nop
    ctx->pc = 0x4edd1cu;
    // NOP
label_4edd20:
    // 0x4edd20: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x4edd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4edd24:
    // 0x4edd24: 0x7472702e  .word       0x7472702E                   # INVALID     $v1, $s2, 0x702E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edd24u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDD24 raw=0x7472702E");
label_4edd28:
    // 0x4edd28: 0x2e737973  sltiu       $s3, $s3, 0x7973
    ctx->pc = 0x4edd28u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31091) ? 1 : 0);
label_4edd2c:
    // 0x4edd2c: 0x766f6261  .word       0x766F6261                   # INVALID     $s3, $t7, 0x6261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edd2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDD2C raw=0x766F6261");
label_4edd30:
    // 0x4edd30: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edd30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4edd34:
    // 0x4edd34: 0x0  nop
    ctx->pc = 0x4edd34u;
    // NOP
label_4edd38:
    // 0x4edd38: 0x0  nop
    ctx->pc = 0x4edd38u;
    // NOP
label_4edd3c:
    // 0x4edd3c: 0x0  nop
    ctx->pc = 0x4edd3cu;
    // NOP
label_4edd40:
    // 0x4edd40: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x4edd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4edd44:
    // 0x4edd44: 0x7472702e  .word       0x7472702E                   # INVALID     $v1, $s2, 0x702E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edd44u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDD44 raw=0x7472702E");
label_4edd48:
    // 0x4edd48: 0x2e737973  sltiu       $s3, $s3, 0x7973
    ctx->pc = 0x4edd48u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31091) ? 1 : 0);
label_4edd4c:
    // 0x4edd4c: 0x61727564  daddi       $s2, $t3, 0x7564
    ctx->pc = 0x4edd4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)30052; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_4edd50:
    // 0x4edd50: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4edd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4edd54:
    // 0x4edd54: 0x0  nop
    ctx->pc = 0x4edd54u;
    // NOP
label_4edd58:
    // 0x4edd58: 0x0  nop
    ctx->pc = 0x4edd58u;
    // NOP
label_4edd5c:
    // 0x4edd5c: 0x0  nop
    ctx->pc = 0x4edd5cu;
    // NOP
label_4edd60:
    // 0x4edd60: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x4edd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4edd64:
    // 0x4edd64: 0x7472702e  .word       0x7472702E                   # INVALID     $v1, $s2, 0x702E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edd64u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDD64 raw=0x7472702E");
label_4edd68:
    // 0x4edd68: 0x2e737973  sltiu       $s3, $s3, 0x7973
    ctx->pc = 0x4edd68u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31091) ? 1 : 0);
label_4edd6c:
    // 0x4edd6c: 0x626d756e  daddi       $t5, $s3, 0x756E
    ctx->pc = 0x4edd6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30062; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4edd70:
    // 0x4edd70: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edd70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4edd74:
    // 0x4edd74: 0x0  nop
    ctx->pc = 0x4edd74u;
    // NOP
label_4edd78:
    // 0x4edd78: 0x0  nop
    ctx->pc = 0x4edd78u;
    // NOP
label_4edd7c:
    // 0x4edd7c: 0x0  nop
    ctx->pc = 0x4edd7cu;
    // NOP
label_4edd80:
    // 0x4edd80: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x4edd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4edd84:
    // 0x4edd84: 0x7472702e  .word       0x7472702E                   # INVALID     $v1, $s2, 0x702E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edd84u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDD84 raw=0x7472702E");
label_4edd88:
    // 0x4edd88: 0x2e737973  sltiu       $s3, $s3, 0x7973
    ctx->pc = 0x4edd88u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31091) ? 1 : 0);
label_4edd8c:
    // 0x4edd8c: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x4edd8cu;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
label_4edd90:
    // 0x4edd90: 0x0  nop
    ctx->pc = 0x4edd90u;
    // NOP
label_4edd94:
    // 0x4edd94: 0x0  nop
    ctx->pc = 0x4edd94u;
    // NOP
label_4edd98:
    // 0x4edd98: 0x0  nop
    ctx->pc = 0x4edd98u;
    // NOP
label_4edd9c:
    // 0x4edd9c: 0x0  nop
    ctx->pc = 0x4edd9cu;
    // NOP
label_4edda0:
    // 0x4edda0: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x4edda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4edda4:
    // 0x4edda4: 0x6665642e  daddiu      $a1, $s3, 0x642E
    ctx->pc = 0x4edda4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25646);
label_4edda8:
    // 0x4edda8: 0x746c7561  .word       0x746C7561                   # INVALID     $v1, $t4, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edda8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDDA8 raw=0x746C7561");
label_4eddac:
    // 0x4eddac: 0x7472702e  .word       0x7472702E                   # INVALID     $v1, $s2, 0x702E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eddacu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDDAC raw=0x7472702E");
label_4eddb0:
    // 0x4eddb0: 0x2e737973  sltiu       $s3, $s3, 0x7973
    ctx->pc = 0x4eddb0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31091) ? 1 : 0);
label_4eddb4:
    // 0x4eddb4: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x4eddb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4eddb8:
    // 0x4eddb8: 0x65746176  daddiu      $s4, $t3, 0x6176
    ctx->pc = 0x4eddb8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24950);
label_4eddbc:
    // 0x4eddbc: 0x0  nop
    ctx->pc = 0x4eddbcu;
    // NOP
label_4eddc0:
    // 0x4eddc0: 0x6d2e7866  ldr         $t6, 0x7866($t1)
    ctx->pc = 0x4eddc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4eddc4:
    // 0x4eddc4: 0x67696e69  daddiu      $t1, $k1, 0x6E69
    ctx->pc = 0x4eddc4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28265);
label_4eddc8:
    // 0x4eddc8: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eddc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4eddcc:
    // 0x4eddcc: 0x0  nop
    ctx->pc = 0x4eddccu;
    // NOP
label_4eddd0:
    // 0x4eddd0: 0x61657473  daddi       $a1, $t3, 0x7473
    ctx->pc = 0x4eddd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4eddd4:
    // 0x4eddd4: 0x6f7a5f6c  ldr         $k0, 0x5F6C($k1)
    ctx->pc = 0x4eddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem >> shift)); }
label_4eddd8:
    // 0x4eddd8: 0x315f656e  andi        $ra, $t2, 0x656E
    ctx->pc = 0x4eddd8u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)25966);
label_4edddc:
    // 0x4edddc: 0x0  nop
    ctx->pc = 0x4edddcu;
    // NOP
label_4edde0:
    // 0x4edde0: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x4edde0u;
    
label_4edde4:
    // 0x4edde4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4edde4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4edde8:
    // 0x4edde8: 0x30002  srl         $zero, $v1, 0
    ctx->pc = 0x4edde8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_4eddec:
    // 0x4eddec: 0x0  nop
    ctx->pc = 0x4eddecu;
    // NOP
label_4eddf0:
    // 0x4eddf0: 0x0  nop
    ctx->pc = 0x4eddf0u;
    // NOP
label_4eddf4:
    // 0x4eddf4: 0x0  nop
    ctx->pc = 0x4eddf4u;
    // NOP
label_4eddf8:
    // 0x4eddf8: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x4eddf8u;
    
label_4eddfc:
    // 0x4eddfc: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x4eddfcu;
    
label_4ede00:
    // 0x4ede00: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x4ede00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4ede04:
    // 0x4ede04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede08:
    // 0x4ede08: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede08u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede0c:
    // 0x4ede0c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDE0C raw=0x00000001");
label_4ede10:
    // 0x4ede10: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede10u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede14:
    // 0x4ede14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede18:
    // 0x4ede18: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede18u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede1c:
    // 0x4ede1c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede20:
    // 0x4ede20: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede24:
    // 0x4ede24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede28:
    // 0x4ede28: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede28u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede2c:
    // 0x4ede2c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede30:
    // 0x4ede30: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4ede30u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4ede34:
    // 0x4ede34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDE34 raw=0x00000001");
label_4ede38:
    // 0x4ede38: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede3c:
    // 0x4ede3c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede40:
    // 0x4ede40: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDE40 raw=0x00000001");
label_4ede44:
    // 0x4ede44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede48:
    // 0x4ede48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede48u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDE48 raw=0x00000001");
label_4ede4c:
    // 0x4ede4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDE4C raw=0x00000001");
label_4ede50:
    // 0x4ede50: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede50u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDE50 raw=0x00000001");
label_4ede54:
    // 0x4ede54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede58:
    // 0x4ede58: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede58u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede5c:
    // 0x4ede5c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede5cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede60:
    // 0x4ede60: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ede60u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ede64:
    // 0x4ede64: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ede64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4EDE64 raw=0x00000005");
label_4ede68:
    // 0x4ede68: 0x0  nop
    ctx->pc = 0x4ede68u;
    // NOP
label_4ede6c:
    // 0x4ede6c: 0x0  nop
    ctx->pc = 0x4ede6cu;
    // NOP
label_4ede70:
    // 0x4ede70: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ede70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ede74:
    // 0x4ede74: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ede74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ede78:
    // 0x4ede78: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ede78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDE78 raw=0x756F735C");
label_4ede7c:
    // 0x4ede7c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4ede80:
    if (ctx->pc == 0x4EDE80u) {
        ctx->pc = 0x4EDE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE7Cu;
        // 0x4ede80: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDE80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDE84u;
        goto label_4ede84;
    }
    ctx->pc = 0x4EDE7Cu;
    {
        const bool branch_taken_0x4ede7c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4ede7c) {
            ctx->pc = 0x4EDE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDE7Cu;
            // 0x4ede80: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDE80 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x507038u;
            return;
        }
    }
    ctx->pc = 0x4EDE84u;
label_4ede84:
    // 0x4ede84: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4ede84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4ede88:
    // 0x4ede88: 0x7463415c  .word       0x7463415C                   # INVALID     $v1, $v1, 0x415C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ede88u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDE88 raw=0x7463415C");
label_4ede8c:
    // 0x4ede8c: 0x6f53726f  ldr         $s3, 0x726F($k0)
    ctx->pc = 0x4ede8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_4ede90:
    // 0x4ede90: 0x73646e75  .word       0x73646E75                   # INVALID     $k1, $a0, 0x6E75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ede90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4EDE90 raw=0x73646E75");
label_4ede94:
    // 0x4ede94: 0x7377722e  .word       0x7377722E                   # INVALID     $k1, $s7, 0x722E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ede94u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4EDE94 raw=0x7377722E");
label_4ede98:
    // 0x4ede98: 0x0  nop
    ctx->pc = 0x4ede98u;
    // NOP
label_4ede9c:
    // 0x4ede9c: 0x0  nop
    ctx->pc = 0x4ede9cu;
    // NOP
label_4edea0:
    // 0x4edea0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4edea0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4edea4:
    // 0x4edea4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4edea4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4edea8:
    // 0x4edea8: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edea8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDEA8 raw=0x756F735C");
label_4edeac:
    // 0x4edeac: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4edeb0:
    if (ctx->pc == 0x4EDEB0u) {
        ctx->pc = 0x4EDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDEACu;
        // 0x4edeb0: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDEB0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDEB4u;
        goto label_4edeb4;
    }
    ctx->pc = 0x4EDEACu;
    {
        const bool branch_taken_0x4edeac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4edeac) {
            ctx->pc = 0x4EDEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDEACu;
            // 0x4edeb0: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDEB0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x507068u;
            return;
        }
    }
    ctx->pc = 0x4EDEB4u;
label_4edeb4:
    // 0x4edeb4: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4edeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4edeb8:
    // 0x4edeb8: 0x746e495c  .word       0x746E495C                   # INVALID     $v1, $t6, 0x495C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edeb8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDEB8 raw=0x746E495C");
label_4edebc:
    // 0x4edebc: 0x61667265  daddi       $a2, $t3, 0x7265
    ctx->pc = 0x4edebcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29285; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_4edec0:
    // 0x4edec0: 0x722e6563  .word       0x722E6563                   # INVALID     $s1, $t6, 0x6563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edec0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EDEC0 raw=0x722E6563");
label_4edec4:
    // 0x4edec4: 0x7377  .word       0x00007377                   # INVALID     $zero, $zero, 0x7377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edec4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x4EDEC4 raw=0x00007377");
label_4edec8:
    // 0x4edec8: 0x0  nop
    ctx->pc = 0x4edec8u;
    // NOP
label_4edecc:
    // 0x4edecc: 0x0  nop
    ctx->pc = 0x4edeccu;
    // NOP
label_4eded0:
    // 0x4eded0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4eded0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4eded4:
    // 0x4eded4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4eded4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4eded8:
    // 0x4eded8: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eded8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDED8 raw=0x756F735C");
label_4ededc:
    // 0x4ededc: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4edee0:
    if (ctx->pc == 0x4EDEE0u) {
        ctx->pc = 0x4EDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDEDCu;
        // 0x4edee0: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDEE0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDEE4u;
        goto label_4edee4;
    }
    ctx->pc = 0x4EDEDCu;
    {
        const bool branch_taken_0x4ededc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4ededc) {
            ctx->pc = 0x4EDEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDEDCu;
            // 0x4edee0: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDEE0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x507098u;
            return;
        }
    }
    ctx->pc = 0x4EDEE4u;
label_4edee4:
    // 0x4edee4: 0x656e6963  daddiu      $t6, $t3, 0x6963
    ctx->pc = 0x4edee4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26979);
label_4edee8:
    // 0x4edee8: 0x2e73255c  sltiu       $s3, $s3, 0x255C
    ctx->pc = 0x4edee8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9564) ? 1 : 0);
label_4edeec:
    // 0x4edeec: 0x737772  tlt         $v1, $s3, 477
    ctx->pc = 0x4edeecu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_4edef0:
    // 0x4edef0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4edef0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4edef4:
    // 0x4edef4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4edef4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4edef8:
    // 0x4edef8: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edef8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDEF8 raw=0x756F735C");
label_4edefc:
    // 0x4edefc: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4edf00:
    if (ctx->pc == 0x4EDF00u) {
        ctx->pc = 0x4EDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDEFCu;
        // 0x4edf00: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDF00 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDF04u;
        goto label_4edf04;
    }
    ctx->pc = 0x4EDEFCu;
    {
        const bool branch_taken_0x4edefc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4edefc) {
            ctx->pc = 0x4EDF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDEFCu;
            // 0x4edf00: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDF00 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5070B8u;
            return;
        }
    }
    ctx->pc = 0x4EDF04u;
label_4edf04:
    // 0x4edf04: 0x63696f76  daddi       $t1, $k1, 0x6F76
    ctx->pc = 0x4edf04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28534; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4edf08:
    // 0x4edf08: 0x64255c65  daddiu      $a1, $at, 0x5C65
    ctx->pc = 0x4edf08u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23653);
label_4edf0c:
    // 0x4edf0c: 0x2e73255c  sltiu       $s3, $s3, 0x255C
    ctx->pc = 0x4edf0cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9564) ? 1 : 0);
label_4edf10:
    // 0x4edf10: 0x737772  tlt         $v1, $s3, 477
    ctx->pc = 0x4edf10u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_4edf14:
    // 0x4edf14: 0x0  nop
    ctx->pc = 0x4edf14u;
    // NOP
label_4edf18:
    // 0x4edf18: 0x0  nop
    ctx->pc = 0x4edf18u;
    // NOP
label_4edf1c:
    // 0x4edf1c: 0x0  nop
    ctx->pc = 0x4edf1cu;
    // NOP
label_4edf20:
    // 0x4edf20: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4edf20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4edf24:
    // 0x4edf24: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4edf24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4edf28:
    // 0x4edf28: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edf28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDF28 raw=0x756F735C");
label_4edf2c:
    // 0x4edf2c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4edf30:
    if (ctx->pc == 0x4EDF30u) {
        ctx->pc = 0x4EDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDF2Cu;
        // 0x4edf30: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDF30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDF34u;
        goto label_4edf34;
    }
    ctx->pc = 0x4EDF2Cu;
    {
        const bool branch_taken_0x4edf2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4edf2c) {
            ctx->pc = 0x4EDF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDF2Cu;
            // 0x4edf30: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDF30 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5070E8u;
            return;
        }
    }
    ctx->pc = 0x4EDF34u;
label_4edf34:
    // 0x4edf34: 0x6973756d  ldl         $s3, 0x756D($t3)
    ctx->pc = 0x4edf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4edf38:
    // 0x4edf38: 0x255c3263  addiu       $gp, $t2, 0x3263
    ctx->pc = 0x4edf38u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 10), 12899));
label_4edf3c:
    // 0x4edf3c: 0x77722e73  .word       0x77722E73                   # INVALID     $k1, $s2, 0x2E73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edf3cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDF3C raw=0x77722E73");
label_4edf40:
    // 0x4edf40: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4edf40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edf44:
    // 0x4edf44: 0x0  nop
    ctx->pc = 0x4edf44u;
    // NOP
label_4edf48:
    // 0x4edf48: 0x0  nop
    ctx->pc = 0x4edf48u;
    // NOP
label_4edf4c:
    // 0x4edf4c: 0x0  nop
    ctx->pc = 0x4edf4cu;
    // NOP
label_4edf50:
    // 0x4edf50: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4edf50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4edf54:
    // 0x4edf54: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4edf54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4edf58:
    // 0x4edf58: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edf58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDF58 raw=0x756F735C");
label_4edf5c:
    // 0x4edf5c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4edf60:
    if (ctx->pc == 0x4EDF60u) {
        ctx->pc = 0x4EDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDF5Cu;
        // 0x4edf60: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EDF60 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDF64u;
        goto label_4edf64;
    }
    ctx->pc = 0x4EDF5Cu;
    {
        const bool branch_taken_0x4edf5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4edf5c) {
            ctx->pc = 0x4EDF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDF5Cu;
            // 0x4edf60: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EDF60 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x507118u;
            return;
        }
    }
    ctx->pc = 0x4EDF64u;
label_4edf64:
    // 0x4edf64: 0x6973756d  ldl         $s3, 0x756D($t3)
    ctx->pc = 0x4edf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4edf68:
    // 0x4edf68: 0x73255c63  .word       0x73255C63                   # INVALID     $t9, $a1, 0x5C63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edf68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4EDF68 raw=0x73255C63");
label_4edf6c:
    // 0x4edf6c: 0x7377722e  .word       0x7377722E                   # INVALID     $k1, $s7, 0x722E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edf6cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4EDF6C raw=0x7377722E");
label_4edf70:
    // 0x4edf70: 0x0  nop
    ctx->pc = 0x4edf70u;
    // NOP
label_4edf74:
    // 0x4edf74: 0x0  nop
    ctx->pc = 0x4edf74u;
    // NOP
label_4edf78:
    // 0x4edf78: 0x0  nop
    ctx->pc = 0x4edf78u;
    // NOP
label_4edf7c:
    // 0x4edf7c: 0x0  nop
    ctx->pc = 0x4edf7cu;
    // NOP
label_4edf80:
    // 0x4edf80: 0x0  nop
    ctx->pc = 0x4edf80u;
    // NOP
label_4edf84:
    // 0x4edf84: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4edf84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4edf88:
    // 0x4edf88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4edf88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EDF88 raw=0x00000001");
label_4edf8c:
    // 0x4edf8c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4edf8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4edf90:
    // 0x4edf90: 0x735f6975  .word       0x735F6975                   # INVALID     $k0, $ra, 0x6975 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4edf90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4EDF90 raw=0x735F6975");
label_4edf94:
    // 0x4edf94: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4edf94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4edf98:
    // 0x4edf98: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4edf98u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4edf9c:
    // 0x4edf9c: 0x0  nop
    ctx->pc = 0x4edf9cu;
    // NOP
label_4edfa0:
    // 0x4edfa0: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4edfa0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4edfa4:
    // 0x4edfa4: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4edfa4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4edfa8:
    // 0x4edfa8: 0x0  nop
    ctx->pc = 0x4edfa8u;
    // NOP
label_4edfac:
    // 0x4edfac: 0x0  nop
    ctx->pc = 0x4edfacu;
    // NOP
label_4edfb0:
    // 0x4edfb0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4edfb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4edfb4:
    // 0x4edfb4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4edfb4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4edfb8:
    // 0x4edfb8: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4edfb8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EDFB8 raw=0x76656C5C");
label_4edfbc:
    // 0x4edfbc: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4edfc0:
    if (ctx->pc == 0x4EDFC0u) {
        ctx->pc = 0x4EDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDFBCu;
        // 0x4edfc0: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDFC4u;
        goto label_4edfc4;
    }
    ctx->pc = 0x4EDFBCu;
    {
        const bool branch_taken_0x4edfbc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4edfbc) {
            ctx->pc = 0x4EDFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDFBCu;
            // 0x4edfc0: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x509154u;
            return;
        }
    }
    ctx->pc = 0x4EDFC4u;
label_4edfc4:
    // 0x4edfc4: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x4edfc4u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_4edfc8:
    // 0x4edfc8: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4edfc8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4edfcc:
    // 0x4edfcc: 0x53495243  beql        $k0, $t1, . + 4 + (0x5243 << 2)
label_4edfd0:
    if (ctx->pc == 0x4EDFD0u) {
        ctx->pc = 0x4EDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDFCCu;
        // 0x4edfd0: 0x535349  .word       0x00535349                   # jalr        $t2, $v0 # 00130340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $10, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDFD4u;
        goto label_4edfd4;
    }
    ctx->pc = 0x4EDFCCu;
    {
        const bool branch_taken_0x4edfcc = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4edfcc) {
            ctx->pc = 0x4EDFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDFCCu;
            // 0x4edfd0: 0x535349  .word       0x00535349                   # jalr        $t2, $v0 # 00130340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $10, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5028DCu;
            return;
        }
    }
    ctx->pc = 0x4EDFD4u;
label_4edfd4:
    // 0x4edfd4: 0x0  nop
    ctx->pc = 0x4edfd4u;
    // NOP
label_4edfd8:
    // 0x4edfd8: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4edfd8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4edfdc:
    // 0x4edfdc: 0x53495243  beql        $k0, $t1, . + 4 + (0x5243 << 2)
label_4edfe0:
    if (ctx->pc == 0x4EDFE0u) {
        ctx->pc = 0x4EDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDFDCu;
        // 0x4edfe0: 0x565349  .word       0x00565349                   # jalr        $t2, $v0 # 00160340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $10, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDFE4u;
        goto label_4edfe4;
    }
    ctx->pc = 0x4EDFDCu;
    {
        const bool branch_taken_0x4edfdc = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4edfdc) {
            ctx->pc = 0x4EDFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDFDCu;
            // 0x4edfe0: 0x565349  .word       0x00565349                   # jalr        $t2, $v0 # 00160340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $10, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5028ECu;
            return;
        }
    }
    ctx->pc = 0x4EDFE4u;
label_4edfe4:
    // 0x4edfe4: 0x0  nop
    ctx->pc = 0x4edfe4u;
    // NOP
label_4edfe8:
    // 0x4edfe8: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4edfe8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4edfec:
    // 0x4edfec: 0x53495243  beql        $k0, $t1, . + 4 + (0x5243 << 2)
label_4edff0:
    if (ctx->pc == 0x4EDFF0u) {
        ctx->pc = 0x4EDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDFECu;
        // 0x4edff0: 0x465349  .word       0x00465349                   # jalr        $t2, $v0 # 00060340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $10, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDFF4u;
        goto label_4edff4;
    }
    ctx->pc = 0x4EDFECu;
    {
        const bool branch_taken_0x4edfec = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4edfec) {
            ctx->pc = 0x4EDFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDFECu;
            // 0x4edff0: 0x465349  .word       0x00465349                   # jalr        $t2, $v0 # 00060340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $10, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5028FCu;
            return;
        }
    }
    ctx->pc = 0x4EDFF4u;
label_4edff4:
    // 0x4edff4: 0x0  nop
    ctx->pc = 0x4edff4u;
    // NOP
label_4edff8:
    // 0x4edff8: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4edff8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4edffc:
    // 0x4edffc: 0x45455053  .word       0x45455053                   # INVALID     $t2, $a1, 0x5053 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4edffcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x4EDFFC raw=0x45455053");
label_4ee000:
    // 0x4ee000: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee000u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4ee004:
    // 0x4ee004: 0x0  nop
    ctx->pc = 0x4ee004u;
    // NOP
label_4ee008:
    // 0x4ee008: 0x0  nop
    ctx->pc = 0x4ee008u;
    // NOP
label_4ee00c:
    // 0x4ee00c: 0x0  nop
    ctx->pc = 0x4ee00cu;
    // NOP
label_4ee010:
    // 0x4ee010: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee010u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ee014:
    // 0x4ee014: 0x0  nop
    ctx->pc = 0x4ee014u;
    // NOP
label_4ee018:
    // 0x4ee018: 0x0  nop
    ctx->pc = 0x4ee018u;
    // NOP
label_4ee01c:
    // 0x4ee01c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee01cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4ee020:
    // 0x4ee020: 0x0  nop
    ctx->pc = 0x4ee020u;
    // NOP
label_4ee024:
    // 0x4ee024: 0x0  nop
    ctx->pc = 0x4ee024u;
    // NOP
label_4ee028:
    // 0x4ee028: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ee028u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4ee02c:
    // 0x4ee02c: 0x4e555244  .word       0x4E555244                   # INVALID     $s2, $s5, 0x5244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee02cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4EE02C raw=0x4E555244");
label_4ee030:
    // 0x4ee030: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee030u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4ee034:
    // 0x4ee034: 0x0  nop
    ctx->pc = 0x4ee034u;
    // NOP
label_4ee038:
    // 0x4ee038: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ee038u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4ee03c:
    // 0x4ee03c: 0x47415453  .word       0x47415453                   # INVALID     $k0, $at, 0x5453 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee03cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x13 at 0x4EE03C raw=0x47415453");
label_4ee040:
    // 0x4ee040: 0x524547  .word       0x00524547                   # srav        $t0, $s2, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee040u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
label_4ee044:
    // 0x4ee044: 0x0  nop
    ctx->pc = 0x4ee044u;
    // NOP
label_4ee048:
    // 0x4ee048: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee048u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE048 raw=0x725F7866");
label_4ee04c:
    // 0x4ee04c: 0x73756665  .word       0x73756665                   # INVALID     $k1, $s5, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee04cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE04C raw=0x73756665");
label_4ee050:
    // 0x4ee050: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee054:
    // 0x4ee054: 0x0  nop
    ctx->pc = 0x4ee054u;
    // NOP
label_4ee058:
    // 0x4ee058: 0x0  nop
    ctx->pc = 0x4ee058u;
    // NOP
label_4ee05c:
    // 0x4ee05c: 0x0  nop
    ctx->pc = 0x4ee05cu;
    // NOP
label_4ee060:
    // 0x4ee060: 0x722e7866  .word       0x722E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee060u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE060 raw=0x722E7866");
label_4ee064:
    // 0x4ee064: 0x6a646165  ldl         $a0, 0x6165($s3)
    ctx->pc = 0x4ee064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4ee068:
    // 0x4ee068: 0x2e747375  sltiu       $s4, $s3, 0x7375
    ctx->pc = 0x4ee068u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29557) ? 1 : 0);
label_4ee06c:
    // 0x4ee06c: 0x74736964  .word       0x74736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee06cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE06C raw=0x74736964");
label_4ee070:
    // 0x4ee070: 0x0  nop
    ctx->pc = 0x4ee070u;
    // NOP
label_4ee074:
    // 0x4ee074: 0x0  nop
    ctx->pc = 0x4ee074u;
    // NOP
label_4ee078:
    // 0x4ee078: 0x0  nop
    ctx->pc = 0x4ee078u;
    // NOP
label_4ee07c:
    // 0x4ee07c: 0x0  nop
    ctx->pc = 0x4ee07cu;
    // NOP
label_4ee080:
    // 0x4ee080: 0x722e7866  .word       0x722E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee080u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE080 raw=0x722E7866");
label_4ee084:
    // 0x4ee084: 0x6a646165  ldl         $a0, 0x6165($s3)
    ctx->pc = 0x4ee084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4ee088:
    // 0x4ee088: 0x2e747375  sltiu       $s4, $s3, 0x7375
    ctx->pc = 0x4ee088u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29557) ? 1 : 0);
label_4ee08c:
    // 0x4ee08c: 0x65636166  daddiu      $v1, $t3, 0x6166
    ctx->pc = 0x4ee08cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
label_4ee090:
    // 0x4ee090: 0x63616632  daddi       $at, $k1, 0x6632
    ctx->pc = 0x4ee090u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26162; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4ee094:
    // 0x4ee094: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee098:
    // 0x4ee098: 0x4556454e  .word       0x4556454E                   # INVALID     $t2, $s6, 0x454E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee098u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4EE098 raw=0x4556454E");
label_4ee09c:
    // 0x4ee09c: 0x41535f52  .word       0x41535F52                   # INVALID     $t2, $s3, 0x5F52 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ee09cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4EE09C raw=0x41535F52");
label_4ee0a0:
    // 0x4ee0a0: 0x4f4e5f59  .word       0x4F4E5F59                   # INVALID     $k0, $t6, 0x5F59 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee0a0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4EE0A0 raw=0x4F4E5F59");
label_4ee0a4:
    // 0x4ee0a4: 0x0  nop
    ctx->pc = 0x4ee0a4u;
    // NOP
label_4ee0a8:
    // 0x4ee0a8: 0x4556454e  .word       0x4556454E                   # INVALID     $t2, $s6, 0x454E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee0a8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4EE0A8 raw=0x4556454E");
label_4ee0ac:
    // 0x4ee0ac: 0x41535f52  .word       0x41535F52                   # INVALID     $t2, $s3, 0x5F52 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ee0acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4EE0AC raw=0x41535F52");
label_4ee0b0:
    // 0x4ee0b0: 0x45595f59  .word       0x45595F59                   # INVALID     $t2, $t9, 0x5F59 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee0b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x19 at 0x4EE0B0 raw=0x45595F59");
label_4ee0b4:
    // 0x4ee0b4: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee0b4u;
    ctx->lo = GPR_U64(ctx, 0);
label_4ee0b8:
    // 0x4ee0b8: 0x4b414c41  vaddy.xz    $vf17, $vf9, $vf1y
    ctx->pc = 0x4ee0b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_4ee0bc:
    // 0x4ee0bc: 0x454c5545  .word       0x454C5545                   # INVALID     $t2, $t4, 0x5545 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee0bcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x4EE0BC raw=0x454C5545");
label_4ee0c0:
    // 0x4ee0c0: 0x55454c55  bnel        $t2, $a1, . + 4 + (0x4C55 << 2)
label_4ee0c4:
    if (ctx->pc == 0x4EE0C4u) {
        ctx->pc = 0x4EE0C8u;
        goto label_4ee0c8;
    }
    ctx->pc = 0x4EE0C0u;
    {
        const bool branch_taken_0x4ee0c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x4ee0c0) {
            ctx->pc = 0x501218u;
            return;
        }
    }
    ctx->pc = 0x4EE0C8u;
label_4ee0c8:
    // 0x4ee0c8: 0x0  nop
    ctx->pc = 0x4ee0c8u;
    // NOP
label_4ee0cc:
    // 0x4ee0cc: 0x0  nop
    ctx->pc = 0x4ee0ccu;
    // NOP
label_4ee0d0:
    // 0x4ee0d0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ee0d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ee0d4:
    // 0x4ee0d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee0d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EE0D4 raw=0x00000001");
label_4ee0d8:
    // 0x4ee0d8: 0x0  nop
    ctx->pc = 0x4ee0d8u;
    // NOP
label_4ee0dc:
    // 0x4ee0dc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4ee0dcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4ee0e0:
    // 0x4ee0e0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4ee0e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4ee0e4:
    // 0x4ee0e4: 0x0  nop
    ctx->pc = 0x4ee0e4u;
    // NOP
label_4ee0e8:
    // 0x4ee0e8: 0x73694d5f  .word       0x73694D5F                   # INVALID     $k1, $t1, 0x4D5F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee0e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4EE0E8 raw=0x73694D5F");
label_4ee0ec:
    // 0x4ee0ec: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x4ee0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee0f0:
    // 0x4ee0f0: 0x0  nop
    ctx->pc = 0x4ee0f0u;
    // NOP
label_4ee0f4:
    // 0x4ee0f4: 0x0  nop
    ctx->pc = 0x4ee0f4u;
    // NOP
label_4ee0f8:
    // 0x4ee0f8: 0x0  nop
    ctx->pc = 0x4ee0f8u;
    // NOP
label_4ee0fc:
    // 0x4ee0fc: 0x0  nop
    ctx->pc = 0x4ee0fcu;
    // NOP
label_4ee100:
    // 0x4ee100: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4ee100u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4ee104:
    // 0x4ee104: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee104u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EE104 raw=0x00000001");
label_4ee108:
    // 0x4ee108: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4ee108u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4ee10c:
    // 0x4ee10c: 0x0  nop
    ctx->pc = 0x4ee10cu;
    // NOP
label_4ee110:
    // 0x4ee110: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4ee110u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4ee114:
    // 0x4ee114: 0x0  nop
    ctx->pc = 0x4ee114u;
    // NOP
label_4ee118:
    // 0x4ee118: 0x0  nop
    ctx->pc = 0x4ee118u;
    // NOP
label_4ee11c:
    // 0x4ee11c: 0x0  nop
    ctx->pc = 0x4ee11cu;
    // NOP
label_4ee120:
    // 0x4ee120: 0x722e7866  .word       0x722E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee120u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE120 raw=0x722E7866");
label_4ee124:
    // 0x4ee124: 0x69757165  ldl         $s5, 0x7165($t3)
    ctx->pc = 0x4ee124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
label_4ee128:
    // 0x4ee128: 0x656d6572  daddiu      $t5, $t3, 0x6572
    ctx->pc = 0x4ee128u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_4ee12c:
    // 0x4ee12c: 0x73746e  .word       0x0073746E                   # dsub        $t6, $v1, $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee12cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ee130:
    // 0x4ee130: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee130u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE130 raw=0x732E7866");
label_4ee134:
    // 0x4ee134: 0x65636375  daddiu      $v1, $t3, 0x6375
    ctx->pc = 0x4ee134u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25461);
label_4ee138:
    // 0x4ee138: 0x7373  tltu        $zero, $zero, 461
    ctx->pc = 0x4ee138u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee13c:
    // 0x4ee13c: 0x0  nop
    ctx->pc = 0x4ee13cu;
    // NOP
label_4ee140:
    // 0x4ee140: 0x5f434126  .word       0x5F434126                   # bgtzl       $k0, . + 4 + (0x4126 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_4ee144:
    if (ctx->pc == 0x4EE144u) {
        ctx->pc = 0x4EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE140u;
        // 0x4ee144: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE148u;
        goto label_4ee148;
    }
    ctx->pc = 0x4EE140u;
    {
        const bool branch_taken_0x4ee140 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee140) {
            ctx->pc = 0x4EE144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE140u;
            // 0x4ee144: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE5DCu;
            return;
        }
    }
    ctx->pc = 0x4EE148u;
label_4ee148:
    // 0x4ee148: 0x0  nop
    ctx->pc = 0x4ee148u;
    // NOP
label_4ee14c:
    // 0x4ee14c: 0x0  nop
    ctx->pc = 0x4ee14cu;
    // NOP
label_4ee150:
    // 0x4ee150: 0x75716572  .word       0x75716572                   # INVALID     $t3, $s1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee150u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE150 raw=0x75716572");
label_4ee154:
    // 0x4ee154: 0x6d657269  ldr         $a1, 0x7269($t3)
    ctx->pc = 0x4ee154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee158:
    // 0x4ee158: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee158u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE158 raw=0x73746E65");
label_4ee15c:
    // 0x4ee15c: 0x6b61662e  ldl         $at, 0x662E($k1)
    ctx->pc = 0x4ee15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_4ee160:
    // 0x4ee160: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee164:
    // 0x4ee164: 0x0  nop
    ctx->pc = 0x4ee164u;
    // NOP
label_4ee168:
    // 0x4ee168: 0x0  nop
    ctx->pc = 0x4ee168u;
    // NOP
label_4ee16c:
    // 0x4ee16c: 0x0  nop
    ctx->pc = 0x4ee16cu;
    // NOP
label_4ee170:
    // 0x4ee170: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ee174:
    if (ctx->pc == 0x4EE174u) {
        ctx->pc = 0x4EE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE170u;
        // 0x4ee174: 0x6c6f6f74  ldr         $t7, 0x6F74($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE178u;
        goto label_4ee178;
    }
    ctx->pc = 0x4EE170u;
    {
        const bool branch_taken_0x4ee170 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee170) {
            ctx->pc = 0x4EE174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE170u;
            // 0x4ee174: 0x6c6f6f74  ldr         $t7, 0x6F74($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFE0Cu;
            return;
        }
    }
    ctx->pc = 0x4EE178u;
label_4ee178:
    // 0x4ee178: 0x6c747469  ldr         $s4, 0x7469($v1)
    ctx->pc = 0x4ee178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4ee17c:
    // 0x4ee17c: 0x6e6f6d65  ldr         $t7, 0x6D65($s3)
    ctx->pc = 0x4ee17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee180:
    // 0x4ee180: 0x7965  .word       0x00007965                   # move        $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee180u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee184:
    // 0x4ee184: 0x0  nop
    ctx->pc = 0x4ee184u;
    // NOP
label_4ee188:
    // 0x4ee188: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ee18c:
    if (ctx->pc == 0x4EE18Cu) {
        ctx->pc = 0x4EE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE188u;
        // 0x4ee18c: 0x6d6f6f74  ldr         $t7, 0x6F74($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE190u;
        goto label_4ee190;
    }
    ctx->pc = 0x4EE188u;
    {
        const bool branch_taken_0x4ee188 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee188) {
            ctx->pc = 0x4EE18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE188u;
            // 0x4ee18c: 0x6d6f6f74  ldr         $t7, 0x6F74($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFE24u;
            return;
        }
    }
    ctx->pc = 0x4EE190u;
label_4ee190:
    // 0x4ee190: 0x73686375  .word       0x73686375                   # INVALID     $k1, $t0, 0x6375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee190u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4EE190 raw=0x73686375");
label_4ee194:
    // 0x4ee194: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ee194u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4ee198:
    // 0x4ee198: 0x0  nop
    ctx->pc = 0x4ee198u;
    // NOP
label_4ee19c:
    // 0x4ee19c: 0x0  nop
    ctx->pc = 0x4ee19cu;
    // NOP
label_4ee1a0:
    // 0x4ee1a0: 0x5f434126  .word       0x5F434126                   # bgtzl       $k0, . + 4 + (0x4126 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_4ee1a4:
    if (ctx->pc == 0x4EE1A4u) {
        ctx->pc = 0x4EE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1A0u;
        // 0x4ee1a4: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE1A8u;
        goto label_4ee1a8;
    }
    ctx->pc = 0x4EE1A0u;
    {
        const bool branch_taken_0x4ee1a0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee1a0) {
            ctx->pc = 0x4EE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE1A0u;
            // 0x4ee1a4: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE63Cu;
            return;
        }
    }
    ctx->pc = 0x4EE1A8u;
label_4ee1a8:
    // 0x4ee1a8: 0x6574616c  daddiu      $s4, $t3, 0x616C
    ctx->pc = 0x4ee1a8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_4ee1ac:
    // 0x4ee1ac: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee1acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4ee1b0:
    // 0x4ee1b0: 0x765f6975  .word       0x765F6975                   # INVALID     $s2, $ra, 0x6975 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee1b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE1B0 raw=0x765F6975");
label_4ee1b4:
    // 0x4ee1b4: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x4ee1b4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_4ee1b8:
    // 0x4ee1b8: 0x0  nop
    ctx->pc = 0x4ee1b8u;
    // NOP
label_4ee1bc:
    // 0x4ee1bc: 0x0  nop
    ctx->pc = 0x4ee1bcu;
    // NOP
label_4ee1c0:
    // 0x4ee1c0: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee1c4:
    if (ctx->pc == 0x4EE1C4u) {
        ctx->pc = 0x4EE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1C0u;
        // 0x4ee1c4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1C4 raw=0x706D6154");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE1C8u;
        goto label_4ee1c8;
    }
    ctx->pc = 0x4EE1C0u;
    {
        const bool branch_taken_0x4ee1c0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee1c0) {
            ctx->pc = 0x4EE1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE1C0u;
            // 0x4ee1c4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1C4 raw=0x706D6154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF6E0u;
            return;
        }
    }
    ctx->pc = 0x4EE1C8u;
label_4ee1c8:
    // 0x4ee1c8: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee1c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee1cc:
    // 0x4ee1cc: 0x0  nop
    ctx->pc = 0x4ee1ccu;
    // NOP
label_4ee1d0:
    // 0x4ee1d0: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee1d4:
    if (ctx->pc == 0x4EE1D4u) {
        ctx->pc = 0x4EE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1D0u;
        // 0x4ee1d4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1D4 raw=0x706D6154");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE1D8u;
        goto label_4ee1d8;
    }
    ctx->pc = 0x4EE1D0u;
    {
        const bool branch_taken_0x4ee1d0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee1d0) {
            ctx->pc = 0x4EE1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE1D0u;
            // 0x4ee1d4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1D4 raw=0x706D6154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF6F0u;
            return;
        }
    }
    ctx->pc = 0x4EE1D8u;
label_4ee1d8:
    // 0x4ee1d8: 0x72467265  .word       0x72467265                   # INVALID     $s2, $a2, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee1d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE1D8 raw=0x72467265");
label_4ee1dc:
    // 0x4ee1dc: 0x746e6f  .word       0x00746E6F                   # dsubu       $t5, $v1, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee1dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 20));
label_4ee1e0:
    // 0x4ee1e0: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee1e4:
    if (ctx->pc == 0x4EE1E4u) {
        ctx->pc = 0x4EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1E0u;
        // 0x4ee1e4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1E4 raw=0x706D6154");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE1E8u;
        goto label_4ee1e8;
    }
    ctx->pc = 0x4EE1E0u;
    {
        const bool branch_taken_0x4ee1e0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee1e0) {
            ctx->pc = 0x4EE1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE1E0u;
            // 0x4ee1e4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1E4 raw=0x706D6154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF700u;
            return;
        }
    }
    ctx->pc = 0x4EE1E8u;
label_4ee1e8:
    // 0x4ee1e8: 0x61427265  daddi       $v0, $t2, 0x7265
    ctx->pc = 0x4ee1e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29285; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_4ee1ec:
    // 0x4ee1ec: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee1ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4ee1f0:
    // 0x4ee1f0: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee1f4:
    if (ctx->pc == 0x4EE1F4u) {
        ctx->pc = 0x4EE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1F0u;
        // 0x4ee1f4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1F4 raw=0x706D6154");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE1F8u;
        goto label_4ee1f8;
    }
    ctx->pc = 0x4EE1F0u;
    {
        const bool branch_taken_0x4ee1f0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee1f0) {
            ctx->pc = 0x4EE1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE1F0u;
            // 0x4ee1f4: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE1F4 raw=0x706D6154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF710u;
            return;
        }
    }
    ctx->pc = 0x4EE1F8u;
label_4ee1f8:
    // 0x4ee1f8: 0x69527265  ldl         $s2, 0x7265($t2)
    ctx->pc = 0x4ee1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4ee1fc:
    // 0x4ee1fc: 0x746867  .word       0x00746867                   # nor         $t5, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee1fcu;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
label_4ee200:
    // 0x4ee200: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee204:
    if (ctx->pc == 0x4EE204u) {
        ctx->pc = 0x4EE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE200u;
        // 0x4ee204: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE204 raw=0x706D6154");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE208u;
        goto label_4ee208;
    }
    ctx->pc = 0x4EE200u;
    {
        const bool branch_taken_0x4ee200 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee200) {
            ctx->pc = 0x4EE204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE200u;
            // 0x4ee204: 0x706d6154  .word       0x706D6154                   # INVALID     $v1, $t5, 0x6154 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x4EE204 raw=0x706D6154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF720u;
            return;
        }
    }
    ctx->pc = 0x4EE208u;
label_4ee208:
    // 0x4ee208: 0x654c7265  daddiu      $t4, $t2, 0x7265
    ctx->pc = 0x4ee208u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)29285);
label_4ee20c:
    // 0x4ee20c: 0x7466  .word       0x00007466                   # xor         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee20cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_4ee210:
    // 0x4ee210: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4ee210u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4ee214:
    // 0x4ee214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee214u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EE214 raw=0x00000001");
label_4ee218:
    // 0x4ee218: 0x0  nop
    ctx->pc = 0x4ee218u;
    // NOP
label_4ee21c:
    // 0x4ee21c: 0x0  nop
    ctx->pc = 0x4ee21cu;
    // NOP
label_4ee220:
    // 0x4ee220: 0x565f5243  bnel        $s2, $ra, . + 4 + (0x5243 << 2)
label_4ee224:
    if (ctx->pc == 0x4EE224u) {
        ctx->pc = 0x4EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE220u;
        // 0x4ee224: 0x656c6f69  daddiu      $t4, $t3, 0x6F69 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28521);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE228u;
        goto label_4ee228;
    }
    ctx->pc = 0x4EE220u;
    {
        const bool branch_taken_0x4ee220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 31));
        if (branch_taken_0x4ee220) {
            ctx->pc = 0x4EE224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE220u;
            // 0x4ee224: 0x656c6f69  daddiu      $t4, $t3, 0x6F69 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28521);
            ctx->in_delay_slot = false;
            ctx->pc = 0x502B30u;
            return;
        }
    }
    ctx->pc = 0x4EE228u;
label_4ee228:
    // 0x4ee228: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee228u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4ee22c:
    // 0x4ee22c: 0x0  nop
    ctx->pc = 0x4ee22cu;
    // NOP
label_4ee230:
    // 0x4ee230: 0x616c6f76  daddi       $t4, $t3, 0x6F76
    ctx->pc = 0x4ee230u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28534; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4ee234:
    // 0x4ee234: 0x656c6974  daddiu      $t4, $t3, 0x6974
    ctx->pc = 0x4ee234u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26996);
label_4ee238:
    // 0x4ee238: 0x6972632e  ldl         $s2, 0x632E($t3)
    ctx->pc = 0x4ee238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25390); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4ee23c:
    // 0x4ee23c: 0x69736973  ldl         $s3, 0x6973($t3)
    ctx->pc = 0x4ee23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4ee240:
    // 0x4ee240: 0x646573  tltu        $v1, $a0, 405
    ctx->pc = 0x4ee240u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_4ee244:
    // 0x4ee244: 0x0  nop
    ctx->pc = 0x4ee244u;
    // NOP
label_4ee248:
    // 0x4ee248: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4ee248u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4ee24c:
    // 0x4ee24c: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4ee24cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4ee250:
    // 0x4ee250: 0x0  nop
    ctx->pc = 0x4ee250u;
    // NOP
label_4ee254:
    // 0x4ee254: 0x0  nop
    ctx->pc = 0x4ee254u;
    // NOP
label_4ee258:
    // 0x4ee258: 0x0  nop
    ctx->pc = 0x4ee258u;
    // NOP
label_4ee25c:
    // 0x4ee25c: 0x0  nop
    ctx->pc = 0x4ee25cu;
    // NOP
label_4ee260:
    // 0x4ee260: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ee260u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ee264:
    // 0x4ee264: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ee264u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ee268:
    // 0x4ee268: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee268u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE268 raw=0x76656C5C");
label_4ee26c:
    // 0x4ee26c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4ee270:
    if (ctx->pc == 0x4EE270u) {
        ctx->pc = 0x4EE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE26Cu;
        // 0x4ee270: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE274u;
        goto label_4ee274;
    }
    ctx->pc = 0x4EE26Cu;
    {
        const bool branch_taken_0x4ee26c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4ee26c) {
            ctx->pc = 0x4EE270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE26Cu;
            // 0x4ee270: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x509404u;
            return;
        }
    }
    ctx->pc = 0x4EE274u;
label_4ee274:
    // 0x4ee274: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x4ee274u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_4ee278:
    // 0x4ee278: 0x6e696146  ldr         $t1, 0x6146($s3)
    ctx->pc = 0x4ee278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24902); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee27c:
    // 0x4ee27c: 0x6f445f74  ldr         $a0, 0x5F74($k0)
    ctx->pc = 0x4ee27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 24436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4ee280:
    // 0x4ee280: 0x6e77  .word       0x00006E77                   # INVALID     $zero, $zero, 0x6E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee280u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x4EE280 raw=0x00006E77");
label_4ee284:
    // 0x4ee284: 0x0  nop
    ctx->pc = 0x4ee284u;
    // NOP
label_4ee288:
    // 0x4ee288: 0x6e696146  ldr         $t1, 0x6146($s3)
    ctx->pc = 0x4ee288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24902); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee28c:
    // 0x4ee28c: 0x70555f74  .word       0x70555F74                   # psllh       $t3, $s5, 29 # 00400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee28cu;
    SET_GPR_VEC(ctx, 11, _mm_slli_epi16(GPR_VEC(ctx, 21), 29));
label_4ee290:
    // 0x4ee290: 0x0  nop
    ctx->pc = 0x4ee290u;
    // NOP
label_4ee294:
    // 0x4ee294: 0x0  nop
    ctx->pc = 0x4ee294u;
    // NOP
label_4ee298:
    // 0x4ee298: 0x5f6e6567  .word       0x5F6E6567                   # bgtzl       $k1, . + 4 + (0x6567 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee29c:
    if (ctx->pc == 0x4EE29Cu) {
        ctx->pc = 0x4EE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE298u;
        // 0x4ee29c: 0x69746e69  ldl         $s4, 0x6E69($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE2A0u;
        goto label_4ee2a0;
    }
    ctx->pc = 0x4EE298u;
    {
        const bool branch_taken_0x4ee298 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ee298) {
            ctx->pc = 0x4EE29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE298u;
            // 0x4ee29c: 0x69746e69  ldl         $s4, 0x6E69($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x507838u;
            return;
        }
    }
    ctx->pc = 0x4EE2A0u;
label_4ee2a0:
    // 0x4ee2a0: 0x7963616d  lq          $v1, 0x616D($t3)
    ctx->pc = 0x4ee2a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 24941)));
label_4ee2a4:
    // 0x4ee2a4: 0x0  nop
    ctx->pc = 0x4ee2a4u;
    // NOP
label_4ee2a8:
    // 0x4ee2a8: 0x49544e49  .word       0x49544E49                   # INVALID     $t2, $s4, 0x4E49 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4ee2a8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4EE2A8 raw=0x49544E49");
label_4ee2ac:
    // 0x4ee2ac: 0x4554494d  .word       0x4554494D                   # INVALID     $t2, $s4, 0x494D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee2acu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4EE2AC raw=0x4554494D");
label_4ee2b0:
    // 0x4ee2b0: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee2b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4EE2B0 raw=0x0000005F");
label_4ee2b4:
    // 0x4ee2b4: 0x0  nop
    ctx->pc = 0x4ee2b4u;
    // NOP
label_4ee2b8:
    // 0x4ee2b8: 0x0  nop
    ctx->pc = 0x4ee2b8u;
    // NOP
label_4ee2bc:
    // 0x4ee2bc: 0x0  nop
    ctx->pc = 0x4ee2bcu;
    // NOP
label_4ee2c0:
    // 0x4ee2c0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ee2c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4ee2c4:
    // 0x4ee2c4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ee2c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ee2c8:
    // 0x4ee2c8: 0x7463615c  .word       0x7463615C                   # INVALID     $v1, $v1, 0x615C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee2c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE2C8 raw=0x7463615C");
label_4ee2cc:
    // 0x4ee2cc: 0x736e6f69  .word       0x736E6F69                   # INVALID     $k1, $t6, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4ee2ccu;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x4EE2CC raw=0x736E6F69");
label_4ee2d0:
    // 0x4ee2d0: 0x6d69545c  ldr         $t1, 0x545C($t3)
    ctx->pc = 0x4ee2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21596); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee2d4:
    // 0x4ee2d4: 0x65687365  daddiu      $t0, $t3, 0x7365
    ctx->pc = 0x4ee2d4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29541);
label_4ee2d8:
    // 0x4ee2d8: 0x642e7465  daddiu      $t6, $at, 0x7465
    ctx->pc = 0x4ee2d8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29797);
label_4ee2dc:
    // 0x4ee2dc: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee2dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4ee2e0:
    // 0x4ee2e0: 0x656d6954  daddiu      $t5, $t3, 0x6954
    ctx->pc = 0x4ee2e0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_4ee2e4:
    // 0x4ee2e4: 0x65656873  daddiu      $a1, $t3, 0x6873
    ctx->pc = 0x4ee2e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26739);
label_4ee2e8:
    // 0x4ee2e8: 0x61642e74  daddi       $a0, $t3, 0x2E74
    ctx->pc = 0x4ee2e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11892; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_4ee2ec:
    // 0x4ee2ec: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4ee2ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee2f0:
    // 0x4ee2f0: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x4ee2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4ee2f4:
    // 0x4ee2f4: 0x612e6e6f  daddi       $t6, $t1, 0x6E6F
    ctx->pc = 0x4ee2f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)28271; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee2f8:
    // 0x4ee2f8: 0x76697463  .word       0x76697463                   # INVALID     $s3, $t1, 0x7463 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee2f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE2F8 raw=0x76697463");
label_4ee2fc:
    // 0x4ee2fc: 0x2e797469  sltiu       $t9, $s3, 0x7469
    ctx->pc = 0x4ee2fcu;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
label_4ee300:
    // 0x4ee300: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee300u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE300 raw=0x7478656E");
label_4ee304:
    // 0x4ee304: 0x0  nop
    ctx->pc = 0x4ee304u;
    // NOP
label_4ee308:
    // 0x4ee308: 0x0  nop
    ctx->pc = 0x4ee308u;
    // NOP
label_4ee30c:
    // 0x4ee30c: 0x0  nop
    ctx->pc = 0x4ee30cu;
    // NOP
label_4ee310:
    // 0x4ee310: 0x75716572  .word       0x75716572                   # INVALID     $t3, $s1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee310u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE310 raw=0x75716572");
label_4ee314:
    // 0x4ee314: 0x6d657269  ldr         $a1, 0x7269($t3)
    ctx->pc = 0x4ee314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee318:
    // 0x4ee318: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee318u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE318 raw=0x73746E65");
label_4ee31c:
    // 0x4ee31c: 0x6b61662e  ldl         $at, 0x662E($k1)
    ctx->pc = 0x4ee31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_4ee320:
    // 0x4ee320: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee320u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee324:
    // 0x4ee324: 0x0  nop
    ctx->pc = 0x4ee324u;
    // NOP
label_4ee328:
    // 0x4ee328: 0x0  nop
    ctx->pc = 0x4ee328u;
    // NOP
label_4ee32c:
    // 0x4ee32c: 0x0  nop
    ctx->pc = 0x4ee32cu;
    // NOP
label_4ee330:
    // 0x4ee330: 0x732e7172  .word       0x732E7172                   # INVALID     $t9, $t6, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee330u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4EE330 raw=0x732E7172");
label_4ee334:
    // 0x4ee334: 0x61757469  daddi       $s5, $t3, 0x7469
    ctx->pc = 0x4ee334u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4ee338:
    // 0x4ee338: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4ee338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee33c:
    // 0x4ee33c: 0x6378652e  daddi       $t8, $k1, 0x652E
    ctx->pc = 0x4ee33cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25902; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, res); }
label_4ee340:
    // 0x4ee340: 0x6564756c  daddiu      $a0, $t3, 0x756C
    ctx->pc = 0x4ee340u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30060);
label_4ee344:
    // 0x4ee344: 0x0  nop
    ctx->pc = 0x4ee344u;
    // NOP
label_4ee348:
    // 0x4ee348: 0x732e7172  .word       0x732E7172                   # INVALID     $t9, $t6, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee348u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4EE348 raw=0x732E7172");
label_4ee34c:
    // 0x4ee34c: 0x61757469  daddi       $s5, $t3, 0x7469
    ctx->pc = 0x4ee34cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4ee350:
    // 0x4ee350: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4ee350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee354:
    // 0x4ee354: 0x0  nop
    ctx->pc = 0x4ee354u;
    // NOP
label_4ee358:
    // 0x4ee358: 0x0  nop
    ctx->pc = 0x4ee358u;
    // NOP
label_4ee35c:
    // 0x4ee35c: 0x0  nop
    ctx->pc = 0x4ee35cu;
    // NOP
label_4ee360:
    // 0x4ee360: 0x63746157  daddi       $s4, $k1, 0x6157
    ctx->pc = 0x4ee360u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24919; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ee364:
    // 0x4ee364: 0x676e6968  daddiu      $t6, $k1, 0x6968
    ctx->pc = 0x4ee364u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26984);
label_4ee368:
    // 0x4ee368: 0x74636120  .word       0x74636120                   # INVALID     $v1, $v1, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee368u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE368 raw=0x74636120");
label_4ee36c:
    // 0x4ee36c: 0x2520726f  addiu       $zero, $t1, 0x726F
    ctx->pc = 0x4ee36cu;
    // NOP (addiu $zero, ...)
label_4ee370:
    // 0x4ee370: 0x2e73  tltu        $zero, $zero, 185
    ctx->pc = 0x4ee370u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee374:
    // 0x4ee374: 0x0  nop
    ctx->pc = 0x4ee374u;
    // NOP
label_4ee378:
    // 0x4ee378: 0x0  nop
    ctx->pc = 0x4ee378u;
    // NOP
label_4ee37c:
    // 0x4ee37c: 0x0  nop
    ctx->pc = 0x4ee37cu;
    // NOP
label_4ee380:
    // 0x4ee380: 0x79616c70  lq          $at, 0x6C70($t3)
    ctx->pc = 0x4ee380u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27760)));
label_4ee384:
    // 0x4ee384: 0x662e7265  daddiu      $t6, $s1, 0x7265
    ctx->pc = 0x4ee384u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29285);
label_4ee388:
    // 0x4ee388: 0x6f6c6c6f  ldr         $t4, 0x6C6F($k1)
    ctx->pc = 0x4ee388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4ee38c:
    // 0x4ee38c: 0x2e726577  sltiu       $s2, $s3, 0x6577
    ctx->pc = 0x4ee38cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25975) ? 1 : 0);
label_4ee390:
    // 0x4ee390: 0x646975  .word       0x00646975                   # INVALID     $v1, $a0, 0x6975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee390u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4EE390 raw=0x00646975");
label_4ee394:
    // 0x4ee394: 0x0  nop
    ctx->pc = 0x4ee394u;
    // NOP
label_4ee398:
    // 0x4ee398: 0x0  nop
    ctx->pc = 0x4ee398u;
    // NOP
label_4ee39c:
    // 0x4ee39c: 0x0  nop
    ctx->pc = 0x4ee39cu;
    // NOP
label_4ee3a0:
    // 0x4ee3a0: 0x75716572  .word       0x75716572                   # INVALID     $t3, $s1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee3a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE3A0 raw=0x75716572");
label_4ee3a4:
    // 0x4ee3a4: 0x6d657269  ldr         $a1, 0x7269($t3)
    ctx->pc = 0x4ee3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee3a8:
    // 0x4ee3a8: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee3a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE3A8 raw=0x73746E65");
label_4ee3ac:
    // 0x4ee3ac: 0x6b61662e  ldl         $at, 0x662E($k1)
    ctx->pc = 0x4ee3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_4ee3b0:
    // 0x4ee3b0: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee3b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee3b4:
    // 0x4ee3b4: 0x0  nop
    ctx->pc = 0x4ee3b4u;
    // NOP
label_4ee3b8:
    // 0x4ee3b8: 0x5f6e6567  .word       0x5F6E6567                   # bgtzl       $k1, . + 4 + (0x6567 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee3bc:
    if (ctx->pc == 0x4EE3BCu) {
        ctx->pc = 0x4EE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE3B8u;
        // 0x4ee3bc: 0x69766e69  ldl         $s6, 0x6E69($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE3C0u;
        goto label_4ee3c0;
    }
    ctx->pc = 0x4EE3B8u;
    {
        const bool branch_taken_0x4ee3b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ee3b8) {
            ctx->pc = 0x4EE3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE3B8u;
            // 0x4ee3bc: 0x69766e69  ldl         $s6, 0x6E69($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x507958u;
            return;
        }
    }
    ctx->pc = 0x4EE3C0u;
label_4ee3c0:
    // 0x4ee3c0: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x4ee3c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee3c4:
    // 0x4ee3c4: 0x0  nop
    ctx->pc = 0x4ee3c4u;
    // NOP
label_4ee3c8:
    // 0x4ee3c8: 0x0  nop
    ctx->pc = 0x4ee3c8u;
    // NOP
label_4ee3cc:
    // 0x4ee3cc: 0x0  nop
    ctx->pc = 0x4ee3ccu;
    // NOP
label_4ee3d0:
    // 0x4ee3d0: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ee3d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee3d4:
    // 0x4ee3d4: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4ee3d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee3d8:
    // 0x4ee3d8: 0x656d6163  daddiu      $t5, $t3, 0x6163
    ctx->pc = 0x4ee3d8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
label_4ee3dc:
    // 0x4ee3dc: 0x642e6172  daddiu      $t6, $at, 0x6172
    ctx->pc = 0x4ee3dcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)24946);
label_4ee3e0:
    // 0x4ee3e0: 0x796d6d75  lq          $t5, 0x6D75($t3)
    ctx->pc = 0x4ee3e0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 28021)));
label_4ee3e4:
    // 0x4ee3e4: 0x0  nop
    ctx->pc = 0x4ee3e4u;
    // NOP
label_4ee3e8:
    // 0x4ee3e8: 0x0  nop
    ctx->pc = 0x4ee3e8u;
    // NOP
label_4ee3ec:
    // 0x4ee3ec: 0x0  nop
    ctx->pc = 0x4ee3ecu;
    // NOP
label_4ee3f0:
    // 0x4ee3f0: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ee3f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee3f4:
    // 0x4ee3f4: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4ee3f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee3f8:
    // 0x4ee3f8: 0x656d6163  daddiu      $t5, $t3, 0x6163
    ctx->pc = 0x4ee3f8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
label_4ee3fc:
    // 0x4ee3fc: 0x632e6172  daddi       $t6, $t9, 0x6172
    ctx->pc = 0x4ee3fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee400:
    // 0x4ee400: 0x72656d61  .word       0x72656D61                   # maddu1      $t5, $s3, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee400u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_4ee404:
    // 0x4ee404: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee404u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4ee408:
    // 0x4ee408: 0x6576452d  daddiu      $s6, $t3, 0x452D
    ctx->pc = 0x4ee408u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17709);
label_4ee40c:
    // 0x4ee40c: 0x6e6f7972  ldr         $t7, 0x7972($s3)
    ctx->pc = 0x4ee40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31090); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee410:
    // 0x4ee410: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee410u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee414:
    // 0x4ee414: 0x0  nop
    ctx->pc = 0x4ee414u;
    // NOP
label_4ee418:
    // 0x4ee418: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee418u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE418 raw=0x725F7866");
label_4ee41c:
    // 0x4ee41c: 0x78616c65  lq          $at, 0x6C65($v1)
    ctx->pc = 0x4ee41cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 27749)));
label_4ee420:
    // 0x4ee420: 0x0  nop
    ctx->pc = 0x4ee420u;
    // NOP
label_4ee424:
    // 0x4ee424: 0x0  nop
    ctx->pc = 0x4ee424u;
    // NOP
label_4ee428:
    // 0x4ee428: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee428u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE428 raw=0x725F7866");
label_4ee42c:
    // 0x4ee42c: 0x73756665  .word       0x73756665                   # INVALID     $k1, $s5, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee42cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE42C raw=0x73756665");
label_4ee430:
    // 0x4ee430: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee430u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee434:
    // 0x4ee434: 0x0  nop
    ctx->pc = 0x4ee434u;
    // NOP
label_4ee438:
    // 0x4ee438: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee438u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4EE438 raw=0x735F7866");
label_4ee43c:
    // 0x4ee43c: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4ee43cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ee440:
    // 0x4ee440: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4ee440u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee444:
    // 0x4ee444: 0x0  nop
    ctx->pc = 0x4ee444u;
    // NOP
label_4ee448:
    // 0x4ee448: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4ee44c:
    if (ctx->pc == 0x4EE44Cu) {
        ctx->pc = 0x4EE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE448u;
        // 0x4ee44c: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE450u;
        goto label_4ee450;
    }
    ctx->pc = 0x4EE448u;
    {
        const bool branch_taken_0x4ee448 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee448) {
            ctx->pc = 0x4EE44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE448u;
            // 0x4ee44c: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5000E4u;
            return;
        }
    }
    ctx->pc = 0x4EE450u;
label_4ee450:
    // 0x4ee450: 0x5f707565  .word       0x5F707565                   # bgtzl       $k1, . + 4 + (0x7565 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_4ee454:
    if (ctx->pc == 0x4EE454u) {
        ctx->pc = 0x4EE458u;
        goto label_4ee458;
    }
    ctx->pc = 0x4EE450u;
    {
        const bool branch_taken_0x4ee450 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ee450) {
            ctx->pc = 0x50B9E8u;
            return;
        }
    }
    ctx->pc = 0x4EE458u;
label_4ee458:
    // 0x4ee458: 0x6c6f6976  ldr         $t7, 0x6976($v1)
    ctx->pc = 0x4ee458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26998); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee45c:
    // 0x4ee45c: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x4ee45cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_4ee460:
    // 0x4ee460: 0x0  nop
    ctx->pc = 0x4ee460u;
    // NOP
label_4ee464:
    // 0x4ee464: 0x0  nop
    ctx->pc = 0x4ee464u;
    // NOP
label_4ee468:
    // 0x4ee468: 0x0  nop
    ctx->pc = 0x4ee468u;
    // NOP
label_4ee46c:
    // 0x4ee46c: 0x0  nop
    ctx->pc = 0x4ee46cu;
    // NOP
label_4ee470:
    // 0x4ee470: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee470u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee474:
    // 0x4ee474: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee474u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee478:
    // 0x4ee478: 0x7261742e  .word       0x7261742E                   # INVALID     $s3, $at, 0x742E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee478u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4EE478 raw=0x7261742E");
label_4ee47c:
    // 0x4ee47c: 0x746567  .word       0x00746567                   # nor         $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee47cu;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
label_4ee480:
    // 0x4ee480: 0x702e6169  .word       0x702E6169                   # INVALID     $at, $t6, 0x6169 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4ee480u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x5 at 0x4EE480 raw=0x702E6169");
label_4ee484:
    // 0x4ee484: 0x7265776f  .word       0x7265776F                   # INVALID     $s3, $a1, 0x776F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee484u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4EE484 raw=0x7265776F");
label_4ee488:
    // 0x4ee488: 0x0  nop
    ctx->pc = 0x4ee488u;
    // NOP
label_4ee48c:
    // 0x4ee48c: 0x0  nop
    ctx->pc = 0x4ee48cu;
    // NOP
label_4ee490:
    // 0x4ee490: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee490u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee494:
    // 0x4ee494: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee494u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee498:
    // 0x4ee498: 0x6c65722e  ldr         $a1, 0x722E($v1)
    ctx->pc = 0x4ee498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29230); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee49c:
    // 0x4ee49c: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4ee49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee4a0:
    // 0x4ee4a0: 0x766c2e6e  .word       0x766C2E6E                   # INVALID     $s3, $t4, 0x2E6E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee4a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE4A0 raw=0x766C2E6E");
label_4ee4a4:
    // 0x4ee4a4: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee4a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4ee4a8:
    // 0x4ee4a8: 0x732e6169  .word       0x732E6169                   # INVALID     $t9, $t6, 0x6169 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4ee4a8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x5 at 0x4EE4A8 raw=0x732E6169");
label_4ee4ac:
    // 0x4ee4ac: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x4ee4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4ee4b0:
    // 0x4ee4b0: 0x0  nop
    ctx->pc = 0x4ee4b0u;
    // NOP
label_4ee4b4:
    // 0x4ee4b4: 0x0  nop
    ctx->pc = 0x4ee4b4u;
    // NOP
label_4ee4b8:
    // 0x4ee4b8: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee4b8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee4bc:
    // 0x4ee4bc: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee4bcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee4c0:
    // 0x4ee4c0: 0x7865732e  lq          $a1, 0x732E($v1)
    ctx->pc = 0x4ee4c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29486)));
label_4ee4c4:
    // 0x4ee4c4: 0x0  nop
    ctx->pc = 0x4ee4c4u;
    // NOP
label_4ee4c8:
    // 0x4ee4c8: 0x0  nop
    ctx->pc = 0x4ee4c8u;
    // NOP
label_4ee4cc:
    // 0x4ee4cc: 0x0  nop
    ctx->pc = 0x4ee4ccu;
    // NOP
label_4ee4d0:
    // 0x4ee4d0: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee4d0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee4d4:
    // 0x4ee4d4: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee4d4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee4d8:
    // 0x4ee4d8: 0x7865732e  lq          $a1, 0x732E($v1)
    ctx->pc = 0x4ee4d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29486)));
label_4ee4dc:
    // 0x4ee4dc: 0x646f6d2e  daddiu      $t7, $v1, 0x6D2E
    ctx->pc = 0x4ee4dcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27950);
label_4ee4e0:
    // 0x4ee4e0: 0x0  nop
    ctx->pc = 0x4ee4e0u;
    // NOP
label_4ee4e4:
    // 0x4ee4e4: 0x0  nop
    ctx->pc = 0x4ee4e4u;
    // NOP
label_4ee4e8:
    // 0x4ee4e8: 0x0  nop
    ctx->pc = 0x4ee4e8u;
    // NOP
label_4ee4ec:
    // 0x4ee4ec: 0x0  nop
    ctx->pc = 0x4ee4ecu;
    // NOP
label_4ee4f0:
    // 0x4ee4f0: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee4f0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee4f4:
    // 0x4ee4f4: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee4f4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee4f8:
    // 0x4ee4f8: 0x6f69762e  ldr         $t1, 0x762E($k1)
    ctx->pc = 0x4ee4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee4fc:
    // 0x4ee4fc: 0x636e656c  daddi       $t6, $k1, 0x656C
    ctx->pc = 0x4ee4fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee500:
    // 0x4ee500: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee500u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee504:
    // 0x4ee504: 0x0  nop
    ctx->pc = 0x4ee504u;
    // NOP
label_4ee508:
    // 0x4ee508: 0x0  nop
    ctx->pc = 0x4ee508u;
    // NOP
label_4ee50c:
    // 0x4ee50c: 0x0  nop
    ctx->pc = 0x4ee50cu;
    // NOP
label_4ee510:
    // 0x4ee510: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee510u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee514:
    // 0x4ee514: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee514u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee518:
    // 0x4ee518: 0x6f69762e  ldr         $t1, 0x762E($k1)
    ctx->pc = 0x4ee518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee51c:
    // 0x4ee51c: 0x636e656c  daddi       $t6, $k1, 0x656C
    ctx->pc = 0x4ee51cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee520:
    // 0x4ee520: 0x6f6d2e65  ldr         $t5, 0x2E65($k1)
    ctx->pc = 0x4ee520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11877); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4ee524:
    // 0x4ee524: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee524u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4ee528:
    // 0x4ee528: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee528u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee52c:
    // 0x4ee52c: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee52cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee530:
    // 0x4ee530: 0x6165662e  daddi       $a1, $t3, 0x662E
    ctx->pc = 0x4ee530u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26158; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ee534:
    // 0x4ee534: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4ee534u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee538:
    // 0x4ee538: 0x0  nop
    ctx->pc = 0x4ee538u;
    // NOP
label_4ee53c:
    // 0x4ee53c: 0x0  nop
    ctx->pc = 0x4ee53cu;
    // NOP
label_4ee540:
    // 0x4ee540: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee540u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee544:
    // 0x4ee544: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee544u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee548:
    // 0x4ee548: 0x6165662e  daddi       $a1, $t3, 0x662E
    ctx->pc = 0x4ee548u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26158; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ee54c:
    // 0x4ee54c: 0x6f6d2e72  ldr         $t5, 0x2E72($k1)
    ctx->pc = 0x4ee54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11890); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4ee550:
    // 0x4ee550: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee550u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4ee554:
    // 0x4ee554: 0x0  nop
    ctx->pc = 0x4ee554u;
    // NOP
label_4ee558:
    // 0x4ee558: 0x0  nop
    ctx->pc = 0x4ee558u;
    // NOP
label_4ee55c:
    // 0x4ee55c: 0x0  nop
    ctx->pc = 0x4ee55cu;
    // NOP
label_4ee560:
    // 0x4ee560: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee560u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee564:
    // 0x4ee564: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee564u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee568:
    // 0x4ee568: 0x6165682e  daddi       $a1, $t3, 0x682E
    ctx->pc = 0x4ee568u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26670; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ee56c:
    // 0x4ee56c: 0x68746c  .word       0x0068746C                   # dadd        $t6, $v1, $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee56cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4ee570:
    // 0x4ee570: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee570u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee574:
    // 0x4ee574: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee574u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee578:
    // 0x4ee578: 0x6165682e  daddi       $a1, $t3, 0x682E
    ctx->pc = 0x4ee578u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26670; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4ee57c:
    // 0x4ee57c: 0x2e68746c  sltiu       $t0, $s3, 0x746C
    ctx->pc = 0x4ee57cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29804) ? 1 : 0);
label_4ee580:
    // 0x4ee580: 0x646f6d  .word       0x00646F6D                   # daddu       $t5, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee580u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_4ee584:
    // 0x4ee584: 0x0  nop
    ctx->pc = 0x4ee584u;
    // NOP
label_4ee588:
    // 0x4ee588: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee588u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee58c:
    // 0x4ee58c: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee58cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee590:
    // 0x4ee590: 0x766e652e  .word       0x766E652E                   # INVALID     $s3, $t6, 0x652E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee590u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE590 raw=0x766E652E");
label_4ee594:
    // 0x4ee594: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee594u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EE594 raw=0x00000079");
label_4ee598:
    // 0x4ee598: 0x0  nop
    ctx->pc = 0x4ee598u;
    // NOP
label_4ee59c:
    // 0x4ee59c: 0x0  nop
    ctx->pc = 0x4ee59cu;
    // NOP
label_4ee5a0:
    // 0x4ee5a0: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee5a0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee5a4:
    // 0x4ee5a4: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee5a4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee5a8:
    // 0x4ee5a8: 0x766e652e  .word       0x766E652E                   # INVALID     $s3, $t6, 0x652E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee5a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE5A8 raw=0x766E652E");
label_4ee5ac:
    // 0x4ee5ac: 0x6f6d2e79  ldr         $t5, 0x2E79($k1)
    ctx->pc = 0x4ee5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11897); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4ee5b0:
    // 0x4ee5b0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee5b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4ee5b4:
    // 0x4ee5b4: 0x0  nop
    ctx->pc = 0x4ee5b4u;
    // NOP
label_4ee5b8:
    // 0x4ee5b8: 0x0  nop
    ctx->pc = 0x4ee5b8u;
    // NOP
label_4ee5bc:
    // 0x4ee5bc: 0x0  nop
    ctx->pc = 0x4ee5bcu;
    // NOP
label_4ee5c0:
    // 0x4ee5c0: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee5c0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee5c4:
    // 0x4ee5c4: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee5c4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee5c8:
    // 0x4ee5c8: 0x6972662e  ldl         $s2, 0x662E($t3)
    ctx->pc = 0x4ee5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4ee5cc:
    // 0x4ee5cc: 0x73646e65  .word       0x73646E65                   # INVALID     $k1, $a0, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee5ccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE5CC raw=0x73646E65");
label_4ee5d0:
    // 0x4ee5d0: 0x706968  .word       0x00706968                   # mfsa        $t5 # 00700140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ee5d0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_4ee5d4:
    // 0x4ee5d4: 0x0  nop
    ctx->pc = 0x4ee5d4u;
    // NOP
label_4ee5d8:
    // 0x4ee5d8: 0x0  nop
    ctx->pc = 0x4ee5d8u;
    // NOP
label_4ee5dc:
    // 0x4ee5dc: 0x0  nop
    ctx->pc = 0x4ee5dcu;
    // NOP
label_4ee5e0:
    // 0x4ee5e0: 0x672e7866  daddiu      $t6, $t9, 0x7866
    ctx->pc = 0x4ee5e0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30822);
label_4ee5e4:
    // 0x4ee5e4: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee5e4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee5e8:
    // 0x4ee5e8: 0x6972662e  ldl         $s2, 0x662E($t3)
    ctx->pc = 0x4ee5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4ee5ec:
    // 0x4ee5ec: 0x73646e65  .word       0x73646E65                   # INVALID     $k1, $a0, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee5ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4EE5EC raw=0x73646E65");
label_4ee5f0:
    // 0x4ee5f0: 0x2e706968  sltiu       $s0, $s3, 0x6968
    ctx->pc = 0x4ee5f0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26984) ? 1 : 0);
label_4ee5f4:
    // 0x4ee5f4: 0x646f6d  .word       0x00646F6D                   # daddu       $t5, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee5f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_4ee5f8:
    // 0x4ee5f8: 0x735f6975  .word       0x735F6975                   # INVALID     $k0, $ra, 0x6975 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee5f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4EE5F8 raw=0x735F6975");
label_4ee5fc:
    // 0x4ee5fc: 0x646e6570  daddiu      $t6, $v1, 0x6570
    ctx->pc = 0x4ee5fcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25968);
label_4ee600:
    // 0x4ee600: 0x6e6f6d5f  ldr         $t7, 0x6D5F($s3)
    ctx->pc = 0x4ee600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4ee604:
    // 0x4ee604: 0x7965  .word       0x00007965                   # move        $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee604u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee608:
    // 0x4ee608: 0x655f6975  daddiu      $ra, $t2, 0x6975
    ctx->pc = 0x4ee608u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26997);
label_4ee60c:
    // 0x4ee60c: 0x5f6e7261  .word       0x5F6E7261                   # bgtzl       $k1, . + 4 + (0x7261 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ee610:
    if (ctx->pc == 0x4EE610u) {
        ctx->pc = 0x4EE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE60Cu;
        // 0x4ee610: 0x656e6f6d  daddiu      $t6, $t3, 0x6F6D (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28525);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE614u;
        goto label_4ee614;
    }
    ctx->pc = 0x4EE60Cu;
    {
        const bool branch_taken_0x4ee60c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ee60c) {
            ctx->pc = 0x4EE610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE60Cu;
            // 0x4ee610: 0x656e6f6d  daddiu      $t6, $t3, 0x6F6D (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28525);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50AF94u;
            return;
        }
    }
    ctx->pc = 0x4EE614u;
label_4ee614:
    // 0x4ee614: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee614u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EE614 raw=0x00000079");
label_4ee618:
    // 0x4ee618: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ee618u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4ee61c:
    // 0x4ee61c: 0x64617273  daddiu      $at, $v1, 0x7273
    ctx->pc = 0x4ee61cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29299);
label_4ee620:
    // 0x4ee620: 0x69746169  ldl         $s4, 0x6169($t3)
    ctx->pc = 0x4ee620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4ee624:
    // 0x4ee624: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee624u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4ee628:
    // 0x4ee628: 0x0  nop
    ctx->pc = 0x4ee628u;
    // NOP
label_4ee62c:
    // 0x4ee62c: 0x0  nop
    ctx->pc = 0x4ee62cu;
    // NOP
label_4ee630:
    // 0x4ee630: 0x2e746968  sltiu       $s4, $s3, 0x6968
    ctx->pc = 0x4ee630u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26984) ? 1 : 0);
label_4ee634:
    // 0x4ee634: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x4ee634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4ee638:
    // 0x4ee638: 0x742e6e6f  .word       0x742E6E6F                   # INVALID     $at, $t6, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee638u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE638 raw=0x742E6E6F");
label_4ee63c:
    // 0x4ee63c: 0x65677261  daddiu      $a3, $t3, 0x7261
    ctx->pc = 0x4ee63cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
label_4ee640:
    // 0x4ee640: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4ee640u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4ee644:
    // 0x4ee644: 0x0  nop
    ctx->pc = 0x4ee644u;
    // NOP
label_4ee648:
    // 0x4ee648: 0x0  nop
    ctx->pc = 0x4ee648u;
    // NOP
label_4ee64c:
    // 0x4ee64c: 0x0  nop
    ctx->pc = 0x4ee64cu;
    // NOP
label_4ee650:
    // 0x4ee650: 0x2e746968  sltiu       $s4, $s3, 0x6968
    ctx->pc = 0x4ee650u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26984) ? 1 : 0);
label_4ee654:
    // 0x4ee654: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x4ee654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4ee658:
    // 0x4ee658: 0x732e6e6f  .word       0x732E6E6F                   # INVALID     $t9, $t6, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee658u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4EE658 raw=0x732E6E6F");
label_4ee65c:
    // 0x4ee65c: 0x6372756f  daddi       $s2, $k1, 0x756F
    ctx->pc = 0x4ee65cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_4ee660:
    // 0x4ee660: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee660u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4ee664:
    // 0x4ee664: 0x0  nop
    ctx->pc = 0x4ee664u;
    // NOP
label_4ee668:
    // 0x4ee668: 0x45444f4e  .word       0x45444F4E                   # INVALID     $t2, $a0, 0x4F4E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ee668u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4EE668 raw=0x45444F4E");
label_4ee66c:
    // 0x4ee66c: 0x5f475542  .word       0x5F475542                   # bgtzl       $k0, . + 4 + (0x5542 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4ee670:
    if (ctx->pc == 0x4EE670u) {
        ctx->pc = 0x4EE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE66Cu;
        // 0x4ee670: 0x4149  .word       0x00004149                   # jalr        $t0, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $8, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE674u;
        goto label_4ee674;
    }
    ctx->pc = 0x4EE66Cu;
    {
        const bool branch_taken_0x4ee66c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ee66c) {
            ctx->pc = 0x4EE670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE66Cu;
            // 0x4ee670: 0x4149  .word       0x00004149                   # jalr        $t0, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $8, $0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x503B78u;
            return;
        }
    }
    ctx->pc = 0x4EE674u;
label_4ee674:
    // 0x4ee674: 0x0  nop
    ctx->pc = 0x4ee674u;
    // NOP
label_4ee678:
    // 0x4ee678: 0x54495845  bnel        $v0, $t1, . + 4 + (0x5845 << 2)
label_4ee67c:
    if (ctx->pc == 0x4EE67Cu) {
        ctx->pc = 0x4EE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE678u;
        // 0x4ee67c: 0x56454c5f  bnel        $s2, $a1, . + 4 + (0x4C5F << 2) (Delay Slot)
        // Likely branch instruction at 0x4EE67C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE680u;
        goto label_4ee680;
    }
    ctx->pc = 0x4EE678u;
    {
        const bool branch_taken_0x4ee678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x4ee678) {
            ctx->pc = 0x4EE67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE678u;
            // 0x4ee67c: 0x56454c5f  bnel        $s2, $a1, . + 4 + (0x4C5F << 2) (Delay Slot)
            // Likely branch instruction at 0x4EE67C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x504790u;
            return;
        }
    }
    ctx->pc = 0x4EE680u;
label_4ee680:
    // 0x4ee680: 0x4c45  .word       0x00004C45                   # INVALID     $zero, $zero, 0x4C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee680u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4EE680 raw=0x00004C45");
label_4ee684:
    // 0x4ee684: 0x0  nop
    ctx->pc = 0x4ee684u;
    // NOP
label_4ee688:
    // 0x4ee688: 0x0  nop
    ctx->pc = 0x4ee688u;
    // NOP
label_4ee68c:
    // 0x4ee68c: 0x0  nop
    ctx->pc = 0x4ee68cu;
    // NOP
label_4ee690:
    // 0x4ee690: 0x57415053  bnel        $k0, $at, . + 4 + (0x5053 << 2)
label_4ee694:
    if (ctx->pc == 0x4EE694u) {
        ctx->pc = 0x4EE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE690u;
        // 0x4ee694: 0x48545f4e  .word       0x48545F4E                   # cfc2.ni     $s4, $vi11 # 0000074E <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        SET_GPR_U32(ctx, 20, static_cast<uint32_t>(ctx->vi[11]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE698u;
        goto label_4ee698;
    }
    ctx->pc = 0x4EE690u;
    {
        const bool branch_taken_0x4ee690 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 1));
        if (branch_taken_0x4ee690) {
            ctx->pc = 0x4EE694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE690u;
            // 0x4ee694: 0x48545f4e  .word       0x48545F4E                   # cfc2.ni     $s4, $vi11 # 0000074E <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            SET_GPR_U32(ctx, 20, static_cast<uint32_t>(ctx->vi[11]));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5027E0u;
            return;
        }
    }
    ctx->pc = 0x4EE698u;
label_4ee698:
    // 0x4ee698: 0x49425f45  .word       0x49425F45                   # INVALID     $t2, $v0, 0x5F45 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4ee698u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4EE698 raw=0x49425F45");
label_4ee69c:
    // 0x4ee69c: 0x484354  .word       0x00484354                   # dsllv       $t0, $t0, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee69cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (GPR_U32(ctx, 2) & 0x3F));
label_4ee6a0:
    // 0x4ee6a0: 0x5f746361  .word       0x5F746361                   # bgtzl       $k1, . + 4 + (0x6361 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4ee6a4:
    if (ctx->pc == 0x4EE6A4u) {
        ctx->pc = 0x4EE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE6A0u;
        // 0x4ee6a4: 0x5f706976  .word       0x5F706976                   # bgtzl       $k1, . + 4 + (0x6976 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4EE6A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EE6A8u;
        goto label_4ee6a8;
    }
    ctx->pc = 0x4EE6A0u;
    {
        const bool branch_taken_0x4ee6a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ee6a0) {
            ctx->pc = 0x4EE6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EE6A0u;
            // 0x4ee6a4: 0x5f706976  .word       0x5F706976                   # bgtzl       $k1, . + 4 + (0x6976 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4EE6A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x507428u;
            return;
        }
    }
    ctx->pc = 0x4EE6A8u;
label_4ee6a8:
    // 0x4ee6a8: 0x75616853  .word       0x75616853                   # INVALID     $t3, $at, 0x6853 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee6a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE6A8 raw=0x75616853");
label_4ee6ac:
    // 0x4ee6ac: 0x654b616e  daddiu      $t3, $t2, 0x616E
    ctx->pc = 0x4ee6acu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)24942);
label_4ee6b0:
    // 0x4ee6b0: 0x796c6c  .word       0x00796C6C                   # dadd        $t5, $v1, $t9 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee6b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_4ee6b4:
    // 0x4ee6b4: 0x0  nop
    ctx->pc = 0x4ee6b4u;
    // NOP
label_4ee6b8:
    // 0x4ee6b8: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee6b8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee6bc:
    // 0x4ee6bc: 0x626f6a2e  daddi       $t7, $s3, 0x6A2E
    ctx->pc = 0x4ee6bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27182; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_4ee6c0:
    // 0x4ee6c0: 0x302e  dsub        $a2, $zero, $zero
    ctx->pc = 0x4ee6c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_4ee6c4:
    // 0x4ee6c4: 0x0  nop
    ctx->pc = 0x4ee6c4u;
    // NOP
label_4ee6c8:
    // 0x4ee6c8: 0x0  nop
    ctx->pc = 0x4ee6c8u;
    // NOP
label_4ee6cc:
    // 0x4ee6cc: 0x0  nop
    ctx->pc = 0x4ee6ccu;
    // NOP
label_4ee6d0:
    // 0x4ee6d0: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee6d0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee6d4:
    // 0x4ee6d4: 0x626f6a2e  daddi       $t7, $s3, 0x6A2E
    ctx->pc = 0x4ee6d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27182; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_4ee6d8:
    // 0x4ee6d8: 0x672e302e  daddiu      $t6, $t9, 0x302E
    ctx->pc = 0x4ee6d8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)12334);
label_4ee6dc:
    // 0x4ee6dc: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4ee6dcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4ee6e0:
    // 0x4ee6e0: 0x78616d  .word       0x0078616D                   # daddu       $t4, $v1, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee6e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 24));
label_4ee6e4:
    // 0x4ee6e4: 0x0  nop
    ctx->pc = 0x4ee6e4u;
    // NOP
label_4ee6e8:
    // 0x4ee6e8: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee6e8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee6ec:
    // 0x4ee6ec: 0x7561672e  .word       0x7561672E                   # INVALID     $t3, $at, 0x672E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ee6ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EE6EC raw=0x7561672E");
label_4ee6f0:
    // 0x4ee6f0: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee6f0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_4ee6f4:
    // 0x4ee6f4: 0x0  nop
    ctx->pc = 0x4ee6f4u;
    // NOP
label_4ee6f8:
    // 0x4ee6f8: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee6f8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee6fc:
    // 0x4ee6fc: 0x626f6a2e  daddi       $t7, $s3, 0x6A2E
    ctx->pc = 0x4ee6fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27182; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_4ee700:
    // 0x4ee700: 0x0  nop
    ctx->pc = 0x4ee700u;
    // NOP
label_4ee704:
    // 0x4ee704: 0x0  nop
    ctx->pc = 0x4ee704u;
    // NOP
label_4ee708:
    // 0x4ee708: 0x0  nop
    ctx->pc = 0x4ee708u;
    // NOP
label_4ee70c:
    // 0x4ee70c: 0x0  nop
    ctx->pc = 0x4ee70cu;
    // NOP
label_4ee710:
    // 0x4ee710: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee710u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee714:
    // 0x4ee714: 0x7275642e  .word       0x7275642E                   # INVALID     $s3, $s5, 0x642E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee714u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4EE714 raw=0x7275642E");
label_4ee718:
    // 0x4ee718: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4ee718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee71c:
    // 0x4ee71c: 0x696d2e6e  ldl         $t5, 0x2E6E($t3)
    ctx->pc = 0x4ee71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11886); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_4ee720:
    // 0x4ee720: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee720u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4ee724:
    // 0x4ee724: 0x0  nop
    ctx->pc = 0x4ee724u;
    // NOP
label_4ee728:
    // 0x4ee728: 0x0  nop
    ctx->pc = 0x4ee728u;
    // NOP
label_4ee72c:
    // 0x4ee72c: 0x0  nop
    ctx->pc = 0x4ee72cu;
    // NOP
label_4ee730:
    // 0x4ee730: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee730u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee734:
    // 0x4ee734: 0x7275642e  .word       0x7275642E                   # INVALID     $s3, $s5, 0x642E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ee734u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4EE734 raw=0x7275642E");
label_4ee738:
    // 0x4ee738: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4ee738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4ee73c:
    // 0x4ee73c: 0x616d2e6e  daddi       $t5, $t3, 0x2E6E
    ctx->pc = 0x4ee73cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11886; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4ee740:
    // 0x4ee740: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4ee740u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_4ee744:
    // 0x4ee744: 0x0  nop
    ctx->pc = 0x4ee744u;
    // NOP
label_4ee748:
    // 0x4ee748: 0x0  nop
    ctx->pc = 0x4ee748u;
    // NOP
label_4ee74c:
    // 0x4ee74c: 0x0  nop
    ctx->pc = 0x4ee74cu;
    // NOP
label_4ee750:
    // 0x4ee750: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee750u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee754:
    // 0x4ee754: 0x6f65702e  ldr         $a1, 0x702E($k1)
    ctx->pc = 0x4ee754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee758:
    // 0x4ee758: 0x2e656c70  sltiu       $a1, $s3, 0x6C70
    ctx->pc = 0x4ee758u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27760) ? 1 : 0);
label_4ee75c:
    // 0x4ee75c: 0x6e696d  .word       0x006E696D                   # daddu       $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee75cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 14));
label_4ee760:
    // 0x4ee760: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee760u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee764:
    // 0x4ee764: 0x6f65702e  ldr         $a1, 0x702E($k1)
    ctx->pc = 0x4ee764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee768:
    // 0x4ee768: 0x2e656c70  sltiu       $a1, $s3, 0x6C70
    ctx->pc = 0x4ee768u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27760) ? 1 : 0);
label_4ee76c:
    // 0x4ee76c: 0x78616d  .word       0x0078616D                   # daddu       $t4, $v1, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee76cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 24));
label_4ee770:
    // 0x4ee770: 0x656c6f72  daddiu      $t4, $t3, 0x6F72
    ctx->pc = 0x4ee770u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_4ee774:
    // 0x4ee774: 0x6f65702e  ldr         $a1, 0x702E($k1)
    ctx->pc = 0x4ee774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4ee778:
    // 0x4ee778: 0x656c70  tge         $v1, $a1, 433
    ctx->pc = 0x4ee778u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_4ee77c:
    // 0x4ee77c: 0x0  nop
    ctx->pc = 0x4ee77cu;
    // NOP
label_4ee780:
    // 0x4ee780: 0x2e8230  tge         $at, $t6, 520
    ctx->pc = 0x4ee780u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ee784:
    // 0x4ee784: 0x0  nop
    ctx->pc = 0x4ee784u;
    // NOP
label_4ee788:
    // 0x4ee788: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee788u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EE788 raw=0x00000001");
label_4ee78c:
    // 0x4ee78c: 0x0  nop
    ctx->pc = 0x4ee78cu;
    // NOP
label_4ee790:
    // 0x4ee790: 0x2e86e0  .word       0x002E86E0                   # add         $s0, $at, $t6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee790u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_4ee794:
    // 0x4ee794: 0x0  nop
    ctx->pc = 0x4ee794u;
    // NOP
label_4ee798:
    // 0x4ee798: 0x2e86b0  tge         $at, $t6, 538
    ctx->pc = 0x4ee798u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ee79c:
    // 0x4ee79c: 0x0  nop
    ctx->pc = 0x4ee79cu;
    // NOP
label_4ee7a0:
    // 0x4ee7a0: 0x0  nop
    ctx->pc = 0x4ee7a0u;
    // NOP
label_4ee7a4:
    // 0x4ee7a4: 0x4ee984  .word       0x004EE984                   # sllv        $sp, $t6, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee7a4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
label_4ee7a8:
    // 0x4ee7a8: 0x4ee9dc  .word       0x004EE9DC                   # dmult       $v0, $t6 # 0000E9C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee7a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4EE7A8 raw=0x004EE9DC");
label_4ee7ac:
    // 0x4ee7ac: 0x4eea34  teq         $v0, $t6, 936
    ctx->pc = 0x4ee7acu;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ee7b0:
    // 0x4ee7b0: 0x0  nop
    ctx->pc = 0x4ee7b0u;
    // NOP
label_4ee7b4:
    // 0x4ee7b4: 0x0  nop
    ctx->pc = 0x4ee7b4u;
    // NOP
label_4ee7b8:
    // 0x4ee7b8: 0x0  nop
    ctx->pc = 0x4ee7b8u;
    // NOP
label_4ee7bc:
    // 0x4ee7bc: 0x0  nop
    ctx->pc = 0x4ee7bcu;
    // NOP
label_4ee7c0:
    // 0x4ee7c0: 0x0  nop
    ctx->pc = 0x4ee7c0u;
    // NOP
label_4ee7c4:
    // 0x4ee7c4: 0x0  nop
    ctx->pc = 0x4ee7c4u;
    // NOP
label_4ee7c8:
    // 0x4ee7c8: 0x0  nop
    ctx->pc = 0x4ee7c8u;
    // NOP
label_4ee7cc:
    // 0x4ee7cc: 0x0  nop
    ctx->pc = 0x4ee7ccu;
    // NOP
label_4ee7d0:
    // 0x4ee7d0: 0x0  nop
    ctx->pc = 0x4ee7d0u;
    // NOP
label_4ee7d4:
    // 0x4ee7d4: 0x5f90e8  .word       0x005F90E8                   # mfsa        $s2 # 005F00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ee7d4u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_4ee7d8:
    // 0x4ee7d8: 0x0  nop
    ctx->pc = 0x4ee7d8u;
    // NOP
label_4ee7dc:
    // 0x4ee7dc: 0x0  nop
    ctx->pc = 0x4ee7dcu;
    // NOP
label_4ee7e0:
    // 0x4ee7e0: 0x0  nop
    ctx->pc = 0x4ee7e0u;
    // NOP
label_4ee7e4:
    // 0x4ee7e4: 0x0  nop
    ctx->pc = 0x4ee7e4u;
    // NOP
label_4ee7e8:
    // 0x4ee7e8: 0x0  nop
    ctx->pc = 0x4ee7e8u;
    // NOP
label_4ee7ec:
    // 0x4ee7ec: 0x0  nop
    ctx->pc = 0x4ee7ecu;
    // NOP
label_4ee7f0:
    // 0x4ee7f0: 0x0  nop
    ctx->pc = 0x4ee7f0u;
    // NOP
label_4ee7f4:
    // 0x4ee7f4: 0x0  nop
    ctx->pc = 0x4ee7f4u;
    // NOP
label_4ee7f8:
    // 0x4ee7f8: 0x0  nop
    ctx->pc = 0x4ee7f8u;
    // NOP
label_4ee7fc:
    // 0x4ee7fc: 0x0  nop
    ctx->pc = 0x4ee7fcu;
    // NOP
label_4ee800:
    // 0x4ee800: 0x0  nop
    ctx->pc = 0x4ee800u;
    // NOP
label_4ee804:
    // 0x4ee804: 0x0  nop
    ctx->pc = 0x4ee804u;
    // NOP
label_4ee808:
    // 0x4ee808: 0x0  nop
    ctx->pc = 0x4ee808u;
    // NOP
label_4ee80c:
    // 0x4ee80c: 0x0  nop
    ctx->pc = 0x4ee80cu;
    // NOP
label_4ee810:
    // 0x4ee810: 0x0  nop
    ctx->pc = 0x4ee810u;
    // NOP
label_4ee814:
    // 0x4ee814: 0x0  nop
    ctx->pc = 0x4ee814u;
    // NOP
label_4ee818:
    // 0x4ee818: 0x0  nop
    ctx->pc = 0x4ee818u;
    // NOP
label_4ee81c:
    // 0x4ee81c: 0x0  nop
    ctx->pc = 0x4ee81cu;
    // NOP
label_4ee820:
    // 0x4ee820: 0x0  nop
    ctx->pc = 0x4ee820u;
    // NOP
label_4ee824:
    // 0x4ee824: 0x0  nop
    ctx->pc = 0x4ee824u;
    // NOP
label_4ee828:
    // 0x4ee828: 0x0  nop
    ctx->pc = 0x4ee828u;
    // NOP
label_4ee82c:
    // 0x4ee82c: 0x0  nop
    ctx->pc = 0x4ee82cu;
    // NOP
label_4ee830:
    // 0x4ee830: 0x0  nop
    ctx->pc = 0x4ee830u;
    // NOP
label_4ee834:
    // 0x4ee834: 0x0  nop
    ctx->pc = 0x4ee834u;
    // NOP
label_4ee838:
    // 0x4ee838: 0x0  nop
    ctx->pc = 0x4ee838u;
    // NOP
label_4ee83c:
    // 0x4ee83c: 0x0  nop
    ctx->pc = 0x4ee83cu;
    // NOP
label_4ee840:
    // 0x4ee840: 0x0  nop
    ctx->pc = 0x4ee840u;
    // NOP
label_4ee844:
    // 0x4ee844: 0x0  nop
    ctx->pc = 0x4ee844u;
    // NOP
label_4ee848:
    // 0x4ee848: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ee848u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EE848 raw=0x00000001");
label_4ee84c:
    // 0x4ee84c: 0x0  nop
    ctx->pc = 0x4ee84cu;
    // NOP
label_4ee850:
    // 0x4ee850: 0x0  nop
    ctx->pc = 0x4ee850u;
    // NOP
label_4ee854:
    // 0x4ee854: 0x0  nop
    ctx->pc = 0x4ee854u;
    // NOP
label_4ee858:
    // 0x4ee858: 0x0  nop
    ctx->pc = 0x4ee858u;
    // NOP
label_4ee85c:
    // 0x4ee85c: 0x0  nop
    ctx->pc = 0x4ee85cu;
    // NOP
label_4ee860:
    // 0x4ee860: 0x0  nop
    ctx->pc = 0x4ee860u;
    // NOP
label_4ee864:
    // 0x4ee864: 0x0  nop
    ctx->pc = 0x4ee864u;
    // NOP
label_4ee868:
    // 0x4ee868: 0x0  nop
    ctx->pc = 0x4ee868u;
    // NOP
label_4ee86c:
    // 0x4ee86c: 0x0  nop
    ctx->pc = 0x4ee86cu;
    // NOP
label_4ee870:
    // 0x4ee870: 0x0  nop
    ctx->pc = 0x4ee870u;
    // NOP
label_4ee874:
    // 0x4ee874: 0x0  nop
    ctx->pc = 0x4ee874u;
    // NOP
label_4ee878:
    // 0x4ee878: 0x0  nop
    ctx->pc = 0x4ee878u;
    // NOP
label_4ee87c:
    // 0x4ee87c: 0x0  nop
    ctx->pc = 0x4ee87cu;
    // NOP
label_4ee880:
    // 0x4ee880: 0x0  nop
    ctx->pc = 0x4ee880u;
    // NOP
label_4ee884:
    // 0x4ee884: 0x0  nop
    ctx->pc = 0x4ee884u;
    // NOP
label_4ee888:
    // 0x4ee888: 0x0  nop
    ctx->pc = 0x4ee888u;
    // NOP
label_4ee88c:
    // 0x4ee88c: 0x0  nop
    ctx->pc = 0x4ee88cu;
    // NOP
label_4ee890:
    // 0x4ee890: 0x0  nop
    ctx->pc = 0x4ee890u;
    // NOP
label_4ee894:
    // 0x4ee894: 0x0  nop
    ctx->pc = 0x4ee894u;
    // NOP
label_4ee898:
    // 0x4ee898: 0x0  nop
    ctx->pc = 0x4ee898u;
    // NOP
label_4ee89c:
    // 0x4ee89c: 0x0  nop
    ctx->pc = 0x4ee89cu;
    // NOP
label_4ee8a0:
    // 0x4ee8a0: 0x0  nop
    ctx->pc = 0x4ee8a0u;
    // NOP
label_4ee8a4:
    // 0x4ee8a4: 0x0  nop
    ctx->pc = 0x4ee8a4u;
    // NOP
label_4ee8a8:
    // 0x4ee8a8: 0x0  nop
    ctx->pc = 0x4ee8a8u;
    // NOP
label_4ee8ac:
    // 0x4ee8ac: 0x0  nop
    ctx->pc = 0x4ee8acu;
    // NOP
label_4ee8b0:
    // 0x4ee8b0: 0x0  nop
    ctx->pc = 0x4ee8b0u;
    // NOP
label_4ee8b4:
    // 0x4ee8b4: 0x0  nop
    ctx->pc = 0x4ee8b4u;
    // NOP
label_4ee8b8:
    // 0x4ee8b8: 0x0  nop
    ctx->pc = 0x4ee8b8u;
    // NOP
label_4ee8bc:
    // 0x4ee8bc: 0x0  nop
    ctx->pc = 0x4ee8bcu;
    // NOP
label_4ee8c0:
    // 0x4ee8c0: 0x0  nop
    ctx->pc = 0x4ee8c0u;
    // NOP
label_4ee8c4:
    // 0x4ee8c4: 0x0  nop
    ctx->pc = 0x4ee8c4u;
    // NOP
label_4ee8c8:
    // 0x4ee8c8: 0x0  nop
    ctx->pc = 0x4ee8c8u;
    // NOP
label_4ee8cc:
    // 0x4ee8cc: 0x0  nop
    ctx->pc = 0x4ee8ccu;
    // NOP
label_4ee8d0:
    // 0x4ee8d0: 0x0  nop
    ctx->pc = 0x4ee8d0u;
    // NOP
label_4ee8d4:
    // 0x4ee8d4: 0x0  nop
    ctx->pc = 0x4ee8d4u;
    // NOP
label_4ee8d8:
    // 0x4ee8d8: 0x0  nop
    ctx->pc = 0x4ee8d8u;
    // NOP
label_4ee8dc:
    // 0x4ee8dc: 0x0  nop
    ctx->pc = 0x4ee8dcu;
    // NOP
label_4ee8e0:
    // 0x4ee8e0: 0x0  nop
    ctx->pc = 0x4ee8e0u;
    // NOP
label_4ee8e4:
    // 0x4ee8e4: 0x0  nop
    ctx->pc = 0x4ee8e4u;
    // NOP
label_4ee8e8:
    // 0x4ee8e8: 0x0  nop
    ctx->pc = 0x4ee8e8u;
    // NOP
label_4ee8ec:
    // 0x4ee8ec: 0x0  nop
    ctx->pc = 0x4ee8ecu;
    // NOP
label_4ee8f0:
    // 0x4ee8f0: 0x0  nop
    ctx->pc = 0x4ee8f0u;
    // NOP
label_4ee8f4:
    // 0x4ee8f4: 0x0  nop
    ctx->pc = 0x4ee8f4u;
    // NOP
label_4ee8f8:
    // 0x4ee8f8: 0x0  nop
    ctx->pc = 0x4ee8f8u;
    // NOP
label_4ee8fc:
    // 0x4ee8fc: 0x0  nop
    ctx->pc = 0x4ee8fcu;
    // NOP
label_4ee900:
    // 0x4ee900: 0x0  nop
    ctx->pc = 0x4ee900u;
    // NOP
label_4ee904:
    // 0x4ee904: 0x0  nop
    ctx->pc = 0x4ee904u;
    // NOP
label_4ee908:
    // 0x4ee908: 0x0  nop
    ctx->pc = 0x4ee908u;
    // NOP
label_4ee90c:
    // 0x4ee90c: 0x0  nop
    ctx->pc = 0x4ee90cu;
    // NOP
label_4ee910:
    // 0x4ee910: 0x0  nop
    ctx->pc = 0x4ee910u;
    // NOP
label_4ee914:
    // 0x4ee914: 0x0  nop
    ctx->pc = 0x4ee914u;
    // NOP
label_4ee918:
    // 0x4ee918: 0x0  nop
    ctx->pc = 0x4ee918u;
    // NOP
label_4ee91c:
    // 0x4ee91c: 0x0  nop
    ctx->pc = 0x4ee91cu;
    // NOP
label_4ee920:
    // 0x4ee920: 0x0  nop
    ctx->pc = 0x4ee920u;
    // NOP
label_4ee924:
    // 0x4ee924: 0x0  nop
    ctx->pc = 0x4ee924u;
    // NOP
label_4ee928:
    // 0x4ee928: 0x0  nop
    ctx->pc = 0x4ee928u;
    // NOP
label_4ee92c:
    // 0x4ee92c: 0x0  nop
    ctx->pc = 0x4ee92cu;
    // NOP
label_4ee930:
    // 0x4ee930: 0x0  nop
    ctx->pc = 0x4ee930u;
    // NOP
label_4ee934:
    // 0x4ee934: 0x0  nop
    ctx->pc = 0x4ee934u;
    // NOP
label_4ee938:
    // 0x4ee938: 0x0  nop
    ctx->pc = 0x4ee938u;
    // NOP
label_4ee93c:
    // 0x4ee93c: 0x0  nop
    ctx->pc = 0x4ee93cu;
    // NOP
label_4ee940:
    // 0x4ee940: 0x0  nop
    ctx->pc = 0x4ee940u;
    // NOP
label_4ee944:
    // 0x4ee944: 0x0  nop
    ctx->pc = 0x4ee944u;
    // NOP
label_4ee948:
    // 0x4ee948: 0x0  nop
    ctx->pc = 0x4ee948u;
    // NOP
label_4ee94c:
    // 0x4ee94c: 0x0  nop
    ctx->pc = 0x4ee94cu;
    // NOP
label_4ee950:
    // 0x4ee950: 0x0  nop
    ctx->pc = 0x4ee950u;
    // NOP
label_4ee954:
    // 0x4ee954: 0x0  nop
    ctx->pc = 0x4ee954u;
    // NOP
label_4ee958:
    // 0x4ee958: 0x0  nop
    ctx->pc = 0x4ee958u;
    // NOP
label_4ee95c:
    // 0x4ee95c: 0x0  nop
    ctx->pc = 0x4ee95cu;
    // NOP
label_4ee960:
    // 0x4ee960: 0x0  nop
    ctx->pc = 0x4ee960u;
    // NOP
label_4ee964:
    // 0x4ee964: 0x0  nop
    ctx->pc = 0x4ee964u;
    // NOP
label_4ee968:
    // 0x4ee968: 0x0  nop
    ctx->pc = 0x4ee968u;
    // NOP
label_4ee96c:
    // 0x4ee96c: 0x0  nop
    ctx->pc = 0x4ee96cu;
    // NOP
label_4ee970:
    // 0x4ee970: 0x0  nop
    ctx->pc = 0x4ee970u;
    // NOP
label_4ee974:
    // 0x4ee974: 0x0  nop
    ctx->pc = 0x4ee974u;
    // NOP
label_4ee978:
    // 0x4ee978: 0x0  nop
    ctx->pc = 0x4ee978u;
    // NOP
label_4ee97c:
    // 0x4ee97c: 0x0  nop
    ctx->pc = 0x4ee97cu;
    // NOP
label_4ee980:
    // 0x4ee980: 0x0  nop
    ctx->pc = 0x4ee980u;
    // NOP
label_4ee984:
    // 0x4ee984: 0x0  nop
    ctx->pc = 0x4ee984u;
    // NOP
label_4ee988:
    // 0x4ee988: 0x0  nop
    ctx->pc = 0x4ee988u;
    // NOP
label_4ee98c:
    // 0x4ee98c: 0x0  nop
    ctx->pc = 0x4ee98cu;
    // NOP
label_4ee990:
    // 0x4ee990: 0x0  nop
    ctx->pc = 0x4ee990u;
    // NOP
label_4ee994:
    // 0x4ee994: 0x0  nop
    ctx->pc = 0x4ee994u;
    // NOP
label_4ee998:
    // 0x4ee998: 0x0  nop
    ctx->pc = 0x4ee998u;
    // NOP
label_4ee99c:
    // 0x4ee99c: 0x0  nop
    ctx->pc = 0x4ee99cu;
    // NOP
label_4ee9a0:
    // 0x4ee9a0: 0x0  nop
    ctx->pc = 0x4ee9a0u;
    // NOP
label_4ee9a4:
    // 0x4ee9a4: 0x0  nop
    ctx->pc = 0x4ee9a4u;
    // NOP
label_4ee9a8:
    // 0x4ee9a8: 0x0  nop
    ctx->pc = 0x4ee9a8u;
    // NOP
label_4ee9ac:
    // 0x4ee9ac: 0x0  nop
    ctx->pc = 0x4ee9acu;
    // NOP
label_4ee9b0:
    // 0x4ee9b0: 0x0  nop
    ctx->pc = 0x4ee9b0u;
    // NOP
label_4ee9b4:
    // 0x4ee9b4: 0x0  nop
    ctx->pc = 0x4ee9b4u;
    // NOP
label_4ee9b8:
    // 0x4ee9b8: 0x0  nop
    ctx->pc = 0x4ee9b8u;
    // NOP
label_4ee9bc:
    // 0x4ee9bc: 0x0  nop
    ctx->pc = 0x4ee9bcu;
    // NOP
label_4ee9c0:
    // 0x4ee9c0: 0x0  nop
    ctx->pc = 0x4ee9c0u;
    // NOP
label_4ee9c4:
    // 0x4ee9c4: 0x0  nop
    ctx->pc = 0x4ee9c4u;
    // NOP
label_4ee9c8:
    // 0x4ee9c8: 0x0  nop
    ctx->pc = 0x4ee9c8u;
    // NOP
label_4ee9cc:
    // 0x4ee9cc: 0x0  nop
    ctx->pc = 0x4ee9ccu;
    // NOP
label_4ee9d0:
    // 0x4ee9d0: 0x0  nop
    ctx->pc = 0x4ee9d0u;
    // NOP
label_4ee9d4:
    // 0x4ee9d4: 0x0  nop
    ctx->pc = 0x4ee9d4u;
    // NOP
label_4ee9d8:
    // 0x4ee9d8: 0x0  nop
    ctx->pc = 0x4ee9d8u;
    // NOP
label_4ee9dc:
    // 0x4ee9dc: 0x0  nop
    ctx->pc = 0x4ee9dcu;
    // NOP
label_4ee9e0:
    // 0x4ee9e0: 0x0  nop
    ctx->pc = 0x4ee9e0u;
    // NOP
label_4ee9e4:
    // 0x4ee9e4: 0x0  nop
    ctx->pc = 0x4ee9e4u;
    // NOP
label_4ee9e8:
    // 0x4ee9e8: 0x0  nop
    ctx->pc = 0x4ee9e8u;
    // NOP
label_4ee9ec:
    // 0x4ee9ec: 0x0  nop
    ctx->pc = 0x4ee9ecu;
    // NOP
label_4ee9f0:
    // 0x4ee9f0: 0x0  nop
    ctx->pc = 0x4ee9f0u;
    // NOP
label_4ee9f4:
    // 0x4ee9f4: 0x0  nop
    ctx->pc = 0x4ee9f4u;
    // NOP
label_4ee9f8:
    // 0x4ee9f8: 0x0  nop
    ctx->pc = 0x4ee9f8u;
    // NOP
label_4ee9fc:
    // 0x4ee9fc: 0x0  nop
    ctx->pc = 0x4ee9fcu;
    // NOP
label_4eea00:
    // 0x4eea00: 0x0  nop
    ctx->pc = 0x4eea00u;
    // NOP
label_4eea04:
    // 0x4eea04: 0x0  nop
    ctx->pc = 0x4eea04u;
    // NOP
label_4eea08:
    // 0x4eea08: 0x0  nop
    ctx->pc = 0x4eea08u;
    // NOP
label_4eea0c:
    // 0x4eea0c: 0x0  nop
    ctx->pc = 0x4eea0cu;
    // NOP
label_4eea10:
    // 0x4eea10: 0x0  nop
    ctx->pc = 0x4eea10u;
    // NOP
label_4eea14:
    // 0x4eea14: 0x0  nop
    ctx->pc = 0x4eea14u;
    // NOP
label_4eea18:
    // 0x4eea18: 0x0  nop
    ctx->pc = 0x4eea18u;
    // NOP
label_4eea1c:
    // 0x4eea1c: 0x0  nop
    ctx->pc = 0x4eea1cu;
    // NOP
label_4eea20:
    // 0x4eea20: 0x0  nop
    ctx->pc = 0x4eea20u;
    // NOP
label_4eea24:
    // 0x4eea24: 0x0  nop
    ctx->pc = 0x4eea24u;
    // NOP
label_4eea28:
    // 0x4eea28: 0x0  nop
    ctx->pc = 0x4eea28u;
    // NOP
label_4eea2c:
    // 0x4eea2c: 0x0  nop
    ctx->pc = 0x4eea2cu;
    // NOP
label_4eea30:
    // 0x4eea30: 0x0  nop
    ctx->pc = 0x4eea30u;
    // NOP
label_4eea34:
    // 0x4eea34: 0x0  nop
    ctx->pc = 0x4eea34u;
    // NOP
label_4eea38:
    // 0x4eea38: 0x0  nop
    ctx->pc = 0x4eea38u;
    // NOP
label_4eea3c:
    // 0x4eea3c: 0x0  nop
    ctx->pc = 0x4eea3cu;
    // NOP
label_4eea40:
    // 0x4eea40: 0x0  nop
    ctx->pc = 0x4eea40u;
    // NOP
label_4eea44:
    // 0x4eea44: 0x0  nop
    ctx->pc = 0x4eea44u;
    // NOP
label_4eea48:
    // 0x4eea48: 0x0  nop
    ctx->pc = 0x4eea48u;
    // NOP
label_4eea4c:
    // 0x4eea4c: 0x0  nop
    ctx->pc = 0x4eea4cu;
    // NOP
label_4eea50:
    // 0x4eea50: 0x0  nop
    ctx->pc = 0x4eea50u;
    // NOP
label_4eea54:
    // 0x4eea54: 0x0  nop
    ctx->pc = 0x4eea54u;
    // NOP
label_4eea58:
    // 0x4eea58: 0x0  nop
    ctx->pc = 0x4eea58u;
    // NOP
label_4eea5c:
    // 0x4eea5c: 0x0  nop
    ctx->pc = 0x4eea5cu;
    // NOP
label_4eea60:
    // 0x4eea60: 0x0  nop
    ctx->pc = 0x4eea60u;
    // NOP
label_4eea64:
    // 0x4eea64: 0x0  nop
    ctx->pc = 0x4eea64u;
    // NOP
label_4eea68:
    // 0x4eea68: 0x0  nop
    ctx->pc = 0x4eea68u;
    // NOP
label_4eea6c:
    // 0x4eea6c: 0x0  nop
    ctx->pc = 0x4eea6cu;
    // NOP
label_4eea70:
    // 0x4eea70: 0x0  nop
    ctx->pc = 0x4eea70u;
    // NOP
label_4eea74:
    // 0x4eea74: 0x0  nop
    ctx->pc = 0x4eea74u;
    // NOP
label_4eea78:
    // 0x4eea78: 0x0  nop
    ctx->pc = 0x4eea78u;
    // NOP
label_4eea7c:
    // 0x4eea7c: 0x0  nop
    ctx->pc = 0x4eea7cu;
    // NOP
label_4eea80:
    // 0x4eea80: 0x0  nop
    ctx->pc = 0x4eea80u;
    // NOP
label_4eea84:
    // 0x4eea84: 0x0  nop
    ctx->pc = 0x4eea84u;
    // NOP
label_4eea88:
    // 0x4eea88: 0x0  nop
    ctx->pc = 0x4eea88u;
    // NOP
label_4eea8c:
    // 0x4eea8c: 0x0  nop
    ctx->pc = 0x4eea8cu;
    // NOP
label_4eea90:
    // 0x4eea90: 0x4ee7a0  .word       0x004EE7A0                   # add         $gp, $v0, $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eea90u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_4eea94:
    // 0x4eea94: 0x0  nop
    ctx->pc = 0x4eea94u;
    // NOP
label_4eea98:
    // 0x4eea98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eea98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EEA98 raw=0x00000001");
label_4eea9c:
    // 0x4eea9c: 0x0  nop
    ctx->pc = 0x4eea9cu;
    // NOP
label_4eeaa0:
    // 0x4eeaa0: 0x0  nop
    ctx->pc = 0x4eeaa0u;
    // NOP
label_4eeaa4:
    // 0x4eeaa4: 0x0  nop
    ctx->pc = 0x4eeaa4u;
    // NOP
label_4eeaa8:
    // 0x4eeaa8: 0x4eeaa0  .word       0x004EEAA0                   # add         $sp, $v0, $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeaa8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeaac:
    // 0x4eeaac: 0x4eeaa0  .word       0x004EEAA0                   # add         $sp, $v0, $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeaacu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeab0:
    // 0x4eeab0: 0x4eeaa8  .word       0x004EEAA8                   # mfsa        $sp # 004E0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeab0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeab4:
    // 0x4eeab4: 0x4eeaa8  .word       0x004EEAA8                   # mfsa        $sp # 004E0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeab4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeab8:
    // 0x4eeab8: 0x4eeab0  tge         $v0, $t6, 938
    ctx->pc = 0x4eeab8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeabc:
    // 0x4eeabc: 0x4eeab0  tge         $v0, $t6, 938
    ctx->pc = 0x4eeabcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeac0:
    // 0x4eeac0: 0x4eeab8  .word       0x004EEAB8                   # dsll        $sp, $t6, 10 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeac0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 10);
label_4eeac4:
    // 0x4eeac4: 0x4eeab8  .word       0x004EEAB8                   # dsll        $sp, $t6, 10 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeac4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 10);
label_4eeac8:
    // 0x4eeac8: 0x4eeac0  .word       0x004EEAC0                   # sll         $sp, $t6, 11 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeac8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 11));
label_4eeacc:
    // 0x4eeacc: 0x4eeac0  .word       0x004EEAC0                   # sll         $sp, $t6, 11 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeaccu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 11));
label_4eead0:
    // 0x4eead0: 0x4eeac8  .word       0x004EEAC8                   # jr          $v0 # 000EEAC0 <InstrIdType: CPU_SPECIAL>
label_4eead4:
    if (ctx->pc == 0x4EEAD4u) {
        ctx->pc = 0x4EEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEAD0u;
        // 0x4eead4: 0x4eeac8  .word       0x004EEAC8                   # jr          $v0 # 000EEAC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEAD8u;
        goto label_4eead8;
    }
    ctx->pc = 0x4EEAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEAD0u;
        // 0x4eead4: 0x4eeac8  .word       0x004EEAC8                   # jr          $v0 # 000EEAC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEAD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEAD8u;
label_4eead8:
    // 0x4eead8: 0x4eead0  .word       0x004EEAD0                   # mfhi        $sp # 004E02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eead8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeadc:
    // 0x4eeadc: 0x4eead0  .word       0x004EEAD0                   # mfhi        $sp # 004E02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeadcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeae0:
    // 0x4eeae0: 0x4eead8  .word       0x004EEAD8                   # mult        $sp, $v0, $t6 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeae4:
    // 0x4eeae4: 0x4eead8  .word       0x004EEAD8                   # mult        $sp, $v0, $t6 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeae8:
    // 0x4eeae8: 0x4eeae0  .word       0x004EEAE0                   # add         $sp, $v0, $t6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeae8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeaec:
    // 0x4eeaec: 0x4eeae0  .word       0x004EEAE0                   # add         $sp, $v0, $t6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeaecu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeaf0:
    // 0x4eeaf0: 0x4eeae8  .word       0x004EEAE8                   # mfsa        $sp # 004E02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeaf0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeaf4:
    // 0x4eeaf4: 0x4eeae8  .word       0x004EEAE8                   # mfsa        $sp # 004E02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeaf4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeaf8:
    // 0x4eeaf8: 0x4eeaf0  tge         $v0, $t6, 939
    ctx->pc = 0x4eeaf8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeafc:
    // 0x4eeafc: 0x4eeaf0  tge         $v0, $t6, 939
    ctx->pc = 0x4eeafcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeb00:
    // 0x4eeb00: 0x4eeaf8  .word       0x004EEAF8                   # dsll        $sp, $t6, 11 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb00u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 11);
label_4eeb04:
    // 0x4eeb04: 0x4eeaf8  .word       0x004EEAF8                   # dsll        $sp, $t6, 11 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb04u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 11);
label_4eeb08:
    // 0x4eeb08: 0x4eeb00  .word       0x004EEB00                   # sll         $sp, $t6, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb08u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 12));
label_4eeb0c:
    // 0x4eeb0c: 0x4eeb00  .word       0x004EEB00                   # sll         $sp, $t6, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb0cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 12));
label_4eeb10:
    // 0x4eeb10: 0x4eeb08  .word       0x004EEB08                   # jr          $v0 # 000EEB00 <InstrIdType: CPU_SPECIAL>
label_4eeb14:
    if (ctx->pc == 0x4EEB14u) {
        ctx->pc = 0x4EEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB10u;
        // 0x4eeb14: 0x4eeb08  .word       0x004EEB08                   # jr          $v0 # 000EEB00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEB18u;
        goto label_4eeb18;
    }
    ctx->pc = 0x4EEB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB10u;
        // 0x4eeb14: 0x4eeb08  .word       0x004EEB08                   # jr          $v0 # 000EEB00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEB10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEB18u;
label_4eeb18:
    // 0x4eeb18: 0x4eeb10  .word       0x004EEB10                   # mfhi        $sp # 004E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb18u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeb1c:
    // 0x4eeb1c: 0x4eeb10  .word       0x004EEB10                   # mfhi        $sp # 004E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb1cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeb20:
    // 0x4eeb20: 0x4eeb18  .word       0x004EEB18                   # mult        $sp, $v0, $t6 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeb24:
    // 0x4eeb24: 0x4eeb18  .word       0x004EEB18                   # mult        $sp, $v0, $t6 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeb28:
    // 0x4eeb28: 0x4eeb20  .word       0x004EEB20                   # add         $sp, $v0, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb28u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeb2c:
    // 0x4eeb2c: 0x4eeb20  .word       0x004EEB20                   # add         $sp, $v0, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb2cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeb30:
    // 0x4eeb30: 0x4eeb28  .word       0x004EEB28                   # mfsa        $sp # 004E0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb30u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeb34:
    // 0x4eeb34: 0x4eeb28  .word       0x004EEB28                   # mfsa        $sp # 004E0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb34u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeb38:
    // 0x4eeb38: 0x4eeb30  tge         $v0, $t6, 940
    ctx->pc = 0x4eeb38u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeb3c:
    // 0x4eeb3c: 0x4eeb30  tge         $v0, $t6, 940
    ctx->pc = 0x4eeb3cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeb40:
    // 0x4eeb40: 0x4eeb38  .word       0x004EEB38                   # dsll        $sp, $t6, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 12);
label_4eeb44:
    // 0x4eeb44: 0x4eeb38  .word       0x004EEB38                   # dsll        $sp, $t6, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb44u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 12);
label_4eeb48:
    // 0x4eeb48: 0x4eeb40  .word       0x004EEB40                   # sll         $sp, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb48u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 13));
label_4eeb4c:
    // 0x4eeb4c: 0x4eeb40  .word       0x004EEB40                   # sll         $sp, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 13));
label_4eeb50:
    // 0x4eeb50: 0x4eeb48  .word       0x004EEB48                   # jr          $v0 # 000EEB40 <InstrIdType: CPU_SPECIAL>
label_4eeb54:
    if (ctx->pc == 0x4EEB54u) {
        ctx->pc = 0x4EEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB50u;
        // 0x4eeb54: 0x4eeb48  .word       0x004EEB48                   # jr          $v0 # 000EEB40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEB58u;
        goto label_4eeb58;
    }
    ctx->pc = 0x4EEB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB50u;
        // 0x4eeb54: 0x4eeb48  .word       0x004EEB48                   # jr          $v0 # 000EEB40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEB50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEB58u;
label_4eeb58:
    // 0x4eeb58: 0x4eeb50  .word       0x004EEB50                   # mfhi        $sp # 004E0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb58u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeb5c:
    // 0x4eeb5c: 0x4eeb50  .word       0x004EEB50                   # mfhi        $sp # 004E0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb5cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeb60:
    // 0x4eeb60: 0x4eeb58  .word       0x004EEB58                   # mult        $sp, $v0, $t6 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeb64:
    // 0x4eeb64: 0x4eeb58  .word       0x004EEB58                   # mult        $sp, $v0, $t6 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeb68:
    // 0x4eeb68: 0x4eeb60  .word       0x004EEB60                   # add         $sp, $v0, $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeb6c:
    // 0x4eeb6c: 0x4eeb60  .word       0x004EEB60                   # add         $sp, $v0, $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb6cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eeb70:
    // 0x4eeb70: 0x4eeb68  .word       0x004EEB68                   # mfsa        $sp # 004E0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb70u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeb74:
    // 0x4eeb74: 0x4eeb68  .word       0x004EEB68                   # mfsa        $sp # 004E0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeb74u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eeb78:
    // 0x4eeb78: 0x4eeb70  tge         $v0, $t6, 941
    ctx->pc = 0x4eeb78u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeb7c:
    // 0x4eeb7c: 0x4eeb70  tge         $v0, $t6, 941
    ctx->pc = 0x4eeb7cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eeb80:
    // 0x4eeb80: 0x4eeb78  .word       0x004EEB78                   # dsll        $sp, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb80u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 13);
label_4eeb84:
    // 0x4eeb84: 0x4eeb78  .word       0x004EEB78                   # dsll        $sp, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb84u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 13);
label_4eeb88:
    // 0x4eeb88: 0x4eeb80  .word       0x004EEB80                   # sll         $sp, $t6, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb88u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 14));
label_4eeb8c:
    // 0x4eeb8c: 0x4eeb80  .word       0x004EEB80                   # sll         $sp, $t6, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 14));
label_4eeb90:
    // 0x4eeb90: 0x4eeb88  .word       0x004EEB88                   # jr          $v0 # 000EEB80 <InstrIdType: CPU_SPECIAL>
label_4eeb94:
    if (ctx->pc == 0x4EEB94u) {
        ctx->pc = 0x4EEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB90u;
        // 0x4eeb94: 0x4eeb88  .word       0x004EEB88                   # jr          $v0 # 000EEB80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEB98u;
        goto label_4eeb98;
    }
    ctx->pc = 0x4EEB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB90u;
        // 0x4eeb94: 0x4eeb88  .word       0x004EEB88                   # jr          $v0 # 000EEB80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEB90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEB98u;
label_4eeb98:
    // 0x4eeb98: 0x4eeb90  .word       0x004EEB90                   # mfhi        $sp # 004E0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb98u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeb9c:
    // 0x4eeb9c: 0x4eeb90  .word       0x004EEB90                   # mfhi        $sp # 004E0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeb9cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeba0:
    // 0x4eeba0: 0x4eeb98  .word       0x004EEB98                   # mult        $sp, $v0, $t6 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeba4:
    // 0x4eeba4: 0x4eeb98  .word       0x004EEB98                   # mult        $sp, $v0, $t6 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeba8:
    // 0x4eeba8: 0x4eeba0  .word       0x004EEBA0                   # add         $sp, $v0, $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeba8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eebac:
    // 0x4eebac: 0x4eeba0  .word       0x004EEBA0                   # add         $sp, $v0, $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebacu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eebb0:
    // 0x4eebb0: 0x4eeba8  .word       0x004EEBA8                   # mfsa        $sp # 004E0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eebb0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eebb4:
    // 0x4eebb4: 0x4eeba8  .word       0x004EEBA8                   # mfsa        $sp # 004E0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eebb4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eebb8:
    // 0x4eebb8: 0x4eebb0  tge         $v0, $t6, 942
    ctx->pc = 0x4eebb8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eebbc:
    // 0x4eebbc: 0x4eebb0  tge         $v0, $t6, 942
    ctx->pc = 0x4eebbcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eebc0:
    // 0x4eebc0: 0x4eebb8  .word       0x004EEBB8                   # dsll        $sp, $t6, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebc0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 14);
label_4eebc4:
    // 0x4eebc4: 0x4eebb8  .word       0x004EEBB8                   # dsll        $sp, $t6, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebc4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 14);
label_4eebc8:
    // 0x4eebc8: 0x4eebc0  .word       0x004EEBC0                   # sll         $sp, $t6, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 15));
label_4eebcc:
    // 0x4eebcc: 0x4eebc0  .word       0x004EEBC0                   # sll         $sp, $t6, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebccu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 15));
label_4eebd0:
    // 0x4eebd0: 0x4eebc8  .word       0x004EEBC8                   # jr          $v0 # 000EEBC0 <InstrIdType: CPU_SPECIAL>
label_4eebd4:
    if (ctx->pc == 0x4EEBD4u) {
        ctx->pc = 0x4EEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEBD0u;
        // 0x4eebd4: 0x4eebc8  .word       0x004EEBC8                   # jr          $v0 # 000EEBC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEBD8u;
        goto label_4eebd8;
    }
    ctx->pc = 0x4EEBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEBD0u;
        // 0x4eebd4: 0x4eebc8  .word       0x004EEBC8                   # jr          $v0 # 000EEBC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEBD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEBD8u;
label_4eebd8:
    // 0x4eebd8: 0x4eebd0  .word       0x004EEBD0                   # mfhi        $sp # 004E03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebd8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eebdc:
    // 0x4eebdc: 0x4eebd0  .word       0x004EEBD0                   # mfhi        $sp # 004E03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebdcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eebe0:
    // 0x4eebe0: 0x4eebd8  .word       0x004EEBD8                   # mult        $sp, $v0, $t6 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eebe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eebe4:
    // 0x4eebe4: 0x4eebd8  .word       0x004EEBD8                   # mult        $sp, $v0, $t6 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eebe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eebe8:
    // 0x4eebe8: 0x4eebe0  .word       0x004EEBE0                   # add         $sp, $v0, $t6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebe8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eebec:
    // 0x4eebec: 0x4eebe0  .word       0x004EEBE0                   # add         $sp, $v0, $t6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eebecu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eebf0:
    // 0x4eebf0: 0x4eebe8  .word       0x004EEBE8                   # mfsa        $sp # 004E03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eebf0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eebf4:
    // 0x4eebf4: 0x4eebe8  .word       0x004EEBE8                   # mfsa        $sp # 004E03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eebf4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eebf8:
    // 0x4eebf8: 0x4eebf0  tge         $v0, $t6, 943
    ctx->pc = 0x4eebf8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eebfc:
    // 0x4eebfc: 0x4eebf0  tge         $v0, $t6, 943
    ctx->pc = 0x4eebfcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eec00:
    // 0x4eec00: 0x4eebf8  .word       0x004EEBF8                   # dsll        $sp, $t6, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec00u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 15);
label_4eec04:
    // 0x4eec04: 0x4eebf8  .word       0x004EEBF8                   # dsll        $sp, $t6, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec04u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 15);
label_4eec08:
    // 0x4eec08: 0x4eec00  .word       0x004EEC00                   # sll         $sp, $t6, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec08u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_4eec0c:
    // 0x4eec0c: 0x4eec00  .word       0x004EEC00                   # sll         $sp, $t6, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec0cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_4eec10:
    // 0x4eec10: 0x4eec08  .word       0x004EEC08                   # jr          $v0 # 000EEC00 <InstrIdType: CPU_SPECIAL>
label_4eec14:
    if (ctx->pc == 0x4EEC14u) {
        ctx->pc = 0x4EEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC10u;
        // 0x4eec14: 0x4eec08  .word       0x004EEC08                   # jr          $v0 # 000EEC00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEC18u;
        goto label_4eec18;
    }
    ctx->pc = 0x4EEC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC10u;
        // 0x4eec14: 0x4eec08  .word       0x004EEC08                   # jr          $v0 # 000EEC00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEC10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEC18u;
label_4eec18:
    // 0x4eec18: 0x4eec10  .word       0x004EEC10                   # mfhi        $sp # 004E0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec18u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eec1c:
    // 0x4eec1c: 0x4eec10  .word       0x004EEC10                   # mfhi        $sp # 004E0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec1cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eec20:
    // 0x4eec20: 0x4eec18  .word       0x004EEC18                   # mult        $sp, $v0, $t6 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eec24:
    // 0x4eec24: 0x4eec18  .word       0x004EEC18                   # mult        $sp, $v0, $t6 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eec28:
    // 0x4eec28: 0x4eec20  .word       0x004EEC20                   # add         $sp, $v0, $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec28u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eec2c:
    // 0x4eec2c: 0x4eec20  .word       0x004EEC20                   # add         $sp, $v0, $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec2cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eec30:
    // 0x4eec30: 0x4eec28  .word       0x004EEC28                   # mfsa        $sp # 004E0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec30u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eec34:
    // 0x4eec34: 0x4eec28  .word       0x004EEC28                   # mfsa        $sp # 004E0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec34u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eec38:
    // 0x4eec38: 0x4eec30  tge         $v0, $t6, 944
    ctx->pc = 0x4eec38u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eec3c:
    // 0x4eec3c: 0x4eec30  tge         $v0, $t6, 944
    ctx->pc = 0x4eec3cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eec40:
    // 0x4eec40: 0x4eec38  .word       0x004EEC38                   # dsll        $sp, $t6, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 16);
label_4eec44:
    // 0x4eec44: 0x4eec38  .word       0x004EEC38                   # dsll        $sp, $t6, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec44u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 16);
label_4eec48:
    // 0x4eec48: 0x4eec40  .word       0x004EEC40                   # sll         $sp, $t6, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec48u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 17));
label_4eec4c:
    // 0x4eec4c: 0x4eec40  .word       0x004EEC40                   # sll         $sp, $t6, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec4cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 17));
label_4eec50:
    // 0x4eec50: 0x4eec48  .word       0x004EEC48                   # jr          $v0 # 000EEC40 <InstrIdType: CPU_SPECIAL>
label_4eec54:
    if (ctx->pc == 0x4EEC54u) {
        ctx->pc = 0x4EEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC50u;
        // 0x4eec54: 0x4eec48  .word       0x004EEC48                   # jr          $v0 # 000EEC40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEC58u;
        goto label_4eec58;
    }
    ctx->pc = 0x4EEC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC50u;
        // 0x4eec54: 0x4eec48  .word       0x004EEC48                   # jr          $v0 # 000EEC40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEC50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEC58u;
label_4eec58:
    // 0x4eec58: 0x4eec50  .word       0x004EEC50                   # mfhi        $sp # 004E0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec58u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eec5c:
    // 0x4eec5c: 0x4eec50  .word       0x004EEC50                   # mfhi        $sp # 004E0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec5cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eec60:
    // 0x4eec60: 0x4eec58  .word       0x004EEC58                   # mult        $sp, $v0, $t6 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eec64:
    // 0x4eec64: 0x4eec58  .word       0x004EEC58                   # mult        $sp, $v0, $t6 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eec68:
    // 0x4eec68: 0x4eec60  .word       0x004EEC60                   # add         $sp, $v0, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eec6c:
    // 0x4eec6c: 0x4eec60  .word       0x004EEC60                   # add         $sp, $v0, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec6cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eec70:
    // 0x4eec70: 0x4eec68  .word       0x004EEC68                   # mfsa        $sp # 004E0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec70u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eec74:
    // 0x4eec74: 0x4eec68  .word       0x004EEC68                   # mfsa        $sp # 004E0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eec74u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eec78:
    // 0x4eec78: 0x4eec70  tge         $v0, $t6, 945
    ctx->pc = 0x4eec78u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eec7c:
    // 0x4eec7c: 0x4eec70  tge         $v0, $t6, 945
    ctx->pc = 0x4eec7cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eec80:
    // 0x4eec80: 0x4eec78  .word       0x004EEC78                   # dsll        $sp, $t6, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec80u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 17);
label_4eec84:
    // 0x4eec84: 0x4eec78  .word       0x004EEC78                   # dsll        $sp, $t6, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec84u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 17);
label_4eec88:
    // 0x4eec88: 0x4eec80  .word       0x004EEC80                   # sll         $sp, $t6, 18 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec88u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 18));
label_4eec8c:
    // 0x4eec8c: 0x4eec80  .word       0x004EEC80                   # sll         $sp, $t6, 18 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec8cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 18));
label_4eec90:
    // 0x4eec90: 0x4eec88  .word       0x004EEC88                   # jr          $v0 # 000EEC80 <InstrIdType: CPU_SPECIAL>
label_4eec94:
    if (ctx->pc == 0x4EEC94u) {
        ctx->pc = 0x4EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC90u;
        // 0x4eec94: 0x4eec88  .word       0x004EEC88                   # jr          $v0 # 000EEC80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEC98u;
        goto label_4eec98;
    }
    ctx->pc = 0x4EEC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC90u;
        // 0x4eec94: 0x4eec88  .word       0x004EEC88                   # jr          $v0 # 000EEC80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEC90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEC98u;
label_4eec98:
    // 0x4eec98: 0x4eec90  .word       0x004EEC90                   # mfhi        $sp # 004E0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec98u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eec9c:
    // 0x4eec9c: 0x4eec90  .word       0x004EEC90                   # mfhi        $sp # 004E0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eec9cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeca0:
    // 0x4eeca0: 0x4eec98  .word       0x004EEC98                   # mult        $sp, $v0, $t6 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeca4:
    // 0x4eeca4: 0x4eec98  .word       0x004EEC98                   # mult        $sp, $v0, $t6 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeca8:
    // 0x4eeca8: 0x4eeca0  .word       0x004EECA0                   # add         $sp, $v0, $t6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeca8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eecac:
    // 0x4eecac: 0x4eeca0  .word       0x004EECA0                   # add         $sp, $v0, $t6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecacu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eecb0:
    // 0x4eecb0: 0x4eeca8  .word       0x004EECA8                   # mfsa        $sp # 004E0480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eecb0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eecb4:
    // 0x4eecb4: 0x4eeca8  .word       0x004EECA8                   # mfsa        $sp # 004E0480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eecb4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eecb8:
    // 0x4eecb8: 0x4eecb0  tge         $v0, $t6, 946
    ctx->pc = 0x4eecb8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eecbc:
    // 0x4eecbc: 0x4eecb0  tge         $v0, $t6, 946
    ctx->pc = 0x4eecbcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eecc0:
    // 0x4eecc0: 0x4eecb8  .word       0x004EECB8                   # dsll        $sp, $t6, 18 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecc0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 18);
label_4eecc4:
    // 0x4eecc4: 0x4eecb8  .word       0x004EECB8                   # dsll        $sp, $t6, 18 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecc4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 18);
label_4eecc8:
    // 0x4eecc8: 0x4eecc0  .word       0x004EECC0                   # sll         $sp, $t6, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 19));
label_4eeccc:
    // 0x4eeccc: 0x4eecc0  .word       0x004EECC0                   # sll         $sp, $t6, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecccu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 19));
label_4eecd0:
    // 0x4eecd0: 0x4eecc8  .word       0x004EECC8                   # jr          $v0 # 000EECC0 <InstrIdType: CPU_SPECIAL>
label_4eecd4:
    if (ctx->pc == 0x4EECD4u) {
        ctx->pc = 0x4EECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EECD0u;
        // 0x4eecd4: 0x4eecc8  .word       0x004EECC8                   # jr          $v0 # 000EECC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EECD8u;
        goto label_4eecd8;
    }
    ctx->pc = 0x4EECD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EECD0u;
        // 0x4eecd4: 0x4eecc8  .word       0x004EECC8                   # jr          $v0 # 000EECC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EECD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EECD8u;
label_4eecd8:
    // 0x4eecd8: 0x4eecd0  .word       0x004EECD0                   # mfhi        $sp # 004E04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecd8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eecdc:
    // 0x4eecdc: 0x4eecd0  .word       0x004EECD0                   # mfhi        $sp # 004E04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eecdcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eece0:
    // 0x4eece0: 0x4eecd8  .word       0x004EECD8                   # mult        $sp, $v0, $t6 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eece0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eece4:
    // 0x4eece4: 0x4eecd8  .word       0x004EECD8                   # mult        $sp, $v0, $t6 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eece4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eece8:
    // 0x4eece8: 0x4eece0  .word       0x004EECE0                   # add         $sp, $v0, $t6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eece8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eecec:
    // 0x4eecec: 0x4eece0  .word       0x004EECE0                   # add         $sp, $v0, $t6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eececu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eecf0:
    // 0x4eecf0: 0x4eece8  .word       0x004EECE8                   # mfsa        $sp # 004E04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eecf0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eecf4:
    // 0x4eecf4: 0x4eece8  .word       0x004EECE8                   # mfsa        $sp # 004E04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eecf4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eecf8:
    // 0x4eecf8: 0x4eecf0  tge         $v0, $t6, 947
    ctx->pc = 0x4eecf8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eecfc:
    // 0x4eecfc: 0x4eecf0  tge         $v0, $t6, 947
    ctx->pc = 0x4eecfcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eed00:
    // 0x4eed00: 0x4eecf8  .word       0x004EECF8                   # dsll        $sp, $t6, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed00u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 19);
label_4eed04:
    // 0x4eed04: 0x4eecf8  .word       0x004EECF8                   # dsll        $sp, $t6, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed04u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 19);
label_4eed08:
    // 0x4eed08: 0x4eed00  .word       0x004EED00                   # sll         $sp, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed08u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 20));
label_4eed0c:
    // 0x4eed0c: 0x4eed00  .word       0x004EED00                   # sll         $sp, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed0cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 20));
label_4eed10:
    // 0x4eed10: 0x4eed08  .word       0x004EED08                   # jr          $v0 # 000EED00 <InstrIdType: CPU_SPECIAL>
label_4eed14:
    if (ctx->pc == 0x4EED14u) {
        ctx->pc = 0x4EED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED10u;
        // 0x4eed14: 0x4eed08  .word       0x004EED08                   # jr          $v0 # 000EED00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EED18u;
        goto label_4eed18;
    }
    ctx->pc = 0x4EED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED10u;
        // 0x4eed14: 0x4eed08  .word       0x004EED08                   # jr          $v0 # 000EED00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EED10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EED18u;
label_4eed18:
    // 0x4eed18: 0x4eed10  .word       0x004EED10                   # mfhi        $sp # 004E0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed18u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eed1c:
    // 0x4eed1c: 0x4eed10  .word       0x004EED10                   # mfhi        $sp # 004E0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed1cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eed20:
    // 0x4eed20: 0x4eed18  .word       0x004EED18                   # mult        $sp, $v0, $t6 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eed24:
    // 0x4eed24: 0x4eed18  .word       0x004EED18                   # mult        $sp, $v0, $t6 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eed28:
    // 0x4eed28: 0x4eed20  .word       0x004EED20                   # add         $sp, $v0, $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed28u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eed2c:
    // 0x4eed2c: 0x4eed20  .word       0x004EED20                   # add         $sp, $v0, $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed2cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eed30:
    // 0x4eed30: 0x4eed28  .word       0x004EED28                   # mfsa        $sp # 004E0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed30u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eed34:
    // 0x4eed34: 0x4eed28  .word       0x004EED28                   # mfsa        $sp # 004E0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed34u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eed38:
    // 0x4eed38: 0x4eed30  tge         $v0, $t6, 948
    ctx->pc = 0x4eed38u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eed3c:
    // 0x4eed3c: 0x4eed30  tge         $v0, $t6, 948
    ctx->pc = 0x4eed3cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eed40:
    // 0x4eed40: 0x4eed38  .word       0x004EED38                   # dsll        $sp, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 20);
label_4eed44:
    // 0x4eed44: 0x4eed38  .word       0x004EED38                   # dsll        $sp, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed44u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 20);
label_4eed48:
    // 0x4eed48: 0x4eed40  .word       0x004EED40                   # sll         $sp, $t6, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed48u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 21));
label_4eed4c:
    // 0x4eed4c: 0x4eed40  .word       0x004EED40                   # sll         $sp, $t6, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed4cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 21));
label_4eed50:
    // 0x4eed50: 0x4eed48  .word       0x004EED48                   # jr          $v0 # 000EED40 <InstrIdType: CPU_SPECIAL>
label_4eed54:
    if (ctx->pc == 0x4EED54u) {
        ctx->pc = 0x4EED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED50u;
        // 0x4eed54: 0x4eed48  .word       0x004EED48                   # jr          $v0 # 000EED40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EED58u;
        goto label_4eed58;
    }
    ctx->pc = 0x4EED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED50u;
        // 0x4eed54: 0x4eed48  .word       0x004EED48                   # jr          $v0 # 000EED40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EED50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EED58u;
label_4eed58:
    // 0x4eed58: 0x4eed50  .word       0x004EED50                   # mfhi        $sp # 004E0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed58u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eed5c:
    // 0x4eed5c: 0x4eed50  .word       0x004EED50                   # mfhi        $sp # 004E0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed5cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eed60:
    // 0x4eed60: 0x4eed58  .word       0x004EED58                   # mult        $sp, $v0, $t6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eed64:
    // 0x4eed64: 0x4eed58  .word       0x004EED58                   # mult        $sp, $v0, $t6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eed68:
    // 0x4eed68: 0x4eed60  .word       0x004EED60                   # add         $sp, $v0, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eed6c:
    // 0x4eed6c: 0x4eed60  .word       0x004EED60                   # add         $sp, $v0, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed6cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eed70:
    // 0x4eed70: 0x4eed68  .word       0x004EED68                   # mfsa        $sp # 004E0540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed70u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eed74:
    // 0x4eed74: 0x4eed68  .word       0x004EED68                   # mfsa        $sp # 004E0540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eed74u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eed78:
    // 0x4eed78: 0x4eed70  tge         $v0, $t6, 949
    ctx->pc = 0x4eed78u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eed7c:
    // 0x4eed7c: 0x4eed70  tge         $v0, $t6, 949
    ctx->pc = 0x4eed7cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eed80:
    // 0x4eed80: 0x4eed78  .word       0x004EED78                   # dsll        $sp, $t6, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed80u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 21);
label_4eed84:
    // 0x4eed84: 0x4eed78  .word       0x004EED78                   # dsll        $sp, $t6, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed84u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 21);
label_4eed88:
    // 0x4eed88: 0x4eed80  .word       0x004EED80                   # sll         $sp, $t6, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed88u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 22));
label_4eed8c:
    // 0x4eed8c: 0x4eed80  .word       0x004EED80                   # sll         $sp, $t6, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed8cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 22));
label_4eed90:
    // 0x4eed90: 0x4eed88  .word       0x004EED88                   # jr          $v0 # 000EED80 <InstrIdType: CPU_SPECIAL>
label_4eed94:
    if (ctx->pc == 0x4EED94u) {
        ctx->pc = 0x4EED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED90u;
        // 0x4eed94: 0x4eed88  .word       0x004EED88                   # jr          $v0 # 000EED80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EED98u;
        goto label_4eed98;
    }
    ctx->pc = 0x4EED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EED90u;
        // 0x4eed94: 0x4eed88  .word       0x004EED88                   # jr          $v0 # 000EED80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EED90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EED98u;
label_4eed98:
    // 0x4eed98: 0x4eed90  .word       0x004EED90                   # mfhi        $sp # 004E0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed98u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eed9c:
    // 0x4eed9c: 0x4eed90  .word       0x004EED90                   # mfhi        $sp # 004E0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eed9cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeda0:
    // 0x4eeda0: 0x4eed98  .word       0x004EED98                   # mult        $sp, $v0, $t6 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeda4:
    // 0x4eeda4: 0x4eed98  .word       0x004EED98                   # mult        $sp, $v0, $t6 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeda8:
    // 0x4eeda8: 0x4eeda0  .word       0x004EEDA0                   # add         $sp, $v0, $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeda8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eedac:
    // 0x4eedac: 0x4eeda0  .word       0x004EEDA0                   # add         $sp, $v0, $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedacu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eedb0:
    // 0x4eedb0: 0x4eeda8  .word       0x004EEDA8                   # mfsa        $sp # 004E0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eedb0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eedb4:
    // 0x4eedb4: 0x4eeda8  .word       0x004EEDA8                   # mfsa        $sp # 004E0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eedb4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eedb8:
    // 0x4eedb8: 0x4eedb0  tge         $v0, $t6, 950
    ctx->pc = 0x4eedb8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eedbc:
    // 0x4eedbc: 0x4eedb0  tge         $v0, $t6, 950
    ctx->pc = 0x4eedbcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eedc0:
    // 0x4eedc0: 0x4eedb8  .word       0x004EEDB8                   # dsll        $sp, $t6, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedc0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 22);
label_4eedc4:
    // 0x4eedc4: 0x4eedb8  .word       0x004EEDB8                   # dsll        $sp, $t6, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedc4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 22);
label_4eedc8:
    // 0x4eedc8: 0x4eedc0  .word       0x004EEDC0                   # sll         $sp, $t6, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedc8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 23));
label_4eedcc:
    // 0x4eedcc: 0x4eedc0  .word       0x004EEDC0                   # sll         $sp, $t6, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedccu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 23));
label_4eedd0:
    // 0x4eedd0: 0x4eedc8  .word       0x004EEDC8                   # jr          $v0 # 000EEDC0 <InstrIdType: CPU_SPECIAL>
label_4eedd4:
    if (ctx->pc == 0x4EEDD4u) {
        ctx->pc = 0x4EEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEDD0u;
        // 0x4eedd4: 0x4eedc8  .word       0x004EEDC8                   # jr          $v0 # 000EEDC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEDD8u;
        goto label_4eedd8;
    }
    ctx->pc = 0x4EEDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEDD0u;
        // 0x4eedd4: 0x4eedc8  .word       0x004EEDC8                   # jr          $v0 # 000EEDC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEDD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEDD8u;
label_4eedd8:
    // 0x4eedd8: 0x4eedd0  .word       0x004EEDD0                   # mfhi        $sp # 004E05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedd8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeddc:
    // 0x4eeddc: 0x4eedd0  .word       0x004EEDD0                   # mfhi        $sp # 004E05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eeddcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eede0:
    // 0x4eede0: 0x4eedd8  .word       0x004EEDD8                   # mult        $sp, $v0, $t6 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eede0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eede4:
    // 0x4eede4: 0x4eedd8  .word       0x004EEDD8                   # mult        $sp, $v0, $t6 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eede4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eede8:
    // 0x4eede8: 0x4eede0  .word       0x004EEDE0                   # add         $sp, $v0, $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eede8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eedec:
    // 0x4eedec: 0x4eede0  .word       0x004EEDE0                   # add         $sp, $v0, $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eedecu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eedf0:
    // 0x4eedf0: 0x4eede8  .word       0x004EEDE8                   # mfsa        $sp # 004E05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eedf0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eedf4:
    // 0x4eedf4: 0x4eede8  .word       0x004EEDE8                   # mfsa        $sp # 004E05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eedf4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eedf8:
    // 0x4eedf8: 0x4eedf0  tge         $v0, $t6, 951
    ctx->pc = 0x4eedf8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eedfc:
    // 0x4eedfc: 0x4eedf0  tge         $v0, $t6, 951
    ctx->pc = 0x4eedfcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eee00:
    // 0x4eee00: 0x4eedf8  .word       0x004EEDF8                   # dsll        $sp, $t6, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee00u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 23);
label_4eee04:
    // 0x4eee04: 0x4eedf8  .word       0x004EEDF8                   # dsll        $sp, $t6, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee04u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 23);
label_4eee08:
    // 0x4eee08: 0x4eee00  .word       0x004EEE00                   # sll         $sp, $t6, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee08u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_4eee0c:
    // 0x4eee0c: 0x4eee00  .word       0x004EEE00                   # sll         $sp, $t6, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee0cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_4eee10:
    // 0x4eee10: 0x4eee08  .word       0x004EEE08                   # jr          $v0 # 000EEE00 <InstrIdType: CPU_SPECIAL>
label_4eee14:
    if (ctx->pc == 0x4EEE14u) {
        ctx->pc = 0x4EEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE10u;
        // 0x4eee14: 0x4eee08  .word       0x004EEE08                   # jr          $v0 # 000EEE00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEE18u;
        goto label_4eee18;
    }
    ctx->pc = 0x4EEE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE10u;
        // 0x4eee14: 0x4eee08  .word       0x004EEE08                   # jr          $v0 # 000EEE00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEE10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEE18u;
label_4eee18:
    // 0x4eee18: 0x4eee10  .word       0x004EEE10                   # mfhi        $sp # 004E0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee18u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eee1c:
    // 0x4eee1c: 0x4eee10  .word       0x004EEE10                   # mfhi        $sp # 004E0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee1cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eee20:
    // 0x4eee20: 0x4eee18  .word       0x004EEE18                   # mult        $sp, $v0, $t6 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eee24:
    // 0x4eee24: 0x4eee18  .word       0x004EEE18                   # mult        $sp, $v0, $t6 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eee28:
    // 0x4eee28: 0x4eee20  .word       0x004EEE20                   # add         $sp, $v0, $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee28u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eee2c:
    // 0x4eee2c: 0x4eee20  .word       0x004EEE20                   # add         $sp, $v0, $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee2cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eee30:
    // 0x4eee30: 0x4eee28  .word       0x004EEE28                   # mfsa        $sp # 004E0600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee30u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eee34:
    // 0x4eee34: 0x4eee28  .word       0x004EEE28                   # mfsa        $sp # 004E0600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee34u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eee38:
    // 0x4eee38: 0x4eee30  tge         $v0, $t6, 952
    ctx->pc = 0x4eee38u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eee3c:
    // 0x4eee3c: 0x4eee30  tge         $v0, $t6, 952
    ctx->pc = 0x4eee3cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eee40:
    // 0x4eee40: 0x4eee38  .word       0x004EEE38                   # dsll        $sp, $t6, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 24);
label_4eee44:
    // 0x4eee44: 0x4eee38  .word       0x004EEE38                   # dsll        $sp, $t6, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee44u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 24);
label_4eee48:
    // 0x4eee48: 0x4eee40  .word       0x004EEE40                   # sll         $sp, $t6, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee48u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 25));
label_4eee4c:
    // 0x4eee4c: 0x4eee40  .word       0x004EEE40                   # sll         $sp, $t6, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee4cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 25));
label_4eee50:
    // 0x4eee50: 0x4eee48  .word       0x004EEE48                   # jr          $v0 # 000EEE40 <InstrIdType: CPU_SPECIAL>
label_4eee54:
    if (ctx->pc == 0x4EEE54u) {
        ctx->pc = 0x4EEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE50u;
        // 0x4eee54: 0x4eee48  .word       0x004EEE48                   # jr          $v0 # 000EEE40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEE58u;
        goto label_4eee58;
    }
    ctx->pc = 0x4EEE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE50u;
        // 0x4eee54: 0x4eee48  .word       0x004EEE48                   # jr          $v0 # 000EEE40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEE50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEE58u;
label_4eee58:
    // 0x4eee58: 0x4eee50  .word       0x004EEE50                   # mfhi        $sp # 004E0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee58u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eee5c:
    // 0x4eee5c: 0x4eee50  .word       0x004EEE50                   # mfhi        $sp # 004E0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee5cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eee60:
    // 0x4eee60: 0x4eee58  .word       0x004EEE58                   # mult        $sp, $v0, $t6 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eee64:
    // 0x4eee64: 0x4eee58  .word       0x004EEE58                   # mult        $sp, $v0, $t6 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eee68:
    // 0x4eee68: 0x4eee60  .word       0x004EEE60                   # add         $sp, $v0, $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eee6c:
    // 0x4eee6c: 0x4eee60  .word       0x004EEE60                   # add         $sp, $v0, $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee6cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_4eee70:
    // 0x4eee70: 0x4eee68  .word       0x004EEE68                   # mfsa        $sp # 004E0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee70u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eee74:
    // 0x4eee74: 0x4eee68  .word       0x004EEE68                   # mfsa        $sp # 004E0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eee74u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_4eee78:
    // 0x4eee78: 0x4eee70  tge         $v0, $t6, 953
    ctx->pc = 0x4eee78u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eee7c:
    // 0x4eee7c: 0x4eee70  tge         $v0, $t6, 953
    ctx->pc = 0x4eee7cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4eee80:
    // 0x4eee80: 0x4eee78  .word       0x004EEE78                   # dsll        $sp, $t6, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee80u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 25);
label_4eee84:
    // 0x4eee84: 0x4eee78  .word       0x004EEE78                   # dsll        $sp, $t6, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee84u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 14) << 25);
label_4eee88:
    // 0x4eee88: 0x4eee80  .word       0x004EEE80                   # sll         $sp, $t6, 26 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee88u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 26));
label_4eee8c:
    // 0x4eee8c: 0x4eee80  .word       0x004EEE80                   # sll         $sp, $t6, 26 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee8cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 14), 26));
label_4eee90:
    // 0x4eee90: 0x4eee88  .word       0x004EEE88                   # jr          $v0 # 000EEE80 <InstrIdType: CPU_SPECIAL>
label_4eee94:
    if (ctx->pc == 0x4EEE94u) {
        ctx->pc = 0x4EEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE90u;
        // 0x4eee94: 0x4eee88  .word       0x004EEE88                   # jr          $v0 # 000EEE80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EEE98u;
        goto label_4eee98;
    }
    ctx->pc = 0x4EEE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4EEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE90u;
        // 0x4eee94: 0x4eee88  .word       0x004EEE88                   # jr          $v0 # 000EEE80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEE90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EEE98u;
label_4eee98:
    // 0x4eee98: 0x4eee90  .word       0x004EEE90                   # mfhi        $sp # 004E0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee98u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eee9c:
    // 0x4eee9c: 0x4eee90  .word       0x004EEE90                   # mfhi        $sp # 004E0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eee9cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_4eeea0:
    // 0x4eeea0: 0x4eee98  .word       0x004EEE98                   # mult        $sp, $v0, $t6 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeea4:
    // 0x4eeea4: 0x4eee98  .word       0x004EEE98                   # mult        $sp, $v0, $t6 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eeea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_4eeea8:
    // 0x4eeea8: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x4eeea8u;
    
label_4eeeac:
    // 0x4eeeac: 0x0  nop
    ctx->pc = 0x4eeeacu;
    // NOP
label_4eeeb0:
    // 0x4eeeb0: 0x0  nop
    ctx->pc = 0x4eeeb0u;
    // NOP
label_4eeeb4:
    // 0x4eeeb4: 0x0  nop
    ctx->pc = 0x4eeeb4u;
    // NOP
label_4eeeb8:
    // 0x4eeeb8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eeeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eeebc:
    // 0x4eeebc: 0x0  nop
    ctx->pc = 0x4eeebcu;
    // NOP
label_4eeec0:
    // 0x4eeec0: 0x0  nop
    ctx->pc = 0x4eeec0u;
    // NOP
label_4eeec4:
    // 0x4eeec4: 0x0  nop
    ctx->pc = 0x4eeec4u;
    // NOP
label_4eeec8:
    // 0x4eeec8: 0x0  nop
    ctx->pc = 0x4eeec8u;
    // NOP
label_4eeecc:
    // 0x4eeecc: 0x0  nop
    ctx->pc = 0x4eeeccu;
    // NOP
label_4eeed0:
    // 0x4eeed0: 0x0  nop
    ctx->pc = 0x4eeed0u;
    // NOP
label_4eeed4:
    // 0x4eeed4: 0x0  nop
    ctx->pc = 0x4eeed4u;
    // NOP
label_4eeed8:
    // 0x4eeed8: 0x0  nop
    ctx->pc = 0x4eeed8u;
    // NOP
label_4eeedc:
    // 0x4eeedc: 0x0  nop
    ctx->pc = 0x4eeedcu;
    // NOP
label_4eeee0:
    // 0x4eeee0: 0x0  nop
    ctx->pc = 0x4eeee0u;
    // NOP
label_4eeee4:
    // 0x4eeee4: 0x0  nop
    ctx->pc = 0x4eeee4u;
    // NOP
label_4eeee8:
    // 0x4eeee8: 0x0  nop
    ctx->pc = 0x4eeee8u;
    // NOP
label_4eeeec:
    // 0x4eeeec: 0x0  nop
    ctx->pc = 0x4eeeecu;
    // NOP
label_4eeef0:
    // 0x4eeef0: 0x0  nop
    ctx->pc = 0x4eeef0u;
    // NOP
label_4eeef4:
    // 0x4eeef4: 0x0  nop
    ctx->pc = 0x4eeef4u;
    // NOP
label_4eeef8:
    // 0x4eeef8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eeef8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eeefc:
    // 0x4eeefc: 0x0  nop
    ctx->pc = 0x4eeefcu;
    // NOP
label_4eef00:
    // 0x4eef00: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4eef00u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4EEF00 raw=0x49497350");
label_4eef04:
    // 0x4eef04: 0x6362696c  daddi       $v0, $k1, 0x696C
    ctx->pc = 0x4eef04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26988; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_4eef08:
    // 0x4eef08: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x4eef08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_4eef0c:
    // 0x4eef0c: 0x30303033  andi        $s0, $at, 0x3033
    ctx->pc = 0x4eef0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12339);
label_4eef10:
    // 0x4eef10: 0x0  nop
    ctx->pc = 0x4eef10u;
    // NOP
label_4eef14:
    // 0x4eef14: 0x0  nop
    ctx->pc = 0x4eef14u;
    // NOP
label_4eef18:
    // 0x4eef18: 0x0  nop
    ctx->pc = 0x4eef18u;
    // NOP
label_4eef1c:
    // 0x4eef1c: 0x0  nop
    ctx->pc = 0x4eef1cu;
    // NOP
label_4eef20:
    // 0x4eef20: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef20u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef24:
    // 0x4eef24: 0x0  nop
    ctx->pc = 0x4eef24u;
    // NOP
label_4eef28:
    // 0x4eef28: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef28u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef2c:
    // 0x4eef2c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef30:
    // 0x4eef30: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef30u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef34:
    // 0x4eef34: 0x0  nop
    ctx->pc = 0x4eef34u;
    // NOP
label_4eef38:
    // 0x4eef38: 0x0  nop
    ctx->pc = 0x4eef38u;
    // NOP
label_4eef3c:
    // 0x4eef3c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef40:
    // 0x4eef40: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eef40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4EEF40 raw=0x00000001");
label_4eef44:
    // 0x4eef44: 0x0  nop
    ctx->pc = 0x4eef44u;
    // NOP
label_4eef48:
    // 0x4eef48: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef48u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef4c:
    // 0x4eef4c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef50:
    // 0x4eef50: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef50u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef54:
    // 0x4eef54: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef54u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef58:
    // 0x4eef58: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4eef58u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_4eef5c:
    // 0x4eef5c: 0x0  nop
    ctx->pc = 0x4eef5cu;
    // NOP
label_4eef60:
    // 0x4eef60: 0x0  nop
    ctx->pc = 0x4eef60u;
    // NOP
label_4eef64:
    // 0x4eef64: 0x0  nop
    ctx->pc = 0x4eef64u;
    // NOP
label_4eef68:
    // 0x4eef68: 0x0  nop
    ctx->pc = 0x4eef68u;
    // NOP
label_4eef6c:
    // 0x4eef6c: 0x0  nop
    ctx->pc = 0x4eef6cu;
    // NOP
label_4eef70:
    // 0x4eef70: 0x0  nop
    ctx->pc = 0x4eef70u;
    // NOP
label_4eef74:
    // 0x4eef74: 0x0  nop
    ctx->pc = 0x4eef74u;
    // NOP
label_4eef78:
    // 0x4eef78: 0x0  nop
    ctx->pc = 0x4eef78u;
    // NOP
label_4eef7c:
    // 0x4eef7c: 0x0  nop
    ctx->pc = 0x4eef7cu;
    // NOP
label_4eef80:
    // 0x4eef80: 0x0  nop
    ctx->pc = 0x4eef80u;
    // NOP
label_4eef84:
    // 0x4eef84: 0x0  nop
    ctx->pc = 0x4eef84u;
    // NOP
label_4eef88:
    // 0x4eef88: 0x0  nop
    ctx->pc = 0x4eef88u;
    // NOP
label_4eef8c:
    // 0x4eef8c: 0x0  nop
    ctx->pc = 0x4eef8cu;
    // NOP
label_4eef90:
    // 0x4eef90: 0x0  nop
    ctx->pc = 0x4eef90u;
    // NOP
label_4eef94:
    // 0x4eef94: 0x0  nop
    ctx->pc = 0x4eef94u;
    // NOP
label_4eef98:
    // 0x4eef98: 0x0  nop
    ctx->pc = 0x4eef98u;
    // NOP
label_4eef9c:
    // 0x4eef9c: 0x0  nop
    ctx->pc = 0x4eef9cu;
    // NOP
label_4eefa0:
    // 0x4eefa0: 0x0  nop
    ctx->pc = 0x4eefa0u;
    // NOP
label_4eefa4:
    // 0x4eefa4: 0x0  nop
    ctx->pc = 0x4eefa4u;
    // NOP
label_4eefa8:
    // 0x4eefa8: 0x0  nop
    ctx->pc = 0x4eefa8u;
    // NOP
label_4eefac:
    // 0x4eefac: 0x0  nop
    ctx->pc = 0x4eefacu;
    // NOP
label_4eefb0:
    // 0x4eefb0: 0x0  nop
    ctx->pc = 0x4eefb0u;
    // NOP
label_4eefb4:
    // 0x4eefb4: 0x0  nop
    ctx->pc = 0x4eefb4u;
    // NOP
label_4eefb8:
    // 0x4eefb8: 0x0  nop
    ctx->pc = 0x4eefb8u;
    // NOP
label_4eefbc:
    // 0x4eefbc: 0x0  nop
    ctx->pc = 0x4eefbcu;
    // NOP
label_4eefc0:
    // 0x4eefc0: 0x0  nop
    ctx->pc = 0x4eefc0u;
    // NOP
label_4eefc4:
    // 0x4eefc4: 0x0  nop
    ctx->pc = 0x4eefc4u;
    // NOP
label_4eefc8:
    // 0x4eefc8: 0x0  nop
    ctx->pc = 0x4eefc8u;
    // NOP
label_4eefcc:
    // 0x4eefcc: 0x0  nop
    ctx->pc = 0x4eefccu;
    // NOP
label_4eefd0:
    // 0x4eefd0: 0x0  nop
    ctx->pc = 0x4eefd0u;
    // NOP
label_4eefd4:
    // 0x4eefd4: 0x0  nop
    ctx->pc = 0x4eefd4u;
    // NOP
label_4eefd8:
    // 0x4eefd8: 0x0  nop
    ctx->pc = 0x4eefd8u;
    // NOP
label_4eefdc:
    // 0x4eefdc: 0x0  nop
    ctx->pc = 0x4eefdcu;
    // NOP
label_4eefe0:
    // 0x4eefe0: 0x0  nop
    ctx->pc = 0x4eefe0u;
    // NOP
label_4eefe4:
    // 0x4eefe4: 0x0  nop
    ctx->pc = 0x4eefe4u;
    // NOP
label_4eefe8:
    // 0x4eefe8: 0x0  nop
    ctx->pc = 0x4eefe8u;
    // NOP
label_4eefec:
    // 0x4eefec: 0x0  nop
    ctx->pc = 0x4eefecu;
    // NOP
label_4eeff0:
    // 0x4eeff0: 0x0  nop
    ctx->pc = 0x4eeff0u;
    // NOP
label_4eeff4:
    // 0x4eeff4: 0x0  nop
    ctx->pc = 0x4eeff4u;
    // NOP
label_4eeff8:
    // 0x4eeff8: 0x0  nop
    ctx->pc = 0x4eeff8u;
    // NOP
label_4eeffc:
    // 0x4eeffc: 0x0  nop
    ctx->pc = 0x4eeffcu;
    // NOP
label_4ef000:
    // 0x4ef000: 0x0  nop
    ctx->pc = 0x4ef000u;
    // NOP
label_4ef004:
    // 0x4ef004: 0x0  nop
    ctx->pc = 0x4ef004u;
    // NOP
label_4ef008:
    // 0x4ef008: 0x0  nop
    ctx->pc = 0x4ef008u;
    // NOP
label_4ef00c:
    // 0x4ef00c: 0x0  nop
    ctx->pc = 0x4ef00cu;
    // NOP
label_4ef010:
    // 0x4ef010: 0x0  nop
    ctx->pc = 0x4ef010u;
    // NOP
label_4ef014:
    // 0x4ef014: 0x0  nop
    ctx->pc = 0x4ef014u;
    // NOP
label_4ef018:
    // 0x4ef018: 0x0  nop
    ctx->pc = 0x4ef018u;
    // NOP
label_4ef01c:
    // 0x4ef01c: 0x0  nop
    ctx->pc = 0x4ef01cu;
    // NOP
label_4ef020:
    // 0x4ef020: 0x0  nop
    ctx->pc = 0x4ef020u;
    // NOP
label_4ef024:
    // 0x4ef024: 0x0  nop
    ctx->pc = 0x4ef024u;
    // NOP
label_4ef028:
    // 0x4ef028: 0x0  nop
    ctx->pc = 0x4ef028u;
    // NOP
label_4ef02c:
    // 0x4ef02c: 0x0  nop
    ctx->pc = 0x4ef02cu;
    // NOP
label_4ef030:
    // 0x4ef030: 0x0  nop
    ctx->pc = 0x4ef030u;
    // NOP
label_4ef034:
    // 0x4ef034: 0x0  nop
    ctx->pc = 0x4ef034u;
    // NOP
label_4ef038:
    // 0x4ef038: 0x0  nop
    ctx->pc = 0x4ef038u;
    // NOP
label_4ef03c:
    // 0x4ef03c: 0x0  nop
    ctx->pc = 0x4ef03cu;
    // NOP
label_4ef040:
    // 0x4ef040: 0x0  nop
    ctx->pc = 0x4ef040u;
    // NOP
label_4ef044:
    // 0x4ef044: 0x0  nop
    ctx->pc = 0x4ef044u;
    // NOP
label_4ef048:
    // 0x4ef048: 0x0  nop
    ctx->pc = 0x4ef048u;
    // NOP
label_4ef04c:
    // 0x4ef04c: 0x0  nop
    ctx->pc = 0x4ef04cu;
    // NOP
label_4ef050:
    // 0x4ef050: 0x0  nop
    ctx->pc = 0x4ef050u;
    // NOP
label_4ef054:
    // 0x4ef054: 0x0  nop
    ctx->pc = 0x4ef054u;
    // NOP
label_4ef058:
    // 0x4ef058: 0x0  nop
    ctx->pc = 0x4ef058u;
    // NOP
label_4ef05c:
    // 0x4ef05c: 0x0  nop
    ctx->pc = 0x4ef05cu;
    // NOP
label_4ef060:
    // 0x4ef060: 0x0  nop
    ctx->pc = 0x4ef060u;
    // NOP
label_4ef064:
    // 0x4ef064: 0x0  nop
    ctx->pc = 0x4ef064u;
    // NOP
label_4ef068:
    // 0x4ef068: 0x0  nop
    ctx->pc = 0x4ef068u;
    // NOP
label_4ef06c:
    // 0x4ef06c: 0x0  nop
    ctx->pc = 0x4ef06cu;
    // NOP
label_4ef070:
    // 0x4ef070: 0x0  nop
    ctx->pc = 0x4ef070u;
    // NOP
label_4ef074:
    // 0x4ef074: 0x0  nop
    ctx->pc = 0x4ef074u;
    // NOP
label_4ef078:
    // 0x4ef078: 0x0  nop
    ctx->pc = 0x4ef078u;
    // NOP
label_4ef07c:
    // 0x4ef07c: 0x0  nop
    ctx->pc = 0x4ef07cu;
    // NOP
label_4ef080:
    // 0x4ef080: 0x0  nop
    ctx->pc = 0x4ef080u;
    // NOP
label_4ef084:
    // 0x4ef084: 0x0  nop
    ctx->pc = 0x4ef084u;
    // NOP
label_4ef088:
    // 0x4ef088: 0x0  nop
    ctx->pc = 0x4ef088u;
    // NOP
label_4ef08c:
    // 0x4ef08c: 0x0  nop
    ctx->pc = 0x4ef08cu;
    // NOP
label_4ef090:
    // 0x4ef090: 0x0  nop
    ctx->pc = 0x4ef090u;
    // NOP
label_4ef094:
    // 0x4ef094: 0x0  nop
    ctx->pc = 0x4ef094u;
    // NOP
label_4ef098:
    // 0x4ef098: 0x0  nop
    ctx->pc = 0x4ef098u;
    // NOP
label_4ef09c:
    // 0x4ef09c: 0x0  nop
    ctx->pc = 0x4ef09cu;
    // NOP
label_4ef0a0:
    // 0x4ef0a0: 0x0  nop
    ctx->pc = 0x4ef0a0u;
    // NOP
label_4ef0a4:
    // 0x4ef0a4: 0x0  nop
    ctx->pc = 0x4ef0a4u;
    // NOP
label_4ef0a8:
    // 0x4ef0a8: 0x0  nop
    ctx->pc = 0x4ef0a8u;
    // NOP
label_4ef0ac:
    // 0x4ef0ac: 0x0  nop
    ctx->pc = 0x4ef0acu;
    // NOP
label_4ef0b0:
    // 0x4ef0b0: 0x0  nop
    ctx->pc = 0x4ef0b0u;
    // NOP
label_4ef0b4:
    // 0x4ef0b4: 0x0  nop
    ctx->pc = 0x4ef0b4u;
    // NOP
label_4ef0b8:
    // 0x4ef0b8: 0x0  nop
    ctx->pc = 0x4ef0b8u;
    // NOP
label_4ef0bc:
    // 0x4ef0bc: 0x0  nop
    ctx->pc = 0x4ef0bcu;
    // NOP
label_4ef0c0:
    // 0x4ef0c0: 0x0  nop
    ctx->pc = 0x4ef0c0u;
    // NOP
label_4ef0c4:
    // 0x4ef0c4: 0x0  nop
    ctx->pc = 0x4ef0c4u;
    // NOP
label_4ef0c8:
    // 0x4ef0c8: 0x0  nop
    ctx->pc = 0x4ef0c8u;
    // NOP
label_4ef0cc:
    // 0x4ef0cc: 0x0  nop
    ctx->pc = 0x4ef0ccu;
    // NOP
label_4ef0d0:
    // 0x4ef0d0: 0x0  nop
    ctx->pc = 0x4ef0d0u;
    // NOP
label_4ef0d4:
    // 0x4ef0d4: 0x0  nop
    ctx->pc = 0x4ef0d4u;
    // NOP
label_4ef0d8:
    // 0x4ef0d8: 0x0  nop
    ctx->pc = 0x4ef0d8u;
    // NOP
label_4ef0dc:
    // 0x4ef0dc: 0x0  nop
    ctx->pc = 0x4ef0dcu;
    // NOP
label_4ef0e0:
    // 0x4ef0e0: 0x0  nop
    ctx->pc = 0x4ef0e0u;
    // NOP
label_4ef0e4:
    // 0x4ef0e4: 0x0  nop
    ctx->pc = 0x4ef0e4u;
    // NOP
label_4ef0e8:
    // 0x4ef0e8: 0x0  nop
    ctx->pc = 0x4ef0e8u;
    // NOP
label_4ef0ec:
    // 0x4ef0ec: 0x0  nop
    ctx->pc = 0x4ef0ecu;
    // NOP
label_4ef0f0:
    // 0x4ef0f0: 0x0  nop
    ctx->pc = 0x4ef0f0u;
    // NOP
label_4ef0f4:
    // 0x4ef0f4: 0x0  nop
    ctx->pc = 0x4ef0f4u;
    // NOP
label_4ef0f8:
    // 0x4ef0f8: 0x0  nop
    ctx->pc = 0x4ef0f8u;
    // NOP
label_4ef0fc:
    // 0x4ef0fc: 0x0  nop
    ctx->pc = 0x4ef0fcu;
    // NOP
label_4ef100:
    // 0x4ef100: 0x0  nop
    ctx->pc = 0x4ef100u;
    // NOP
label_4ef104:
    // 0x4ef104: 0x0  nop
    ctx->pc = 0x4ef104u;
    // NOP
label_4ef108:
    // 0x4ef108: 0x0  nop
    ctx->pc = 0x4ef108u;
    // NOP
label_4ef10c:
    // 0x4ef10c: 0x0  nop
    ctx->pc = 0x4ef10cu;
    // NOP
label_4ef110:
    // 0x4ef110: 0x0  nop
    ctx->pc = 0x4ef110u;
    // NOP
label_4ef114:
    // 0x4ef114: 0x0  nop
    ctx->pc = 0x4ef114u;
    // NOP
label_4ef118:
    // 0x4ef118: 0x0  nop
    ctx->pc = 0x4ef118u;
    // NOP
label_4ef11c:
    // 0x4ef11c: 0x0  nop
    ctx->pc = 0x4ef11cu;
    // NOP
label_4ef120:
    // 0x4ef120: 0x0  nop
    ctx->pc = 0x4ef120u;
    // NOP
label_4ef124:
    // 0x4ef124: 0x0  nop
    ctx->pc = 0x4ef124u;
    // NOP
label_4ef128:
    // 0x4ef128: 0x0  nop
    ctx->pc = 0x4ef128u;
    // NOP
label_4ef12c:
    // 0x4ef12c: 0x0  nop
    ctx->pc = 0x4ef12cu;
    // NOP
label_4ef130:
    // 0x4ef130: 0x0  nop
    ctx->pc = 0x4ef130u;
    // NOP
label_4ef134:
    // 0x4ef134: 0x0  nop
    ctx->pc = 0x4ef134u;
    // NOP
label_4ef138:
    // 0x4ef138: 0x0  nop
    ctx->pc = 0x4ef138u;
    // NOP
label_4ef13c:
    // 0x4ef13c: 0x0  nop
    ctx->pc = 0x4ef13cu;
    // NOP
label_4ef140:
    // 0x4ef140: 0x0  nop
    ctx->pc = 0x4ef140u;
    // NOP
label_4ef144:
    // 0x4ef144: 0x0  nop
    ctx->pc = 0x4ef144u;
    // NOP
label_4ef148:
    // 0x4ef148: 0x0  nop
    ctx->pc = 0x4ef148u;
    // NOP
label_4ef14c:
    // 0x4ef14c: 0x0  nop
    ctx->pc = 0x4ef14cu;
    // NOP
label_4ef150:
    // 0x4ef150: 0x0  nop
    ctx->pc = 0x4ef150u;
    // NOP
label_4ef154:
    // 0x4ef154: 0x0  nop
    ctx->pc = 0x4ef154u;
    // NOP
label_4ef158:
    // 0x4ef158: 0x0  nop
    ctx->pc = 0x4ef158u;
    // NOP
label_4ef15c:
    // 0x4ef15c: 0x0  nop
    ctx->pc = 0x4ef15cu;
    // NOP
label_4ef160:
    // 0x4ef160: 0x0  nop
    ctx->pc = 0x4ef160u;
    // NOP
label_4ef164:
    // 0x4ef164: 0x0  nop
    ctx->pc = 0x4ef164u;
    // NOP
label_4ef168:
    // 0x4ef168: 0x0  nop
    ctx->pc = 0x4ef168u;
    // NOP
label_4ef16c:
    // 0x4ef16c: 0x0  nop
    ctx->pc = 0x4ef16cu;
    // NOP
label_4ef170:
    // 0x4ef170: 0x0  nop
    ctx->pc = 0x4ef170u;
    // NOP
label_4ef174:
    // 0x4ef174: 0x0  nop
    ctx->pc = 0x4ef174u;
    // NOP
label_4ef178:
    // 0x4ef178: 0x0  nop
    ctx->pc = 0x4ef178u;
    // NOP
label_4ef17c:
    // 0x4ef17c: 0x0  nop
    ctx->pc = 0x4ef17cu;
    // NOP
label_4ef180:
    // 0x4ef180: 0x0  nop
    ctx->pc = 0x4ef180u;
    // NOP
label_4ef184:
    // 0x4ef184: 0x0  nop
    ctx->pc = 0x4ef184u;
    // NOP
label_4ef188:
    // 0x4ef188: 0x0  nop
    ctx->pc = 0x4ef188u;
    // NOP
label_4ef18c:
    // 0x4ef18c: 0x0  nop
    ctx->pc = 0x4ef18cu;
    // NOP
label_4ef190:
    // 0x4ef190: 0x0  nop
    ctx->pc = 0x4ef190u;
    // NOP
label_4ef194:
    // 0x4ef194: 0x0  nop
    ctx->pc = 0x4ef194u;
    // NOP
label_4ef198:
    // 0x4ef198: 0x0  nop
    ctx->pc = 0x4ef198u;
    // NOP
label_4ef19c:
    // 0x4ef19c: 0x0  nop
    ctx->pc = 0x4ef19cu;
    // NOP
label_4ef1a0:
    // 0x4ef1a0: 0x0  nop
    ctx->pc = 0x4ef1a0u;
    // NOP
label_4ef1a4:
    // 0x4ef1a4: 0x0  nop
    ctx->pc = 0x4ef1a4u;
    // NOP
label_4ef1a8:
    // 0x4ef1a8: 0x0  nop
    ctx->pc = 0x4ef1a8u;
    // NOP
label_4ef1ac:
    // 0x4ef1ac: 0x0  nop
    ctx->pc = 0x4ef1acu;
    // NOP
label_4ef1b0:
    // 0x4ef1b0: 0x0  nop
    ctx->pc = 0x4ef1b0u;
    // NOP
label_4ef1b4:
    // 0x4ef1b4: 0x0  nop
    ctx->pc = 0x4ef1b4u;
    // NOP
label_4ef1b8:
    // 0x4ef1b8: 0x0  nop
    ctx->pc = 0x4ef1b8u;
    // NOP
label_4ef1bc:
    // 0x4ef1bc: 0x0  nop
    ctx->pc = 0x4ef1bcu;
    // NOP
label_4ef1c0:
    // 0x4ef1c0: 0x0  nop
    ctx->pc = 0x4ef1c0u;
    // NOP
label_4ef1c4:
    // 0x4ef1c4: 0x0  nop
    ctx->pc = 0x4ef1c4u;
    // NOP
label_4ef1c8:
    // 0x4ef1c8: 0x0  nop
    ctx->pc = 0x4ef1c8u;
    // NOP
label_4ef1cc:
    // 0x4ef1cc: 0x0  nop
    ctx->pc = 0x4ef1ccu;
    // NOP
label_4ef1d0:
    // 0x4ef1d0: 0x0  nop
    ctx->pc = 0x4ef1d0u;
    // NOP
label_4ef1d4:
    // 0x4ef1d4: 0x0  nop
    ctx->pc = 0x4ef1d4u;
    // NOP
label_4ef1d8:
    // 0x4ef1d8: 0x0  nop
    ctx->pc = 0x4ef1d8u;
    // NOP
label_4ef1dc:
    // 0x4ef1dc: 0x0  nop
    ctx->pc = 0x4ef1dcu;
    // NOP
label_4ef1e0:
    // 0x4ef1e0: 0x0  nop
    ctx->pc = 0x4ef1e0u;
    // NOP
label_4ef1e4:
    // 0x4ef1e4: 0x0  nop
    ctx->pc = 0x4ef1e4u;
    // NOP
label_4ef1e8:
    // 0x4ef1e8: 0x0  nop
    ctx->pc = 0x4ef1e8u;
    // NOP
label_4ef1ec:
    // 0x4ef1ec: 0x0  nop
    ctx->pc = 0x4ef1ecu;
    // NOP
label_4ef1f0:
    // 0x4ef1f0: 0x0  nop
    ctx->pc = 0x4ef1f0u;
    // NOP
label_4ef1f4:
    // 0x4ef1f4: 0x0  nop
    ctx->pc = 0x4ef1f4u;
    // NOP
label_4ef1f8:
    // 0x4ef1f8: 0x0  nop
    ctx->pc = 0x4ef1f8u;
    // NOP
label_4ef1fc:
    // 0x4ef1fc: 0x0  nop
    ctx->pc = 0x4ef1fcu;
    // NOP
label_4ef200:
    // 0x4ef200: 0x0  nop
    ctx->pc = 0x4ef200u;
    // NOP
label_4ef204:
    // 0x4ef204: 0x0  nop
    ctx->pc = 0x4ef204u;
    // NOP
label_4ef208:
    // 0x4ef208: 0x0  nop
    ctx->pc = 0x4ef208u;
    // NOP
label_4ef20c:
    // 0x4ef20c: 0x0  nop
    ctx->pc = 0x4ef20cu;
    // NOP
label_4ef210:
    // 0x4ef210: 0x0  nop
    ctx->pc = 0x4ef210u;
    // NOP
label_4ef214:
    // 0x4ef214: 0x0  nop
    ctx->pc = 0x4ef214u;
    // NOP
label_4ef218:
    // 0x4ef218: 0x0  nop
    ctx->pc = 0x4ef218u;
    // NOP
label_4ef21c:
    // 0x4ef21c: 0x0  nop
    ctx->pc = 0x4ef21cu;
    // NOP
label_4ef220:
    // 0x4ef220: 0x0  nop
    ctx->pc = 0x4ef220u;
    // NOP
label_4ef224:
    // 0x4ef224: 0x0  nop
    ctx->pc = 0x4ef224u;
    // NOP
label_4ef228:
    // 0x4ef228: 0x0  nop
    ctx->pc = 0x4ef228u;
    // NOP
label_4ef22c:
    // 0x4ef22c: 0x0  nop
    ctx->pc = 0x4ef22cu;
    // NOP
label_4ef230:
    // 0x4ef230: 0x0  nop
    ctx->pc = 0x4ef230u;
    // NOP
label_4ef234:
    // 0x4ef234: 0x0  nop
    ctx->pc = 0x4ef234u;
    // NOP
label_4ef238:
    // 0x4ef238: 0x0  nop
    ctx->pc = 0x4ef238u;
    // NOP
label_4ef23c:
    // 0x4ef23c: 0x0  nop
    ctx->pc = 0x4ef23cu;
    // NOP
label_4ef240:
    // 0x4ef240: 0x0  nop
    ctx->pc = 0x4ef240u;
    // NOP
label_4ef244:
    // 0x4ef244: 0x0  nop
    ctx->pc = 0x4ef244u;
    // NOP
label_4ef248:
    // 0x4ef248: 0x0  nop
    ctx->pc = 0x4ef248u;
    // NOP
label_4ef24c:
    // 0x4ef24c: 0x0  nop
    ctx->pc = 0x4ef24cu;
    // NOP
label_4ef250:
    // 0x4ef250: 0x0  nop
    ctx->pc = 0x4ef250u;
    // NOP
label_4ef254:
    // 0x4ef254: 0x0  nop
    ctx->pc = 0x4ef254u;
    // NOP
label_4ef258:
    // 0x4ef258: 0x0  nop
    ctx->pc = 0x4ef258u;
    // NOP
label_4ef25c:
    // 0x4ef25c: 0x0  nop
    ctx->pc = 0x4ef25cu;
    // NOP
label_4ef260:
    // 0x4ef260: 0x0  nop
    ctx->pc = 0x4ef260u;
    // NOP
label_4ef264:
    // 0x4ef264: 0x0  nop
    ctx->pc = 0x4ef264u;
    // NOP
label_4ef268:
    // 0x4ef268: 0x0  nop
    ctx->pc = 0x4ef268u;
    // NOP
label_4ef26c:
    // 0x4ef26c: 0x0  nop
    ctx->pc = 0x4ef26cu;
    // NOP
label_4ef270:
    // 0x4ef270: 0x0  nop
    ctx->pc = 0x4ef270u;
    // NOP
label_4ef274:
    // 0x4ef274: 0x0  nop
    ctx->pc = 0x4ef274u;
    // NOP
label_4ef278:
    // 0x4ef278: 0x0  nop
    ctx->pc = 0x4ef278u;
    // NOP
label_4ef27c:
    // 0x4ef27c: 0x0  nop
    ctx->pc = 0x4ef27cu;
    // NOP
label_4ef280:
    // 0x4ef280: 0x0  nop
    ctx->pc = 0x4ef280u;
    // NOP
label_4ef284:
    // 0x4ef284: 0x0  nop
    ctx->pc = 0x4ef284u;
    // NOP
label_4ef288:
    // 0x4ef288: 0x0  nop
    ctx->pc = 0x4ef288u;
    // NOP
label_4ef28c:
    // 0x4ef28c: 0x0  nop
    ctx->pc = 0x4ef28cu;
    // NOP
label_4ef290:
    // 0x4ef290: 0x0  nop
    ctx->pc = 0x4ef290u;
    // NOP
label_4ef294:
    // 0x4ef294: 0x0  nop
    ctx->pc = 0x4ef294u;
    // NOP
label_4ef298:
    // 0x4ef298: 0x0  nop
    ctx->pc = 0x4ef298u;
    // NOP
label_4ef29c:
    // 0x4ef29c: 0x0  nop
    ctx->pc = 0x4ef29cu;
    // NOP
label_4ef2a0:
    // 0x4ef2a0: 0x0  nop
    ctx->pc = 0x4ef2a0u;
    // NOP
label_4ef2a4:
    // 0x4ef2a4: 0x0  nop
    ctx->pc = 0x4ef2a4u;
    // NOP
label_4ef2a8:
    // 0x4ef2a8: 0x0  nop
    ctx->pc = 0x4ef2a8u;
    // NOP
label_4ef2ac:
    // 0x4ef2ac: 0x0  nop
    ctx->pc = 0x4ef2acu;
    // NOP
label_4ef2b0:
    // 0x4ef2b0: 0x0  nop
    ctx->pc = 0x4ef2b0u;
    // NOP
label_4ef2b4:
    // 0x4ef2b4: 0x0  nop
    ctx->pc = 0x4ef2b4u;
    // NOP
label_4ef2b8:
    // 0x4ef2b8: 0x0  nop
    ctx->pc = 0x4ef2b8u;
    // NOP
label_4ef2bc:
    // 0x4ef2bc: 0x0  nop
    ctx->pc = 0x4ef2bcu;
    // NOP
label_4ef2c0:
    // 0x4ef2c0: 0x0  nop
    ctx->pc = 0x4ef2c0u;
    // NOP
label_4ef2c4:
    // 0x4ef2c4: 0x0  nop
    ctx->pc = 0x4ef2c4u;
    // NOP
label_4ef2c8:
    // 0x4ef2c8: 0x0  nop
    ctx->pc = 0x4ef2c8u;
    // NOP
label_4ef2cc:
    // 0x4ef2cc: 0x0  nop
    ctx->pc = 0x4ef2ccu;
    // NOP
label_4ef2d0:
    // 0x4ef2d0: 0x0  nop
    ctx->pc = 0x4ef2d0u;
    // NOP
label_4ef2d4:
    // 0x4ef2d4: 0x0  nop
    ctx->pc = 0x4ef2d4u;
    // NOP
label_4ef2d8:
    // 0x4ef2d8: 0x0  nop
    ctx->pc = 0x4ef2d8u;
    // NOP
label_4ef2dc:
    // 0x4ef2dc: 0x0  nop
    ctx->pc = 0x4ef2dcu;
    // NOP
label_4ef2e0:
    // 0x4ef2e0: 0x0  nop
    ctx->pc = 0x4ef2e0u;
    // NOP
label_4ef2e4:
    // 0x4ef2e4: 0x0  nop
    ctx->pc = 0x4ef2e4u;
    // NOP
label_4ef2e8:
    // 0x4ef2e8: 0x0  nop
    ctx->pc = 0x4ef2e8u;
    // NOP
label_4ef2ec:
    // 0x4ef2ec: 0x0  nop
    ctx->pc = 0x4ef2ecu;
    // NOP
label_4ef2f0:
    // 0x4ef2f0: 0x0  nop
    ctx->pc = 0x4ef2f0u;
    // NOP
label_4ef2f4:
    // 0x4ef2f4: 0x0  nop
    ctx->pc = 0x4ef2f4u;
    // NOP
label_4ef2f8:
    // 0x4ef2f8: 0x0  nop
    ctx->pc = 0x4ef2f8u;
    // NOP
label_4ef2fc:
    // 0x4ef2fc: 0x0  nop
    ctx->pc = 0x4ef2fcu;
    // NOP
label_4ef300:
    // 0x4ef300: 0x0  nop
    ctx->pc = 0x4ef300u;
    // NOP
label_4ef304:
    // 0x4ef304: 0x0  nop
    ctx->pc = 0x4ef304u;
    // NOP
label_4ef308:
    // 0x4ef308: 0x0  nop
    ctx->pc = 0x4ef308u;
    // NOP
label_4ef30c:
    // 0x4ef30c: 0x0  nop
    ctx->pc = 0x4ef30cu;
    // NOP
label_4ef310:
    // 0x4ef310: 0x0  nop
    ctx->pc = 0x4ef310u;
    // NOP
label_4ef314:
    // 0x4ef314: 0x0  nop
    ctx->pc = 0x4ef314u;
    // NOP
label_4ef318:
    // 0x4ef318: 0x0  nop
    ctx->pc = 0x4ef318u;
    // NOP
label_4ef31c:
    // 0x4ef31c: 0x0  nop
    ctx->pc = 0x4ef31cu;
    // NOP
label_4ef320:
    // 0x4ef320: 0x0  nop
    ctx->pc = 0x4ef320u;
    // NOP
label_4ef324:
    // 0x4ef324: 0x0  nop
    ctx->pc = 0x4ef324u;
    // NOP
label_4ef328:
    // 0x4ef328: 0x0  nop
    ctx->pc = 0x4ef328u;
    // NOP
label_4ef32c:
    // 0x4ef32c: 0x0  nop
    ctx->pc = 0x4ef32cu;
    // NOP
label_4ef330:
    // 0x4ef330: 0x0  nop
    ctx->pc = 0x4ef330u;
    // NOP
label_4ef334:
    // 0x4ef334: 0x0  nop
    ctx->pc = 0x4ef334u;
    // NOP
label_4ef338:
    // 0x4ef338: 0x0  nop
    ctx->pc = 0x4ef338u;
    // NOP
label_4ef33c:
    // 0x4ef33c: 0x0  nop
    ctx->pc = 0x4ef33cu;
    // NOP
label_4ef340:
    // 0x4ef340: 0x0  nop
    ctx->pc = 0x4ef340u;
    // NOP
label_4ef344:
    // 0x4ef344: 0x0  nop
    ctx->pc = 0x4ef344u;
    // NOP
label_4ef348:
    // 0x4ef348: 0x0  nop
    ctx->pc = 0x4ef348u;
    // NOP
label_4ef34c:
    // 0x4ef34c: 0x0  nop
    ctx->pc = 0x4ef34cu;
    // NOP
label_4ef350:
    // 0x4ef350: 0x0  nop
    ctx->pc = 0x4ef350u;
    // NOP
label_4ef354:
    // 0x4ef354: 0x0  nop
    ctx->pc = 0x4ef354u;
    // NOP
label_4ef358:
    // 0x4ef358: 0x0  nop
    ctx->pc = 0x4ef358u;
    // NOP
label_4ef35c:
    // 0x4ef35c: 0x0  nop
    ctx->pc = 0x4ef35cu;
    // NOP
label_4ef360:
    // 0x4ef360: 0x0  nop
    ctx->pc = 0x4ef360u;
    // NOP
label_4ef364:
    // 0x4ef364: 0x0  nop
    ctx->pc = 0x4ef364u;
    // NOP
label_4ef368:
    // 0x4ef368: 0x0  nop
    ctx->pc = 0x4ef368u;
    // NOP
label_4ef36c:
    // 0x4ef36c: 0x0  nop
    ctx->pc = 0x4ef36cu;
    // NOP
label_4ef370:
    // 0x4ef370: 0x0  nop
    ctx->pc = 0x4ef370u;
    // NOP
label_4ef374:
    // 0x4ef374: 0x0  nop
    ctx->pc = 0x4ef374u;
    // NOP
label_4ef378:
    // 0x4ef378: 0x0  nop
    ctx->pc = 0x4ef378u;
    // NOP
label_4ef37c:
    // 0x4ef37c: 0x0  nop
    ctx->pc = 0x4ef37cu;
    // NOP
label_4ef380:
    // 0x4ef380: 0x0  nop
    ctx->pc = 0x4ef380u;
    // NOP
label_4ef384:
    // 0x4ef384: 0x0  nop
    ctx->pc = 0x4ef384u;
    // NOP
label_4ef388:
    // 0x4ef388: 0x0  nop
    ctx->pc = 0x4ef388u;
    // NOP
label_4ef38c:
    // 0x4ef38c: 0x0  nop
    ctx->pc = 0x4ef38cu;
    // NOP
label_4ef390:
    // 0x4ef390: 0x0  nop
    ctx->pc = 0x4ef390u;
    // NOP
label_4ef394:
    // 0x4ef394: 0x0  nop
    ctx->pc = 0x4ef394u;
    // NOP
label_4ef398:
    // 0x4ef398: 0x0  nop
    ctx->pc = 0x4ef398u;
    // NOP
label_4ef39c:
    // 0x4ef39c: 0x0  nop
    ctx->pc = 0x4ef39cu;
    // NOP
label_4ef3a0:
    // 0x4ef3a0: 0x0  nop
    ctx->pc = 0x4ef3a0u;
    // NOP
label_4ef3a4:
    // 0x4ef3a4: 0x0  nop
    ctx->pc = 0x4ef3a4u;
    // NOP
label_4ef3a8:
    // 0x4ef3a8: 0x0  nop
    ctx->pc = 0x4ef3a8u;
    // NOP
label_4ef3ac:
    // 0x4ef3ac: 0x0  nop
    ctx->pc = 0x4ef3acu;
    // NOP
label_4ef3b0:
    // 0x4ef3b0: 0x0  nop
    ctx->pc = 0x4ef3b0u;
    // NOP
label_4ef3b4:
    // 0x4ef3b4: 0x0  nop
    ctx->pc = 0x4ef3b4u;
    // NOP
label_4ef3b8:
    // 0x4ef3b8: 0x0  nop
    ctx->pc = 0x4ef3b8u;
    // NOP
label_4ef3bc:
    // 0x4ef3bc: 0x0  nop
    ctx->pc = 0x4ef3bcu;
    // NOP
label_4ef3c0:
    // 0x4ef3c0: 0x0  nop
    ctx->pc = 0x4ef3c0u;
    // NOP
label_4ef3c4:
    // 0x4ef3c4: 0x0  nop
    ctx->pc = 0x4ef3c4u;
    // NOP
label_4ef3c8:
    // 0x4ef3c8: 0x0  nop
    ctx->pc = 0x4ef3c8u;
    // NOP
label_4ef3cc:
    // 0x4ef3cc: 0x0  nop
    ctx->pc = 0x4ef3ccu;
    // NOP
label_4ef3d0:
    // 0x4ef3d0: 0x0  nop
    ctx->pc = 0x4ef3d0u;
    // NOP
label_4ef3d4:
    // 0x4ef3d4: 0x0  nop
    ctx->pc = 0x4ef3d4u;
    // NOP
label_4ef3d8:
    // 0x4ef3d8: 0x0  nop
    ctx->pc = 0x4ef3d8u;
    // NOP
label_4ef3dc:
    // 0x4ef3dc: 0x0  nop
    ctx->pc = 0x4ef3dcu;
    // NOP
label_4ef3e0:
    // 0x4ef3e0: 0x0  nop
    ctx->pc = 0x4ef3e0u;
    // NOP
label_4ef3e4:
    // 0x4ef3e4: 0x0  nop
    ctx->pc = 0x4ef3e4u;
    // NOP
label_4ef3e8:
    // 0x4ef3e8: 0x0  nop
    ctx->pc = 0x4ef3e8u;
    // NOP
label_4ef3ec:
    // 0x4ef3ec: 0x0  nop
    ctx->pc = 0x4ef3ecu;
    // NOP
label_4ef3f0:
    // 0x4ef3f0: 0x0  nop
    ctx->pc = 0x4ef3f0u;
    // NOP
label_4ef3f4:
    // 0x4ef3f4: 0x0  nop
    ctx->pc = 0x4ef3f4u;
    // NOP
label_4ef3f8:
    // 0x4ef3f8: 0x0  nop
    ctx->pc = 0x4ef3f8u;
    // NOP
label_4ef3fc:
    // 0x4ef3fc: 0x0  nop
    ctx->pc = 0x4ef3fcu;
    // NOP
label_4ef400:
    // 0x4ef400: 0x0  nop
    ctx->pc = 0x4ef400u;
    // NOP
label_4ef404:
    // 0x4ef404: 0x0  nop
    ctx->pc = 0x4ef404u;
    // NOP
label_4ef408:
    // 0x4ef408: 0x0  nop
    ctx->pc = 0x4ef408u;
    // NOP
label_4ef40c:
    // 0x4ef40c: 0x0  nop
    ctx->pc = 0x4ef40cu;
    // NOP
label_4ef410:
    // 0x4ef410: 0x0  nop
    ctx->pc = 0x4ef410u;
    // NOP
label_4ef414:
    // 0x4ef414: 0x0  nop
    ctx->pc = 0x4ef414u;
    // NOP
label_4ef418:
    // 0x4ef418: 0x0  nop
    ctx->pc = 0x4ef418u;
    // NOP
label_4ef41c:
    // 0x4ef41c: 0x0  nop
    ctx->pc = 0x4ef41cu;
    // NOP
label_4ef420:
    // 0x4ef420: 0x0  nop
    ctx->pc = 0x4ef420u;
    // NOP
label_4ef424:
    // 0x4ef424: 0x0  nop
    ctx->pc = 0x4ef424u;
    // NOP
label_4ef428:
    // 0x4ef428: 0x0  nop
    ctx->pc = 0x4ef428u;
    // NOP
label_4ef42c:
    // 0x4ef42c: 0x0  nop
    ctx->pc = 0x4ef42cu;
    // NOP
label_4ef430:
    // 0x4ef430: 0x0  nop
    ctx->pc = 0x4ef430u;
    // NOP
label_4ef434:
    // 0x4ef434: 0x0  nop
    ctx->pc = 0x4ef434u;
    // NOP
label_4ef438:
    // 0x4ef438: 0x0  nop
    ctx->pc = 0x4ef438u;
    // NOP
label_4ef43c:
    // 0x4ef43c: 0x0  nop
    ctx->pc = 0x4ef43cu;
    // NOP
label_4ef440:
    // 0x4ef440: 0x0  nop
    ctx->pc = 0x4ef440u;
    // NOP
label_4ef444:
    // 0x4ef444: 0x0  nop
    ctx->pc = 0x4ef444u;
    // NOP
label_4ef448:
    // 0x4ef448: 0x0  nop
    ctx->pc = 0x4ef448u;
    // NOP
label_4ef44c:
    // 0x4ef44c: 0x0  nop
    ctx->pc = 0x4ef44cu;
    // NOP
label_4ef450:
    // 0x4ef450: 0x0  nop
    ctx->pc = 0x4ef450u;
    // NOP
label_4ef454:
    // 0x4ef454: 0x0  nop
    ctx->pc = 0x4ef454u;
    // NOP
label_4ef458:
    // 0x4ef458: 0x0  nop
    ctx->pc = 0x4ef458u;
    // NOP
label_4ef45c:
    // 0x4ef45c: 0x0  nop
    ctx->pc = 0x4ef45cu;
    // NOP
label_4ef460:
    // 0x4ef460: 0x0  nop
    ctx->pc = 0x4ef460u;
    // NOP
label_4ef464:
    // 0x4ef464: 0x0  nop
    ctx->pc = 0x4ef464u;
    // NOP
label_4ef468:
    // 0x4ef468: 0x0  nop
    ctx->pc = 0x4ef468u;
    // NOP
label_4ef46c:
    // 0x4ef46c: 0x0  nop
    ctx->pc = 0x4ef46cu;
    // NOP
label_4ef470:
    // 0x4ef470: 0x0  nop
    ctx->pc = 0x4ef470u;
    // NOP
label_4ef474:
    // 0x4ef474: 0x0  nop
    ctx->pc = 0x4ef474u;
    // NOP
label_4ef478:
    // 0x4ef478: 0x0  nop
    ctx->pc = 0x4ef478u;
    // NOP
label_4ef47c:
    // 0x4ef47c: 0x0  nop
    ctx->pc = 0x4ef47cu;
    // NOP
label_4ef480:
    // 0x4ef480: 0x0  nop
    ctx->pc = 0x4ef480u;
    // NOP
label_4ef484:
    // 0x4ef484: 0x0  nop
    ctx->pc = 0x4ef484u;
    // NOP
label_4ef488:
    // 0x4ef488: 0x0  nop
    ctx->pc = 0x4ef488u;
    // NOP
label_4ef48c:
    // 0x4ef48c: 0x0  nop
    ctx->pc = 0x4ef48cu;
    // NOP
label_4ef490:
    // 0x4ef490: 0x0  nop
    ctx->pc = 0x4ef490u;
    // NOP
label_4ef494:
    // 0x4ef494: 0x0  nop
    ctx->pc = 0x4ef494u;
    // NOP
label_4ef498:
    // 0x4ef498: 0x0  nop
    ctx->pc = 0x4ef498u;
    // NOP
label_4ef49c:
    // 0x4ef49c: 0x0  nop
    ctx->pc = 0x4ef49cu;
    // NOP
label_4ef4a0:
    // 0x4ef4a0: 0x0  nop
    ctx->pc = 0x4ef4a0u;
    // NOP
label_4ef4a4:
    // 0x4ef4a4: 0x0  nop
    ctx->pc = 0x4ef4a4u;
    // NOP
label_4ef4a8:
    // 0x4ef4a8: 0x0  nop
    ctx->pc = 0x4ef4a8u;
    // NOP
label_4ef4ac:
    // 0x4ef4ac: 0x0  nop
    ctx->pc = 0x4ef4acu;
    // NOP
label_4ef4b0:
    // 0x4ef4b0: 0x0  nop
    ctx->pc = 0x4ef4b0u;
    // NOP
label_4ef4b4:
    // 0x4ef4b4: 0x0  nop
    ctx->pc = 0x4ef4b4u;
    // NOP
label_4ef4b8:
    // 0x4ef4b8: 0x0  nop
    ctx->pc = 0x4ef4b8u;
    // NOP
label_4ef4bc:
    // 0x4ef4bc: 0x0  nop
    ctx->pc = 0x4ef4bcu;
    // NOP
label_4ef4c0:
    // 0x4ef4c0: 0x0  nop
    ctx->pc = 0x4ef4c0u;
    // NOP
label_4ef4c4:
    // 0x4ef4c4: 0x0  nop
    ctx->pc = 0x4ef4c4u;
    // NOP
label_4ef4c8:
    // 0x4ef4c8: 0x0  nop
    ctx->pc = 0x4ef4c8u;
    // NOP
label_4ef4cc:
    // 0x4ef4cc: 0x0  nop
    ctx->pc = 0x4ef4ccu;
    // NOP
label_4ef4d0:
    // 0x4ef4d0: 0x0  nop
    ctx->pc = 0x4ef4d0u;
    // NOP
label_4ef4d4:
    // 0x4ef4d4: 0x0  nop
    ctx->pc = 0x4ef4d4u;
    // NOP
label_4ef4d8:
    // 0x4ef4d8: 0x0  nop
    ctx->pc = 0x4ef4d8u;
    // NOP
label_4ef4dc:
    // 0x4ef4dc: 0x0  nop
    ctx->pc = 0x4ef4dcu;
    // NOP
label_4ef4e0:
    // 0x4ef4e0: 0x0  nop
    ctx->pc = 0x4ef4e0u;
    // NOP
label_4ef4e4:
    // 0x4ef4e4: 0x0  nop
    ctx->pc = 0x4ef4e4u;
    // NOP
label_4ef4e8:
    // 0x4ef4e8: 0x0  nop
    ctx->pc = 0x4ef4e8u;
    // NOP
label_4ef4ec:
    // 0x4ef4ec: 0x0  nop
    ctx->pc = 0x4ef4ecu;
    // NOP
label_4ef4f0:
    // 0x4ef4f0: 0x0  nop
    ctx->pc = 0x4ef4f0u;
    // NOP
label_4ef4f4:
    // 0x4ef4f4: 0x0  nop
    ctx->pc = 0x4ef4f4u;
    // NOP
label_4ef4f8:
    // 0x4ef4f8: 0x0  nop
    ctx->pc = 0x4ef4f8u;
    // NOP
label_4ef4fc:
    // 0x4ef4fc: 0x0  nop
    ctx->pc = 0x4ef4fcu;
    // NOP
label_4ef500:
    // 0x4ef500: 0x0  nop
    ctx->pc = 0x4ef500u;
    // NOP
label_4ef504:
    // 0x4ef504: 0x0  nop
    ctx->pc = 0x4ef504u;
    // NOP
label_4ef508:
    // 0x4ef508: 0x0  nop
    ctx->pc = 0x4ef508u;
    // NOP
label_4ef50c:
    // 0x4ef50c: 0x0  nop
    ctx->pc = 0x4ef50cu;
    // NOP
label_4ef510:
    // 0x4ef510: 0x0  nop
    ctx->pc = 0x4ef510u;
    // NOP
label_4ef514:
    // 0x4ef514: 0x0  nop
    ctx->pc = 0x4ef514u;
    // NOP
label_4ef518:
    // 0x4ef518: 0x0  nop
    ctx->pc = 0x4ef518u;
    // NOP
label_4ef51c:
    // 0x4ef51c: 0x0  nop
    ctx->pc = 0x4ef51cu;
    // NOP
label_4ef520:
    // 0x4ef520: 0x0  nop
    ctx->pc = 0x4ef520u;
    // NOP
label_4ef524:
    // 0x4ef524: 0x0  nop
    ctx->pc = 0x4ef524u;
    // NOP
label_4ef528:
    // 0x4ef528: 0x0  nop
    ctx->pc = 0x4ef528u;
    // NOP
label_4ef52c:
    // 0x4ef52c: 0x0  nop
    ctx->pc = 0x4ef52cu;
    // NOP
label_4ef530:
    // 0x4ef530: 0x0  nop
    ctx->pc = 0x4ef530u;
    // NOP
label_4ef534:
    // 0x4ef534: 0x0  nop
    ctx->pc = 0x4ef534u;
    // NOP
label_4ef538:
    // 0x4ef538: 0x0  nop
    ctx->pc = 0x4ef538u;
    // NOP
label_4ef53c:
    // 0x4ef53c: 0x0  nop
    ctx->pc = 0x4ef53cu;
    // NOP
label_4ef540:
    // 0x4ef540: 0x0  nop
    ctx->pc = 0x4ef540u;
    // NOP
label_4ef544:
    // 0x4ef544: 0x0  nop
    ctx->pc = 0x4ef544u;
    // NOP
label_4ef548:
    // 0x4ef548: 0x0  nop
    ctx->pc = 0x4ef548u;
    // NOP
label_4ef54c:
    // 0x4ef54c: 0x0  nop
    ctx->pc = 0x4ef54cu;
    // NOP
label_4ef550:
    // 0x4ef550: 0x0  nop
    ctx->pc = 0x4ef550u;
    // NOP
label_4ef554:
    // 0x4ef554: 0x0  nop
    ctx->pc = 0x4ef554u;
    // NOP
label_4ef558:
    // 0x4ef558: 0x0  nop
    ctx->pc = 0x4ef558u;
    // NOP
label_4ef55c:
    // 0x4ef55c: 0x0  nop
    ctx->pc = 0x4ef55cu;
    // NOP
label_4ef560:
    // 0x4ef560: 0x0  nop
    ctx->pc = 0x4ef560u;
    // NOP
label_4ef564:
    // 0x4ef564: 0x0  nop
    ctx->pc = 0x4ef564u;
    // NOP
label_4ef568:
    // 0x4ef568: 0x0  nop
    ctx->pc = 0x4ef568u;
    // NOP
label_4ef56c:
    // 0x4ef56c: 0x0  nop
    ctx->pc = 0x4ef56cu;
    // NOP
label_4ef570:
    // 0x4ef570: 0x0  nop
    ctx->pc = 0x4ef570u;
    // NOP
label_4ef574:
    // 0x4ef574: 0x0  nop
    ctx->pc = 0x4ef574u;
    // NOP
label_4ef578:
    // 0x4ef578: 0x0  nop
    ctx->pc = 0x4ef578u;
    // NOP
label_4ef57c:
    // 0x4ef57c: 0x0  nop
    ctx->pc = 0x4ef57cu;
    // NOP
label_4ef580:
    // 0x4ef580: 0x0  nop
    ctx->pc = 0x4ef580u;
    // NOP
label_4ef584:
    // 0x4ef584: 0x0  nop
    ctx->pc = 0x4ef584u;
    // NOP
label_4ef588:
    // 0x4ef588: 0x0  nop
    ctx->pc = 0x4ef588u;
    // NOP
label_4ef58c:
    // 0x4ef58c: 0x0  nop
    ctx->pc = 0x4ef58cu;
    // NOP
label_4ef590:
    // 0x4ef590: 0x0  nop
    ctx->pc = 0x4ef590u;
    // NOP
label_4ef594:
    // 0x4ef594: 0x0  nop
    ctx->pc = 0x4ef594u;
    // NOP
label_4ef598:
    // 0x4ef598: 0x0  nop
    ctx->pc = 0x4ef598u;
    // NOP
label_4ef59c:
    // 0x4ef59c: 0x0  nop
    ctx->pc = 0x4ef59cu;
    // NOP
label_4ef5a0:
    // 0x4ef5a0: 0x0  nop
    ctx->pc = 0x4ef5a0u;
    // NOP
label_4ef5a4:
    // 0x4ef5a4: 0x0  nop
    ctx->pc = 0x4ef5a4u;
    // NOP
label_4ef5a8:
    // 0x4ef5a8: 0x0  nop
    ctx->pc = 0x4ef5a8u;
    // NOP
label_4ef5ac:
    // 0x4ef5ac: 0x0  nop
    ctx->pc = 0x4ef5acu;
    // NOP
label_4ef5b0:
    // 0x4ef5b0: 0x0  nop
    ctx->pc = 0x4ef5b0u;
    // NOP
label_4ef5b4:
    // 0x4ef5b4: 0x0  nop
    ctx->pc = 0x4ef5b4u;
    // NOP
label_4ef5b8:
    // 0x4ef5b8: 0x0  nop
    ctx->pc = 0x4ef5b8u;
    // NOP
label_4ef5bc:
    // 0x4ef5bc: 0x0  nop
    ctx->pc = 0x4ef5bcu;
    // NOP
label_4ef5c0:
    // 0x4ef5c0: 0x0  nop
    ctx->pc = 0x4ef5c0u;
    // NOP
label_4ef5c4:
    // 0x4ef5c4: 0x0  nop
    ctx->pc = 0x4ef5c4u;
    // NOP
label_4ef5c8:
    // 0x4ef5c8: 0x0  nop
    ctx->pc = 0x4ef5c8u;
    // NOP
label_4ef5cc:
    // 0x4ef5cc: 0x0  nop
    ctx->pc = 0x4ef5ccu;
    // NOP
label_4ef5d0:
    // 0x4ef5d0: 0x0  nop
    ctx->pc = 0x4ef5d0u;
    // NOP
label_4ef5d4:
    // 0x4ef5d4: 0x0  nop
    ctx->pc = 0x4ef5d4u;
    // NOP
label_4ef5d8:
    // 0x4ef5d8: 0x0  nop
    ctx->pc = 0x4ef5d8u;
    // NOP
label_4ef5dc:
    // 0x4ef5dc: 0x0  nop
    ctx->pc = 0x4ef5dcu;
    // NOP
label_4ef5e0:
    // 0x4ef5e0: 0x0  nop
    ctx->pc = 0x4ef5e0u;
    // NOP
label_4ef5e4:
    // 0x4ef5e4: 0x0  nop
    ctx->pc = 0x4ef5e4u;
    // NOP
label_4ef5e8:
    // 0x4ef5e8: 0x0  nop
    ctx->pc = 0x4ef5e8u;
    // NOP
label_4ef5ec:
    // 0x4ef5ec: 0x0  nop
    ctx->pc = 0x4ef5ecu;
    // NOP
label_4ef5f0:
    // 0x4ef5f0: 0x0  nop
    ctx->pc = 0x4ef5f0u;
    // NOP
label_4ef5f4:
    // 0x4ef5f4: 0x0  nop
    ctx->pc = 0x4ef5f4u;
    // NOP
label_4ef5f8:
    // 0x4ef5f8: 0x0  nop
    ctx->pc = 0x4ef5f8u;
    // NOP
label_4ef5fc:
    // 0x4ef5fc: 0x0  nop
    ctx->pc = 0x4ef5fcu;
    // NOP
label_4ef600:
    // 0x4ef600: 0x0  nop
    ctx->pc = 0x4ef600u;
    // NOP
label_4ef604:
    // 0x4ef604: 0x0  nop
    ctx->pc = 0x4ef604u;
    // NOP
label_4ef608:
    // 0x4ef608: 0x0  nop
    ctx->pc = 0x4ef608u;
    // NOP
label_4ef60c:
    // 0x4ef60c: 0x0  nop
    ctx->pc = 0x4ef60cu;
    // NOP
label_4ef610:
    // 0x4ef610: 0x0  nop
    ctx->pc = 0x4ef610u;
    // NOP
label_4ef614:
    // 0x4ef614: 0x0  nop
    ctx->pc = 0x4ef614u;
    // NOP
label_4ef618:
    // 0x4ef618: 0x0  nop
    ctx->pc = 0x4ef618u;
    // NOP
label_4ef61c:
    // 0x4ef61c: 0x0  nop
    ctx->pc = 0x4ef61cu;
    // NOP
label_4ef620:
    // 0x4ef620: 0x0  nop
    ctx->pc = 0x4ef620u;
    // NOP
label_4ef624:
    // 0x4ef624: 0x0  nop
    ctx->pc = 0x4ef624u;
    // NOP
label_4ef628:
    // 0x4ef628: 0x0  nop
    ctx->pc = 0x4ef628u;
    // NOP
label_4ef62c:
    // 0x4ef62c: 0x0  nop
    ctx->pc = 0x4ef62cu;
    // NOP
label_4ef630:
    // 0x4ef630: 0x0  nop
    ctx->pc = 0x4ef630u;
    // NOP
label_4ef634:
    // 0x4ef634: 0x0  nop
    ctx->pc = 0x4ef634u;
    // NOP
label_4ef638:
    // 0x4ef638: 0x0  nop
    ctx->pc = 0x4ef638u;
    // NOP
label_4ef63c:
    // 0x4ef63c: 0x0  nop
    ctx->pc = 0x4ef63cu;
    // NOP
label_4ef640:
    // 0x4ef640: 0x0  nop
    ctx->pc = 0x4ef640u;
    // NOP
label_4ef644:
    // 0x4ef644: 0x0  nop
    ctx->pc = 0x4ef644u;
    // NOP
label_4ef648:
    // 0x4ef648: 0x0  nop
    ctx->pc = 0x4ef648u;
    // NOP
label_4ef64c:
    // 0x4ef64c: 0x0  nop
    ctx->pc = 0x4ef64cu;
    // NOP
label_4ef650:
    // 0x4ef650: 0x0  nop
    ctx->pc = 0x4ef650u;
    // NOP
label_4ef654:
    // 0x4ef654: 0x0  nop
    ctx->pc = 0x4ef654u;
    // NOP
label_4ef658:
    // 0x4ef658: 0x0  nop
    ctx->pc = 0x4ef658u;
    // NOP
label_4ef65c:
    // 0x4ef65c: 0x0  nop
    ctx->pc = 0x4ef65cu;
    // NOP
label_4ef660:
    // 0x4ef660: 0x0  nop
    ctx->pc = 0x4ef660u;
    // NOP
label_4ef664:
    // 0x4ef664: 0x0  nop
    ctx->pc = 0x4ef664u;
    // NOP
label_4ef668:
    // 0x4ef668: 0x0  nop
    ctx->pc = 0x4ef668u;
    // NOP
label_4ef66c:
    // 0x4ef66c: 0x0  nop
    ctx->pc = 0x4ef66cu;
    // NOP
label_4ef670:
    // 0x4ef670: 0x0  nop
    ctx->pc = 0x4ef670u;
    // NOP
label_4ef674:
    // 0x4ef674: 0x0  nop
    ctx->pc = 0x4ef674u;
    // NOP
label_4ef678:
    // 0x4ef678: 0x0  nop
    ctx->pc = 0x4ef678u;
    // NOP
label_4ef67c:
    // 0x4ef67c: 0x0  nop
    ctx->pc = 0x4ef67cu;
    // NOP
label_4ef680:
    // 0x4ef680: 0x0  nop
    ctx->pc = 0x4ef680u;
    // NOP
label_4ef684:
    // 0x4ef684: 0x0  nop
    ctx->pc = 0x4ef684u;
    // NOP
label_4ef688:
    // 0x4ef688: 0x0  nop
    ctx->pc = 0x4ef688u;
    // NOP
label_4ef68c:
    // 0x4ef68c: 0x0  nop
    ctx->pc = 0x4ef68cu;
    // NOP
label_4ef690:
    // 0x4ef690: 0x0  nop
    ctx->pc = 0x4ef690u;
    // NOP
label_4ef694:
    // 0x4ef694: 0x0  nop
    ctx->pc = 0x4ef694u;
    // NOP
label_4ef698:
    // 0x4ef698: 0x0  nop
    ctx->pc = 0x4ef698u;
    // NOP
label_4ef69c:
    // 0x4ef69c: 0x0  nop
    ctx->pc = 0x4ef69cu;
    // NOP
label_4ef6a0:
    // 0x4ef6a0: 0x0  nop
    ctx->pc = 0x4ef6a0u;
    // NOP
label_4ef6a4:
    // 0x4ef6a4: 0x0  nop
    ctx->pc = 0x4ef6a4u;
    // NOP
label_4ef6a8:
    // 0x4ef6a8: 0x0  nop
    ctx->pc = 0x4ef6a8u;
    // NOP
label_4ef6ac:
    // 0x4ef6ac: 0x0  nop
    ctx->pc = 0x4ef6acu;
    // NOP
label_4ef6b0:
    // 0x4ef6b0: 0x0  nop
    ctx->pc = 0x4ef6b0u;
    // NOP
label_4ef6b4:
    // 0x4ef6b4: 0x0  nop
    ctx->pc = 0x4ef6b4u;
    // NOP
label_4ef6b8:
    // 0x4ef6b8: 0x0  nop
    ctx->pc = 0x4ef6b8u;
    // NOP
label_4ef6bc:
    // 0x4ef6bc: 0x0  nop
    ctx->pc = 0x4ef6bcu;
    // NOP
label_4ef6c0:
    // 0x4ef6c0: 0x0  nop
    ctx->pc = 0x4ef6c0u;
    // NOP
label_4ef6c4:
    // 0x4ef6c4: 0x0  nop
    ctx->pc = 0x4ef6c4u;
    // NOP
label_4ef6c8:
    // 0x4ef6c8: 0x0  nop
    ctx->pc = 0x4ef6c8u;
    // NOP
label_4ef6cc:
    // 0x4ef6cc: 0x0  nop
    ctx->pc = 0x4ef6ccu;
    // NOP
label_4ef6d0:
    // 0x4ef6d0: 0x0  nop
    ctx->pc = 0x4ef6d0u;
    // NOP
label_4ef6d4:
    // 0x4ef6d4: 0x0  nop
    ctx->pc = 0x4ef6d4u;
    // NOP
label_4ef6d8:
    // 0x4ef6d8: 0x0  nop
    ctx->pc = 0x4ef6d8u;
    // NOP
label_4ef6dc:
    // 0x4ef6dc: 0x0  nop
    ctx->pc = 0x4ef6dcu;
    // NOP
label_4ef6e0:
    // 0x4ef6e0: 0x0  nop
    ctx->pc = 0x4ef6e0u;
    // NOP
label_4ef6e4:
    // 0x4ef6e4: 0x0  nop
    ctx->pc = 0x4ef6e4u;
    // NOP
label_4ef6e8:
    // 0x4ef6e8: 0x0  nop
    ctx->pc = 0x4ef6e8u;
    // NOP
label_4ef6ec:
    // 0x4ef6ec: 0x0  nop
    ctx->pc = 0x4ef6ecu;
    // NOP
label_4ef6f0:
    // 0x4ef6f0: 0x0  nop
    ctx->pc = 0x4ef6f0u;
    // NOP
label_4ef6f4:
    // 0x4ef6f4: 0x0  nop
    ctx->pc = 0x4ef6f4u;
    // NOP
label_4ef6f8:
    // 0x4ef6f8: 0x0  nop
    ctx->pc = 0x4ef6f8u;
    // NOP
label_4ef6fc:
    // 0x4ef6fc: 0x0  nop
    ctx->pc = 0x4ef6fcu;
    // NOP
label_4ef700:
    // 0x4ef700: 0x0  nop
    ctx->pc = 0x4ef700u;
    // NOP
label_4ef704:
    // 0x4ef704: 0x0  nop
    ctx->pc = 0x4ef704u;
    // NOP
label_4ef708:
    // 0x4ef708: 0x0  nop
    ctx->pc = 0x4ef708u;
    // NOP
label_4ef70c:
    // 0x4ef70c: 0x0  nop
    ctx->pc = 0x4ef70cu;
    // NOP
label_4ef710:
    // 0x4ef710: 0x0  nop
    ctx->pc = 0x4ef710u;
    // NOP
label_4ef714:
    // 0x4ef714: 0x0  nop
    ctx->pc = 0x4ef714u;
    // NOP
label_4ef718:
    // 0x4ef718: 0x0  nop
    ctx->pc = 0x4ef718u;
    // NOP
label_4ef71c:
    // 0x4ef71c: 0x0  nop
    ctx->pc = 0x4ef71cu;
    // NOP
label_4ef720:
    // 0x4ef720: 0x0  nop
    ctx->pc = 0x4ef720u;
    // NOP
label_4ef724:
    // 0x4ef724: 0x0  nop
    ctx->pc = 0x4ef724u;
    // NOP
label_4ef728:
    // 0x4ef728: 0x0  nop
    ctx->pc = 0x4ef728u;
    // NOP
label_4ef72c:
    // 0x4ef72c: 0x0  nop
    ctx->pc = 0x4ef72cu;
    // NOP
label_4ef730:
    // 0x4ef730: 0x0  nop
    ctx->pc = 0x4ef730u;
    // NOP
label_4ef734:
    // 0x4ef734: 0x0  nop
    ctx->pc = 0x4ef734u;
    // NOP
label_4ef738:
    // 0x4ef738: 0x0  nop
    ctx->pc = 0x4ef738u;
    // NOP
label_4ef73c:
    // 0x4ef73c: 0x0  nop
    ctx->pc = 0x4ef73cu;
    // NOP
label_4ef740:
    // 0x4ef740: 0x0  nop
    ctx->pc = 0x4ef740u;
    // NOP
label_4ef744:
    // 0x4ef744: 0x0  nop
    ctx->pc = 0x4ef744u;
    // NOP
label_4ef748:
    // 0x4ef748: 0x0  nop
    ctx->pc = 0x4ef748u;
    // NOP
label_4ef74c:
    // 0x4ef74c: 0x0  nop
    ctx->pc = 0x4ef74cu;
    // NOP
label_4ef750:
    // 0x4ef750: 0x0  nop
    ctx->pc = 0x4ef750u;
    // NOP
label_4ef754:
    // 0x4ef754: 0x0  nop
    ctx->pc = 0x4ef754u;
    // NOP
label_4ef758:
    // 0x4ef758: 0x0  nop
    ctx->pc = 0x4ef758u;
    // NOP
label_4ef75c:
    // 0x4ef75c: 0x0  nop
    ctx->pc = 0x4ef75cu;
    // NOP
label_4ef760:
    // 0x4ef760: 0x0  nop
    ctx->pc = 0x4ef760u;
    // NOP
label_4ef764:
    // 0x4ef764: 0x0  nop
    ctx->pc = 0x4ef764u;
    // NOP
label_4ef768:
    // 0x4ef768: 0x0  nop
    ctx->pc = 0x4ef768u;
    // NOP
label_4ef76c:
    // 0x4ef76c: 0x0  nop
    ctx->pc = 0x4ef76cu;
    // NOP
label_4ef770:
    // 0x4ef770: 0x0  nop
    ctx->pc = 0x4ef770u;
    // NOP
label_4ef774:
    // 0x4ef774: 0x0  nop
    ctx->pc = 0x4ef774u;
    // NOP
label_4ef778:
    // 0x4ef778: 0x0  nop
    ctx->pc = 0x4ef778u;
    // NOP
label_4ef77c:
    // 0x4ef77c: 0x0  nop
    ctx->pc = 0x4ef77cu;
    // NOP
label_4ef780:
    // 0x4ef780: 0x0  nop
    ctx->pc = 0x4ef780u;
    // NOP
label_4ef784:
    // 0x4ef784: 0x0  nop
    ctx->pc = 0x4ef784u;
    // NOP
label_4ef788:
    // 0x4ef788: 0x0  nop
    ctx->pc = 0x4ef788u;
    // NOP
label_4ef78c:
    // 0x4ef78c: 0x0  nop
    ctx->pc = 0x4ef78cu;
    // NOP
label_4ef790:
    // 0x4ef790: 0x0  nop
    ctx->pc = 0x4ef790u;
    // NOP
label_4ef794:
    // 0x4ef794: 0x0  nop
    ctx->pc = 0x4ef794u;
    // NOP
label_4ef798:
    // 0x4ef798: 0x0  nop
    ctx->pc = 0x4ef798u;
    // NOP
label_4ef79c:
    // 0x4ef79c: 0x0  nop
    ctx->pc = 0x4ef79cu;
    // NOP
label_4ef7a0:
    // 0x4ef7a0: 0x0  nop
    ctx->pc = 0x4ef7a0u;
    // NOP
label_4ef7a4:
    // 0x4ef7a4: 0x0  nop
    ctx->pc = 0x4ef7a4u;
    // NOP
label_4ef7a8:
    // 0x4ef7a8: 0x0  nop
    ctx->pc = 0x4ef7a8u;
    // NOP
label_4ef7ac:
    // 0x4ef7ac: 0x0  nop
    ctx->pc = 0x4ef7acu;
    // NOP
label_4ef7b0:
    // 0x4ef7b0: 0x0  nop
    ctx->pc = 0x4ef7b0u;
    // NOP
label_4ef7b4:
    // 0x4ef7b4: 0x0  nop
    ctx->pc = 0x4ef7b4u;
    // NOP
label_4ef7b8:
    // 0x4ef7b8: 0x0  nop
    ctx->pc = 0x4ef7b8u;
    // NOP
label_4ef7bc:
    // 0x4ef7bc: 0x0  nop
    ctx->pc = 0x4ef7bcu;
    // NOP
label_4ef7c0:
    // 0x4ef7c0: 0x0  nop
    ctx->pc = 0x4ef7c0u;
    // NOP
label_4ef7c4:
    // 0x4ef7c4: 0x0  nop
    ctx->pc = 0x4ef7c4u;
    // NOP
label_4ef7c8:
    // 0x4ef7c8: 0x0  nop
    ctx->pc = 0x4ef7c8u;
    // NOP
label_4ef7cc:
    // 0x4ef7cc: 0x0  nop
    ctx->pc = 0x4ef7ccu;
    // NOP
label_4ef7d0:
    // 0x4ef7d0: 0x0  nop
    ctx->pc = 0x4ef7d0u;
    // NOP
label_4ef7d4:
    // 0x4ef7d4: 0x0  nop
    ctx->pc = 0x4ef7d4u;
    // NOP
label_4ef7d8:
    // 0x4ef7d8: 0x0  nop
    ctx->pc = 0x4ef7d8u;
    // NOP
label_4ef7dc:
    // 0x4ef7dc: 0x0  nop
    ctx->pc = 0x4ef7dcu;
    // NOP
label_4ef7e0:
    // 0x4ef7e0: 0x0  nop
    ctx->pc = 0x4ef7e0u;
    // NOP
label_4ef7e4:
    // 0x4ef7e4: 0x0  nop
    ctx->pc = 0x4ef7e4u;
    // NOP
label_4ef7e8:
    // 0x4ef7e8: 0x0  nop
    ctx->pc = 0x4ef7e8u;
    // NOP
label_4ef7ec:
    // 0x4ef7ec: 0x0  nop
    ctx->pc = 0x4ef7ecu;
    // NOP
label_4ef7f0:
    // 0x4ef7f0: 0x0  nop
    ctx->pc = 0x4ef7f0u;
    // NOP
label_4ef7f4:
    // 0x4ef7f4: 0x0  nop
    ctx->pc = 0x4ef7f4u;
    // NOP
label_4ef7f8:
    // 0x4ef7f8: 0x0  nop
    ctx->pc = 0x4ef7f8u;
    // NOP
label_4ef7fc:
    // 0x4ef7fc: 0x0  nop
    ctx->pc = 0x4ef7fcu;
    // NOP
label_4ef800:
    // 0x4ef800: 0x0  nop
    ctx->pc = 0x4ef800u;
    // NOP
label_4ef804:
    // 0x4ef804: 0x0  nop
    ctx->pc = 0x4ef804u;
    // NOP
label_4ef808:
    // 0x4ef808: 0x0  nop
    ctx->pc = 0x4ef808u;
    // NOP
label_4ef80c:
    // 0x4ef80c: 0x0  nop
    ctx->pc = 0x4ef80cu;
    // NOP
label_4ef810:
    // 0x4ef810: 0x0  nop
    ctx->pc = 0x4ef810u;
    // NOP
label_4ef814:
    // 0x4ef814: 0x0  nop
    ctx->pc = 0x4ef814u;
    // NOP
label_4ef818:
    // 0x4ef818: 0x0  nop
    ctx->pc = 0x4ef818u;
    // NOP
label_4ef81c:
    // 0x4ef81c: 0x0  nop
    ctx->pc = 0x4ef81cu;
    // NOP
label_4ef820:
    // 0x4ef820: 0x0  nop
    ctx->pc = 0x4ef820u;
    // NOP
label_4ef824:
    // 0x4ef824: 0x0  nop
    ctx->pc = 0x4ef824u;
    // NOP
label_4ef828:
    // 0x4ef828: 0x0  nop
    ctx->pc = 0x4ef828u;
    // NOP
label_4ef82c:
    // 0x4ef82c: 0x0  nop
    ctx->pc = 0x4ef82cu;
    // NOP
label_4ef830:
    // 0x4ef830: 0x0  nop
    ctx->pc = 0x4ef830u;
    // NOP
label_4ef834:
    // 0x4ef834: 0x0  nop
    ctx->pc = 0x4ef834u;
    // NOP
label_4ef838:
    // 0x4ef838: 0x0  nop
    ctx->pc = 0x4ef838u;
    // NOP
label_4ef83c:
    // 0x4ef83c: 0x0  nop
    ctx->pc = 0x4ef83cu;
    // NOP
label_4ef840:
    // 0x4ef840: 0x0  nop
    ctx->pc = 0x4ef840u;
    // NOP
label_4ef844:
    // 0x4ef844: 0x0  nop
    ctx->pc = 0x4ef844u;
    // NOP
label_4ef848:
    // 0x4ef848: 0x0  nop
    ctx->pc = 0x4ef848u;
    // NOP
label_4ef84c:
    // 0x4ef84c: 0x0  nop
    ctx->pc = 0x4ef84cu;
    // NOP
label_4ef850:
    // 0x4ef850: 0x0  nop
    ctx->pc = 0x4ef850u;
    // NOP
label_4ef854:
    // 0x4ef854: 0x0  nop
    ctx->pc = 0x4ef854u;
    // NOP
label_4ef858:
    // 0x4ef858: 0x0  nop
    ctx->pc = 0x4ef858u;
    // NOP
label_4ef85c:
    // 0x4ef85c: 0x0  nop
    ctx->pc = 0x4ef85cu;
    // NOP
label_4ef860:
    // 0x4ef860: 0x0  nop
    ctx->pc = 0x4ef860u;
    // NOP
label_4ef864:
    // 0x4ef864: 0x0  nop
    ctx->pc = 0x4ef864u;
    // NOP
label_4ef868:
    // 0x4ef868: 0x0  nop
    ctx->pc = 0x4ef868u;
    // NOP
label_4ef86c:
    // 0x4ef86c: 0x0  nop
    ctx->pc = 0x4ef86cu;
    // NOP
label_4ef870:
    // 0x4ef870: 0x0  nop
    ctx->pc = 0x4ef870u;
    // NOP
label_4ef874:
    // 0x4ef874: 0x0  nop
    ctx->pc = 0x4ef874u;
    // NOP
label_4ef878:
    // 0x4ef878: 0x0  nop
    ctx->pc = 0x4ef878u;
    // NOP
label_4ef87c:
    // 0x4ef87c: 0x0  nop
    ctx->pc = 0x4ef87cu;
    // NOP
label_4ef880:
    // 0x4ef880: 0x0  nop
    ctx->pc = 0x4ef880u;
    // NOP
label_4ef884:
    // 0x4ef884: 0x0  nop
    ctx->pc = 0x4ef884u;
    // NOP
label_4ef888:
    // 0x4ef888: 0x0  nop
    ctx->pc = 0x4ef888u;
    // NOP
label_4ef88c:
    // 0x4ef88c: 0x0  nop
    ctx->pc = 0x4ef88cu;
    // NOP
label_4ef890:
    // 0x4ef890: 0x0  nop
    ctx->pc = 0x4ef890u;
    // NOP
label_4ef894:
    // 0x4ef894: 0x0  nop
    ctx->pc = 0x4ef894u;
    // NOP
label_4ef898:
    // 0x4ef898: 0x0  nop
    ctx->pc = 0x4ef898u;
    // NOP
label_4ef89c:
    // 0x4ef89c: 0x0  nop
    ctx->pc = 0x4ef89cu;
    // NOP
label_4ef8a0:
    // 0x4ef8a0: 0x0  nop
    ctx->pc = 0x4ef8a0u;
    // NOP
label_4ef8a4:
    // 0x4ef8a4: 0x0  nop
    ctx->pc = 0x4ef8a4u;
    // NOP
label_4ef8a8:
    // 0x4ef8a8: 0x0  nop
    ctx->pc = 0x4ef8a8u;
    // NOP
label_4ef8ac:
    // 0x4ef8ac: 0x0  nop
    ctx->pc = 0x4ef8acu;
    // NOP
label_4ef8b0:
    // 0x4ef8b0: 0x0  nop
    ctx->pc = 0x4ef8b0u;
    // NOP
label_4ef8b4:
    // 0x4ef8b4: 0x0  nop
    ctx->pc = 0x4ef8b4u;
    // NOP
label_4ef8b8:
    // 0x4ef8b8: 0x0  nop
    ctx->pc = 0x4ef8b8u;
    // NOP
label_4ef8bc:
    // 0x4ef8bc: 0x0  nop
    ctx->pc = 0x4ef8bcu;
    // NOP
label_4ef8c0:
    // 0x4ef8c0: 0x0  nop
    ctx->pc = 0x4ef8c0u;
    // NOP
label_4ef8c4:
    // 0x4ef8c4: 0x0  nop
    ctx->pc = 0x4ef8c4u;
    // NOP
label_4ef8c8:
    // 0x4ef8c8: 0x0  nop
    ctx->pc = 0x4ef8c8u;
    // NOP
label_4ef8cc:
    // 0x4ef8cc: 0x0  nop
    ctx->pc = 0x4ef8ccu;
    // NOP
label_4ef8d0:
    // 0x4ef8d0: 0x0  nop
    ctx->pc = 0x4ef8d0u;
    // NOP
label_4ef8d4:
    // 0x4ef8d4: 0x0  nop
    ctx->pc = 0x4ef8d4u;
    // NOP
label_4ef8d8:
    // 0x4ef8d8: 0x0  nop
    ctx->pc = 0x4ef8d8u;
    // NOP
label_4ef8dc:
    // 0x4ef8dc: 0x0  nop
    ctx->pc = 0x4ef8dcu;
    // NOP
label_4ef8e0:
    // 0x4ef8e0: 0x0  nop
    ctx->pc = 0x4ef8e0u;
    // NOP
label_4ef8e4:
    // 0x4ef8e4: 0x0  nop
    ctx->pc = 0x4ef8e4u;
    // NOP
label_4ef8e8:
    // 0x4ef8e8: 0x0  nop
    ctx->pc = 0x4ef8e8u;
    // NOP
label_4ef8ec:
    // 0x4ef8ec: 0x0  nop
    ctx->pc = 0x4ef8ecu;
    // NOP
label_4ef8f0:
    // 0x4ef8f0: 0x0  nop
    ctx->pc = 0x4ef8f0u;
    // NOP
label_4ef8f4:
    // 0x4ef8f4: 0x0  nop
    ctx->pc = 0x4ef8f4u;
    // NOP
label_4ef8f8:
    // 0x4ef8f8: 0x0  nop
    ctx->pc = 0x4ef8f8u;
    // NOP
label_4ef8fc:
    // 0x4ef8fc: 0x0  nop
    ctx->pc = 0x4ef8fcu;
    // NOP
label_4ef900:
    // 0x4ef900: 0x0  nop
    ctx->pc = 0x4ef900u;
    // NOP
label_4ef904:
    // 0x4ef904: 0x0  nop
    ctx->pc = 0x4ef904u;
    // NOP
label_4ef908:
    // 0x4ef908: 0x0  nop
    ctx->pc = 0x4ef908u;
    // NOP
label_4ef90c:
    // 0x4ef90c: 0x0  nop
    ctx->pc = 0x4ef90cu;
    // NOP
label_4ef910:
    // 0x4ef910: 0x0  nop
    ctx->pc = 0x4ef910u;
    // NOP
label_4ef914:
    // 0x4ef914: 0x0  nop
    ctx->pc = 0x4ef914u;
    // NOP
label_4ef918:
    // 0x4ef918: 0x0  nop
    ctx->pc = 0x4ef918u;
    // NOP
label_4ef91c:
    // 0x4ef91c: 0x0  nop
    ctx->pc = 0x4ef91cu;
    // NOP
label_4ef920:
    // 0x4ef920: 0x0  nop
    ctx->pc = 0x4ef920u;
    // NOP
label_4ef924:
    // 0x4ef924: 0x0  nop
    ctx->pc = 0x4ef924u;
    // NOP
label_4ef928:
    // 0x4ef928: 0x0  nop
    ctx->pc = 0x4ef928u;
    // NOP
label_4ef92c:
    // 0x4ef92c: 0x0  nop
    ctx->pc = 0x4ef92cu;
    // NOP
label_4ef930:
    // 0x4ef930: 0x0  nop
    ctx->pc = 0x4ef930u;
    // NOP
label_4ef934:
    // 0x4ef934: 0x0  nop
    ctx->pc = 0x4ef934u;
    // NOP
label_4ef938:
    // 0x4ef938: 0x0  nop
    ctx->pc = 0x4ef938u;
    // NOP
label_4ef93c:
    // 0x4ef93c: 0x0  nop
    ctx->pc = 0x4ef93cu;
    // NOP
label_4ef940:
    // 0x4ef940: 0x0  nop
    ctx->pc = 0x4ef940u;
    // NOP
label_4ef944:
    // 0x4ef944: 0x0  nop
    ctx->pc = 0x4ef944u;
    // NOP
label_4ef948:
    // 0x4ef948: 0x0  nop
    ctx->pc = 0x4ef948u;
    // NOP
label_4ef94c:
    // 0x4ef94c: 0x0  nop
    ctx->pc = 0x4ef94cu;
    // NOP
label_4ef950:
    // 0x4ef950: 0x0  nop
    ctx->pc = 0x4ef950u;
    // NOP
label_4ef954:
    // 0x4ef954: 0x0  nop
    ctx->pc = 0x4ef954u;
    // NOP
label_4ef958:
    // 0x4ef958: 0x0  nop
    ctx->pc = 0x4ef958u;
    // NOP
label_4ef95c:
    // 0x4ef95c: 0x0  nop
    ctx->pc = 0x4ef95cu;
    // NOP
label_4ef960:
    // 0x4ef960: 0x0  nop
    ctx->pc = 0x4ef960u;
    // NOP
label_4ef964:
    // 0x4ef964: 0x0  nop
    ctx->pc = 0x4ef964u;
    // NOP
label_4ef968:
    // 0x4ef968: 0x0  nop
    ctx->pc = 0x4ef968u;
    // NOP
label_4ef96c:
    // 0x4ef96c: 0x0  nop
    ctx->pc = 0x4ef96cu;
    // NOP
label_4ef970:
    // 0x4ef970: 0x0  nop
    ctx->pc = 0x4ef970u;
    // NOP
label_4ef974:
    // 0x4ef974: 0x0  nop
    ctx->pc = 0x4ef974u;
    // NOP
label_4ef978:
    // 0x4ef978: 0x0  nop
    ctx->pc = 0x4ef978u;
    // NOP
label_4ef97c:
    // 0x4ef97c: 0x0  nop
    ctx->pc = 0x4ef97cu;
    // NOP
label_4ef980:
    // 0x4ef980: 0x0  nop
    ctx->pc = 0x4ef980u;
    // NOP
label_4ef984:
    // 0x4ef984: 0x0  nop
    ctx->pc = 0x4ef984u;
    // NOP
label_4ef988:
    // 0x4ef988: 0x0  nop
    ctx->pc = 0x4ef988u;
    // NOP
label_4ef98c:
    // 0x4ef98c: 0x0  nop
    ctx->pc = 0x4ef98cu;
    // NOP
label_4ef990:
    // 0x4ef990: 0x0  nop
    ctx->pc = 0x4ef990u;
    // NOP
label_4ef994:
    // 0x4ef994: 0x0  nop
    ctx->pc = 0x4ef994u;
    // NOP
label_4ef998:
    // 0x4ef998: 0x0  nop
    ctx->pc = 0x4ef998u;
    // NOP
label_4ef99c:
    // 0x4ef99c: 0x0  nop
    ctx->pc = 0x4ef99cu;
    // NOP
label_4ef9a0:
    // 0x4ef9a0: 0x0  nop
    ctx->pc = 0x4ef9a0u;
    // NOP
label_4ef9a4:
    // 0x4ef9a4: 0x0  nop
    ctx->pc = 0x4ef9a4u;
    // NOP
label_4ef9a8:
    // 0x4ef9a8: 0x0  nop
    ctx->pc = 0x4ef9a8u;
    // NOP
label_4ef9ac:
    // 0x4ef9ac: 0x0  nop
    ctx->pc = 0x4ef9acu;
    // NOP
label_4ef9b0:
    // 0x4ef9b0: 0x0  nop
    ctx->pc = 0x4ef9b0u;
    // NOP
label_4ef9b4:
    // 0x4ef9b4: 0x0  nop
    ctx->pc = 0x4ef9b4u;
    // NOP
label_4ef9b8:
    // 0x4ef9b8: 0x0  nop
    ctx->pc = 0x4ef9b8u;
    // NOP
label_4ef9bc:
    // 0x4ef9bc: 0x0  nop
    ctx->pc = 0x4ef9bcu;
    // NOP
label_4ef9c0:
    // 0x4ef9c0: 0x0  nop
    ctx->pc = 0x4ef9c0u;
    // NOP
label_4ef9c4:
    // 0x4ef9c4: 0x0  nop
    ctx->pc = 0x4ef9c4u;
    // NOP
label_4ef9c8:
    // 0x4ef9c8: 0x0  nop
    ctx->pc = 0x4ef9c8u;
    // NOP
label_4ef9cc:
    // 0x4ef9cc: 0x0  nop
    ctx->pc = 0x4ef9ccu;
    // NOP
label_4ef9d0:
    // 0x4ef9d0: 0x0  nop
    ctx->pc = 0x4ef9d0u;
    // NOP
label_4ef9d4:
    // 0x4ef9d4: 0x0  nop
    ctx->pc = 0x4ef9d4u;
    // NOP
label_4ef9d8:
    // 0x4ef9d8: 0x0  nop
    ctx->pc = 0x4ef9d8u;
    // NOP
label_4ef9dc:
    // 0x4ef9dc: 0x0  nop
    ctx->pc = 0x4ef9dcu;
    // NOP
label_4ef9e0:
    // 0x4ef9e0: 0x0  nop
    ctx->pc = 0x4ef9e0u;
    // NOP
label_4ef9e4:
    // 0x4ef9e4: 0x0  nop
    ctx->pc = 0x4ef9e4u;
    // NOP
label_4ef9e8:
    // 0x4ef9e8: 0x0  nop
    ctx->pc = 0x4ef9e8u;
    // NOP
label_4ef9ec:
    // 0x4ef9ec: 0x0  nop
    ctx->pc = 0x4ef9ecu;
    // NOP
label_4ef9f0:
    // 0x4ef9f0: 0x0  nop
    ctx->pc = 0x4ef9f0u;
    // NOP
label_4ef9f4:
    // 0x4ef9f4: 0x0  nop
    ctx->pc = 0x4ef9f4u;
    // NOP
label_4ef9f8:
    // 0x4ef9f8: 0x0  nop
    ctx->pc = 0x4ef9f8u;
    // NOP
label_4ef9fc:
    // 0x4ef9fc: 0x0  nop
    ctx->pc = 0x4ef9fcu;
    // NOP
label_4efa00:
    // 0x4efa00: 0x0  nop
    ctx->pc = 0x4efa00u;
    // NOP
label_4efa04:
    // 0x4efa04: 0x0  nop
    ctx->pc = 0x4efa04u;
    // NOP
label_4efa08:
    // 0x4efa08: 0x0  nop
    ctx->pc = 0x4efa08u;
    // NOP
label_4efa0c:
    // 0x4efa0c: 0x0  nop
    ctx->pc = 0x4efa0cu;
    // NOP
label_4efa10:
    // 0x4efa10: 0x0  nop
    ctx->pc = 0x4efa10u;
    // NOP
label_4efa14:
    // 0x4efa14: 0x0  nop
    ctx->pc = 0x4efa14u;
    // NOP
label_4efa18:
    // 0x4efa18: 0x0  nop
    ctx->pc = 0x4efa18u;
    // NOP
label_4efa1c:
    // 0x4efa1c: 0x0  nop
    ctx->pc = 0x4efa1cu;
    // NOP
label_4efa20:
    // 0x4efa20: 0x0  nop
    ctx->pc = 0x4efa20u;
    // NOP
label_4efa24:
    // 0x4efa24: 0x0  nop
    ctx->pc = 0x4efa24u;
    // NOP
label_4efa28:
    // 0x4efa28: 0x0  nop
    ctx->pc = 0x4efa28u;
    // NOP
label_4efa2c:
    // 0x4efa2c: 0x0  nop
    ctx->pc = 0x4efa2cu;
    // NOP
label_4efa30:
    // 0x4efa30: 0x0  nop
    ctx->pc = 0x4efa30u;
    // NOP
label_4efa34:
    // 0x4efa34: 0x0  nop
    ctx->pc = 0x4efa34u;
    // NOP
label_4efa38:
    // 0x4efa38: 0x0  nop
    ctx->pc = 0x4efa38u;
    // NOP
label_4efa3c:
    // 0x4efa3c: 0x0  nop
    ctx->pc = 0x4efa3cu;
    // NOP
label_4efa40:
    // 0x4efa40: 0x0  nop
    ctx->pc = 0x4efa40u;
    // NOP
label_4efa44:
    // 0x4efa44: 0x0  nop
    ctx->pc = 0x4efa44u;
    // NOP
label_4efa48:
    // 0x4efa48: 0x0  nop
    ctx->pc = 0x4efa48u;
    // NOP
label_4efa4c:
    // 0x4efa4c: 0x0  nop
    ctx->pc = 0x4efa4cu;
    // NOP
label_4efa50:
    // 0x4efa50: 0x0  nop
    ctx->pc = 0x4efa50u;
    // NOP
label_4efa54:
    // 0x4efa54: 0x0  nop
    ctx->pc = 0x4efa54u;
    // NOP
label_4efa58:
    // 0x4efa58: 0x0  nop
    ctx->pc = 0x4efa58u;
    // NOP
label_4efa5c:
    // 0x4efa5c: 0x0  nop
    ctx->pc = 0x4efa5cu;
    // NOP
label_4efa60:
    // 0x4efa60: 0x0  nop
    ctx->pc = 0x4efa60u;
    // NOP
label_4efa64:
    // 0x4efa64: 0x0  nop
    ctx->pc = 0x4efa64u;
    // NOP
label_4efa68:
    // 0x4efa68: 0x0  nop
    ctx->pc = 0x4efa68u;
    // NOP
label_4efa6c:
    // 0x4efa6c: 0x0  nop
    ctx->pc = 0x4efa6cu;
    // NOP
label_4efa70:
    // 0x4efa70: 0x0  nop
    ctx->pc = 0x4efa70u;
    // NOP
label_4efa74:
    // 0x4efa74: 0x0  nop
    ctx->pc = 0x4efa74u;
    // NOP
label_4efa78:
    // 0x4efa78: 0x0  nop
    ctx->pc = 0x4efa78u;
    // NOP
label_4efa7c:
    // 0x4efa7c: 0x0  nop
    ctx->pc = 0x4efa7cu;
    // NOP
label_4efa80:
    // 0x4efa80: 0x0  nop
    ctx->pc = 0x4efa80u;
    // NOP
label_4efa84:
    // 0x4efa84: 0x0  nop
    ctx->pc = 0x4efa84u;
    // NOP
label_4efa88:
    // 0x4efa88: 0x0  nop
    ctx->pc = 0x4efa88u;
    // NOP
label_4efa8c:
    // 0x4efa8c: 0x0  nop
    ctx->pc = 0x4efa8cu;
    // NOP
label_4efa90:
    // 0x4efa90: 0x0  nop
    ctx->pc = 0x4efa90u;
    // NOP
label_4efa94:
    // 0x4efa94: 0x0  nop
    ctx->pc = 0x4efa94u;
    // NOP
label_4efa98:
    // 0x4efa98: 0x0  nop
    ctx->pc = 0x4efa98u;
    // NOP
label_4efa9c:
    // 0x4efa9c: 0x0  nop
    ctx->pc = 0x4efa9cu;
    // NOP
label_4efaa0:
    // 0x4efaa0: 0x0  nop
    ctx->pc = 0x4efaa0u;
    // NOP
label_4efaa4:
    // 0x4efaa4: 0x0  nop
    ctx->pc = 0x4efaa4u;
    // NOP
label_4efaa8:
    // 0x4efaa8: 0x0  nop
    ctx->pc = 0x4efaa8u;
    // NOP
label_4efaac:
    // 0x4efaac: 0x0  nop
    ctx->pc = 0x4efaacu;
    // NOP
label_4efab0:
    // 0x4efab0: 0x0  nop
    ctx->pc = 0x4efab0u;
    // NOP
label_4efab4:
    // 0x4efab4: 0x0  nop
    ctx->pc = 0x4efab4u;
    // NOP
label_4efab8:
    // 0x4efab8: 0x0  nop
    ctx->pc = 0x4efab8u;
    // NOP
label_4efabc:
    // 0x4efabc: 0x0  nop
    ctx->pc = 0x4efabcu;
    // NOP
label_4efac0:
    // 0x4efac0: 0x0  nop
    ctx->pc = 0x4efac0u;
    // NOP
label_4efac4:
    // 0x4efac4: 0x0  nop
    ctx->pc = 0x4efac4u;
    // NOP
label_4efac8:
    // 0x4efac8: 0x0  nop
    ctx->pc = 0x4efac8u;
    // NOP
label_4efacc:
    // 0x4efacc: 0x0  nop
    ctx->pc = 0x4efaccu;
    // NOP
label_4efad0:
    // 0x4efad0: 0x0  nop
    ctx->pc = 0x4efad0u;
    // NOP
label_4efad4:
    // 0x4efad4: 0x0  nop
    ctx->pc = 0x4efad4u;
    // NOP
label_4efad8:
    // 0x4efad8: 0x0  nop
    ctx->pc = 0x4efad8u;
    // NOP
label_4efadc:
    // 0x4efadc: 0x0  nop
    ctx->pc = 0x4efadcu;
    // NOP
label_4efae0:
    // 0x4efae0: 0x0  nop
    ctx->pc = 0x4efae0u;
    // NOP
label_4efae4:
    // 0x4efae4: 0x0  nop
    ctx->pc = 0x4efae4u;
    // NOP
label_4efae8:
    // 0x4efae8: 0x0  nop
    ctx->pc = 0x4efae8u;
    // NOP
label_4efaec:
    // 0x4efaec: 0x0  nop
    ctx->pc = 0x4efaecu;
    // NOP
label_4efaf0:
    // 0x4efaf0: 0x0  nop
    ctx->pc = 0x4efaf0u;
    // NOP
label_4efaf4:
    // 0x4efaf4: 0x0  nop
    ctx->pc = 0x4efaf4u;
    // NOP
label_4efaf8:
    // 0x4efaf8: 0x0  nop
    ctx->pc = 0x4efaf8u;
    // NOP
label_4efafc:
    // 0x4efafc: 0x0  nop
    ctx->pc = 0x4efafcu;
    // NOP
label_4efb00:
    // 0x4efb00: 0x0  nop
    ctx->pc = 0x4efb00u;
    // NOP
label_4efb04:
    // 0x4efb04: 0x0  nop
    ctx->pc = 0x4efb04u;
    // NOP
label_4efb08:
    // 0x4efb08: 0x0  nop
    ctx->pc = 0x4efb08u;
    // NOP
label_4efb0c:
    // 0x4efb0c: 0x0  nop
    ctx->pc = 0x4efb0cu;
    // NOP
label_4efb10:
    // 0x4efb10: 0x0  nop
    ctx->pc = 0x4efb10u;
    // NOP
label_4efb14:
    // 0x4efb14: 0x0  nop
    ctx->pc = 0x4efb14u;
    // NOP
label_4efb18:
    // 0x4efb18: 0x0  nop
    ctx->pc = 0x4efb18u;
    // NOP
label_4efb1c:
    // 0x4efb1c: 0x0  nop
    ctx->pc = 0x4efb1cu;
    // NOP
label_4efb20:
    // 0x4efb20: 0x0  nop
    ctx->pc = 0x4efb20u;
    // NOP
label_4efb24:
    // 0x4efb24: 0x0  nop
    ctx->pc = 0x4efb24u;
    // NOP
label_4efb28:
    // 0x4efb28: 0x0  nop
    ctx->pc = 0x4efb28u;
    // NOP
label_4efb2c:
    // 0x4efb2c: 0x0  nop
    ctx->pc = 0x4efb2cu;
    // NOP
label_4efb30:
    // 0x4efb30: 0x0  nop
    ctx->pc = 0x4efb30u;
    // NOP
label_4efb34:
    // 0x4efb34: 0x0  nop
    ctx->pc = 0x4efb34u;
    // NOP
label_4efb38:
    // 0x4efb38: 0x0  nop
    ctx->pc = 0x4efb38u;
    // NOP
label_4efb3c:
    // 0x4efb3c: 0x0  nop
    ctx->pc = 0x4efb3cu;
    // NOP
label_4efb40:
    // 0x4efb40: 0x0  nop
    ctx->pc = 0x4efb40u;
    // NOP
label_4efb44:
    // 0x4efb44: 0x0  nop
    ctx->pc = 0x4efb44u;
    // NOP
label_4efb48:
    // 0x4efb48: 0x0  nop
    ctx->pc = 0x4efb48u;
    // NOP
label_4efb4c:
    // 0x4efb4c: 0x0  nop
    ctx->pc = 0x4efb4cu;
    // NOP
label_4efb50:
    // 0x4efb50: 0x0  nop
    ctx->pc = 0x4efb50u;
    // NOP
label_4efb54:
    // 0x4efb54: 0x0  nop
    ctx->pc = 0x4efb54u;
    // NOP
label_4efb58:
    // 0x4efb58: 0x0  nop
    ctx->pc = 0x4efb58u;
    // NOP
label_4efb5c:
    // 0x4efb5c: 0x0  nop
    ctx->pc = 0x4efb5cu;
    // NOP
label_4efb60:
    // 0x4efb60: 0x0  nop
    ctx->pc = 0x4efb60u;
    // NOP
label_4efb64:
    // 0x4efb64: 0x0  nop
    ctx->pc = 0x4efb64u;
    // NOP
label_4efb68:
    // 0x4efb68: 0x0  nop
    ctx->pc = 0x4efb68u;
    // NOP
label_4efb6c:
    // 0x4efb6c: 0x0  nop
    ctx->pc = 0x4efb6cu;
    // NOP
label_4efb70:
    // 0x4efb70: 0x0  nop
    ctx->pc = 0x4efb70u;
    // NOP
label_4efb74:
    // 0x4efb74: 0x0  nop
    ctx->pc = 0x4efb74u;
    // NOP
label_4efb78:
    // 0x4efb78: 0x0  nop
    ctx->pc = 0x4efb78u;
    // NOP
label_4efb7c:
    // 0x4efb7c: 0x0  nop
    ctx->pc = 0x4efb7cu;
    // NOP
label_4efb80:
    // 0x4efb80: 0x0  nop
    ctx->pc = 0x4efb80u;
    // NOP
label_4efb84:
    // 0x4efb84: 0x0  nop
    ctx->pc = 0x4efb84u;
    // NOP
label_4efb88:
    // 0x4efb88: 0x0  nop
    ctx->pc = 0x4efb88u;
    // NOP
label_4efb8c:
    // 0x4efb8c: 0x0  nop
    ctx->pc = 0x4efb8cu;
    // NOP
label_4efb90:
    // 0x4efb90: 0x0  nop
    ctx->pc = 0x4efb90u;
    // NOP
label_4efb94:
    // 0x4efb94: 0x0  nop
    ctx->pc = 0x4efb94u;
    // NOP
label_4efb98:
    // 0x4efb98: 0x0  nop
    ctx->pc = 0x4efb98u;
    // NOP
label_4efb9c:
    // 0x4efb9c: 0x0  nop
    ctx->pc = 0x4efb9cu;
    // NOP
label_4efba0:
    // 0x4efba0: 0x0  nop
    ctx->pc = 0x4efba0u;
    // NOP
label_4efba4:
    // 0x4efba4: 0x0  nop
    ctx->pc = 0x4efba4u;
    // NOP
label_4efba8:
    // 0x4efba8: 0x0  nop
    ctx->pc = 0x4efba8u;
    // NOP
label_4efbac:
    // 0x4efbac: 0x0  nop
    ctx->pc = 0x4efbacu;
    // NOP
label_4efbb0:
    // 0x4efbb0: 0x0  nop
    ctx->pc = 0x4efbb0u;
    // NOP
label_4efbb4:
    // 0x4efbb4: 0x0  nop
    ctx->pc = 0x4efbb4u;
    // NOP
label_4efbb8:
    // 0x4efbb8: 0x0  nop
    ctx->pc = 0x4efbb8u;
    // NOP
label_4efbbc:
    // 0x4efbbc: 0x0  nop
    ctx->pc = 0x4efbbcu;
    // NOP
label_4efbc0:
    // 0x4efbc0: 0x0  nop
    ctx->pc = 0x4efbc0u;
    // NOP
label_4efbc4:
    // 0x4efbc4: 0x0  nop
    ctx->pc = 0x4efbc4u;
    // NOP
label_4efbc8:
    // 0x4efbc8: 0x0  nop
    ctx->pc = 0x4efbc8u;
    // NOP
label_4efbcc:
    // 0x4efbcc: 0x0  nop
    ctx->pc = 0x4efbccu;
    // NOP
label_4efbd0:
    // 0x4efbd0: 0x0  nop
    ctx->pc = 0x4efbd0u;
    // NOP
label_4efbd4:
    // 0x4efbd4: 0x0  nop
    ctx->pc = 0x4efbd4u;
    // NOP
label_4efbd8:
    // 0x4efbd8: 0x0  nop
    ctx->pc = 0x4efbd8u;
    // NOP
label_4efbdc:
    // 0x4efbdc: 0x0  nop
    ctx->pc = 0x4efbdcu;
    // NOP
label_4efbe0:
    // 0x4efbe0: 0x0  nop
    ctx->pc = 0x4efbe0u;
    // NOP
label_4efbe4:
    // 0x4efbe4: 0x0  nop
    ctx->pc = 0x4efbe4u;
    // NOP
label_4efbe8:
    // 0x4efbe8: 0x0  nop
    ctx->pc = 0x4efbe8u;
    // NOP
label_4efbec:
    // 0x4efbec: 0x0  nop
    ctx->pc = 0x4efbecu;
    // NOP
label_4efbf0:
    // 0x4efbf0: 0x0  nop
    ctx->pc = 0x4efbf0u;
    // NOP
label_4efbf4:
    // 0x4efbf4: 0x0  nop
    ctx->pc = 0x4efbf4u;
    // NOP
label_4efbf8:
    // 0x4efbf8: 0x0  nop
    ctx->pc = 0x4efbf8u;
    // NOP
label_4efbfc:
    // 0x4efbfc: 0x0  nop
    ctx->pc = 0x4efbfcu;
    // NOP
label_4efc00:
    // 0x4efc00: 0x0  nop
    ctx->pc = 0x4efc00u;
    // NOP
label_4efc04:
    // 0x4efc04: 0x0  nop
    ctx->pc = 0x4efc04u;
    // NOP
label_4efc08:
    // 0x4efc08: 0x0  nop
    ctx->pc = 0x4efc08u;
    // NOP
label_4efc0c:
    // 0x4efc0c: 0x0  nop
    ctx->pc = 0x4efc0cu;
    // NOP
label_4efc10:
    // 0x4efc10: 0x0  nop
    ctx->pc = 0x4efc10u;
    // NOP
label_4efc14:
    // 0x4efc14: 0x0  nop
    ctx->pc = 0x4efc14u;
    // NOP
label_4efc18:
    // 0x4efc18: 0x0  nop
    ctx->pc = 0x4efc18u;
    // NOP
label_4efc1c:
    // 0x4efc1c: 0x0  nop
    ctx->pc = 0x4efc1cu;
    // NOP
label_4efc20:
    // 0x4efc20: 0x0  nop
    ctx->pc = 0x4efc20u;
    // NOP
label_4efc24:
    // 0x4efc24: 0x0  nop
    ctx->pc = 0x4efc24u;
    // NOP
label_4efc28:
    // 0x4efc28: 0x0  nop
    ctx->pc = 0x4efc28u;
    // NOP
label_4efc2c:
    // 0x4efc2c: 0x0  nop
    ctx->pc = 0x4efc2cu;
    // NOP
label_4efc30:
    // 0x4efc30: 0x0  nop
    ctx->pc = 0x4efc30u;
    // NOP
label_4efc34:
    // 0x4efc34: 0x0  nop
    ctx->pc = 0x4efc34u;
    // NOP
label_4efc38:
    // 0x4efc38: 0x0  nop
    ctx->pc = 0x4efc38u;
    // NOP
label_4efc3c:
    // 0x4efc3c: 0x0  nop
    ctx->pc = 0x4efc3cu;
    // NOP
label_4efc40:
    // 0x4efc40: 0x0  nop
    ctx->pc = 0x4efc40u;
    // NOP
label_4efc44:
    // 0x4efc44: 0x0  nop
    ctx->pc = 0x4efc44u;
    // NOP
label_4efc48:
    // 0x4efc48: 0x0  nop
    ctx->pc = 0x4efc48u;
    // NOP
label_4efc4c:
    // 0x4efc4c: 0x0  nop
    ctx->pc = 0x4efc4cu;
    // NOP
label_4efc50:
    // 0x4efc50: 0x0  nop
    ctx->pc = 0x4efc50u;
    // NOP
label_4efc54:
    // 0x4efc54: 0x0  nop
    ctx->pc = 0x4efc54u;
    // NOP
label_4efc58:
    // 0x4efc58: 0x0  nop
    ctx->pc = 0x4efc58u;
    // NOP
label_4efc5c:
    // 0x4efc5c: 0x0  nop
    ctx->pc = 0x4efc5cu;
    // NOP
label_4efc60:
    // 0x4efc60: 0x0  nop
    ctx->pc = 0x4efc60u;
    // NOP
label_4efc64:
    // 0x4efc64: 0x0  nop
    ctx->pc = 0x4efc64u;
    // NOP
label_4efc68:
    // 0x4efc68: 0x0  nop
    ctx->pc = 0x4efc68u;
    // NOP
label_4efc6c:
    // 0x4efc6c: 0x0  nop
    ctx->pc = 0x4efc6cu;
    // NOP
label_4efc70:
    // 0x4efc70: 0x0  nop
    ctx->pc = 0x4efc70u;
    // NOP
label_4efc74:
    // 0x4efc74: 0x0  nop
    ctx->pc = 0x4efc74u;
    // NOP
label_4efc78:
    // 0x4efc78: 0x0  nop
    ctx->pc = 0x4efc78u;
    // NOP
label_4efc7c:
    // 0x4efc7c: 0x0  nop
    ctx->pc = 0x4efc7cu;
    // NOP
label_4efc80:
    // 0x4efc80: 0x0  nop
    ctx->pc = 0x4efc80u;
    // NOP
label_4efc84:
    // 0x4efc84: 0x0  nop
    ctx->pc = 0x4efc84u;
    // NOP
label_4efc88:
    // 0x4efc88: 0x0  nop
    ctx->pc = 0x4efc88u;
    // NOP
label_4efc8c:
    // 0x4efc8c: 0x0  nop
    ctx->pc = 0x4efc8cu;
    // NOP
label_4efc90:
    // 0x4efc90: 0x0  nop
    ctx->pc = 0x4efc90u;
    // NOP
label_4efc94:
    // 0x4efc94: 0x0  nop
    ctx->pc = 0x4efc94u;
    // NOP
label_4efc98:
    // 0x4efc98: 0x0  nop
    ctx->pc = 0x4efc98u;
    // NOP
label_4efc9c:
    // 0x4efc9c: 0x0  nop
    ctx->pc = 0x4efc9cu;
    // NOP
label_4efca0:
    // 0x4efca0: 0x0  nop
    ctx->pc = 0x4efca0u;
    // NOP
label_4efca4:
    // 0x4efca4: 0x0  nop
    ctx->pc = 0x4efca4u;
    // NOP
label_4efca8:
    // 0x4efca8: 0x0  nop
    ctx->pc = 0x4efca8u;
    // NOP
label_4efcac:
    // 0x4efcac: 0x0  nop
    ctx->pc = 0x4efcacu;
    // NOP
label_4efcb0:
    // 0x4efcb0: 0x0  nop
    ctx->pc = 0x4efcb0u;
    // NOP
label_4efcb4:
    // 0x4efcb4: 0x0  nop
    ctx->pc = 0x4efcb4u;
    // NOP
label_4efcb8:
    // 0x4efcb8: 0x0  nop
    ctx->pc = 0x4efcb8u;
    // NOP
label_4efcbc:
    // 0x4efcbc: 0x0  nop
    ctx->pc = 0x4efcbcu;
    // NOP
label_4efcc0:
    // 0x4efcc0: 0x0  nop
    ctx->pc = 0x4efcc0u;
    // NOP
label_4efcc4:
    // 0x4efcc4: 0x0  nop
    ctx->pc = 0x4efcc4u;
    // NOP
label_4efcc8:
    // 0x4efcc8: 0x0  nop
    ctx->pc = 0x4efcc8u;
    // NOP
label_4efccc:
    // 0x4efccc: 0x0  nop
    ctx->pc = 0x4efcccu;
    // NOP
label_4efcd0:
    // 0x4efcd0: 0x0  nop
    ctx->pc = 0x4efcd0u;
    // NOP
label_4efcd4:
    // 0x4efcd4: 0x0  nop
    ctx->pc = 0x4efcd4u;
    // NOP
label_4efcd8:
    // 0x4efcd8: 0x0  nop
    ctx->pc = 0x4efcd8u;
    // NOP
label_4efcdc:
    // 0x4efcdc: 0x0  nop
    ctx->pc = 0x4efcdcu;
    // NOP
label_4efce0:
    // 0x4efce0: 0x0  nop
    ctx->pc = 0x4efce0u;
    // NOP
label_4efce4:
    // 0x4efce4: 0x0  nop
    ctx->pc = 0x4efce4u;
    // NOP
label_4efce8:
    // 0x4efce8: 0x0  nop
    ctx->pc = 0x4efce8u;
    // NOP
label_4efcec:
    // 0x4efcec: 0x0  nop
    ctx->pc = 0x4efcecu;
    // NOP
label_4efcf0:
    // 0x4efcf0: 0x0  nop
    ctx->pc = 0x4efcf0u;
    // NOP
label_4efcf4:
    // 0x4efcf4: 0x0  nop
    ctx->pc = 0x4efcf4u;
    // NOP
label_4efcf8:
    // 0x4efcf8: 0x0  nop
    ctx->pc = 0x4efcf8u;
    // NOP
label_4efcfc:
    // 0x4efcfc: 0x0  nop
    ctx->pc = 0x4efcfcu;
    // NOP
label_4efd00:
    // 0x4efd00: 0x0  nop
    ctx->pc = 0x4efd00u;
    // NOP
label_4efd04:
    // 0x4efd04: 0x0  nop
    ctx->pc = 0x4efd04u;
    // NOP
label_4efd08:
    // 0x4efd08: 0x0  nop
    ctx->pc = 0x4efd08u;
    // NOP
label_4efd0c:
    // 0x4efd0c: 0x0  nop
    ctx->pc = 0x4efd0cu;
    // NOP
label_4efd10:
    // 0x4efd10: 0x0  nop
    ctx->pc = 0x4efd10u;
    // NOP
label_4efd14:
    // 0x4efd14: 0x0  nop
    ctx->pc = 0x4efd14u;
    // NOP
label_4efd18:
    // 0x4efd18: 0x0  nop
    ctx->pc = 0x4efd18u;
    // NOP
label_4efd1c:
    // 0x4efd1c: 0x0  nop
    ctx->pc = 0x4efd1cu;
    // NOP
label_4efd20:
    // 0x4efd20: 0x0  nop
    ctx->pc = 0x4efd20u;
    // NOP
label_4efd24:
    // 0x4efd24: 0x0  nop
    ctx->pc = 0x4efd24u;
    // NOP
label_4efd28:
    // 0x4efd28: 0x0  nop
    ctx->pc = 0x4efd28u;
    // NOP
label_4efd2c:
    // 0x4efd2c: 0x0  nop
    ctx->pc = 0x4efd2cu;
    // NOP
label_4efd30:
    // 0x4efd30: 0x0  nop
    ctx->pc = 0x4efd30u;
    // NOP
label_4efd34:
    // 0x4efd34: 0x0  nop
    ctx->pc = 0x4efd34u;
    // NOP
label_4efd38:
    // 0x4efd38: 0x0  nop
    ctx->pc = 0x4efd38u;
    // NOP
label_4efd3c:
    // 0x4efd3c: 0x0  nop
    ctx->pc = 0x4efd3cu;
    // NOP
label_4efd40:
    // 0x4efd40: 0x0  nop
    ctx->pc = 0x4efd40u;
    // NOP
label_4efd44:
    // 0x4efd44: 0x0  nop
    ctx->pc = 0x4efd44u;
    // NOP
label_4efd48:
    // 0x4efd48: 0x0  nop
    ctx->pc = 0x4efd48u;
    // NOP
label_4efd4c:
    // 0x4efd4c: 0x0  nop
    ctx->pc = 0x4efd4cu;
    // NOP
label_4efd50:
    // 0x4efd50: 0x0  nop
    ctx->pc = 0x4efd50u;
    // NOP
label_4efd54:
    // 0x4efd54: 0x0  nop
    ctx->pc = 0x4efd54u;
    // NOP
label_4efd58:
    // 0x4efd58: 0x0  nop
    ctx->pc = 0x4efd58u;
    // NOP
label_4efd5c:
    // 0x4efd5c: 0x0  nop
    ctx->pc = 0x4efd5cu;
    // NOP
label_4efd60:
    // 0x4efd60: 0x0  nop
    ctx->pc = 0x4efd60u;
    // NOP
label_4efd64:
    // 0x4efd64: 0x0  nop
    ctx->pc = 0x4efd64u;
    // NOP
label_4efd68:
    // 0x4efd68: 0x0  nop
    ctx->pc = 0x4efd68u;
    // NOP
label_4efd6c:
    // 0x4efd6c: 0x0  nop
    ctx->pc = 0x4efd6cu;
    // NOP
label_4efd70:
    // 0x4efd70: 0x0  nop
    ctx->pc = 0x4efd70u;
    // NOP
label_4efd74:
    // 0x4efd74: 0x0  nop
    ctx->pc = 0x4efd74u;
    // NOP
label_4efd78:
    // 0x4efd78: 0x0  nop
    ctx->pc = 0x4efd78u;
    // NOP
label_4efd7c:
    // 0x4efd7c: 0x0  nop
    ctx->pc = 0x4efd7cu;
    // NOP
label_4efd80:
    // 0x4efd80: 0x0  nop
    ctx->pc = 0x4efd80u;
    // NOP
label_4efd84:
    // 0x4efd84: 0x0  nop
    ctx->pc = 0x4efd84u;
    // NOP
label_4efd88:
    // 0x4efd88: 0x0  nop
    ctx->pc = 0x4efd88u;
    // NOP
label_4efd8c:
    // 0x4efd8c: 0x0  nop
    ctx->pc = 0x4efd8cu;
    // NOP
label_4efd90:
    // 0x4efd90: 0x0  nop
    ctx->pc = 0x4efd90u;
    // NOP
label_4efd94:
    // 0x4efd94: 0x0  nop
    ctx->pc = 0x4efd94u;
    // NOP
label_4efd98:
    // 0x4efd98: 0x0  nop
    ctx->pc = 0x4efd98u;
    // NOP
label_4efd9c:
    // 0x4efd9c: 0x0  nop
    ctx->pc = 0x4efd9cu;
    // NOP
label_4efda0:
    // 0x4efda0: 0x0  nop
    ctx->pc = 0x4efda0u;
    // NOP
label_4efda4:
    // 0x4efda4: 0x0  nop
    ctx->pc = 0x4efda4u;
    // NOP
label_4efda8:
    // 0x4efda8: 0x0  nop
    ctx->pc = 0x4efda8u;
    // NOP
label_4efdac:
    // 0x4efdac: 0x0  nop
    ctx->pc = 0x4efdacu;
    // NOP
label_4efdb0:
    // 0x4efdb0: 0x0  nop
    ctx->pc = 0x4efdb0u;
    // NOP
label_4efdb4:
    // 0x4efdb4: 0x0  nop
    ctx->pc = 0x4efdb4u;
    // NOP
label_4efdb8:
    // 0x4efdb8: 0x0  nop
    ctx->pc = 0x4efdb8u;
    // NOP
label_4efdbc:
    // 0x4efdbc: 0x0  nop
    ctx->pc = 0x4efdbcu;
    // NOP
label_4efdc0:
    // 0x4efdc0: 0x0  nop
    ctx->pc = 0x4efdc0u;
    // NOP
label_4efdc4:
    // 0x4efdc4: 0x0  nop
    ctx->pc = 0x4efdc4u;
    // NOP
label_4efdc8:
    // 0x4efdc8: 0x0  nop
    ctx->pc = 0x4efdc8u;
    // NOP
label_4efdcc:
    // 0x4efdcc: 0x0  nop
    ctx->pc = 0x4efdccu;
    // NOP
label_4efdd0:
    // 0x4efdd0: 0x0  nop
    ctx->pc = 0x4efdd0u;
    // NOP
label_4efdd4:
    // 0x4efdd4: 0x0  nop
    ctx->pc = 0x4efdd4u;
    // NOP
label_4efdd8:
    // 0x4efdd8: 0x0  nop
    ctx->pc = 0x4efdd8u;
    // NOP
label_4efddc:
    // 0x4efddc: 0x0  nop
    ctx->pc = 0x4efddcu;
    // NOP
label_4efde0:
    // 0x4efde0: 0x0  nop
    ctx->pc = 0x4efde0u;
    // NOP
label_4efde4:
    // 0x4efde4: 0x0  nop
    ctx->pc = 0x4efde4u;
    // NOP
label_4efde8:
    // 0x4efde8: 0x0  nop
    ctx->pc = 0x4efde8u;
    // NOP
label_4efdec:
    // 0x4efdec: 0x0  nop
    ctx->pc = 0x4efdecu;
    // NOP
label_4efdf0:
    // 0x4efdf0: 0x0  nop
    ctx->pc = 0x4efdf0u;
    // NOP
label_4efdf4:
    // 0x4efdf4: 0x0  nop
    ctx->pc = 0x4efdf4u;
    // NOP
label_4efdf8:
    // 0x4efdf8: 0x0  nop
    ctx->pc = 0x4efdf8u;
    // NOP
label_4efdfc:
    // 0x4efdfc: 0x0  nop
    ctx->pc = 0x4efdfcu;
    // NOP
label_4efe00:
    // 0x4efe00: 0x0  nop
    ctx->pc = 0x4efe00u;
    // NOP
label_4efe04:
    // 0x4efe04: 0x0  nop
    ctx->pc = 0x4efe04u;
    // NOP
label_4efe08:
    // 0x4efe08: 0x0  nop
    ctx->pc = 0x4efe08u;
    // NOP
label_4efe0c:
    // 0x4efe0c: 0x0  nop
    ctx->pc = 0x4efe0cu;
    // NOP
label_4efe10:
    // 0x4efe10: 0x0  nop
    ctx->pc = 0x4efe10u;
    // NOP
label_4efe14:
    // 0x4efe14: 0x0  nop
    ctx->pc = 0x4efe14u;
    // NOP
label_4efe18:
    // 0x4efe18: 0x0  nop
    ctx->pc = 0x4efe18u;
    // NOP
label_4efe1c:
    // 0x4efe1c: 0x0  nop
    ctx->pc = 0x4efe1cu;
    // NOP
label_4efe20:
    // 0x4efe20: 0x0  nop
    ctx->pc = 0x4efe20u;
    // NOP
label_4efe24:
    // 0x4efe24: 0x0  nop
    ctx->pc = 0x4efe24u;
    // NOP
label_4efe28:
    // 0x4efe28: 0x0  nop
    ctx->pc = 0x4efe28u;
    // NOP
label_4efe2c:
    // 0x4efe2c: 0x0  nop
    ctx->pc = 0x4efe2cu;
    // NOP
label_4efe30:
    // 0x4efe30: 0x0  nop
    ctx->pc = 0x4efe30u;
    // NOP
label_4efe34:
    // 0x4efe34: 0x0  nop
    ctx->pc = 0x4efe34u;
    // NOP
label_4efe38:
    // 0x4efe38: 0x0  nop
    ctx->pc = 0x4efe38u;
    // NOP
label_4efe3c:
    // 0x4efe3c: 0x0  nop
    ctx->pc = 0x4efe3cu;
    // NOP
label_4efe40:
    // 0x4efe40: 0x0  nop
    ctx->pc = 0x4efe40u;
    // NOP
label_4efe44:
    // 0x4efe44: 0x0  nop
    ctx->pc = 0x4efe44u;
    // NOP
label_4efe48:
    // 0x4efe48: 0x0  nop
    ctx->pc = 0x4efe48u;
    // NOP
label_4efe4c:
    // 0x4efe4c: 0x0  nop
    ctx->pc = 0x4efe4cu;
    // NOP
label_4efe50:
    // 0x4efe50: 0x0  nop
    ctx->pc = 0x4efe50u;
    // NOP
label_4efe54:
    // 0x4efe54: 0x0  nop
    ctx->pc = 0x4efe54u;
    // NOP
label_4efe58:
    // 0x4efe58: 0x0  nop
    ctx->pc = 0x4efe58u;
    // NOP
label_4efe5c:
    // 0x4efe5c: 0x0  nop
    ctx->pc = 0x4efe5cu;
    // NOP
label_4efe60:
    // 0x4efe60: 0x0  nop
    ctx->pc = 0x4efe60u;
    // NOP
label_4efe64:
    // 0x4efe64: 0x0  nop
    ctx->pc = 0x4efe64u;
    // NOP
label_4efe68:
    // 0x4efe68: 0x0  nop
    ctx->pc = 0x4efe68u;
    // NOP
label_4efe6c:
    // 0x4efe6c: 0x0  nop
    ctx->pc = 0x4efe6cu;
    // NOP
label_4efe70:
    // 0x4efe70: 0x0  nop
    ctx->pc = 0x4efe70u;
    // NOP
label_4efe74:
    // 0x4efe74: 0x0  nop
    ctx->pc = 0x4efe74u;
    // NOP
label_4efe78:
    // 0x4efe78: 0x0  nop
    ctx->pc = 0x4efe78u;
    // NOP
label_4efe7c:
    // 0x4efe7c: 0x0  nop
    ctx->pc = 0x4efe7cu;
    // NOP
label_4efe80:
    // 0x4efe80: 0x0  nop
    ctx->pc = 0x4efe80u;
    // NOP
label_4efe84:
    // 0x4efe84: 0x0  nop
    ctx->pc = 0x4efe84u;
    // NOP
label_4efe88:
    // 0x4efe88: 0x0  nop
    ctx->pc = 0x4efe88u;
    // NOP
label_4efe8c:
    // 0x4efe8c: 0x0  nop
    ctx->pc = 0x4efe8cu;
    // NOP
label_4efe90:
    // 0x4efe90: 0x0  nop
    ctx->pc = 0x4efe90u;
    // NOP
label_4efe94:
    // 0x4efe94: 0x0  nop
    ctx->pc = 0x4efe94u;
    // NOP
label_4efe98:
    // 0x4efe98: 0x0  nop
    ctx->pc = 0x4efe98u;
    // NOP
label_4efe9c:
    // 0x4efe9c: 0x0  nop
    ctx->pc = 0x4efe9cu;
    // NOP
label_4efea0:
    // 0x4efea0: 0x0  nop
    ctx->pc = 0x4efea0u;
    // NOP
label_4efea4:
    // 0x4efea4: 0x0  nop
    ctx->pc = 0x4efea4u;
    // NOP
label_4efea8:
    // 0x4efea8: 0x0  nop
    ctx->pc = 0x4efea8u;
    // NOP
label_4efeac:
    // 0x4efeac: 0x0  nop
    ctx->pc = 0x4efeacu;
    // NOP
label_4efeb0:
    // 0x4efeb0: 0x0  nop
    ctx->pc = 0x4efeb0u;
    // NOP
label_4efeb4:
    // 0x4efeb4: 0x0  nop
    ctx->pc = 0x4efeb4u;
    // NOP
label_4efeb8:
    // 0x4efeb8: 0x0  nop
    ctx->pc = 0x4efeb8u;
    // NOP
label_4efebc:
    // 0x4efebc: 0x0  nop
    ctx->pc = 0x4efebcu;
    // NOP
label_4efec0:
    // 0x4efec0: 0x0  nop
    ctx->pc = 0x4efec0u;
    // NOP
label_4efec4:
    // 0x4efec4: 0x0  nop
    ctx->pc = 0x4efec4u;
    // NOP
label_4efec8:
    // 0x4efec8: 0x0  nop
    ctx->pc = 0x4efec8u;
    // NOP
label_4efecc:
    // 0x4efecc: 0x0  nop
    ctx->pc = 0x4efeccu;
    // NOP
label_4efed0:
    // 0x4efed0: 0x0  nop
    ctx->pc = 0x4efed0u;
    // NOP
label_4efed4:
    // 0x4efed4: 0x0  nop
    ctx->pc = 0x4efed4u;
    // NOP
label_4efed8:
    // 0x4efed8: 0x0  nop
    ctx->pc = 0x4efed8u;
    // NOP
label_4efedc:
    // 0x4efedc: 0x0  nop
    ctx->pc = 0x4efedcu;
    // NOP
label_4efee0:
    // 0x4efee0: 0x0  nop
    ctx->pc = 0x4efee0u;
    // NOP
label_4efee4:
    // 0x4efee4: 0x0  nop
    ctx->pc = 0x4efee4u;
    // NOP
label_4efee8:
    // 0x4efee8: 0x0  nop
    ctx->pc = 0x4efee8u;
    // NOP
label_4efeec:
    // 0x4efeec: 0x0  nop
    ctx->pc = 0x4efeecu;
    // NOP
label_4efef0:
    // 0x4efef0: 0x0  nop
    ctx->pc = 0x4efef0u;
    // NOP
label_4efef4:
    // 0x4efef4: 0x0  nop
    ctx->pc = 0x4efef4u;
    // NOP
label_4efef8:
    // 0x4efef8: 0x0  nop
    ctx->pc = 0x4efef8u;
    // NOP
label_4efefc:
    // 0x4efefc: 0x0  nop
    ctx->pc = 0x4efefcu;
    // NOP
label_4eff00:
    // 0x4eff00: 0x0  nop
    ctx->pc = 0x4eff00u;
    // NOP
label_4eff04:
    // 0x4eff04: 0x0  nop
    ctx->pc = 0x4eff04u;
    // NOP
label_4eff08:
    // 0x4eff08: 0x0  nop
    ctx->pc = 0x4eff08u;
    // NOP
label_4eff0c:
    // 0x4eff0c: 0x0  nop
    ctx->pc = 0x4eff0cu;
    // NOP
label_4eff10:
    // 0x4eff10: 0x0  nop
    ctx->pc = 0x4eff10u;
    // NOP
label_4eff14:
    // 0x4eff14: 0x0  nop
    ctx->pc = 0x4eff14u;
    // NOP
label_4eff18:
    // 0x4eff18: 0x0  nop
    ctx->pc = 0x4eff18u;
    // NOP
label_4eff1c:
    // 0x4eff1c: 0x0  nop
    ctx->pc = 0x4eff1cu;
    // NOP
label_4eff20:
    // 0x4eff20: 0x0  nop
    ctx->pc = 0x4eff20u;
    // NOP
label_4eff24:
    // 0x4eff24: 0x0  nop
    ctx->pc = 0x4eff24u;
    // NOP
label_4eff28:
    // 0x4eff28: 0x0  nop
    ctx->pc = 0x4eff28u;
    // NOP
label_4eff2c:
    // 0x4eff2c: 0x0  nop
    ctx->pc = 0x4eff2cu;
    // NOP
label_4eff30:
    // 0x4eff30: 0x0  nop
    ctx->pc = 0x4eff30u;
    // NOP
label_4eff34:
    // 0x4eff34: 0x0  nop
    ctx->pc = 0x4eff34u;
    // NOP
label_4eff38:
    // 0x4eff38: 0x0  nop
    ctx->pc = 0x4eff38u;
    // NOP
label_4eff3c:
    // 0x4eff3c: 0x0  nop
    ctx->pc = 0x4eff3cu;
    // NOP
label_4eff40:
    // 0x4eff40: 0x0  nop
    ctx->pc = 0x4eff40u;
    // NOP
label_4eff44:
    // 0x4eff44: 0x0  nop
    ctx->pc = 0x4eff44u;
    // NOP
label_4eff48:
    // 0x4eff48: 0x0  nop
    ctx->pc = 0x4eff48u;
    // NOP
label_4eff4c:
    // 0x4eff4c: 0x0  nop
    ctx->pc = 0x4eff4cu;
    // NOP
label_4eff50:
    // 0x4eff50: 0x0  nop
    ctx->pc = 0x4eff50u;
    // NOP
label_4eff54:
    // 0x4eff54: 0x0  nop
    ctx->pc = 0x4eff54u;
    // NOP
label_4eff58:
    // 0x4eff58: 0x0  nop
    ctx->pc = 0x4eff58u;
    // NOP
label_4eff5c:
    // 0x4eff5c: 0x0  nop
    ctx->pc = 0x4eff5cu;
    // NOP
label_4eff60:
    // 0x4eff60: 0x0  nop
    ctx->pc = 0x4eff60u;
    // NOP
label_4eff64:
    // 0x4eff64: 0x0  nop
    ctx->pc = 0x4eff64u;
    // NOP
label_4eff68:
    // 0x4eff68: 0x0  nop
    ctx->pc = 0x4eff68u;
    // NOP
label_4eff6c:
    // 0x4eff6c: 0x0  nop
    ctx->pc = 0x4eff6cu;
    // NOP
label_4eff70:
    // 0x4eff70: 0x0  nop
    ctx->pc = 0x4eff70u;
    // NOP
label_4eff74:
    // 0x4eff74: 0x0  nop
    ctx->pc = 0x4eff74u;
    // NOP
label_4eff78:
    // 0x4eff78: 0x0  nop
    ctx->pc = 0x4eff78u;
    // NOP
label_4eff7c:
    // 0x4eff7c: 0x0  nop
    ctx->pc = 0x4eff7cu;
    // NOP
label_4eff80:
    // 0x4eff80: 0x0  nop
    ctx->pc = 0x4eff80u;
    // NOP
label_4eff84:
    // 0x4eff84: 0x0  nop
    ctx->pc = 0x4eff84u;
    // NOP
label_4eff88:
    // 0x4eff88: 0x0  nop
    ctx->pc = 0x4eff88u;
    // NOP
label_4eff8c:
    // 0x4eff8c: 0x0  nop
    ctx->pc = 0x4eff8cu;
    // NOP
label_4eff90:
    // 0x4eff90: 0x0  nop
    ctx->pc = 0x4eff90u;
    // NOP
label_4eff94:
    // 0x4eff94: 0x0  nop
    ctx->pc = 0x4eff94u;
    // NOP
label_4eff98:
    // 0x4eff98: 0x0  nop
    ctx->pc = 0x4eff98u;
    // NOP
label_4eff9c:
    // 0x4eff9c: 0x0  nop
    ctx->pc = 0x4eff9cu;
    // NOP
label_4effa0:
    // 0x4effa0: 0x0  nop
    ctx->pc = 0x4effa0u;
    // NOP
label_4effa4:
    // 0x4effa4: 0x0  nop
    ctx->pc = 0x4effa4u;
    // NOP
label_4effa8:
    // 0x4effa8: 0x0  nop
    ctx->pc = 0x4effa8u;
    // NOP
label_4effac:
    // 0x4effac: 0x0  nop
    ctx->pc = 0x4effacu;
    // NOP
label_4effb0:
    // 0x4effb0: 0x0  nop
    ctx->pc = 0x4effb0u;
    // NOP
label_4effb4:
    // 0x4effb4: 0x0  nop
    ctx->pc = 0x4effb4u;
    // NOP
label_4effb8:
    // 0x4effb8: 0x0  nop
    ctx->pc = 0x4effb8u;
    // NOP
label_4effbc:
    // 0x4effbc: 0x0  nop
    ctx->pc = 0x4effbcu;
    // NOP
label_4effc0:
    // 0x4effc0: 0x0  nop
    ctx->pc = 0x4effc0u;
    // NOP
label_4effc4:
    // 0x4effc4: 0x0  nop
    ctx->pc = 0x4effc4u;
    // NOP
label_4effc8:
    // 0x4effc8: 0x0  nop
    ctx->pc = 0x4effc8u;
    // NOP
label_4effcc:
    // 0x4effcc: 0x0  nop
    ctx->pc = 0x4effccu;
    // NOP
label_4effd0:
    // 0x4effd0: 0x0  nop
    ctx->pc = 0x4effd0u;
    // NOP
label_4effd4:
    // 0x4effd4: 0x0  nop
    ctx->pc = 0x4effd4u;
    // NOP
label_4effd8:
    // 0x4effd8: 0x0  nop
    ctx->pc = 0x4effd8u;
    // NOP
label_4effdc:
    // 0x4effdc: 0x0  nop
    ctx->pc = 0x4effdcu;
    // NOP
label_4effe0:
    // 0x4effe0: 0x0  nop
    ctx->pc = 0x4effe0u;
    // NOP
label_4effe4:
    // 0x4effe4: 0x0  nop
    ctx->pc = 0x4effe4u;
    // NOP
label_4effe8:
    // 0x4effe8: 0x0  nop
    ctx->pc = 0x4effe8u;
    // NOP
label_4effec:
    // 0x4effec: 0x0  nop
    ctx->pc = 0x4effecu;
    // NOP
label_4efff0:
    // 0x4efff0: 0x0  nop
    ctx->pc = 0x4efff0u;
    // NOP
label_4efff4:
    // 0x4efff4: 0x0  nop
    ctx->pc = 0x4efff4u;
    // NOP
label_4efff8:
    // 0x4efff8: 0x0  nop
    ctx->pc = 0x4efff8u;
    // NOP
label_4efffc:
    // 0x4efffc: 0x0  nop
    ctx->pc = 0x4efffcu;
    // NOP
label_4f0000:
    // 0x4f0000: 0x0  nop
    ctx->pc = 0x4f0000u;
    // NOP
label_4f0004:
    // 0x4f0004: 0x0  nop
    ctx->pc = 0x4f0004u;
    // NOP
label_4f0008:
    // 0x4f0008: 0x0  nop
    ctx->pc = 0x4f0008u;
    // NOP
label_4f000c:
    // 0x4f000c: 0x0  nop
    ctx->pc = 0x4f000cu;
    // NOP
label_4f0010:
    // 0x4f0010: 0x0  nop
    ctx->pc = 0x4f0010u;
    // NOP
label_4f0014:
    // 0x4f0014: 0x0  nop
    ctx->pc = 0x4f0014u;
    // NOP
label_4f0018:
    // 0x4f0018: 0x0  nop
    ctx->pc = 0x4f0018u;
    // NOP
label_4f001c:
    // 0x4f001c: 0x0  nop
    ctx->pc = 0x4f001cu;
    // NOP
label_4f0020:
    // 0x4f0020: 0x0  nop
    ctx->pc = 0x4f0020u;
    // NOP
label_4f0024:
    // 0x4f0024: 0x0  nop
    ctx->pc = 0x4f0024u;
    // NOP
label_4f0028:
    // 0x4f0028: 0x0  nop
    ctx->pc = 0x4f0028u;
    // NOP
label_4f002c:
    // 0x4f002c: 0x0  nop
    ctx->pc = 0x4f002cu;
    // NOP
label_4f0030:
    // 0x4f0030: 0x0  nop
    ctx->pc = 0x4f0030u;
    // NOP
label_4f0034:
    // 0x4f0034: 0x0  nop
    ctx->pc = 0x4f0034u;
    // NOP
label_4f0038:
    // 0x4f0038: 0x0  nop
    ctx->pc = 0x4f0038u;
    // NOP
label_4f003c:
    // 0x4f003c: 0x0  nop
    ctx->pc = 0x4f003cu;
    // NOP
label_4f0040:
    // 0x4f0040: 0x0  nop
    ctx->pc = 0x4f0040u;
    // NOP
label_4f0044:
    // 0x4f0044: 0x0  nop
    ctx->pc = 0x4f0044u;
    // NOP
label_4f0048:
    // 0x4f0048: 0x0  nop
    ctx->pc = 0x4f0048u;
    // NOP
label_4f004c:
    // 0x4f004c: 0x0  nop
    ctx->pc = 0x4f004cu;
    // NOP
label_4f0050:
    // 0x4f0050: 0x0  nop
    ctx->pc = 0x4f0050u;
    // NOP
label_4f0054:
    // 0x4f0054: 0x0  nop
    ctx->pc = 0x4f0054u;
    // NOP
label_4f0058:
    // 0x4f0058: 0x0  nop
    ctx->pc = 0x4f0058u;
    // NOP
label_4f005c:
    // 0x4f005c: 0x0  nop
    ctx->pc = 0x4f005cu;
    // NOP
label_4f0060:
    // 0x4f0060: 0x0  nop
    ctx->pc = 0x4f0060u;
    // NOP
label_4f0064:
    // 0x4f0064: 0x0  nop
    ctx->pc = 0x4f0064u;
    // NOP
label_4f0068:
    // 0x4f0068: 0x0  nop
    ctx->pc = 0x4f0068u;
    // NOP
label_4f006c:
    // 0x4f006c: 0x0  nop
    ctx->pc = 0x4f006cu;
    // NOP
label_4f0070:
    // 0x4f0070: 0x0  nop
    ctx->pc = 0x4f0070u;
    // NOP
label_4f0074:
    // 0x4f0074: 0x0  nop
    ctx->pc = 0x4f0074u;
    // NOP
label_4f0078:
    // 0x4f0078: 0x0  nop
    ctx->pc = 0x4f0078u;
    // NOP
label_4f007c:
    // 0x4f007c: 0x0  nop
    ctx->pc = 0x4f007cu;
    // NOP
label_4f0080:
    // 0x4f0080: 0x0  nop
    ctx->pc = 0x4f0080u;
    // NOP
label_4f0084:
    // 0x4f0084: 0x0  nop
    ctx->pc = 0x4f0084u;
    // NOP
label_4f0088:
    // 0x4f0088: 0x0  nop
    ctx->pc = 0x4f0088u;
    // NOP
label_4f008c:
    // 0x4f008c: 0x0  nop
    ctx->pc = 0x4f008cu;
    // NOP
label_4f0090:
    // 0x4f0090: 0x0  nop
    ctx->pc = 0x4f0090u;
    // NOP
label_4f0094:
    // 0x4f0094: 0x0  nop
    ctx->pc = 0x4f0094u;
    // NOP
label_4f0098:
    // 0x4f0098: 0x0  nop
    ctx->pc = 0x4f0098u;
    // NOP
label_4f009c:
    // 0x4f009c: 0x0  nop
    ctx->pc = 0x4f009cu;
    // NOP
label_4f00a0:
    // 0x4f00a0: 0x0  nop
    ctx->pc = 0x4f00a0u;
    // NOP
label_4f00a4:
    // 0x4f00a4: 0x0  nop
    ctx->pc = 0x4f00a4u;
    // NOP
label_4f00a8:
    // 0x4f00a8: 0x0  nop
    ctx->pc = 0x4f00a8u;
    // NOP
label_4f00ac:
    // 0x4f00ac: 0x0  nop
    ctx->pc = 0x4f00acu;
    // NOP
label_4f00b0:
    // 0x4f00b0: 0x0  nop
    ctx->pc = 0x4f00b0u;
    // NOP
label_4f00b4:
    // 0x4f00b4: 0x0  nop
    ctx->pc = 0x4f00b4u;
    // NOP
label_4f00b8:
    // 0x4f00b8: 0x0  nop
    ctx->pc = 0x4f00b8u;
    // NOP
label_4f00bc:
    // 0x4f00bc: 0x0  nop
    ctx->pc = 0x4f00bcu;
    // NOP
label_4f00c0:
    // 0x4f00c0: 0x0  nop
    ctx->pc = 0x4f00c0u;
    // NOP
label_4f00c4:
    // 0x4f00c4: 0x0  nop
    ctx->pc = 0x4f00c4u;
    // NOP
label_4f00c8:
    // 0x4f00c8: 0x0  nop
    ctx->pc = 0x4f00c8u;
    // NOP
label_4f00cc:
    // 0x4f00cc: 0x0  nop
    ctx->pc = 0x4f00ccu;
    // NOP
    ctx->pc = 0x4f00d0u;
}
