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

// Function: sub_003AB9E0
// Address: 0x3ab9e0 - 0x3abfc8
void sub_003AB9E0_0x3ab9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB9E0_0x3ab9e0");
#endif

    switch (ctx->pc) {
        case 0x3ab9e0u: goto label_3ab9e0;
        case 0x3ab9e4u: goto label_3ab9e4;
        case 0x3ab9e8u: goto label_3ab9e8;
        case 0x3ab9ecu: goto label_3ab9ec;
        case 0x3ab9f0u: goto label_3ab9f0;
        case 0x3ab9f4u: goto label_3ab9f4;
        case 0x3ab9f8u: goto label_3ab9f8;
        case 0x3ab9fcu: goto label_3ab9fc;
        case 0x3aba00u: goto label_3aba00;
        case 0x3aba04u: goto label_3aba04;
        case 0x3aba08u: goto label_3aba08;
        case 0x3aba0cu: goto label_3aba0c;
        case 0x3aba10u: goto label_3aba10;
        case 0x3aba14u: goto label_3aba14;
        case 0x3aba18u: goto label_3aba18;
        case 0x3aba1cu: goto label_3aba1c;
        case 0x3aba20u: goto label_3aba20;
        case 0x3aba24u: goto label_3aba24;
        case 0x3aba28u: goto label_3aba28;
        case 0x3aba2cu: goto label_3aba2c;
        case 0x3aba30u: goto label_3aba30;
        case 0x3aba34u: goto label_3aba34;
        case 0x3aba38u: goto label_3aba38;
        case 0x3aba3cu: goto label_3aba3c;
        case 0x3aba40u: goto label_3aba40;
        case 0x3aba44u: goto label_3aba44;
        case 0x3aba48u: goto label_3aba48;
        case 0x3aba4cu: goto label_3aba4c;
        case 0x3aba50u: goto label_3aba50;
        case 0x3aba54u: goto label_3aba54;
        case 0x3aba58u: goto label_3aba58;
        case 0x3aba5cu: goto label_3aba5c;
        case 0x3aba60u: goto label_3aba60;
        case 0x3aba64u: goto label_3aba64;
        case 0x3aba68u: goto label_3aba68;
        case 0x3aba6cu: goto label_3aba6c;
        case 0x3aba70u: goto label_3aba70;
        case 0x3aba74u: goto label_3aba74;
        case 0x3aba78u: goto label_3aba78;
        case 0x3aba7cu: goto label_3aba7c;
        case 0x3aba80u: goto label_3aba80;
        case 0x3aba84u: goto label_3aba84;
        case 0x3aba88u: goto label_3aba88;
        case 0x3aba8cu: goto label_3aba8c;
        case 0x3aba90u: goto label_3aba90;
        case 0x3aba94u: goto label_3aba94;
        case 0x3aba98u: goto label_3aba98;
        case 0x3aba9cu: goto label_3aba9c;
        case 0x3abaa0u: goto label_3abaa0;
        case 0x3abaa4u: goto label_3abaa4;
        case 0x3abaa8u: goto label_3abaa8;
        case 0x3abaacu: goto label_3abaac;
        case 0x3abab0u: goto label_3abab0;
        case 0x3abab4u: goto label_3abab4;
        case 0x3abab8u: goto label_3abab8;
        case 0x3ababcu: goto label_3ababc;
        case 0x3abac0u: goto label_3abac0;
        case 0x3abac4u: goto label_3abac4;
        case 0x3abac8u: goto label_3abac8;
        case 0x3abaccu: goto label_3abacc;
        case 0x3abad0u: goto label_3abad0;
        case 0x3abad4u: goto label_3abad4;
        case 0x3abad8u: goto label_3abad8;
        case 0x3abadcu: goto label_3abadc;
        case 0x3abae0u: goto label_3abae0;
        case 0x3abae4u: goto label_3abae4;
        case 0x3abae8u: goto label_3abae8;
        case 0x3abaecu: goto label_3abaec;
        case 0x3abaf0u: goto label_3abaf0;
        case 0x3abaf4u: goto label_3abaf4;
        case 0x3abaf8u: goto label_3abaf8;
        case 0x3abafcu: goto label_3abafc;
        case 0x3abb00u: goto label_3abb00;
        case 0x3abb04u: goto label_3abb04;
        case 0x3abb08u: goto label_3abb08;
        case 0x3abb0cu: goto label_3abb0c;
        case 0x3abb10u: goto label_3abb10;
        case 0x3abb14u: goto label_3abb14;
        case 0x3abb18u: goto label_3abb18;
        case 0x3abb1cu: goto label_3abb1c;
        case 0x3abb20u: goto label_3abb20;
        case 0x3abb24u: goto label_3abb24;
        case 0x3abb28u: goto label_3abb28;
        case 0x3abb2cu: goto label_3abb2c;
        case 0x3abb30u: goto label_3abb30;
        case 0x3abb34u: goto label_3abb34;
        case 0x3abb38u: goto label_3abb38;
        case 0x3abb3cu: goto label_3abb3c;
        case 0x3abb40u: goto label_3abb40;
        case 0x3abb44u: goto label_3abb44;
        case 0x3abb48u: goto label_3abb48;
        case 0x3abb4cu: goto label_3abb4c;
        case 0x3abb50u: goto label_3abb50;
        case 0x3abb54u: goto label_3abb54;
        case 0x3abb58u: goto label_3abb58;
        case 0x3abb5cu: goto label_3abb5c;
        case 0x3abb60u: goto label_3abb60;
        case 0x3abb64u: goto label_3abb64;
        case 0x3abb68u: goto label_3abb68;
        case 0x3abb6cu: goto label_3abb6c;
        case 0x3abb70u: goto label_3abb70;
        case 0x3abb74u: goto label_3abb74;
        case 0x3abb78u: goto label_3abb78;
        case 0x3abb7cu: goto label_3abb7c;
        case 0x3abb80u: goto label_3abb80;
        case 0x3abb84u: goto label_3abb84;
        case 0x3abb88u: goto label_3abb88;
        case 0x3abb8cu: goto label_3abb8c;
        case 0x3abb90u: goto label_3abb90;
        case 0x3abb94u: goto label_3abb94;
        case 0x3abb98u: goto label_3abb98;
        case 0x3abb9cu: goto label_3abb9c;
        case 0x3abba0u: goto label_3abba0;
        case 0x3abba4u: goto label_3abba4;
        case 0x3abba8u: goto label_3abba8;
        case 0x3abbacu: goto label_3abbac;
        case 0x3abbb0u: goto label_3abbb0;
        case 0x3abbb4u: goto label_3abbb4;
        case 0x3abbb8u: goto label_3abbb8;
        case 0x3abbbcu: goto label_3abbbc;
        case 0x3abbc0u: goto label_3abbc0;
        case 0x3abbc4u: goto label_3abbc4;
        case 0x3abbc8u: goto label_3abbc8;
        case 0x3abbccu: goto label_3abbcc;
        case 0x3abbd0u: goto label_3abbd0;
        case 0x3abbd4u: goto label_3abbd4;
        case 0x3abbd8u: goto label_3abbd8;
        case 0x3abbdcu: goto label_3abbdc;
        case 0x3abbe0u: goto label_3abbe0;
        case 0x3abbe4u: goto label_3abbe4;
        case 0x3abbe8u: goto label_3abbe8;
        case 0x3abbecu: goto label_3abbec;
        case 0x3abbf0u: goto label_3abbf0;
        case 0x3abbf4u: goto label_3abbf4;
        case 0x3abbf8u: goto label_3abbf8;
        case 0x3abbfcu: goto label_3abbfc;
        case 0x3abc00u: goto label_3abc00;
        case 0x3abc04u: goto label_3abc04;
        case 0x3abc08u: goto label_3abc08;
        case 0x3abc0cu: goto label_3abc0c;
        case 0x3abc10u: goto label_3abc10;
        case 0x3abc14u: goto label_3abc14;
        case 0x3abc18u: goto label_3abc18;
        case 0x3abc1cu: goto label_3abc1c;
        case 0x3abc20u: goto label_3abc20;
        case 0x3abc24u: goto label_3abc24;
        case 0x3abc28u: goto label_3abc28;
        case 0x3abc2cu: goto label_3abc2c;
        case 0x3abc30u: goto label_3abc30;
        case 0x3abc34u: goto label_3abc34;
        case 0x3abc38u: goto label_3abc38;
        case 0x3abc3cu: goto label_3abc3c;
        case 0x3abc40u: goto label_3abc40;
        case 0x3abc44u: goto label_3abc44;
        case 0x3abc48u: goto label_3abc48;
        case 0x3abc4cu: goto label_3abc4c;
        case 0x3abc50u: goto label_3abc50;
        case 0x3abc54u: goto label_3abc54;
        case 0x3abc58u: goto label_3abc58;
        case 0x3abc5cu: goto label_3abc5c;
        case 0x3abc60u: goto label_3abc60;
        case 0x3abc64u: goto label_3abc64;
        case 0x3abc68u: goto label_3abc68;
        case 0x3abc6cu: goto label_3abc6c;
        case 0x3abc70u: goto label_3abc70;
        case 0x3abc74u: goto label_3abc74;
        case 0x3abc78u: goto label_3abc78;
        case 0x3abc7cu: goto label_3abc7c;
        case 0x3abc80u: goto label_3abc80;
        case 0x3abc84u: goto label_3abc84;
        case 0x3abc88u: goto label_3abc88;
        case 0x3abc8cu: goto label_3abc8c;
        case 0x3abc90u: goto label_3abc90;
        case 0x3abc94u: goto label_3abc94;
        case 0x3abc98u: goto label_3abc98;
        case 0x3abc9cu: goto label_3abc9c;
        case 0x3abca0u: goto label_3abca0;
        case 0x3abca4u: goto label_3abca4;
        case 0x3abca8u: goto label_3abca8;
        case 0x3abcacu: goto label_3abcac;
        case 0x3abcb0u: goto label_3abcb0;
        case 0x3abcb4u: goto label_3abcb4;
        case 0x3abcb8u: goto label_3abcb8;
        case 0x3abcbcu: goto label_3abcbc;
        case 0x3abcc0u: goto label_3abcc0;
        case 0x3abcc4u: goto label_3abcc4;
        case 0x3abcc8u: goto label_3abcc8;
        case 0x3abcccu: goto label_3abccc;
        case 0x3abcd0u: goto label_3abcd0;
        case 0x3abcd4u: goto label_3abcd4;
        case 0x3abcd8u: goto label_3abcd8;
        case 0x3abcdcu: goto label_3abcdc;
        case 0x3abce0u: goto label_3abce0;
        case 0x3abce4u: goto label_3abce4;
        case 0x3abce8u: goto label_3abce8;
        case 0x3abcecu: goto label_3abcec;
        case 0x3abcf0u: goto label_3abcf0;
        case 0x3abcf4u: goto label_3abcf4;
        case 0x3abcf8u: goto label_3abcf8;
        case 0x3abcfcu: goto label_3abcfc;
        case 0x3abd00u: goto label_3abd00;
        case 0x3abd04u: goto label_3abd04;
        case 0x3abd08u: goto label_3abd08;
        case 0x3abd0cu: goto label_3abd0c;
        case 0x3abd10u: goto label_3abd10;
        case 0x3abd14u: goto label_3abd14;
        case 0x3abd18u: goto label_3abd18;
        case 0x3abd1cu: goto label_3abd1c;
        case 0x3abd20u: goto label_3abd20;
        case 0x3abd24u: goto label_3abd24;
        case 0x3abd28u: goto label_3abd28;
        case 0x3abd2cu: goto label_3abd2c;
        case 0x3abd30u: goto label_3abd30;
        case 0x3abd34u: goto label_3abd34;
        case 0x3abd38u: goto label_3abd38;
        case 0x3abd3cu: goto label_3abd3c;
        case 0x3abd40u: goto label_3abd40;
        case 0x3abd44u: goto label_3abd44;
        case 0x3abd48u: goto label_3abd48;
        case 0x3abd4cu: goto label_3abd4c;
        case 0x3abd50u: goto label_3abd50;
        case 0x3abd54u: goto label_3abd54;
        case 0x3abd58u: goto label_3abd58;
        case 0x3abd5cu: goto label_3abd5c;
        case 0x3abd60u: goto label_3abd60;
        case 0x3abd64u: goto label_3abd64;
        case 0x3abd68u: goto label_3abd68;
        case 0x3abd6cu: goto label_3abd6c;
        case 0x3abd70u: goto label_3abd70;
        case 0x3abd74u: goto label_3abd74;
        case 0x3abd78u: goto label_3abd78;
        case 0x3abd7cu: goto label_3abd7c;
        case 0x3abd80u: goto label_3abd80;
        case 0x3abd84u: goto label_3abd84;
        case 0x3abd88u: goto label_3abd88;
        case 0x3abd8cu: goto label_3abd8c;
        case 0x3abd90u: goto label_3abd90;
        case 0x3abd94u: goto label_3abd94;
        case 0x3abd98u: goto label_3abd98;
        case 0x3abd9cu: goto label_3abd9c;
        case 0x3abda0u: goto label_3abda0;
        case 0x3abda4u: goto label_3abda4;
        case 0x3abda8u: goto label_3abda8;
        case 0x3abdacu: goto label_3abdac;
        case 0x3abdb0u: goto label_3abdb0;
        case 0x3abdb4u: goto label_3abdb4;
        case 0x3abdb8u: goto label_3abdb8;
        case 0x3abdbcu: goto label_3abdbc;
        case 0x3abdc0u: goto label_3abdc0;
        case 0x3abdc4u: goto label_3abdc4;
        case 0x3abdc8u: goto label_3abdc8;
        case 0x3abdccu: goto label_3abdcc;
        case 0x3abdd0u: goto label_3abdd0;
        case 0x3abdd4u: goto label_3abdd4;
        case 0x3abdd8u: goto label_3abdd8;
        case 0x3abddcu: goto label_3abddc;
        case 0x3abde0u: goto label_3abde0;
        case 0x3abde4u: goto label_3abde4;
        case 0x3abde8u: goto label_3abde8;
        case 0x3abdecu: goto label_3abdec;
        case 0x3abdf0u: goto label_3abdf0;
        case 0x3abdf4u: goto label_3abdf4;
        case 0x3abdf8u: goto label_3abdf8;
        case 0x3abdfcu: goto label_3abdfc;
        case 0x3abe00u: goto label_3abe00;
        case 0x3abe04u: goto label_3abe04;
        case 0x3abe08u: goto label_3abe08;
        case 0x3abe0cu: goto label_3abe0c;
        case 0x3abe10u: goto label_3abe10;
        case 0x3abe14u: goto label_3abe14;
        case 0x3abe18u: goto label_3abe18;
        case 0x3abe1cu: goto label_3abe1c;
        case 0x3abe20u: goto label_3abe20;
        case 0x3abe24u: goto label_3abe24;
        case 0x3abe28u: goto label_3abe28;
        case 0x3abe2cu: goto label_3abe2c;
        case 0x3abe30u: goto label_3abe30;
        case 0x3abe34u: goto label_3abe34;
        case 0x3abe38u: goto label_3abe38;
        case 0x3abe3cu: goto label_3abe3c;
        case 0x3abe40u: goto label_3abe40;
        case 0x3abe44u: goto label_3abe44;
        case 0x3abe48u: goto label_3abe48;
        case 0x3abe4cu: goto label_3abe4c;
        case 0x3abe50u: goto label_3abe50;
        case 0x3abe54u: goto label_3abe54;
        case 0x3abe58u: goto label_3abe58;
        case 0x3abe5cu: goto label_3abe5c;
        case 0x3abe60u: goto label_3abe60;
        case 0x3abe64u: goto label_3abe64;
        case 0x3abe68u: goto label_3abe68;
        case 0x3abe6cu: goto label_3abe6c;
        case 0x3abe70u: goto label_3abe70;
        case 0x3abe74u: goto label_3abe74;
        case 0x3abe78u: goto label_3abe78;
        case 0x3abe7cu: goto label_3abe7c;
        case 0x3abe80u: goto label_3abe80;
        case 0x3abe84u: goto label_3abe84;
        case 0x3abe88u: goto label_3abe88;
        case 0x3abe8cu: goto label_3abe8c;
        case 0x3abe90u: goto label_3abe90;
        case 0x3abe94u: goto label_3abe94;
        case 0x3abe98u: goto label_3abe98;
        case 0x3abe9cu: goto label_3abe9c;
        case 0x3abea0u: goto label_3abea0;
        case 0x3abea4u: goto label_3abea4;
        case 0x3abea8u: goto label_3abea8;
        case 0x3abeacu: goto label_3abeac;
        case 0x3abeb0u: goto label_3abeb0;
        case 0x3abeb4u: goto label_3abeb4;
        case 0x3abeb8u: goto label_3abeb8;
        case 0x3abebcu: goto label_3abebc;
        case 0x3abec0u: goto label_3abec0;
        case 0x3abec4u: goto label_3abec4;
        case 0x3abec8u: goto label_3abec8;
        case 0x3abeccu: goto label_3abecc;
        case 0x3abed0u: goto label_3abed0;
        case 0x3abed4u: goto label_3abed4;
        case 0x3abed8u: goto label_3abed8;
        case 0x3abedcu: goto label_3abedc;
        case 0x3abee0u: goto label_3abee0;
        case 0x3abee4u: goto label_3abee4;
        case 0x3abee8u: goto label_3abee8;
        case 0x3abeecu: goto label_3abeec;
        case 0x3abef0u: goto label_3abef0;
        case 0x3abef4u: goto label_3abef4;
        case 0x3abef8u: goto label_3abef8;
        case 0x3abefcu: goto label_3abefc;
        case 0x3abf00u: goto label_3abf00;
        case 0x3abf04u: goto label_3abf04;
        case 0x3abf08u: goto label_3abf08;
        case 0x3abf0cu: goto label_3abf0c;
        case 0x3abf10u: goto label_3abf10;
        case 0x3abf14u: goto label_3abf14;
        case 0x3abf18u: goto label_3abf18;
        case 0x3abf1cu: goto label_3abf1c;
        case 0x3abf20u: goto label_3abf20;
        case 0x3abf24u: goto label_3abf24;
        case 0x3abf28u: goto label_3abf28;
        case 0x3abf2cu: goto label_3abf2c;
        case 0x3abf30u: goto label_3abf30;
        case 0x3abf34u: goto label_3abf34;
        case 0x3abf38u: goto label_3abf38;
        case 0x3abf3cu: goto label_3abf3c;
        case 0x3abf40u: goto label_3abf40;
        case 0x3abf44u: goto label_3abf44;
        case 0x3abf48u: goto label_3abf48;
        case 0x3abf4cu: goto label_3abf4c;
        case 0x3abf50u: goto label_3abf50;
        case 0x3abf54u: goto label_3abf54;
        case 0x3abf58u: goto label_3abf58;
        case 0x3abf5cu: goto label_3abf5c;
        case 0x3abf60u: goto label_3abf60;
        case 0x3abf64u: goto label_3abf64;
        case 0x3abf68u: goto label_3abf68;
        case 0x3abf6cu: goto label_3abf6c;
        case 0x3abf70u: goto label_3abf70;
        case 0x3abf74u: goto label_3abf74;
        case 0x3abf78u: goto label_3abf78;
        case 0x3abf7cu: goto label_3abf7c;
        case 0x3abf80u: goto label_3abf80;
        case 0x3abf84u: goto label_3abf84;
        case 0x3abf88u: goto label_3abf88;
        case 0x3abf8cu: goto label_3abf8c;
        case 0x3abf90u: goto label_3abf90;
        case 0x3abf94u: goto label_3abf94;
        case 0x3abf98u: goto label_3abf98;
        case 0x3abf9cu: goto label_3abf9c;
        case 0x3abfa0u: goto label_3abfa0;
        case 0x3abfa4u: goto label_3abfa4;
        case 0x3abfa8u: goto label_3abfa8;
        case 0x3abfacu: goto label_3abfac;
        case 0x3abfb0u: goto label_3abfb0;
        case 0x3abfb4u: goto label_3abfb4;
        case 0x3abfb8u: goto label_3abfb8;
        case 0x3abfbcu: goto label_3abfbc;
        case 0x3abfc0u: goto label_3abfc0;
        case 0x3abfc4u: goto label_3abfc4;
        default: break;
    }

    ctx->pc = 0x3ab9e0u;

label_3ab9e0:
    // 0x3ab9e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3ab9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3ab9e4:
    // 0x3ab9e4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3ab9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3ab9e8:
    // 0x3ab9e8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3ab9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3ab9ec:
    // 0x3ab9ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ab9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab9f0:
    // 0x3ab9f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ab9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ab9f4:
    // 0x3ab9f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3ab9f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab9f8:
    // 0x3ab9f8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3ab9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3ab9fc:
    // 0x3ab9fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3ab9fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aba00:
    // 0x3aba00: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3aba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3aba04:
    // 0x3aba04: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3aba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3aba08:
    // 0x3aba08: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3aba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3aba0c:
    // 0x3aba0c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3aba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3aba10:
    // 0x3aba10: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3aba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3aba14:
    // 0x3aba14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3aba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3aba18:
    // 0x3aba18: 0xc1036d2  jal         func_40DB48
label_3aba1c:
    if (ctx->pc == 0x3ABA1Cu) {
        ctx->pc = 0x3ABA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA18u;
        // 0x3aba1c: 0x8ec40134  lw          $a0, 0x134($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA20u;
        goto label_3aba20;
    }
    ctx->pc = 0x3ABA18u;
    SET_GPR_U32(ctx, 31, 0x3ABA20u);
    ctx->pc = 0x3ABA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA18u;
    // 0x3aba1c: 0x8ec40134  lw          $a0, 0x134($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3ABA18u, 0x3ABA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA20u;
label_3aba20:
    // 0x3aba20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3aba20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aba24:
    // 0x3aba24: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x3aba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_3aba28:
    // 0x3aba28: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_3aba2c:
    if (ctx->pc == 0x3ABA2Cu) {
        ctx->pc = 0x3ABA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA28u;
        // 0x3aba2c: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA30u;
        goto label_3aba30;
    }
    ctx->pc = 0x3ABA28u;
    {
        const bool branch_taken_0x3aba28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3ABA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA28u;
        // 0x3aba2c: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba28) {
            ctx->pc = 0x3ABAA0u;
            goto label_3abaa0;
        }
    }
    ctx->pc = 0x3ABA30u;
label_3aba30:
    // 0x3aba30: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3aba30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aba34:
    // 0x3aba34: 0x26f4001c  addiu       $s4, $s7, 0x1C
    ctx->pc = 0x3aba34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
label_3aba38:
    // 0x3aba38: 0x26f30008  addiu       $s3, $s7, 0x8
    ctx->pc = 0x3aba38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_3aba3c:
    // 0x3aba3c: 0x26f10018  addiu       $s1, $s7, 0x18
    ctx->pc = 0x3aba3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_3aba40:
    // 0x3aba40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aba44:
    // 0x3aba44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aba44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aba48:
    // 0x3aba48: 0xc103454  jal         func_40D150
label_3aba4c:
    if (ctx->pc == 0x3ABA4Cu) {
        ctx->pc = 0x3ABA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA48u;
        // 0x3aba4c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA50u;
        goto label_3aba50;
    }
    ctx->pc = 0x3ABA48u;
    SET_GPR_U32(ctx, 31, 0x3ABA50u);
    ctx->pc = 0x3ABA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA48u;
    // 0x3aba4c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3ABA48u, 0x3ABA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA50u;
label_3aba50:
    // 0x3aba50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3aba54:
    if (ctx->pc == 0x3ABA54u) {
        ctx->pc = 0x3ABA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA50u;
        // 0x3aba54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA58u;
        goto label_3aba58;
    }
    ctx->pc = 0x3ABA50u;
    {
        const bool branch_taken_0x3aba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA50u;
        // 0x3aba54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba50) {
            ctx->pc = 0x3ABAB8u;
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABA58u;
label_3aba58:
    // 0x3aba58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aba58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aba5c:
    // 0x3aba5c: 0xc103454  jal         func_40D150
label_3aba60:
    if (ctx->pc == 0x3ABA60u) {
        ctx->pc = 0x3ABA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA5Cu;
        // 0x3aba60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA64u;
        goto label_3aba64;
    }
    ctx->pc = 0x3ABA5Cu;
    SET_GPR_U32(ctx, 31, 0x3ABA64u);
    ctx->pc = 0x3ABA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA5Cu;
    // 0x3aba60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3ABA5Cu, 0x3ABA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA64u;
label_3aba64:
    // 0x3aba64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3aba68:
    if (ctx->pc == 0x3ABA68u) {
        ctx->pc = 0x3ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA64u;
        // 0x3aba68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA6Cu;
        goto label_3aba6c;
    }
    ctx->pc = 0x3ABA64u;
    {
        const bool branch_taken_0x3aba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA64u;
        // 0x3aba68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba64) {
            ctx->pc = 0x3ABAB8u;
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABA6Cu;
label_3aba6c:
    // 0x3aba6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aba6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aba70:
    // 0x3aba70: 0xc10480a  jal         func_412028
label_3aba74:
    if (ctx->pc == 0x3ABA74u) {
        ctx->pc = 0x3ABA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA70u;
        // 0x3aba74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA78u;
        goto label_3aba78;
    }
    ctx->pc = 0x3ABA70u;
    SET_GPR_U32(ctx, 31, 0x3ABA78u);
    ctx->pc = 0x3ABA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA70u;
    // 0x3aba74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3ABA70u, 0x3ABA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA78u;
label_3aba78:
    // 0x3aba78: 0x145e000f  bne         $v0, $fp, . + 4 + (0xF << 2)
label_3aba7c:
    if (ctx->pc == 0x3ABA7Cu) {
        ctx->pc = 0x3ABA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA78u;
        // 0x3aba7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA80u;
        goto label_3aba80;
    }
    ctx->pc = 0x3ABA78u;
    {
        const bool branch_taken_0x3aba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x3ABA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA78u;
        // 0x3aba7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba78) {
            ctx->pc = 0x3ABAB8u;
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABA80u;
label_3aba80:
    // 0x3aba80: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x3aba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_3aba84:
    // 0x3aba84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3aba84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3aba88:
    // 0x3aba88: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x3aba88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3aba8c:
    // 0x3aba8c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3aba8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3aba90:
    // 0x3aba90: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x3aba90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3aba94:
    // 0x3aba94: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x3aba94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3aba98:
    // 0x3aba98: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_3aba9c:
    if (ctx->pc == 0x3ABA9Cu) {
        ctx->pc = 0x3ABA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA98u;
        // 0x3aba9c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAA0u;
        goto label_3abaa0;
    }
    ctx->pc = 0x3ABA98u;
    {
        const bool branch_taken_0x3aba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA98u;
        // 0x3aba9c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba98) {
            ctx->pc = 0x3ABA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aba40;
        }
    }
    ctx->pc = 0x3ABAA0u;
label_3abaa0:
    // 0x3abaa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3abaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3abaa4:
    // 0x3abaa4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3abaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3abaa8:
    // 0x3abaa8: 0xc103468  jal         func_40D1A0
label_3abaac:
    if (ctx->pc == 0x3ABAACu) {
        ctx->pc = 0x3ABAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAA8u;
        // 0x3abaac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAB0u;
        goto label_3abab0;
    }
    ctx->pc = 0x3ABAA8u;
    SET_GPR_U32(ctx, 31, 0x3ABAB0u);
    ctx->pc = 0x3ABAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAA8u;
    // 0x3abaac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABAA8u, 0x3ABAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAB0u;
label_3abab0:
    // 0x3abab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3abab4:
    if (ctx->pc == 0x3ABAB4u) {
        ctx->pc = 0x3ABAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAB0u;
        // 0x3abab4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAB8u;
        goto label_3abab8;
    }
    ctx->pc = 0x3ABAB0u;
    {
        const bool branch_taken_0x3abab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAB0u;
        // 0x3abab4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abab0) {
            ctx->pc = 0x3ABAC0u;
            goto label_3abac0;
        }
    }
    ctx->pc = 0x3ABAB8u;
label_3abab8:
    // 0x3abab8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_3ababc:
    if (ctx->pc == 0x3ABABCu) {
        ctx->pc = 0x3ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAB8u;
        // 0x3ababc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAC0u;
        goto label_3abac0;
    }
    ctx->pc = 0x3ABAB8u;
    {
        const bool branch_taken_0x3abab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAB8u;
        // 0x3ababc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abab8) {
            ctx->pc = 0x3ABC64u;
            goto label_3abc64;
        }
    }
    ctx->pc = 0x3ABAC0u;
label_3abac0:
    // 0x3abac0: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3abac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3abac4:
    // 0x3abac4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_3abac8:
    if (ctx->pc == 0x3ABAC8u) {
        ctx->pc = 0x3ABAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAC4u;
        // 0x3abac8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABACCu;
        goto label_3abacc;
    }
    ctx->pc = 0x3ABAC4u;
    {
        const bool branch_taken_0x3abac4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3ABAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAC4u;
        // 0x3abac8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abac4) {
            ctx->pc = 0x3ABB0Cu;
            goto label_3abb0c;
        }
    }
    ctx->pc = 0x3ABACCu;
label_3abacc:
    // 0x3abacc: 0x26d10014  addiu       $s1, $s6, 0x14
    ctx->pc = 0x3abaccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_3abad0:
    // 0x3abad0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3abad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3abad4:
    // 0x3abad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3abad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3abad8:
    // 0x3abad8: 0xc10480a  jal         func_412028
label_3abadc:
    if (ctx->pc == 0x3ABADCu) {
        ctx->pc = 0x3ABADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAD8u;
        // 0x3abadc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAE0u;
        goto label_3abae0;
    }
    ctx->pc = 0x3ABAD8u;
    SET_GPR_U32(ctx, 31, 0x3ABAE0u);
    ctx->pc = 0x3ABADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAD8u;
    // 0x3abadc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3ABAD8u, 0x3ABAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAE0u;
label_3abae0:
    // 0x3abae0: 0x1452fff5  bne         $v0, $s2, . + 4 + (-0xB << 2)
label_3abae4:
    if (ctx->pc == 0x3ABAE4u) {
        ctx->pc = 0x3ABAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAE0u;
        // 0x3abae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAE8u;
        goto label_3abae8;
    }
    ctx->pc = 0x3ABAE0u;
    {
        const bool branch_taken_0x3abae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3ABAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAE0u;
        // 0x3abae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abae0) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABAE8u;
label_3abae8:
    // 0x3abae8: 0xc107fa4  jal         func_41FE90
label_3abaec:
    if (ctx->pc == 0x3ABAECu) {
        ctx->pc = 0x3ABAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAE8u;
        // 0x3abaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAF0u;
        goto label_3abaf0;
    }
    ctx->pc = 0x3ABAE8u;
    SET_GPR_U32(ctx, 31, 0x3ABAF0u);
    ctx->pc = 0x3ABAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAE8u;
    // 0x3abaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x3ABAE8u, 0x3ABAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAF0u;
label_3abaf0:
    // 0x3abaf0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_3abaf4:
    if (ctx->pc == 0x3ABAF4u) {
        ctx->pc = 0x3ABAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAF0u;
        // 0x3abaf4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAF8u;
        goto label_3abaf8;
    }
    ctx->pc = 0x3ABAF0u;
    {
        const bool branch_taken_0x3abaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAF0u;
        // 0x3abaf4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abaf0) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABAF8u;
label_3abaf8:
    // 0x3abaf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3abaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3abafc:
    // 0x3abafc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3abafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3abb00:
    // 0x3abb00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3abb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3abb04:
    // 0x3abb04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3abb08:
    if (ctx->pc == 0x3ABB08u) {
        ctx->pc = 0x3ABB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB04u;
        // 0x3abb08: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB0Cu;
        goto label_3abb0c;
    }
    ctx->pc = 0x3ABB04u;
    {
        const bool branch_taken_0x3abb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB04u;
        // 0x3abb08: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb04) {
            ctx->pc = 0x3ABAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abad0;
        }
    }
    ctx->pc = 0x3ABB0Cu;
label_3abb0c:
    // 0x3abb0c: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x3abb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_3abb10:
    // 0x3abb10: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
label_3abb14:
    if (ctx->pc == 0x3ABB14u) {
        ctx->pc = 0x3ABB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB10u;
        // 0x3abb14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB18u;
        goto label_3abb18;
    }
    ctx->pc = 0x3ABB10u;
    {
        const bool branch_taken_0x3abb10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3ABB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB10u;
        // 0x3abb14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb10) {
            ctx->pc = 0x3ABC4Cu;
            goto label_3abc4c;
        }
    }
    ctx->pc = 0x3ABB18u;
label_3abb18:
    // 0x3abb18: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3abb18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abb1c:
    // 0x3abb1c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3abb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3abb20:
    // 0x3abb20: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3abb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3abb24:
    // 0x3abb24: 0x26c70014  addiu       $a3, $s6, 0x14
    ctx->pc = 0x3abb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_3abb28:
    // 0x3abb28: 0x19200019  blez        $t1, . + 4 + (0x19 << 2)
label_3abb2c:
    if (ctx->pc == 0x3ABB2Cu) {
        ctx->pc = 0x3ABB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB28u;
        // 0x3abb2c: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB30u;
        goto label_3abb30;
    }
    ctx->pc = 0x3ABB28u;
    {
        const bool branch_taken_0x3abb28 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3ABB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB28u;
        // 0x3abb2c: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb28) {
            ctx->pc = 0x3ABB90u;
            goto label_3abb90;
        }
    }
    ctx->pc = 0x3ABB30u;
label_3abb30:
    // 0x3abb30: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_3abb34:
    if (ctx->pc == 0x3ABB34u) {
        ctx->pc = 0x3ABB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB30u;
        // 0x3abb34: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB38u;
        goto label_3abb38;
    }
    ctx->pc = 0x3ABB30u;
    {
        const bool branch_taken_0x3abb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB30u;
        // 0x3abb34: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb30) {
            ctx->pc = 0x3ABBBCu;
            goto label_3abbbc;
        }
    }
    ctx->pc = 0x3ABB38u;
label_3abb38:
    // 0x3abb38: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3abb3c:
    if (ctx->pc == 0x3ABB3Cu) {
        ctx->pc = 0x3ABB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB38u;
        // 0x3abb3c: 0x80a20018  lb          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB40u;
        goto label_3abb40;
    }
    ctx->pc = 0x3ABB38u;
    {
        const bool branch_taken_0x3abb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abb38) {
            ctx->pc = 0x3ABB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB38u;
            // 0x3abb3c: 0x80a20018  lb          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB94u;
            goto label_3abb94;
        }
    }
    ctx->pc = 0x3ABB40u;
label_3abb40:
    // 0x3abb40: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3abb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3abb44:
    // 0x3abb44: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3abb48:
    if (ctx->pc == 0x3ABB48u) {
        ctx->pc = 0x3ABB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB44u;
        // 0x3abb48: 0x80a20018  lb          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB4Cu;
        goto label_3abb4c;
    }
    ctx->pc = 0x3ABB44u;
    {
        const bool branch_taken_0x3abb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB44u;
        // 0x3abb48: 0x80a20018  lb          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb44) {
            ctx->pc = 0x3ABB70u;
            goto label_3abb70;
        }
    }
    ctx->pc = 0x3ABB4Cu;
label_3abb4c:
    // 0x3abb4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abb50:
    // 0x3abb50: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abb54:
    // 0x3abb54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abb58:
    // 0x3abb58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abb5c:
    // 0x3abb5c: 0x1080ffd6  beqz        $a0, . + 4 + (-0x2A << 2)
label_3abb60:
    if (ctx->pc == 0x3ABB60u) {
        ctx->pc = 0x3ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB5Cu;
        // 0x3abb60: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB64u;
        goto label_3abb64;
    }
    ctx->pc = 0x3ABB5Cu;
    {
        const bool branch_taken_0x3abb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB5Cu;
        // 0x3abb60: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb5c) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABB64u;
label_3abb64:
    // 0x3abb64: 0x24c50024  addiu       $a1, $a2, 0x24
    ctx->pc = 0x3abb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_3abb68:
    // 0x3abb68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3abb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3abb6c:
    // 0x3abb6c: 0x80a20018  lb          $v0, 0x18($a1)
    ctx->pc = 0x3abb6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_3abb70:
    // 0x3abb70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abb74:
    // 0x3abb74: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abb78:
    // 0x3abb78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abb7c:
    // 0x3abb7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abb80:
    // 0x3abb80: 0x1080ffcd  beqz        $a0, . + 4 + (-0x33 << 2)
label_3abb84:
    if (ctx->pc == 0x3ABB84u) {
        ctx->pc = 0x3ABB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB80u;
        // 0x3abb84: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB88u;
        goto label_3abb88;
    }
    ctx->pc = 0x3ABB80u;
    {
        const bool branch_taken_0x3abb80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB80u;
        // 0x3abb84: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb80) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABB88u;
label_3abb88:
    // 0x3abb88: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3abb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_3abb8c:
    // 0x3abb8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3abb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3abb90:
    // 0x3abb90: 0x80a20018  lb          $v0, 0x18($a1)
    ctx->pc = 0x3abb90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_3abb94:
    // 0x3abb94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abb98:
    // 0x3abb98: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abb9c:
    // 0x3abb9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abba0:
    // 0x3abba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abba4:
    // 0x3abba4: 0x1080ffc4  beqz        $a0, . + 4 + (-0x3C << 2)
label_3abba8:
    if (ctx->pc == 0x3ABBA8u) {
        ctx->pc = 0x3ABBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBA4u;
        // 0x3abba8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBACu;
        goto label_3abbac;
    }
    ctx->pc = 0x3ABBA4u;
    {
        const bool branch_taken_0x3abba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBA4u;
        // 0x3abba8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abba4) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABBACu;
label_3abbac:
    // 0x3abbac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3abbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3abbb0:
    // 0x3abbb0: 0x209102a  slt         $v0, $s0, $t1
    ctx->pc = 0x3abbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3abbb4:
    // 0x3abbb4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3abbb8:
    if (ctx->pc == 0x3ABBB8u) {
        ctx->pc = 0x3ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBB4u;
        // 0x3abbb8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBBCu;
        goto label_3abbbc;
    }
    ctx->pc = 0x3ABBB4u;
    {
        const bool branch_taken_0x3abbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBB4u;
        // 0x3abbb8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbb4) {
            ctx->pc = 0x3ABC4Cu;
            goto label_3abc4c;
        }
    }
    ctx->pc = 0x3ABBBCu;
label_3abbbc:
    // 0x3abbbc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3abbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abbc0:
    // 0x3abbc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3abbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3abbc4:
    // 0x3abbc4: 0x0  nop
    ctx->pc = 0x3abbc4u;
    // NOP
label_3abbc8:
    // 0x3abbc8: 0x80c20018  lb          $v0, 0x18($a2)
    ctx->pc = 0x3abbc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_3abbcc:
    // 0x3abbcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abbd0:
    // 0x3abbd0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abbd4:
    // 0x3abbd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abbd8:
    // 0x3abbd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abbdc:
    // 0x3abbdc: 0x1080ffb6  beqz        $a0, . + 4 + (-0x4A << 2)
label_3abbe0:
    if (ctx->pc == 0x3ABBE0u) {
        ctx->pc = 0x3ABBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBDCu;
        // 0x3abbe0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBE4u;
        goto label_3abbe4;
    }
    ctx->pc = 0x3ABBDCu;
    {
        const bool branch_taken_0x3abbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBDCu;
        // 0x3abbe0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbdc) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABBE4u;
label_3abbe4:
    // 0x3abbe4: 0x80c20038  lb          $v0, 0x38($a2)
    ctx->pc = 0x3abbe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 56)));
label_3abbe8:
    // 0x3abbe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abbec:
    // 0x3abbec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abbf0:
    // 0x3abbf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abbf4:
    // 0x3abbf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abbf8:
    // 0x3abbf8: 0x1080ffaf  beqz        $a0, . + 4 + (-0x51 << 2)
label_3abbfc:
    if (ctx->pc == 0x3ABBFCu) {
        ctx->pc = 0x3ABBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBF8u;
        // 0x3abbfc: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC00u;
        goto label_3abc00;
    }
    ctx->pc = 0x3ABBF8u;
    {
        const bool branch_taken_0x3abbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBF8u;
        // 0x3abbfc: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbf8) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABC00u;
label_3abc00:
    // 0x3abc00: 0x80c20058  lb          $v0, 0x58($a2)
    ctx->pc = 0x3abc00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 88)));
label_3abc04:
    // 0x3abc04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abc08:
    // 0x3abc08: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abc0c:
    // 0x3abc0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abc10:
    // 0x3abc10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abc14:
    // 0x3abc14: 0x1080ffa8  beqz        $a0, . + 4 + (-0x58 << 2)
label_3abc18:
    if (ctx->pc == 0x3ABC18u) {
        ctx->pc = 0x3ABC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC14u;
        // 0x3abc18: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC1Cu;
        goto label_3abc1c;
    }
    ctx->pc = 0x3ABC14u;
    {
        const bool branch_taken_0x3abc14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC14u;
        // 0x3abc18: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc14) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABC1Cu;
label_3abc1c:
    // 0x3abc1c: 0x80c20078  lb          $v0, 0x78($a2)
    ctx->pc = 0x3abc1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 120)));
label_3abc20:
    // 0x3abc20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3abc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3abc24:
    // 0x3abc24: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3abc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3abc28:
    // 0x3abc28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3abc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3abc2c:
    // 0x3abc2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3abc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3abc30:
    // 0x3abc30: 0x1080ffa1  beqz        $a0, . + 4 + (-0x5F << 2)
label_3abc34:
    if (ctx->pc == 0x3ABC34u) {
        ctx->pc = 0x3ABC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC30u;
        // 0x3abc34: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC38u;
        goto label_3abc38;
    }
    ctx->pc = 0x3ABC30u;
    {
        const bool branch_taken_0x3abc30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC30u;
        // 0x3abc34: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc30) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABC38u;
label_3abc38:
    // 0x3abc38: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3abc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3abc3c:
    // 0x3abc3c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x3abc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_3abc40:
    // 0x3abc40: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x3abc40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3abc44:
    // 0x3abc44: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3abc48:
    if (ctx->pc == 0x3ABC48u) {
        ctx->pc = 0x3ABC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC44u;
        // 0x3abc48: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC4Cu;
        goto label_3abc4c;
    }
    ctx->pc = 0x3ABC44u;
    {
        const bool branch_taken_0x3abc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC44u;
        // 0x3abc48: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc44) {
            ctx->pc = 0x3ABBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abbc8;
        }
    }
    ctx->pc = 0x3ABC4Cu;
label_3abc4c:
    // 0x3abc4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x3abc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_3abc50:
    // 0x3abc50: 0xaec0013c  sw          $zero, 0x13C($s6)
    ctx->pc = 0x3abc50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 316), GPR_U32(ctx, 0));
label_3abc54:
    // 0x3abc54: 0x2442c538  addiu       $v0, $v0, -0x3AC8
    ctx->pc = 0x3abc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952248));
label_3abc58:
    // 0x3abc58: 0xaec00140  sw          $zero, 0x140($s6)
    ctx->pc = 0x3abc58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 320), GPR_U32(ctx, 0));
label_3abc5c:
    // 0x3abc5c: 0xaec20138  sw          $v0, 0x138($s6)
    ctx->pc = 0x3abc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 312), GPR_U32(ctx, 2));
label_3abc60:
    // 0x3abc60: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3abc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3abc64:
    // 0x3abc64: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3abc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3abc68:
    // 0x3abc68: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3abc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3abc6c:
    // 0x3abc6c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3abc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3abc70:
    // 0x3abc70: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3abc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3abc74:
    // 0x3abc74: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3abc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3abc78:
    // 0x3abc78: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3abc78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3abc7c:
    // 0x3abc7c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3abc7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3abc80:
    // 0x3abc80: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3abc80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3abc84:
    // 0x3abc84: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3abc84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3abc88:
    // 0x3abc88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3abc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3abc8c:
    // 0x3abc8c: 0x3e00008  jr          $ra
label_3abc90:
    if (ctx->pc == 0x3ABC90u) {
        ctx->pc = 0x3ABC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC8Cu;
        // 0x3abc90: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC94u;
        goto label_3abc94;
    }
    ctx->pc = 0x3ABC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC8Cu;
        // 0x3abc90: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABC94u;
label_3abc94:
    // 0x3abc94: 0x0  nop
    ctx->pc = 0x3abc94u;
    // NOP
label_3abc98:
    // 0x3abc98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3abc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3abc9c:
    // 0x3abc9c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3abc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3abca0:
    // 0x3abca0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3abca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3abca4:
    // 0x3abca4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3abca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3abca8:
    // 0x3abca8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3abca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3abcac:
    // 0x3abcac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3abcacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3abcb0:
    // 0x3abcb0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3abcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3abcb4:
    // 0x3abcb4: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x3abcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3abcb8:
    // 0x3abcb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3abcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3abcbc:
    // 0x3abcbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3abcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3abcc0:
    // 0x3abcc0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3abcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3abcc4:
    // 0x3abcc4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3abcc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3abcc8:
    // 0x3abcc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3abcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3abccc:
    // 0x3abccc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3abcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3abcd0:
    // 0x3abcd0: 0x8ca40508  lw          $a0, 0x508($a1)
    ctx->pc = 0x3abcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1288)));
label_3abcd4:
    // 0x3abcd4: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3abcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3abcd8:
    // 0x3abcd8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3abcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3abcdc:
    // 0x3abcdc: 0x40f809  jalr        $v0
label_3abce0:
    if (ctx->pc == 0x3ABCE0u) {
        ctx->pc = 0x3ABCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCDCu;
        // 0x3abce0: 0x34a50199  ori         $a1, $a1, 0x199 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)409);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCE4u;
        goto label_3abce4;
    }
    ctx->pc = 0x3ABCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABCE4u);
        ctx->pc = 0x3ABCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCDCu;
        // 0x3abce0: 0x34a50199  ori         $a1, $a1, 0x199 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)409);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABCDCu, 0x3ABCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABCE4u;
label_3abce4:
    // 0x3abce4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3abce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abce8:
    // 0x3abce8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3abcec:
    if (ctx->pc == 0x3ABCECu) {
        ctx->pc = 0x3ABCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCE8u;
        // 0x3abcec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCF0u;
        goto label_3abcf0;
    }
    ctx->pc = 0x3ABCE8u;
    {
        const bool branch_taken_0x3abce8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCE8u;
        // 0x3abcec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abce8) {
            ctx->pc = 0x3ABCF8u;
            goto label_3abcf8;
        }
    }
    ctx->pc = 0x3ABCF0u;
label_3abcf0:
    // 0x3abcf0: 0x10000033  b           . + 4 + (0x33 << 2)
label_3abcf4:
    if (ctx->pc == 0x3ABCF4u) {
        ctx->pc = 0x3ABCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCF0u;
        // 0x3abcf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCF8u;
        goto label_3abcf8;
    }
    ctx->pc = 0x3ABCF0u;
    {
        const bool branch_taken_0x3abcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCF0u;
        // 0x3abcf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcf0) {
            ctx->pc = 0x3ABDC0u;
            goto label_3abdc0;
        }
    }
    ctx->pc = 0x3ABCF8u;
label_3abcf8:
    // 0x3abcf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3abcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3abcfc:
    // 0x3abcfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3abcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3abd00:
    // 0x3abd00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3abd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3abd04:
    // 0x3abd04: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x3abd04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_3abd08:
    // 0x3abd08: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3abd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3abd0c:
    // 0x3abd0c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3abd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3abd10:
    // 0x3abd10: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3abd14:
    // 0x3abd14: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3abd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3abd18:
    // 0x3abd18: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3abd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3abd1c:
    // 0x3abd1c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3abd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3abd20:
    // 0x3abd20: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x3abd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_3abd24:
    // 0x3abd24: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3abd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_3abd28:
    // 0x3abd28: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x3abd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_3abd2c:
    // 0x3abd2c: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x3abd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_3abd30:
    // 0x3abd30: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3abd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3abd34:
    // 0x3abd34: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3abd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3abd38:
    // 0x3abd38: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x3abd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
label_3abd3c:
    // 0x3abd3c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3abd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3abd40:
    // 0x3abd40: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x3abd40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_3abd44:
    // 0x3abd44: 0xc103642  jal         func_40D908
label_3abd48:
    if (ctx->pc == 0x3ABD48u) {
        ctx->pc = 0x3ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD44u;
        // 0x3abd48: 0xae20012c  sw          $zero, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD4Cu;
        goto label_3abd4c;
    }
    ctx->pc = 0x3ABD44u;
    SET_GPR_U32(ctx, 31, 0x3ABD4Cu);
    ctx->pc = 0x3ABD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD44u;
    // 0x3abd48: 0xae20012c  sw          $zero, 0x12C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3ABD44u, 0x3ABD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD4Cu;
label_3abd4c:
    // 0x3abd4c: 0x26109268  addiu       $s0, $s0, -0x6D98
    ctx->pc = 0x3abd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939240));
label_3abd50:
    // 0x3abd50: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x3abd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
label_3abd54:
    // 0x3abd54: 0xae300138  sw          $s0, 0x138($s1)
    ctx->pc = 0x3abd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 16));
label_3abd58:
    // 0x3abd58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3abd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3abd5c:
    // 0x3abd5c: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x3abd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
label_3abd60:
    // 0x3abd60: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x3abd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3abd64:
    // 0x3abd64: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x3abd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_3abd68:
    // 0x3abd68: 0x26220122  addiu       $v0, $s1, 0x122
    ctx->pc = 0x3abd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 290));
label_3abd6c:
    // 0x3abd6c: 0x0  nop
    ctx->pc = 0x3abd6cu;
    // NOP
label_3abd70:
    // 0x3abd70: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3abd70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3abd74:
    // 0x3abd74: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x3abd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_3abd78:
    // 0x3abd78: 0xa443fffe  sh          $v1, -0x2($v0)
    ctx->pc = 0x3abd78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 3));
label_3abd7c:
    // 0x3abd7c: 0xa443fffc  sh          $v1, -0x4($v0)
    ctx->pc = 0x3abd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 3));
label_3abd80:
    // 0x3abd80: 0xa443fffa  sh          $v1, -0x6($v0)
    ctx->pc = 0x3abd80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967290), (uint16_t)GPR_U32(ctx, 3));
label_3abd84:
    // 0x3abd84: 0xa443fff8  sh          $v1, -0x8($v0)
    ctx->pc = 0x3abd84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 3));
label_3abd88:
    // 0x3abd88: 0xa443fff6  sh          $v1, -0xA($v0)
    ctx->pc = 0x3abd88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967286), (uint16_t)GPR_U32(ctx, 3));
label_3abd8c:
    // 0x3abd8c: 0xa443fff4  sh          $v1, -0xC($v0)
    ctx->pc = 0x3abd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 3));
label_3abd90:
    // 0x3abd90: 0xa443fff2  sh          $v1, -0xE($v0)
    ctx->pc = 0x3abd90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967282), (uint16_t)GPR_U32(ctx, 3));
label_3abd94:
    // 0x3abd94: 0xa443fff0  sh          $v1, -0x10($v0)
    ctx->pc = 0x3abd94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967280), (uint16_t)GPR_U32(ctx, 3));
label_3abd98:
    // 0x3abd98: 0xa443ffee  sh          $v1, -0x12($v0)
    ctx->pc = 0x3abd98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967278), (uint16_t)GPR_U32(ctx, 3));
label_3abd9c:
    // 0x3abd9c: 0xa443ffec  sh          $v1, -0x14($v0)
    ctx->pc = 0x3abd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967276), (uint16_t)GPR_U32(ctx, 3));
label_3abda0:
    // 0x3abda0: 0xa443ffea  sh          $v1, -0x16($v0)
    ctx->pc = 0x3abda0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967274), (uint16_t)GPR_U32(ctx, 3));
label_3abda4:
    // 0x3abda4: 0xa443ffe8  sh          $v1, -0x18($v0)
    ctx->pc = 0x3abda4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967272), (uint16_t)GPR_U32(ctx, 3));
label_3abda8:
    // 0x3abda8: 0xa443ffe6  sh          $v1, -0x1A($v0)
    ctx->pc = 0x3abda8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967270), (uint16_t)GPR_U32(ctx, 3));
label_3abdac:
    // 0x3abdac: 0xa443ffe4  sh          $v1, -0x1C($v0)
    ctx->pc = 0x3abdacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967268), (uint16_t)GPR_U32(ctx, 3));
label_3abdb0:
    // 0x3abdb0: 0xa443ffe2  sh          $v1, -0x1E($v0)
    ctx->pc = 0x3abdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967266), (uint16_t)GPR_U32(ctx, 3));
label_3abdb4:
    // 0x3abdb4: 0x481ffee  bgez        $a0, . + 4 + (-0x12 << 2)
label_3abdb8:
    if (ctx->pc == 0x3ABDB8u) {
        ctx->pc = 0x3ABDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDB4u;
        // 0x3abdb8: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDBCu;
        goto label_3abdbc;
    }
    ctx->pc = 0x3ABDB4u;
    {
        const bool branch_taken_0x3abdb4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3ABDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDB4u;
        // 0x3abdb8: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdb4) {
            ctx->pc = 0x3ABD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abd70;
        }
    }
    ctx->pc = 0x3ABDBCu;
label_3abdbc:
    // 0x3abdbc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3abdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3abdc0:
    // 0x3abdc0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3abdc4:
    if (ctx->pc == 0x3ABDC4u) {
        ctx->pc = 0x3ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDC0u;
        // 0x3abdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDC8u;
        goto label_3abdc8;
    }
    ctx->pc = 0x3ABDC0u;
    {
        const bool branch_taken_0x3abdc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDC0u;
        // 0x3abdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdc0) {
            ctx->pc = 0x3ABDDCu;
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABDC8u;
label_3abdc8:
    // 0x3abdc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3abdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3abdcc:
    // 0x3abdcc: 0xc103468  jal         func_40D1A0
label_3abdd0:
    if (ctx->pc == 0x3ABDD0u) {
        ctx->pc = 0x3ABDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDCCu;
        // 0x3abdd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDD4u;
        goto label_3abdd4;
    }
    ctx->pc = 0x3ABDCCu;
    SET_GPR_U32(ctx, 31, 0x3ABDD4u);
    ctx->pc = 0x3ABDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDCCu;
    // 0x3abdd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABDCCu, 0x3ABDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDD4u;
label_3abdd4:
    // 0x3abdd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3abdd8:
    if (ctx->pc == 0x3ABDD8u) {
        ctx->pc = 0x3ABDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDD4u;
        // 0x3abdd8: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDDCu;
        goto label_3abddc;
    }
    ctx->pc = 0x3ABDD4u;
    {
        const bool branch_taken_0x3abdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDD4u;
        // 0x3abdd8: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdd4) {
            ctx->pc = 0x3ABDE4u;
            goto label_3abde4;
        }
    }
    ctx->pc = 0x3ABDDCu;
label_3abddc:
    // 0x3abddc: 0x10000072  b           . + 4 + (0x72 << 2)
label_3abde0:
    if (ctx->pc == 0x3ABDE0u) {
        ctx->pc = 0x3ABDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDDCu;
        // 0x3abde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDE4u;
        goto label_3abde4;
    }
    ctx->pc = 0x3ABDDCu;
    {
        const bool branch_taken_0x3abddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDDCu;
        // 0x3abde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abddc) {
            ctx->pc = 0x3ABFA8u;
            goto label_3abfa8;
        }
    }
    ctx->pc = 0x3ABDE4u;
label_3abde4:
    // 0x3abde4: 0x1840fffd  blez        $v0, . + 4 + (-0x3 << 2)
label_3abde8:
    if (ctx->pc == 0x3ABDE8u) {
        ctx->pc = 0x3ABDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDE4u;
        // 0x3abde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDECu;
        goto label_3abdec;
    }
    ctx->pc = 0x3ABDE4u;
    {
        const bool branch_taken_0x3abde4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3ABDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDE4u;
        // 0x3abde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abde4) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABDECu;
label_3abdec:
    // 0x3abdec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3abdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abdf0:
    // 0x3abdf0: 0xc103468  jal         func_40D1A0
label_3abdf4:
    if (ctx->pc == 0x3ABDF4u) {
        ctx->pc = 0x3ABDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDF0u;
        // 0x3abdf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDF8u;
        goto label_3abdf8;
    }
    ctx->pc = 0x3ABDF0u;
    SET_GPR_U32(ctx, 31, 0x3ABDF8u);
    ctx->pc = 0x3ABDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDF0u;
    // 0x3abdf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABDF0u, 0x3ABDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDF8u;
label_3abdf8:
    // 0x3abdf8: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_3abdfc:
    if (ctx->pc == 0x3ABDFCu) {
        ctx->pc = 0x3ABDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDF8u;
        // 0x3abdfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE00u;
        goto label_3abe00;
    }
    ctx->pc = 0x3ABDF8u;
    {
        const bool branch_taken_0x3abdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDF8u;
        // 0x3abdfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdf8) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE00u;
label_3abe00:
    // 0x3abe00: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3abe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3abe04:
    // 0x3abe04: 0xc103454  jal         func_40D150
label_3abe08:
    if (ctx->pc == 0x3ABE08u) {
        ctx->pc = 0x3ABE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE04u;
        // 0x3abe08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE0Cu;
        goto label_3abe0c;
    }
    ctx->pc = 0x3ABE04u;
    SET_GPR_U32(ctx, 31, 0x3ABE0Cu);
    ctx->pc = 0x3ABE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE04u;
    // 0x3abe08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3ABE04u, 0x3ABE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE0Cu;
label_3abe0c:
    // 0x3abe0c: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_3abe10:
    if (ctx->pc == 0x3ABE10u) {
        ctx->pc = 0x3ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE0Cu;
        // 0x3abe10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE14u;
        goto label_3abe14;
    }
    ctx->pc = 0x3ABE0Cu;
    {
        const bool branch_taken_0x3abe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE0Cu;
        // 0x3abe10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe0c) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE14u;
label_3abe14:
    // 0x3abe14: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3abe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3abe18:
    // 0x3abe18: 0xc103454  jal         func_40D150
label_3abe1c:
    if (ctx->pc == 0x3ABE1Cu) {
        ctx->pc = 0x3ABE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE18u;
        // 0x3abe1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE20u;
        goto label_3abe20;
    }
    ctx->pc = 0x3ABE18u;
    SET_GPR_U32(ctx, 31, 0x3ABE20u);
    ctx->pc = 0x3ABE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE18u;
    // 0x3abe1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3ABE18u, 0x3ABE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE20u;
label_3abe20:
    // 0x3abe20: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
label_3abe24:
    if (ctx->pc == 0x3ABE24u) {
        ctx->pc = 0x3ABE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE20u;
        // 0x3abe24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE28u;
        goto label_3abe28;
    }
    ctx->pc = 0x3ABE20u;
    {
        const bool branch_taken_0x3abe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE20u;
        // 0x3abe24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe20) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE28u;
label_3abe28:
    // 0x3abe28: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x3abe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3abe2c:
    // 0x3abe2c: 0xc103454  jal         func_40D150
label_3abe30:
    if (ctx->pc == 0x3ABE30u) {
        ctx->pc = 0x3ABE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE2Cu;
        // 0x3abe30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE34u;
        goto label_3abe34;
    }
    ctx->pc = 0x3ABE2Cu;
    SET_GPR_U32(ctx, 31, 0x3ABE34u);
    ctx->pc = 0x3ABE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE2Cu;
    // 0x3abe30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3ABE2Cu, 0x3ABE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE34u;
label_3abe34:
    // 0x3abe34: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_3abe38:
    if (ctx->pc == 0x3ABE38u) {
        ctx->pc = 0x3ABE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE34u;
        // 0x3abe38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE3Cu;
        goto label_3abe3c;
    }
    ctx->pc = 0x3ABE34u;
    {
        const bool branch_taken_0x3abe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE34u;
        // 0x3abe38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe34) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE3Cu;
label_3abe3c:
    // 0x3abe3c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3abe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3abe40:
    // 0x3abe40: 0xc103468  jal         func_40D1A0
label_3abe44:
    if (ctx->pc == 0x3ABE44u) {
        ctx->pc = 0x3ABE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE40u;
        // 0x3abe44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE48u;
        goto label_3abe48;
    }
    ctx->pc = 0x3ABE40u;
    SET_GPR_U32(ctx, 31, 0x3ABE48u);
    ctx->pc = 0x3ABE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE40u;
    // 0x3abe44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABE40u, 0x3ABE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE48u;
label_3abe48:
    // 0x3abe48: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
label_3abe4c:
    if (ctx->pc == 0x3ABE4Cu) {
        ctx->pc = 0x3ABE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE48u;
        // 0x3abe4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE50u;
        goto label_3abe50;
    }
    ctx->pc = 0x3ABE48u;
    {
        const bool branch_taken_0x3abe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE48u;
        // 0x3abe4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe48) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE50u;
label_3abe50:
    // 0x3abe50: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x3abe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_3abe54:
    // 0x3abe54: 0xc103468  jal         func_40D1A0
label_3abe58:
    if (ctx->pc == 0x3ABE58u) {
        ctx->pc = 0x3ABE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE54u;
        // 0x3abe58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE5Cu;
        goto label_3abe5c;
    }
    ctx->pc = 0x3ABE54u;
    SET_GPR_U32(ctx, 31, 0x3ABE5Cu);
    ctx->pc = 0x3ABE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE54u;
    // 0x3abe58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABE54u, 0x3ABE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE5Cu;
label_3abe5c:
    // 0x3abe5c: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
label_3abe60:
    if (ctx->pc == 0x3ABE60u) {
        ctx->pc = 0x3ABE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE5Cu;
        // 0x3abe60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE64u;
        goto label_3abe64;
    }
    ctx->pc = 0x3ABE5Cu;
    {
        const bool branch_taken_0x3abe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE5Cu;
        // 0x3abe60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe5c) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE64u;
label_3abe64:
    // 0x3abe64: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x3abe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_3abe68:
    // 0x3abe68: 0xc103468  jal         func_40D1A0
label_3abe6c:
    if (ctx->pc == 0x3ABE6Cu) {
        ctx->pc = 0x3ABE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE68u;
        // 0x3abe6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE70u;
        goto label_3abe70;
    }
    ctx->pc = 0x3ABE68u;
    SET_GPR_U32(ctx, 31, 0x3ABE70u);
    ctx->pc = 0x3ABE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE68u;
    // 0x3abe6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABE68u, 0x3ABE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE70u;
label_3abe70:
    // 0x3abe70: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
label_3abe74:
    if (ctx->pc == 0x3ABE74u) {
        ctx->pc = 0x3ABE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE70u;
        // 0x3abe74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE78u;
        goto label_3abe78;
    }
    ctx->pc = 0x3ABE70u;
    {
        const bool branch_taken_0x3abe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE70u;
        // 0x3abe74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe70) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABE78u;
label_3abe78:
    // 0x3abe78: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x3abe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
label_3abe7c:
    // 0x3abe7c: 0xc103468  jal         func_40D1A0
label_3abe80:
    if (ctx->pc == 0x3ABE80u) {
        ctx->pc = 0x3ABE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE7Cu;
        // 0x3abe80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE84u;
        goto label_3abe84;
    }
    ctx->pc = 0x3ABE7Cu;
    SET_GPR_U32(ctx, 31, 0x3ABE84u);
    ctx->pc = 0x3ABE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE7Cu;
    // 0x3abe80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3ABE7Cu, 0x3ABE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE84u;
label_3abe84:
    // 0x3abe84: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_3abe88:
    if (ctx->pc == 0x3ABE88u) {
        ctx->pc = 0x3ABE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE84u;
        // 0x3abe88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE8Cu;
        goto label_3abe8c;
    }
    ctx->pc = 0x3ABE84u;
    {
        const bool branch_taken_0x3abe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE84u;
        // 0x3abe88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe84) {
            ctx->pc = 0x3ABFA8u;
            goto label_3abfa8;
        }
    }
    ctx->pc = 0x3ABE8Cu;
label_3abe8c:
    // 0x3abe8c: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x3abe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_3abe90:
    // 0x3abe90: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
label_3abe94:
    if (ctx->pc == 0x3ABE94u) {
        ctx->pc = 0x3ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE90u;
        // 0x3abe94: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE98u;
        goto label_3abe98;
    }
    ctx->pc = 0x3ABE90u;
    {
        const bool branch_taken_0x3abe90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE90u;
        // 0x3abe94: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe90) {
            ctx->pc = 0x3ABEF4u;
            goto label_3abef4;
        }
    }
    ctx->pc = 0x3ABE98u;
label_3abe98:
    // 0x3abe98: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3abe98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3abe9c:
    // 0x3abe9c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3abe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3abea0:
    // 0x3abea0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3abea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3abea4:
    // 0x3abea4: 0x40f809  jalr        $v0
label_3abea8:
    if (ctx->pc == 0x3ABEA8u) {
        ctx->pc = 0x3ABEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA4u;
        // 0x3abea8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEACu;
        goto label_3abeac;
    }
    ctx->pc = 0x3ABEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABEACu);
        ctx->pc = 0x3ABEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA4u;
        // 0x3abea8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABEA4u, 0x3ABEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABEACu;
label_3abeac:
    // 0x3abeac: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x3abeacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_3abeb0:
    // 0x3abeb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3abeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abeb4:
    // 0x3abeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3abeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abeb8:
    // 0x3abeb8: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x3abeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_3abebc:
    // 0x3abebc: 0xc0bb7e6  jal         func_2EDF98
label_3abec0:
    if (ctx->pc == 0x3ABEC0u) {
        ctx->pc = 0x3ABEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEBCu;
        // 0x3abec0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEC4u;
        goto label_3abec4;
    }
    ctx->pc = 0x3ABEBCu;
    SET_GPR_U32(ctx, 31, 0x3ABEC4u);
    ctx->pc = 0x3ABEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABEBCu;
    // 0x3abec0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3ABEBCu, 0x3ABEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABEC4u;
label_3abec4:
    // 0x3abec4: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x3abec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_3abec8:
    // 0x3abec8: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
label_3abecc:
    if (ctx->pc == 0x3ABECCu) {
        ctx->pc = 0x3ABECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEC8u;
        // 0x3abecc: 0x8e060128  lw          $a2, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABED0u;
        goto label_3abed0;
    }
    ctx->pc = 0x3ABEC8u;
    {
        const bool branch_taken_0x3abec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abec8) {
            ctx->pc = 0x3ABECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABEC8u;
            // 0x3abecc: 0x8e060128  lw          $a2, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABEE0u;
            goto label_3abee0;
        }
    }
    ctx->pc = 0x3ABED0u;
label_3abed0:
    // 0x3abed0: 0xc0eb360  jal         func_3ACD80
label_3abed4:
    if (ctx->pc == 0x3ABED4u) {
        ctx->pc = 0x3ABED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED0u;
        // 0x3abed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABED8u;
        goto label_3abed8;
    }
    ctx->pc = 0x3ABED0u;
    SET_GPR_U32(ctx, 31, 0x3ABED8u);
    ctx->pc = 0x3ABED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABED0u;
    // 0x3abed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD80u, 0x3ABED0u, 0x3ABED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABED8u;
label_3abed8:
    // 0x3abed8: 0x10000033  b           . + 4 + (0x33 << 2)
label_3abedc:
    if (ctx->pc == 0x3ABEDCu) {
        ctx->pc = 0x3ABEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED8u;
        // 0x3abedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEE0u;
        goto label_3abee0;
    }
    ctx->pc = 0x3ABED8u;
    {
        const bool branch_taken_0x3abed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED8u;
        // 0x3abedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abed8) {
            ctx->pc = 0x3ABFA8u;
            goto label_3abfa8;
        }
    }
    ctx->pc = 0x3ABEE0u;
label_3abee0:
    // 0x3abee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abee4:
    // 0x3abee4: 0xc10347c  jal         func_40D1F0
label_3abee8:
    if (ctx->pc == 0x3ABEE8u) {
        ctx->pc = 0x3ABEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEE4u;
        // 0x3abee8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEECu;
        goto label_3abeec;
    }
    ctx->pc = 0x3ABEE4u;
    SET_GPR_U32(ctx, 31, 0x3ABEECu);
    ctx->pc = 0x3ABEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABEE4u;
    // 0x3abee8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1F0u, 0x3ABEE4u, 0x3ABEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABEECu;
label_3abeec:
    // 0x3abeec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3abef0:
    if (ctx->pc == 0x3ABEF0u) {
        ctx->pc = 0x3ABEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEECu;
        // 0x3abef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEF4u;
        goto label_3abef4;
    }
    ctx->pc = 0x3ABEECu;
    {
        const bool branch_taken_0x3abeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEECu;
        // 0x3abef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abeec) {
            ctx->pc = 0x3ABFA8u;
            goto label_3abfa8;
        }
    }
    ctx->pc = 0x3ABEF4u;
label_3abef4:
    // 0x3abef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abef8:
    // 0x3abef8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x3abef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_3abefc:
    // 0x3abefc: 0xc10347c  jal         func_40D1F0
label_3abf00:
    if (ctx->pc == 0x3ABF00u) {
        ctx->pc = 0x3ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEFCu;
        // 0x3abf00: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF04u;
        goto label_3abf04;
    }
    ctx->pc = 0x3ABEFCu;
    SET_GPR_U32(ctx, 31, 0x3ABF04u);
    ctx->pc = 0x3ABF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABEFCu;
    // 0x3abf00: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1F0u, 0x3ABEFCu, 0x3ABF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF04u;
label_3abf04:
    // 0x3abf04: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
label_3abf08:
    if (ctx->pc == 0x3ABF08u) {
        ctx->pc = 0x3ABF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF04u;
        // 0x3abf08: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF0Cu;
        goto label_3abf0c;
    }
    ctx->pc = 0x3ABF04u;
    {
        const bool branch_taken_0x3abf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF04u;
        // 0x3abf08: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf04) {
            ctx->pc = 0x3ABDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abddc;
        }
    }
    ctx->pc = 0x3ABF0Cu;
label_3abf0c:
    // 0x3abf0c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x3abf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_3abf10:
    // 0x3abf10: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x3abf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_3abf14:
    // 0x3abf14: 0xc103722  jal         func_40DC88
label_3abf18:
    if (ctx->pc == 0x3ABF18u) {
        ctx->pc = 0x3ABF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF14u;
        // 0x3abf18: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF1Cu;
        goto label_3abf1c;
    }
    ctx->pc = 0x3ABF14u;
    SET_GPR_U32(ctx, 31, 0x3ABF1Cu);
    ctx->pc = 0x3ABF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF14u;
    // 0x3abf18: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3ABF14u, 0x3ABF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF1Cu;
label_3abf1c:
    // 0x3abf1c: 0xc1036d2  jal         func_40DB48
label_3abf20:
    if (ctx->pc == 0x3ABF20u) {
        ctx->pc = 0x3ABF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF1Cu;
        // 0x3abf20: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF24u;
        goto label_3abf24;
    }
    ctx->pc = 0x3ABF1Cu;
    SET_GPR_U32(ctx, 31, 0x3ABF24u);
    ctx->pc = 0x3ABF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF1Cu;
    // 0x3abf20: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3ABF1Cu, 0x3ABF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF24u;
label_3abf24:
    // 0x3abf24: 0x8e060130  lw          $a2, 0x130($s0)
    ctx->pc = 0x3abf24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_3abf28:
    // 0x3abf28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3abf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abf2c:
    // 0x3abf2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3abf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abf30:
    // 0x3abf30: 0xc0bb7e6  jal         func_2EDF98
label_3abf34:
    if (ctx->pc == 0x3ABF34u) {
        ctx->pc = 0x3ABF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF30u;
        // 0x3abf34: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF38u;
        goto label_3abf38;
    }
    ctx->pc = 0x3ABF30u;
    SET_GPR_U32(ctx, 31, 0x3ABF38u);
    ctx->pc = 0x3ABF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF30u;
    // 0x3abf34: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3ABF30u, 0x3ABF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF38u;
label_3abf38:
    // 0x3abf38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3abf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3abf3c:
    // 0x3abf3c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3abf40:
    if (ctx->pc == 0x3ABF40u) {
        ctx->pc = 0x3ABF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF3Cu;
        // 0x3abf40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF44u;
        goto label_3abf44;
    }
    ctx->pc = 0x3ABF3Cu;
    {
        const bool branch_taken_0x3abf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF3Cu;
        // 0x3abf40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf3c) {
            ctx->pc = 0x3ABF64u;
            goto label_3abf64;
        }
    }
    ctx->pc = 0x3ABF44u;
label_3abf44:
    // 0x3abf44: 0xc0eae26  jal         func_3AB898
label_3abf48:
    if (ctx->pc == 0x3ABF48u) {
        ctx->pc = 0x3ABF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF44u;
        // 0x3abf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF4Cu;
        goto label_3abf4c;
    }
    ctx->pc = 0x3ABF44u;
    SET_GPR_U32(ctx, 31, 0x3ABF4Cu);
    ctx->pc = 0x3ABF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF44u;
    // 0x3abf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB898u, 0x3ABF44u, 0x3ABF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF4Cu;
label_3abf4c:
    // 0x3abf4c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3abf50:
    if (ctx->pc == 0x3ABF50u) {
        ctx->pc = 0x3ABF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF4Cu;
        // 0x3abf50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF54u;
        goto label_3abf54;
    }
    ctx->pc = 0x3ABF4Cu;
    {
        const bool branch_taken_0x3abf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF4Cu;
        // 0x3abf50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf4c) {
            ctx->pc = 0x3ABFA8u;
            goto label_3abfa8;
        }
    }
    ctx->pc = 0x3ABF54u;
label_3abf54:
    // 0x3abf54: 0xc0eb360  jal         func_3ACD80
label_3abf58:
    if (ctx->pc == 0x3ABF58u) {
        ctx->pc = 0x3ABF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF54u;
        // 0x3abf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF5Cu;
        goto label_3abf5c;
    }
    ctx->pc = 0x3ABF54u;
    SET_GPR_U32(ctx, 31, 0x3ABF5Cu);
    ctx->pc = 0x3ABF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF54u;
    // 0x3abf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD80u, 0x3ABF54u, 0x3ABF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF5Cu;
label_3abf5c:
    // 0x3abf5c: 0x10000011  b           . + 4 + (0x11 << 2)
label_3abf60:
    if (ctx->pc == 0x3ABF60u) {
        ctx->pc = 0x3ABF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF5Cu;
        // 0x3abf60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF64u;
        goto label_3abf64;
    }
    ctx->pc = 0x3ABF5Cu;
    {
        const bool branch_taken_0x3abf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF5Cu;
        // 0x3abf60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf5c) {
            ctx->pc = 0x3ABFA4u;
            goto label_3abfa4;
        }
    }
    ctx->pc = 0x3ABF64u;
label_3abf64:
    // 0x3abf64: 0xc1082ca  jal         func_420B28
label_3abf68:
    if (ctx->pc == 0x3ABF68u) {
        ctx->pc = 0x3ABF6Cu;
        goto label_3abf6c;
    }
    ctx->pc = 0x3ABF64u;
    SET_GPR_U32(ctx, 31, 0x3ABF6Cu);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3ABF64u, 0x3ABF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF6Cu;
label_3abf6c:
    // 0x3abf6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3abf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abf70:
    // 0x3abf70: 0x2682ce80  addiu       $v0, $s4, -0x3180
    ctx->pc = 0x3abf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
label_3abf74:
    // 0x3abf74: 0xc1082d0  jal         func_420B40
label_3abf78:
    if (ctx->pc == 0x3ABF78u) {
        ctx->pc = 0x3ABF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF74u;
        // 0x3abf78: 0x8c440520  lw          $a0, 0x520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF7Cu;
        goto label_3abf7c;
    }
    ctx->pc = 0x3ABF74u;
    SET_GPR_U32(ctx, 31, 0x3ABF7Cu);
    ctx->pc = 0x3ABF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF74u;
    // 0x3abf78: 0x8c440520  lw          $a0, 0x520($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3ABF74u, 0x3ABF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF7Cu;
label_3abf7c:
    // 0x3abf7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3abf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abf80:
    // 0x3abf80: 0xc0eae78  jal         func_3AB9E0
label_3abf84:
    if (ctx->pc == 0x3ABF84u) {
        ctx->pc = 0x3ABF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF80u;
        // 0x3abf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF88u;
        goto label_3abf88;
    }
    ctx->pc = 0x3ABF80u;
    SET_GPR_U32(ctx, 31, 0x3ABF88u);
    ctx->pc = 0x3ABF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF80u;
    // 0x3abf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB9E0u;
    goto label_3ab9e0;
    ctx->pc = 0x3ABF88u;
label_3abf88:
    // 0x3abf88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3abf8c:
    if (ctx->pc == 0x3ABF8Cu) {
        ctx->pc = 0x3ABF90u;
        goto label_3abf90;
    }
    ctx->pc = 0x3ABF88u;
    {
        const bool branch_taken_0x3abf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abf88) {
            ctx->pc = 0x3ABF9Cu;
            goto label_3abf9c;
        }
    }
    ctx->pc = 0x3ABF90u;
label_3abf90:
    // 0x3abf90: 0xc0eb360  jal         func_3ACD80
label_3abf94:
    if (ctx->pc == 0x3ABF94u) {
        ctx->pc = 0x3ABF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF90u;
        // 0x3abf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF98u;
        goto label_3abf98;
    }
    ctx->pc = 0x3ABF90u;
    SET_GPR_U32(ctx, 31, 0x3ABF98u);
    ctx->pc = 0x3ABF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF90u;
    // 0x3abf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD80u, 0x3ABF90u, 0x3ABF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF98u;
label_3abf98:
    // 0x3abf98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3abf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abf9c:
    // 0x3abf9c: 0xc1082d0  jal         func_420B40
label_3abfa0:
    if (ctx->pc == 0x3ABFA0u) {
        ctx->pc = 0x3ABFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF9Cu;
        // 0x3abfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFA4u;
        goto label_3abfa4;
    }
    ctx->pc = 0x3ABF9Cu;
    SET_GPR_U32(ctx, 31, 0x3ABFA4u);
    ctx->pc = 0x3ABFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF9Cu;
    // 0x3abfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3ABF9Cu, 0x3ABFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABFA4u;
label_3abfa4:
    // 0x3abfa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3abfa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abfa8:
    // 0x3abfa8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3abfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3abfac:
    // 0x3abfac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3abfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3abfb0:
    // 0x3abfb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3abfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3abfb4:
    // 0x3abfb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3abfb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3abfb8:
    // 0x3abfb8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3abfb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3abfbc:
    // 0x3abfbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3abfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3abfc0:
    // 0x3abfc0: 0x3e00008  jr          $ra
label_3abfc4:
    if (ctx->pc == 0x3ABFC4u) {
        ctx->pc = 0x3ABFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFC0u;
        // 0x3abfc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFC8u;
        goto label_fallthrough_0x3abfc0;
    }
    ctx->pc = 0x3ABFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFC0u;
        // 0x3abfc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3abfc0:
    ctx->pc = 0x3ABFC8u;
}
