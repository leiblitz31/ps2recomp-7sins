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

// Function: sub_002ACF20
// Address: 0x2acf20 - 0x2ad410
void sub_002ACF20_0x2acf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACF20_0x2acf20");
#endif

    switch (ctx->pc) {
        case 0x2acf20u: goto label_2acf20;
        case 0x2acf24u: goto label_2acf24;
        case 0x2acf28u: goto label_2acf28;
        case 0x2acf2cu: goto label_2acf2c;
        case 0x2acf30u: goto label_2acf30;
        case 0x2acf34u: goto label_2acf34;
        case 0x2acf38u: goto label_2acf38;
        case 0x2acf3cu: goto label_2acf3c;
        case 0x2acf40u: goto label_2acf40;
        case 0x2acf44u: goto label_2acf44;
        case 0x2acf48u: goto label_2acf48;
        case 0x2acf4cu: goto label_2acf4c;
        case 0x2acf50u: goto label_2acf50;
        case 0x2acf54u: goto label_2acf54;
        case 0x2acf58u: goto label_2acf58;
        case 0x2acf5cu: goto label_2acf5c;
        case 0x2acf60u: goto label_2acf60;
        case 0x2acf64u: goto label_2acf64;
        case 0x2acf68u: goto label_2acf68;
        case 0x2acf6cu: goto label_2acf6c;
        case 0x2acf70u: goto label_2acf70;
        case 0x2acf74u: goto label_2acf74;
        case 0x2acf78u: goto label_2acf78;
        case 0x2acf7cu: goto label_2acf7c;
        case 0x2acf80u: goto label_2acf80;
        case 0x2acf84u: goto label_2acf84;
        case 0x2acf88u: goto label_2acf88;
        case 0x2acf8cu: goto label_2acf8c;
        case 0x2acf90u: goto label_2acf90;
        case 0x2acf94u: goto label_2acf94;
        case 0x2acf98u: goto label_2acf98;
        case 0x2acf9cu: goto label_2acf9c;
        case 0x2acfa0u: goto label_2acfa0;
        case 0x2acfa4u: goto label_2acfa4;
        case 0x2acfa8u: goto label_2acfa8;
        case 0x2acfacu: goto label_2acfac;
        case 0x2acfb0u: goto label_2acfb0;
        case 0x2acfb4u: goto label_2acfb4;
        case 0x2acfb8u: goto label_2acfb8;
        case 0x2acfbcu: goto label_2acfbc;
        case 0x2acfc0u: goto label_2acfc0;
        case 0x2acfc4u: goto label_2acfc4;
        case 0x2acfc8u: goto label_2acfc8;
        case 0x2acfccu: goto label_2acfcc;
        case 0x2acfd0u: goto label_2acfd0;
        case 0x2acfd4u: goto label_2acfd4;
        case 0x2acfd8u: goto label_2acfd8;
        case 0x2acfdcu: goto label_2acfdc;
        case 0x2acfe0u: goto label_2acfe0;
        case 0x2acfe4u: goto label_2acfe4;
        case 0x2acfe8u: goto label_2acfe8;
        case 0x2acfecu: goto label_2acfec;
        case 0x2acff0u: goto label_2acff0;
        case 0x2acff4u: goto label_2acff4;
        case 0x2acff8u: goto label_2acff8;
        case 0x2acffcu: goto label_2acffc;
        case 0x2ad000u: goto label_2ad000;
        case 0x2ad004u: goto label_2ad004;
        case 0x2ad008u: goto label_2ad008;
        case 0x2ad00cu: goto label_2ad00c;
        case 0x2ad010u: goto label_2ad010;
        case 0x2ad014u: goto label_2ad014;
        case 0x2ad018u: goto label_2ad018;
        case 0x2ad01cu: goto label_2ad01c;
        case 0x2ad020u: goto label_2ad020;
        case 0x2ad024u: goto label_2ad024;
        case 0x2ad028u: goto label_2ad028;
        case 0x2ad02cu: goto label_2ad02c;
        case 0x2ad030u: goto label_2ad030;
        case 0x2ad034u: goto label_2ad034;
        case 0x2ad038u: goto label_2ad038;
        case 0x2ad03cu: goto label_2ad03c;
        case 0x2ad040u: goto label_2ad040;
        case 0x2ad044u: goto label_2ad044;
        case 0x2ad048u: goto label_2ad048;
        case 0x2ad04cu: goto label_2ad04c;
        case 0x2ad050u: goto label_2ad050;
        case 0x2ad054u: goto label_2ad054;
        case 0x2ad058u: goto label_2ad058;
        case 0x2ad05cu: goto label_2ad05c;
        case 0x2ad060u: goto label_2ad060;
        case 0x2ad064u: goto label_2ad064;
        case 0x2ad068u: goto label_2ad068;
        case 0x2ad06cu: goto label_2ad06c;
        case 0x2ad070u: goto label_2ad070;
        case 0x2ad074u: goto label_2ad074;
        case 0x2ad078u: goto label_2ad078;
        case 0x2ad07cu: goto label_2ad07c;
        case 0x2ad080u: goto label_2ad080;
        case 0x2ad084u: goto label_2ad084;
        case 0x2ad088u: goto label_2ad088;
        case 0x2ad08cu: goto label_2ad08c;
        case 0x2ad090u: goto label_2ad090;
        case 0x2ad094u: goto label_2ad094;
        case 0x2ad098u: goto label_2ad098;
        case 0x2ad09cu: goto label_2ad09c;
        case 0x2ad0a0u: goto label_2ad0a0;
        case 0x2ad0a4u: goto label_2ad0a4;
        case 0x2ad0a8u: goto label_2ad0a8;
        case 0x2ad0acu: goto label_2ad0ac;
        case 0x2ad0b0u: goto label_2ad0b0;
        case 0x2ad0b4u: goto label_2ad0b4;
        case 0x2ad0b8u: goto label_2ad0b8;
        case 0x2ad0bcu: goto label_2ad0bc;
        case 0x2ad0c0u: goto label_2ad0c0;
        case 0x2ad0c4u: goto label_2ad0c4;
        case 0x2ad0c8u: goto label_2ad0c8;
        case 0x2ad0ccu: goto label_2ad0cc;
        case 0x2ad0d0u: goto label_2ad0d0;
        case 0x2ad0d4u: goto label_2ad0d4;
        case 0x2ad0d8u: goto label_2ad0d8;
        case 0x2ad0dcu: goto label_2ad0dc;
        case 0x2ad0e0u: goto label_2ad0e0;
        case 0x2ad0e4u: goto label_2ad0e4;
        case 0x2ad0e8u: goto label_2ad0e8;
        case 0x2ad0ecu: goto label_2ad0ec;
        case 0x2ad0f0u: goto label_2ad0f0;
        case 0x2ad0f4u: goto label_2ad0f4;
        case 0x2ad0f8u: goto label_2ad0f8;
        case 0x2ad0fcu: goto label_2ad0fc;
        case 0x2ad100u: goto label_2ad100;
        case 0x2ad104u: goto label_2ad104;
        case 0x2ad108u: goto label_2ad108;
        case 0x2ad10cu: goto label_2ad10c;
        case 0x2ad110u: goto label_2ad110;
        case 0x2ad114u: goto label_2ad114;
        case 0x2ad118u: goto label_2ad118;
        case 0x2ad11cu: goto label_2ad11c;
        case 0x2ad120u: goto label_2ad120;
        case 0x2ad124u: goto label_2ad124;
        case 0x2ad128u: goto label_2ad128;
        case 0x2ad12cu: goto label_2ad12c;
        case 0x2ad130u: goto label_2ad130;
        case 0x2ad134u: goto label_2ad134;
        case 0x2ad138u: goto label_2ad138;
        case 0x2ad13cu: goto label_2ad13c;
        case 0x2ad140u: goto label_2ad140;
        case 0x2ad144u: goto label_2ad144;
        case 0x2ad148u: goto label_2ad148;
        case 0x2ad14cu: goto label_2ad14c;
        case 0x2ad150u: goto label_2ad150;
        case 0x2ad154u: goto label_2ad154;
        case 0x2ad158u: goto label_2ad158;
        case 0x2ad15cu: goto label_2ad15c;
        case 0x2ad160u: goto label_2ad160;
        case 0x2ad164u: goto label_2ad164;
        case 0x2ad168u: goto label_2ad168;
        case 0x2ad16cu: goto label_2ad16c;
        case 0x2ad170u: goto label_2ad170;
        case 0x2ad174u: goto label_2ad174;
        case 0x2ad178u: goto label_2ad178;
        case 0x2ad17cu: goto label_2ad17c;
        case 0x2ad180u: goto label_2ad180;
        case 0x2ad184u: goto label_2ad184;
        case 0x2ad188u: goto label_2ad188;
        case 0x2ad18cu: goto label_2ad18c;
        case 0x2ad190u: goto label_2ad190;
        case 0x2ad194u: goto label_2ad194;
        case 0x2ad198u: goto label_2ad198;
        case 0x2ad19cu: goto label_2ad19c;
        case 0x2ad1a0u: goto label_2ad1a0;
        case 0x2ad1a4u: goto label_2ad1a4;
        case 0x2ad1a8u: goto label_2ad1a8;
        case 0x2ad1acu: goto label_2ad1ac;
        case 0x2ad1b0u: goto label_2ad1b0;
        case 0x2ad1b4u: goto label_2ad1b4;
        case 0x2ad1b8u: goto label_2ad1b8;
        case 0x2ad1bcu: goto label_2ad1bc;
        case 0x2ad1c0u: goto label_2ad1c0;
        case 0x2ad1c4u: goto label_2ad1c4;
        case 0x2ad1c8u: goto label_2ad1c8;
        case 0x2ad1ccu: goto label_2ad1cc;
        case 0x2ad1d0u: goto label_2ad1d0;
        case 0x2ad1d4u: goto label_2ad1d4;
        case 0x2ad1d8u: goto label_2ad1d8;
        case 0x2ad1dcu: goto label_2ad1dc;
        case 0x2ad1e0u: goto label_2ad1e0;
        case 0x2ad1e4u: goto label_2ad1e4;
        case 0x2ad1e8u: goto label_2ad1e8;
        case 0x2ad1ecu: goto label_2ad1ec;
        case 0x2ad1f0u: goto label_2ad1f0;
        case 0x2ad1f4u: goto label_2ad1f4;
        case 0x2ad1f8u: goto label_2ad1f8;
        case 0x2ad1fcu: goto label_2ad1fc;
        case 0x2ad200u: goto label_2ad200;
        case 0x2ad204u: goto label_2ad204;
        case 0x2ad208u: goto label_2ad208;
        case 0x2ad20cu: goto label_2ad20c;
        case 0x2ad210u: goto label_2ad210;
        case 0x2ad214u: goto label_2ad214;
        case 0x2ad218u: goto label_2ad218;
        case 0x2ad21cu: goto label_2ad21c;
        case 0x2ad220u: goto label_2ad220;
        case 0x2ad224u: goto label_2ad224;
        case 0x2ad228u: goto label_2ad228;
        case 0x2ad22cu: goto label_2ad22c;
        case 0x2ad230u: goto label_2ad230;
        case 0x2ad234u: goto label_2ad234;
        case 0x2ad238u: goto label_2ad238;
        case 0x2ad23cu: goto label_2ad23c;
        case 0x2ad240u: goto label_2ad240;
        case 0x2ad244u: goto label_2ad244;
        case 0x2ad248u: goto label_2ad248;
        case 0x2ad24cu: goto label_2ad24c;
        case 0x2ad250u: goto label_2ad250;
        case 0x2ad254u: goto label_2ad254;
        case 0x2ad258u: goto label_2ad258;
        case 0x2ad25cu: goto label_2ad25c;
        case 0x2ad260u: goto label_2ad260;
        case 0x2ad264u: goto label_2ad264;
        case 0x2ad268u: goto label_2ad268;
        case 0x2ad26cu: goto label_2ad26c;
        case 0x2ad270u: goto label_2ad270;
        case 0x2ad274u: goto label_2ad274;
        case 0x2ad278u: goto label_2ad278;
        case 0x2ad27cu: goto label_2ad27c;
        case 0x2ad280u: goto label_2ad280;
        case 0x2ad284u: goto label_2ad284;
        case 0x2ad288u: goto label_2ad288;
        case 0x2ad28cu: goto label_2ad28c;
        case 0x2ad290u: goto label_2ad290;
        case 0x2ad294u: goto label_2ad294;
        case 0x2ad298u: goto label_2ad298;
        case 0x2ad29cu: goto label_2ad29c;
        case 0x2ad2a0u: goto label_2ad2a0;
        case 0x2ad2a4u: goto label_2ad2a4;
        case 0x2ad2a8u: goto label_2ad2a8;
        case 0x2ad2acu: goto label_2ad2ac;
        case 0x2ad2b0u: goto label_2ad2b0;
        case 0x2ad2b4u: goto label_2ad2b4;
        case 0x2ad2b8u: goto label_2ad2b8;
        case 0x2ad2bcu: goto label_2ad2bc;
        case 0x2ad2c0u: goto label_2ad2c0;
        case 0x2ad2c4u: goto label_2ad2c4;
        case 0x2ad2c8u: goto label_2ad2c8;
        case 0x2ad2ccu: goto label_2ad2cc;
        case 0x2ad2d0u: goto label_2ad2d0;
        case 0x2ad2d4u: goto label_2ad2d4;
        case 0x2ad2d8u: goto label_2ad2d8;
        case 0x2ad2dcu: goto label_2ad2dc;
        case 0x2ad2e0u: goto label_2ad2e0;
        case 0x2ad2e4u: goto label_2ad2e4;
        case 0x2ad2e8u: goto label_2ad2e8;
        case 0x2ad2ecu: goto label_2ad2ec;
        case 0x2ad2f0u: goto label_2ad2f0;
        case 0x2ad2f4u: goto label_2ad2f4;
        case 0x2ad2f8u: goto label_2ad2f8;
        case 0x2ad2fcu: goto label_2ad2fc;
        case 0x2ad300u: goto label_2ad300;
        case 0x2ad304u: goto label_2ad304;
        case 0x2ad308u: goto label_2ad308;
        case 0x2ad30cu: goto label_2ad30c;
        case 0x2ad310u: goto label_2ad310;
        case 0x2ad314u: goto label_2ad314;
        case 0x2ad318u: goto label_2ad318;
        case 0x2ad31cu: goto label_2ad31c;
        case 0x2ad320u: goto label_2ad320;
        case 0x2ad324u: goto label_2ad324;
        case 0x2ad328u: goto label_2ad328;
        case 0x2ad32cu: goto label_2ad32c;
        case 0x2ad330u: goto label_2ad330;
        case 0x2ad334u: goto label_2ad334;
        case 0x2ad338u: goto label_2ad338;
        case 0x2ad33cu: goto label_2ad33c;
        case 0x2ad340u: goto label_2ad340;
        case 0x2ad344u: goto label_2ad344;
        case 0x2ad348u: goto label_2ad348;
        case 0x2ad34cu: goto label_2ad34c;
        case 0x2ad350u: goto label_2ad350;
        case 0x2ad354u: goto label_2ad354;
        case 0x2ad358u: goto label_2ad358;
        case 0x2ad35cu: goto label_2ad35c;
        case 0x2ad360u: goto label_2ad360;
        case 0x2ad364u: goto label_2ad364;
        case 0x2ad368u: goto label_2ad368;
        case 0x2ad36cu: goto label_2ad36c;
        case 0x2ad370u: goto label_2ad370;
        case 0x2ad374u: goto label_2ad374;
        case 0x2ad378u: goto label_2ad378;
        case 0x2ad37cu: goto label_2ad37c;
        case 0x2ad380u: goto label_2ad380;
        case 0x2ad384u: goto label_2ad384;
        case 0x2ad388u: goto label_2ad388;
        case 0x2ad38cu: goto label_2ad38c;
        case 0x2ad390u: goto label_2ad390;
        case 0x2ad394u: goto label_2ad394;
        case 0x2ad398u: goto label_2ad398;
        case 0x2ad39cu: goto label_2ad39c;
        case 0x2ad3a0u: goto label_2ad3a0;
        case 0x2ad3a4u: goto label_2ad3a4;
        case 0x2ad3a8u: goto label_2ad3a8;
        case 0x2ad3acu: goto label_2ad3ac;
        case 0x2ad3b0u: goto label_2ad3b0;
        case 0x2ad3b4u: goto label_2ad3b4;
        case 0x2ad3b8u: goto label_2ad3b8;
        case 0x2ad3bcu: goto label_2ad3bc;
        case 0x2ad3c0u: goto label_2ad3c0;
        case 0x2ad3c4u: goto label_2ad3c4;
        case 0x2ad3c8u: goto label_2ad3c8;
        case 0x2ad3ccu: goto label_2ad3cc;
        case 0x2ad3d0u: goto label_2ad3d0;
        case 0x2ad3d4u: goto label_2ad3d4;
        case 0x2ad3d8u: goto label_2ad3d8;
        case 0x2ad3dcu: goto label_2ad3dc;
        case 0x2ad3e0u: goto label_2ad3e0;
        case 0x2ad3e4u: goto label_2ad3e4;
        case 0x2ad3e8u: goto label_2ad3e8;
        case 0x2ad3ecu: goto label_2ad3ec;
        case 0x2ad3f0u: goto label_2ad3f0;
        case 0x2ad3f4u: goto label_2ad3f4;
        case 0x2ad3f8u: goto label_2ad3f8;
        case 0x2ad3fcu: goto label_2ad3fc;
        case 0x2ad400u: goto label_2ad400;
        case 0x2ad404u: goto label_2ad404;
        case 0x2ad408u: goto label_2ad408;
        case 0x2ad40cu: goto label_2ad40c;
        default: break;
    }

    ctx->pc = 0x2acf20u;

label_2acf20:
    // 0x2acf20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2acf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2acf24:
    // 0x2acf24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2acf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2acf28:
    // 0x2acf28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2acf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2acf2c:
    // 0x2acf2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2acf30:
    // 0x2acf30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2acf34:
    // 0x2acf34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2acf38:
    // 0x2acf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2acf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2acf3c:
    // 0x2acf3c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2acf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_2acf40:
    // 0x2acf40: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2acf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2acf44:
    // 0x2acf44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2acf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2acf48:
    // 0x2acf48: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2acf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2acf4c:
    // 0x2acf4c: 0xc119b68  jal         func_466DA0
label_2acf50:
    if (ctx->pc == 0x2ACF50u) {
        ctx->pc = 0x2ACF54u;
        goto label_2acf54;
    }
    ctx->pc = 0x2ACF4Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF54u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2ACF4Cu, 0x2ACF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF54u;
label_2acf54:
    // 0x2acf54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acf54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acf58:
    // 0x2acf58: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_2acf5c:
    if (ctx->pc == 0x2ACF5Cu) {
        ctx->pc = 0x2ACF60u;
        goto label_2acf60;
    }
    ctx->pc = 0x2ACF58u;
    {
        const bool branch_taken_0x2acf58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acf58) {
            ctx->pc = 0x2ACFC0u;
            goto label_2acfc0;
        }
    }
    ctx->pc = 0x2ACF60u;
label_2acf60:
    // 0x2acf60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2acf64:
    // 0x2acf64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2acf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2acf68:
    // 0x2acf68: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2acf68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acf6c:
    // 0x2acf6c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2acf70:
    // 0x2acf70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2acf74:
    // 0x2acf74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2acf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2acf78:
    // 0x2acf78: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2acf78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2acf7c:
    // 0x2acf7c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2acf7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acf80:
    // 0x2acf80: 0x1000000c  b           . + 4 + (0xC << 2)
label_2acf84:
    if (ctx->pc == 0x2ACF84u) {
        ctx->pc = 0x2ACF88u;
        goto label_2acf88;
    }
    ctx->pc = 0x2ACF80u;
    {
        const bool branch_taken_0x2acf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acf80) {
            ctx->pc = 0x2ACFB4u;
            goto label_2acfb4;
        }
    }
    ctx->pc = 0x2ACF88u;
label_2acf88:
    // 0x2acf88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2acf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2acf8c:
    // 0x2acf8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2acf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2acf90:
    // 0x2acf90: 0xc0400e0  jal         func_100380
label_2acf94:
    if (ctx->pc == 0x2ACF94u) {
        ctx->pc = 0x2ACF98u;
        goto label_2acf98;
    }
    ctx->pc = 0x2ACF90u;
    SET_GPR_U32(ctx, 31, 0x2ACF98u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2ACF90u, 0x2ACF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF98u;
label_2acf98:
    // 0x2acf98: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2acf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2acf9c:
    // 0x2acf9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2acfa0:
    if (ctx->pc == 0x2ACFA0u) {
        ctx->pc = 0x2ACFA4u;
        goto label_2acfa4;
    }
    ctx->pc = 0x2ACF9Cu;
    {
        const bool branch_taken_0x2acf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acf9c) {
            ctx->pc = 0x2ACFACu;
            goto label_2acfac;
        }
    }
    ctx->pc = 0x2ACFA4u;
label_2acfa4:
    // 0x2acfa4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2acfa8:
    // 0x2acfa8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2acfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2acfac:
    // 0x2acfac: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x2acfacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_2acfb0:
    // 0x2acfb0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2acfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2acfb4:
    // 0x2acfb4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
label_2acfb8:
    if (ctx->pc == 0x2ACFB8u) {
        ctx->pc = 0x2ACFBCu;
        goto label_2acfbc;
    }
    ctx->pc = 0x2ACFB4u;
    {
        const bool branch_taken_0x2acfb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2acfb4) {
            ctx->pc = 0x2ACF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acf88;
        }
    }
    ctx->pc = 0x2ACFBCu;
label_2acfbc:
    // 0x2acfbc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2acfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acfc0:
    // 0x2acfc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2acfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acfc4:
    // 0x2acfc4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2acfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2acfc8:
    // 0x2acfc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2acfc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2acfcc:
    // 0x2acfcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2acfccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2acfd0:
    // 0x2acfd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acfd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2acfd4:
    // 0x2acfd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2acfd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2acfd8:
    // 0x2acfd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2acfd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2acfdc:
    // 0x2acfdc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2acfdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2acfe0:
    // 0x2acfe0: 0x3e00008  jr          $ra
label_2acfe4:
    if (ctx->pc == 0x2ACFE4u) {
        ctx->pc = 0x2ACFE8u;
        goto label_2acfe8;
    }
    ctx->pc = 0x2ACFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACFE8u;
label_2acfe8:
    // 0x2acfe8: 0x0  nop
    ctx->pc = 0x2acfe8u;
    // NOP
label_2acfec:
    // 0x2acfec: 0x0  nop
    ctx->pc = 0x2acfecu;
    // NOP
label_2acff0:
    // 0x2acff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2acff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2acff4:
    // 0x2acff4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2acff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2acff8:
    // 0x2acff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2acff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2acffc:
    // 0x2acffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ad000:
    // 0x2ad000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ad004:
    // 0x2ad004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ad008:
    // 0x2ad008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ad00c:
    // 0x2ad00c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2ad00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_2ad010:
    // 0x2ad010: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2ad010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad014:
    // 0x2ad014: 0xc085204  jal         func_214810
label_2ad018:
    if (ctx->pc == 0x2AD018u) {
        ctx->pc = 0x2AD01Cu;
        goto label_2ad01c;
    }
    ctx->pc = 0x2AD014u;
    SET_GPR_U32(ctx, 31, 0x2AD01Cu);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x2AD014u, 0x2AD01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD01Cu;
label_2ad01c:
    // 0x2ad01c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2ad01cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ad020:
    // 0x2ad020: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad024:
    // 0x2ad024: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2ad024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ad028:
    // 0x2ad028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ad028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ad02c:
    // 0x2ad02c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ad02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ad030:
    // 0x2ad030: 0x320f809  jalr        $t9
label_2ad034:
    if (ctx->pc == 0x2AD034u) {
        ctx->pc = 0x2AD038u;
        goto label_2ad038;
    }
    ctx->pc = 0x2AD030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AD038u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD030u, 0x2AD038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD038u;
label_2ad038:
    // 0x2ad038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ad038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ad03c:
    // 0x2ad03c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2ad03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2ad040:
    // 0x2ad040: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ad044:
    // 0x2ad044: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ad044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ad048:
    // 0x2ad048: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ad048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ad04c:
    // 0x2ad04c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ad04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ad050:
    // 0x2ad050: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2ad050u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ad054:
    // 0x2ad054: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad058:
    // 0x2ad058: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2ad058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ad05c:
    // 0x2ad05c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ad060:
    if (ctx->pc == 0x2AD060u) {
        ctx->pc = 0x2AD064u;
        goto label_2ad064;
    }
    ctx->pc = 0x2AD05Cu;
    {
        const bool branch_taken_0x2ad05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad05c) {
            ctx->pc = 0x2AD08Cu;
            goto label_2ad08c;
        }
    }
    ctx->pc = 0x2AD064u;
label_2ad064:
    // 0x2ad064: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad068:
    // 0x2ad068: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2ad068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ad06c:
    // 0x2ad06c: 0xc0ab624  jal         func_2AD890
label_2ad070:
    if (ctx->pc == 0x2AD070u) {
        ctx->pc = 0x2AD074u;
        goto label_2ad074;
    }
    ctx->pc = 0x2AD06Cu;
    SET_GPR_U32(ctx, 31, 0x2AD074u);
    ctx->pc = 0x2AD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD890u, 0x2AD06Cu, 0x2AD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD074u;
label_2ad074:
    // 0x2ad074: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad078:
    // 0x2ad078: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2ad078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ad07c:
    // 0x2ad07c: 0xc119c5c  jal         func_467170
label_2ad080:
    if (ctx->pc == 0x2AD080u) {
        ctx->pc = 0x2AD084u;
        goto label_2ad084;
    }
    ctx->pc = 0x2AD07Cu;
    SET_GPR_U32(ctx, 31, 0x2AD084u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AD07Cu, 0x2AD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD084u;
label_2ad084:
    // 0x2ad084: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad088:
    // 0x2ad088: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2ad088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_2ad08c:
    // 0x2ad08c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad090:
    // 0x2ad090: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad094:
    // 0x2ad094: 0xc0ab61c  jal         func_2AD870
label_2ad098:
    if (ctx->pc == 0x2AD098u) {
        ctx->pc = 0x2AD09Cu;
        goto label_2ad09c;
    }
    ctx->pc = 0x2AD094u;
    SET_GPR_U32(ctx, 31, 0x2AD09Cu);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AD094u, 0x2AD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD09Cu;
label_2ad09c:
    // 0x2ad09c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ad09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad0a0:
    // 0x2ad0a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ad0a4:
    if (ctx->pc == 0x2AD0A4u) {
        ctx->pc = 0x2AD0A8u;
        goto label_2ad0a8;
    }
    ctx->pc = 0x2AD0A0u;
    {
        const bool branch_taken_0x2ad0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad0a0) {
            ctx->pc = 0x2AD0D8u;
            goto label_2ad0d8;
        }
    }
    ctx->pc = 0x2AD0A8u;
label_2ad0a8:
    // 0x2ad0a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ad0ac:
    // 0x2ad0ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2ad0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ad0b0:
    // 0x2ad0b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ad0b4:
    if (ctx->pc == 0x2AD0B4u) {
        ctx->pc = 0x2AD0B8u;
        goto label_2ad0b8;
    }
    ctx->pc = 0x2AD0B0u;
    {
        const bool branch_taken_0x2ad0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad0b0) {
            ctx->pc = 0x2AD0D4u;
            goto label_2ad0d4;
        }
    }
    ctx->pc = 0x2AD0B8u;
label_2ad0b8:
    // 0x2ad0b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ad0bc:
    // 0x2ad0bc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ad0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ad0c0:
    // 0x2ad0c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ad0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad0c4:
    // 0x2ad0c4: 0xc12bf0a  jal         func_4AFC28
label_2ad0c8:
    if (ctx->pc == 0x2AD0C8u) {
        ctx->pc = 0x2AD0CCu;
        goto label_2ad0cc;
    }
    ctx->pc = 0x2AD0C4u;
    SET_GPR_U32(ctx, 31, 0x2AD0CCu);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AD0C4u, 0x2AD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0CCu;
label_2ad0cc:
    // 0x2ad0cc: 0xc0f0c7e  jal         func_3C31F8
label_2ad0d0:
    if (ctx->pc == 0x2AD0D0u) {
        ctx->pc = 0x2AD0D4u;
        goto label_2ad0d4;
    }
    ctx->pc = 0x2AD0CCu;
    SET_GPR_U32(ctx, 31, 0x2AD0D4u);
    ctx->pc = 0x3C31F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C31F8u, 0x2AD0CCu, 0x2AD0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0D4u;
label_2ad0d4:
    // 0x2ad0d4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ad0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2ad0d8:
    // 0x2ad0d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad0dc:
    // 0x2ad0dc: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad0e0:
    // 0x2ad0e0: 0xc0ab614  jal         func_2AD850
label_2ad0e4:
    if (ctx->pc == 0x2AD0E4u) {
        ctx->pc = 0x2AD0E8u;
        goto label_2ad0e8;
    }
    ctx->pc = 0x2AD0E0u;
    SET_GPR_U32(ctx, 31, 0x2AD0E8u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AD0E0u, 0x2AD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0E8u;
label_2ad0e8:
    // 0x2ad0e8: 0x1642ffef  bne         $s2, $v0, . + 4 + (-0x11 << 2)
label_2ad0ec:
    if (ctx->pc == 0x2AD0ECu) {
        ctx->pc = 0x2AD0F0u;
        goto label_2ad0f0;
    }
    ctx->pc = 0x2AD0E8u;
    {
        const bool branch_taken_0x2ad0e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad0e8) {
            ctx->pc = 0x2AD0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad0a8;
        }
    }
    ctx->pc = 0x2AD0F0u;
label_2ad0f0:
    // 0x2ad0f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad0f4:
    // 0x2ad0f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad0f8:
    // 0x2ad0f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ad0fc:
    if (ctx->pc == 0x2AD0FCu) {
        ctx->pc = 0x2AD100u;
        goto label_2ad100;
    }
    ctx->pc = 0x2AD0F8u;
    {
        const bool branch_taken_0x2ad0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad0f8) {
            ctx->pc = 0x2AD124u;
            goto label_2ad124;
        }
    }
    ctx->pc = 0x2AD100u;
label_2ad100:
    // 0x2ad100: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ad104:
    // 0x2ad104: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad108:
    // 0x2ad108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad10c:
    // 0x2ad10c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2ad110:
    // 0x2ad110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad114:
    // 0x2ad114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad118:
    // 0x2ad118: 0xc12702a  jal         func_49C0A8
label_2ad11c:
    if (ctx->pc == 0x2AD11Cu) {
        ctx->pc = 0x2AD120u;
        goto label_2ad120;
    }
    ctx->pc = 0x2AD118u;
    SET_GPR_U32(ctx, 31, 0x2AD120u);
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x2AD118u, 0x2AD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD120u;
label_2ad120:
    // 0x2ad120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ad120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ad124:
    // 0x2ad124: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x2ad124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2ad128:
    // 0x2ad128: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2ad12c:
    if (ctx->pc == 0x2AD12Cu) {
        ctx->pc = 0x2AD130u;
        goto label_2ad130;
    }
    ctx->pc = 0x2AD128u;
    {
        const bool branch_taken_0x2ad128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad128) {
            ctx->pc = 0x2AD100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad100;
        }
    }
    ctx->pc = 0x2AD130u;
label_2ad130:
    // 0x2ad130: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad134:
    // 0x2ad134: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2ad138:
    if (ctx->pc == 0x2AD138u) {
        ctx->pc = 0x2AD13Cu;
        goto label_2ad13c;
    }
    ctx->pc = 0x2AD134u;
    {
        const bool branch_taken_0x2ad134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad134) {
            ctx->pc = 0x2AD1B0u;
            goto label_2ad1b0;
        }
    }
    ctx->pc = 0x2AD13Cu;
label_2ad13c:
    // 0x2ad13c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad140:
    // 0x2ad140: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ad140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad144:
    // 0x2ad144: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ad148:
    if (ctx->pc == 0x2AD148u) {
        ctx->pc = 0x2AD14Cu;
        goto label_2ad14c;
    }
    ctx->pc = 0x2AD144u;
    {
        const bool branch_taken_0x2ad144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad144) {
            ctx->pc = 0x2AD1ACu;
            goto label_2ad1ac;
        }
    }
    ctx->pc = 0x2AD14Cu;
label_2ad14c:
    // 0x2ad14c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad150:
    // 0x2ad150: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ad154:
    // 0x2ad154: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad158:
    // 0x2ad158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad15c:
    // 0x2ad15c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ad15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad160:
    // 0x2ad160: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2ad164:
    if (ctx->pc == 0x2AD164u) {
        ctx->pc = 0x2AD168u;
        goto label_2ad168;
    }
    ctx->pc = 0x2AD160u;
    {
        const bool branch_taken_0x2ad160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad160) {
            ctx->pc = 0x2AD1ACu;
            goto label_2ad1ac;
        }
    }
    ctx->pc = 0x2AD168u;
label_2ad168:
    // 0x2ad168: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad16c:
    // 0x2ad16c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ad170:
    // 0x2ad170: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ad170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad174:
    // 0x2ad174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad178:
    // 0x2ad178: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ad178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad17c:
    // 0x2ad17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad180:
    // 0x2ad180: 0xc12b246  jal         func_4AC918
label_2ad184:
    if (ctx->pc == 0x2AD184u) {
        ctx->pc = 0x2AD188u;
        goto label_2ad188;
    }
    ctx->pc = 0x2AD180u;
    SET_GPR_U32(ctx, 31, 0x2AD188u);
    ctx->pc = 0x4AC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC918u, 0x2AD180u, 0x2AD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD188u;
label_2ad188:
    // 0x2ad188: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad18c:
    // 0x2ad18c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ad190:
    // 0x2ad190: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ad190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad194:
    // 0x2ad194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad198:
    // 0x2ad198: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad19c:
    // 0x2ad19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad1a0:
    // 0x2ad1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad1a4:
    // 0x2ad1a4: 0xc12702a  jal         func_49C0A8
label_2ad1a8:
    if (ctx->pc == 0x2AD1A8u) {
        ctx->pc = 0x2AD1ACu;
        goto label_2ad1ac;
    }
    ctx->pc = 0x2AD1A4u;
    SET_GPR_U32(ctx, 31, 0x2AD1ACu);
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x2AD1A4u, 0x2AD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD1ACu;
label_2ad1ac:
    // 0x2ad1ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ad1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ad1b0:
    // 0x2ad1b0: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x2ad1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_2ad1b4:
    // 0x2ad1b4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2ad1b8:
    if (ctx->pc == 0x2AD1B8u) {
        ctx->pc = 0x2AD1BCu;
        goto label_2ad1bc;
    }
    ctx->pc = 0x2AD1B4u;
    {
        const bool branch_taken_0x2ad1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1b4) {
            ctx->pc = 0x2AD13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad13c;
        }
    }
    ctx->pc = 0x2AD1BCu;
label_2ad1bc:
    // 0x2ad1bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad1c0:
    // 0x2ad1c0: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x2ad1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_2ad1c4:
    // 0x2ad1c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ad1c8:
    if (ctx->pc == 0x2AD1C8u) {
        ctx->pc = 0x2AD1CCu;
        goto label_2ad1cc;
    }
    ctx->pc = 0x2AD1C4u;
    {
        const bool branch_taken_0x2ad1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1c4) {
            ctx->pc = 0x2AD1D4u;
            goto label_2ad1d4;
        }
    }
    ctx->pc = 0x2AD1CCu;
label_2ad1cc:
    // 0x2ad1cc: 0xc12a88c  jal         func_4AA230
label_2ad1d0:
    if (ctx->pc == 0x2AD1D0u) {
        ctx->pc = 0x2AD1D4u;
        goto label_2ad1d4;
    }
    ctx->pc = 0x2AD1CCu;
    SET_GPR_U32(ctx, 31, 0x2AD1D4u);
    ctx->pc = 0x4AA230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA230u, 0x2AD1CCu, 0x2AD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD1D4u;
label_2ad1d4:
    // 0x2ad1d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad1d8:
    // 0x2ad1d8: 0x10000016  b           . + 4 + (0x16 << 2)
label_2ad1dc:
    if (ctx->pc == 0x2AD1DCu) {
        ctx->pc = 0x2AD1E0u;
        goto label_2ad1e0;
    }
    ctx->pc = 0x2AD1D8u;
    {
        const bool branch_taken_0x2ad1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1d8) {
            ctx->pc = 0x2AD234u;
            goto label_2ad234;
        }
    }
    ctx->pc = 0x2AD1E0u;
label_2ad1e0:
    // 0x2ad1e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad1e4:
    // 0x2ad1e4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2ad1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2ad1e8:
    // 0x2ad1e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2ad1ec:
    if (ctx->pc == 0x2AD1ECu) {
        ctx->pc = 0x2AD1F0u;
        goto label_2ad1f0;
    }
    ctx->pc = 0x2AD1E8u;
    {
        const bool branch_taken_0x2ad1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1e8) {
            ctx->pc = 0x2AD230u;
            goto label_2ad230;
        }
    }
    ctx->pc = 0x2AD1F0u;
label_2ad1f0:
    // 0x2ad1f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad1f4:
    // 0x2ad1f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ad1f8:
    // 0x2ad1f8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2ad1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2ad1fc:
    // 0x2ad1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad200:
    // 0x2ad200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ad200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad204:
    // 0x2ad204: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ad208:
    if (ctx->pc == 0x2AD208u) {
        ctx->pc = 0x2AD20Cu;
        goto label_2ad20c;
    }
    ctx->pc = 0x2AD204u;
    {
        const bool branch_taken_0x2ad204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad204) {
            ctx->pc = 0x2AD230u;
            goto label_2ad230;
        }
    }
    ctx->pc = 0x2AD20Cu;
label_2ad20c:
    // 0x2ad20c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad210:
    // 0x2ad210: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ad214:
    // 0x2ad214: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2ad214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2ad218:
    // 0x2ad218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad21c:
    // 0x2ad21c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ad21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad220:
    // 0x2ad220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad224:
    // 0x2ad224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad228:
    // 0x2ad228: 0xc12702a  jal         func_49C0A8
label_2ad22c:
    if (ctx->pc == 0x2AD22Cu) {
        ctx->pc = 0x2AD230u;
        goto label_2ad230;
    }
    ctx->pc = 0x2AD228u;
    SET_GPR_U32(ctx, 31, 0x2AD230u);
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x2AD228u, 0x2AD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD230u;
label_2ad230:
    // 0x2ad230: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ad230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ad234:
    // 0x2ad234: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad238:
    // 0x2ad238: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2ad23c:
    // 0x2ad23c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2ad23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ad240:
    // 0x2ad240: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_2ad244:
    if (ctx->pc == 0x2AD244u) {
        ctx->pc = 0x2AD248u;
        goto label_2ad248;
    }
    ctx->pc = 0x2AD240u;
    {
        const bool branch_taken_0x2ad240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad240) {
            ctx->pc = 0x2AD1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad1e0;
        }
    }
    ctx->pc = 0x2AD248u;
label_2ad248:
    // 0x2ad248: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad24c:
    // 0x2ad24c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2ad24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ad250:
    // 0x2ad250: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ad254:
    if (ctx->pc == 0x2AD254u) {
        ctx->pc = 0x2AD258u;
        goto label_2ad258;
    }
    ctx->pc = 0x2AD250u;
    {
        const bool branch_taken_0x2ad250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad250) {
            ctx->pc = 0x2AD284u;
            goto label_2ad284;
        }
    }
    ctx->pc = 0x2AD258u;
label_2ad258:
    // 0x2ad258: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad25c:
    // 0x2ad25c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2ad25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ad260:
    // 0x2ad260: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ad264:
    if (ctx->pc == 0x2AD264u) {
        ctx->pc = 0x2AD268u;
        goto label_2ad268;
    }
    ctx->pc = 0x2AD260u;
    {
        const bool branch_taken_0x2ad260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad260) {
            ctx->pc = 0x2AD284u;
            goto label_2ad284;
        }
    }
    ctx->pc = 0x2AD268u;
label_2ad268:
    // 0x2ad268: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad26c:
    // 0x2ad26c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2ad26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_2ad270:
    // 0x2ad270: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2ad270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ad274:
    // 0x2ad274: 0xc0ab5d8  jal         func_2AD760
label_2ad278:
    if (ctx->pc == 0x2AD278u) {
        ctx->pc = 0x2AD27Cu;
        goto label_2ad27c;
    }
    ctx->pc = 0x2AD274u;
    SET_GPR_U32(ctx, 31, 0x2AD27Cu);
    ctx->pc = 0x2AD760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD760u, 0x2AD274u, 0x2AD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD27Cu;
label_2ad27c:
    // 0x2ad27c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad280:
    // 0x2ad280: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2ad280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_2ad284:
    // 0x2ad284: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad288:
    // 0x2ad288: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ad288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad28c:
    // 0x2ad28c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ad290:
    if (ctx->pc == 0x2AD290u) {
        ctx->pc = 0x2AD294u;
        goto label_2ad294;
    }
    ctx->pc = 0x2AD28Cu;
    {
        const bool branch_taken_0x2ad28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad28c) {
            ctx->pc = 0x2AD2C0u;
            goto label_2ad2c0;
        }
    }
    ctx->pc = 0x2AD294u;
label_2ad294:
    // 0x2ad294: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad298:
    // 0x2ad298: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ad298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad29c:
    // 0x2ad29c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ad2a0:
    if (ctx->pc == 0x2AD2A0u) {
        ctx->pc = 0x2AD2A4u;
        goto label_2ad2a4;
    }
    ctx->pc = 0x2AD29Cu;
    {
        const bool branch_taken_0x2ad29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad29c) {
            ctx->pc = 0x2AD2C0u;
            goto label_2ad2c0;
        }
    }
    ctx->pc = 0x2AD2A4u;
label_2ad2a4:
    // 0x2ad2a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad2a8:
    // 0x2ad2a8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2ad2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_2ad2ac:
    // 0x2ad2ac: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x2ad2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2ad2b0:
    // 0x2ad2b0: 0xc0ab59c  jal         func_2AD670
label_2ad2b4:
    if (ctx->pc == 0x2AD2B4u) {
        ctx->pc = 0x2AD2B8u;
        goto label_2ad2b8;
    }
    ctx->pc = 0x2AD2B0u;
    SET_GPR_U32(ctx, 31, 0x2AD2B8u);
    ctx->pc = 0x2AD670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD670u, 0x2AD2B0u, 0x2AD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD2B8u;
label_2ad2b8:
    // 0x2ad2b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad2bc:
    // 0x2ad2bc: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2ad2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_2ad2c0:
    // 0x2ad2c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad2c4:
    // 0x2ad2c4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ad2c8:
    // 0x2ad2c8: 0xc0ab594  jal         func_2AD650
label_2ad2cc:
    if (ctx->pc == 0x2AD2CCu) {
        ctx->pc = 0x2AD2D0u;
        goto label_2ad2d0;
    }
    ctx->pc = 0x2AD2C8u;
    SET_GPR_U32(ctx, 31, 0x2AD2D0u);
    ctx->pc = 0x2AD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD650u, 0x2AD2C8u, 0x2AD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD2D0u;
label_2ad2d0:
    // 0x2ad2d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ad2d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad2d4:
    // 0x2ad2d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ad2d8:
    if (ctx->pc == 0x2AD2D8u) {
        ctx->pc = 0x2AD2DCu;
        goto label_2ad2dc;
    }
    ctx->pc = 0x2AD2D4u;
    {
        const bool branch_taken_0x2ad2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad2d4) {
            ctx->pc = 0x2AD304u;
            goto label_2ad304;
        }
    }
    ctx->pc = 0x2AD2DCu;
label_2ad2dc:
    // 0x2ad2dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ad2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ad2e0:
    // 0x2ad2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad2e4:
    // 0x2ad2e4: 0xc0ac13c  jal         func_2B04F0
label_2ad2e8:
    if (ctx->pc == 0x2AD2E8u) {
        ctx->pc = 0x2AD2ECu;
        goto label_2ad2ec;
    }
    ctx->pc = 0x2AD2E4u;
    SET_GPR_U32(ctx, 31, 0x2AD2ECu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x2AD2E4u, 0x2AD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD2ECu;
label_2ad2ec:
    // 0x2ad2ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad2f0:
    // 0x2ad2f0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ad2f4:
    // 0x2ad2f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ad2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ad2f8:
    // 0x2ad2f8: 0xc0ab558  jal         func_2AD560
label_2ad2fc:
    if (ctx->pc == 0x2AD2FCu) {
        ctx->pc = 0x2AD300u;
        goto label_2ad300;
    }
    ctx->pc = 0x2AD2F8u;
    SET_GPR_U32(ctx, 31, 0x2AD300u);
    ctx->pc = 0x2AD560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD560u, 0x2AD2F8u, 0x2AD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD300u;
label_2ad300:
    // 0x2ad300: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ad300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad304:
    // 0x2ad304: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad308:
    // 0x2ad308: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ad30c:
    // 0x2ad30c: 0xc0ab550  jal         func_2AD540
label_2ad310:
    if (ctx->pc == 0x2AD310u) {
        ctx->pc = 0x2AD314u;
        goto label_2ad314;
    }
    ctx->pc = 0x2AD30Cu;
    SET_GPR_U32(ctx, 31, 0x2AD314u);
    ctx->pc = 0x2AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD540u, 0x2AD30Cu, 0x2AD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD314u;
label_2ad314:
    // 0x2ad314: 0x1662fff1  bne         $s3, $v0, . + 4 + (-0xF << 2)
label_2ad318:
    if (ctx->pc == 0x2AD318u) {
        ctx->pc = 0x2AD31Cu;
        goto label_2ad31c;
    }
    ctx->pc = 0x2AD314u;
    {
        const bool branch_taken_0x2ad314 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad314) {
            ctx->pc = 0x2AD2DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad2dc;
        }
    }
    ctx->pc = 0x2AD31Cu;
label_2ad31c:
    // 0x2ad31c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad320:
    // 0x2ad320: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad324:
    // 0x2ad324: 0xc0ab61c  jal         func_2AD870
label_2ad328:
    if (ctx->pc == 0x2AD328u) {
        ctx->pc = 0x2AD32Cu;
        goto label_2ad32c;
    }
    ctx->pc = 0x2AD324u;
    SET_GPR_U32(ctx, 31, 0x2AD32Cu);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AD324u, 0x2AD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD32Cu;
label_2ad32c:
    // 0x2ad32c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ad32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad330:
    // 0x2ad330: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ad334:
    if (ctx->pc == 0x2AD334u) {
        ctx->pc = 0x2AD338u;
        goto label_2ad338;
    }
    ctx->pc = 0x2AD330u;
    {
        const bool branch_taken_0x2ad330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad330) {
            ctx->pc = 0x2AD370u;
            goto label_2ad370;
        }
    }
    ctx->pc = 0x2AD338u;
label_2ad338:
    // 0x2ad338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ad338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad33c:
    // 0x2ad33c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ad340:
    if (ctx->pc == 0x2AD340u) {
        ctx->pc = 0x2AD344u;
        goto label_2ad344;
    }
    ctx->pc = 0x2AD33Cu;
    {
        const bool branch_taken_0x2ad33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad33c) {
            ctx->pc = 0x2AD36Cu;
            goto label_2ad36c;
        }
    }
    ctx->pc = 0x2AD344u;
label_2ad344:
    // 0x2ad344: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ad344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad348:
    // 0x2ad348: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ad34c:
    if (ctx->pc == 0x2AD34Cu) {
        ctx->pc = 0x2AD350u;
        goto label_2ad350;
    }
    ctx->pc = 0x2AD348u;
    {
        const bool branch_taken_0x2ad348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad348) {
            ctx->pc = 0x2AD36Cu;
            goto label_2ad36c;
        }
    }
    ctx->pc = 0x2AD350u;
label_2ad350:
    // 0x2ad350: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad354:
    // 0x2ad354: 0xc0ab548  jal         func_2AD520
label_2ad358:
    if (ctx->pc == 0x2AD358u) {
        ctx->pc = 0x2AD35Cu;
        goto label_2ad35c;
    }
    ctx->pc = 0x2AD354u;
    SET_GPR_U32(ctx, 31, 0x2AD35Cu);
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2AD354u, 0x2AD35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD35Cu;
label_2ad35c:
    // 0x2ad35c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad360:
    // 0x2ad360: 0xc119c5c  jal         func_467170
label_2ad364:
    if (ctx->pc == 0x2AD364u) {
        ctx->pc = 0x2AD368u;
        goto label_2ad368;
    }
    ctx->pc = 0x2AD360u;
    SET_GPR_U32(ctx, 31, 0x2AD368u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AD360u, 0x2AD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD368u;
label_2ad368:
    // 0x2ad368: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ad368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2ad36c:
    // 0x2ad36c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ad36cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2ad370:
    // 0x2ad370: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad374:
    // 0x2ad374: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad378:
    // 0x2ad378: 0xc0ab614  jal         func_2AD850
label_2ad37c:
    if (ctx->pc == 0x2AD37Cu) {
        ctx->pc = 0x2AD380u;
        goto label_2ad380;
    }
    ctx->pc = 0x2AD378u;
    SET_GPR_U32(ctx, 31, 0x2AD380u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AD378u, 0x2AD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD380u;
label_2ad380:
    // 0x2ad380: 0x1622ffed  bne         $s1, $v0, . + 4 + (-0x13 << 2)
label_2ad384:
    if (ctx->pc == 0x2AD384u) {
        ctx->pc = 0x2AD388u;
        goto label_2ad388;
    }
    ctx->pc = 0x2AD380u;
    {
        const bool branch_taken_0x2ad380 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad380) {
            ctx->pc = 0x2AD338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad338;
        }
    }
    ctx->pc = 0x2AD388u;
label_2ad388:
    // 0x2ad388: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad38c:
    // 0x2ad38c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad390:
    // 0x2ad390: 0xc0ab504  jal         func_2AD410
label_2ad394:
    if (ctx->pc == 0x2AD394u) {
        ctx->pc = 0x2AD398u;
        goto label_2ad398;
    }
    ctx->pc = 0x2AD390u;
    SET_GPR_U32(ctx, 31, 0x2AD398u);
    ctx->pc = 0x2AD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD410u, 0x2AD390u, 0x2AD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD398u;
label_2ad398:
    // 0x2ad398: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad39c:
    // 0x2ad39c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2ad39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ad3a0:
    // 0x2ad3a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ad3a4:
    if (ctx->pc == 0x2AD3A4u) {
        ctx->pc = 0x2AD3A8u;
        goto label_2ad3a8;
    }
    ctx->pc = 0x2AD3A0u;
    {
        const bool branch_taken_0x2ad3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad3a0) {
            ctx->pc = 0x2AD3C0u;
            goto label_2ad3c0;
        }
    }
    ctx->pc = 0x2AD3A8u;
label_2ad3a8:
    // 0x2ad3a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad3ac:
    // 0x2ad3ac: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2ad3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ad3b0:
    // 0x2ad3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad3b4:
    // 0x2ad3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad3b8:
    // 0x2ad3b8: 0xc12702a  jal         func_49C0A8
label_2ad3bc:
    if (ctx->pc == 0x2AD3BCu) {
        ctx->pc = 0x2AD3C0u;
        goto label_2ad3c0;
    }
    ctx->pc = 0x2AD3B8u;
    SET_GPR_U32(ctx, 31, 0x2AD3C0u);
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x2AD3B8u, 0x2AD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD3C0u;
label_2ad3c0:
    // 0x2ad3c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad3c4:
    // 0x2ad3c4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2ad3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ad3c8:
    // 0x2ad3c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ad3cc:
    if (ctx->pc == 0x2AD3CCu) {
        ctx->pc = 0x2AD3D0u;
        goto label_2ad3d0;
    }
    ctx->pc = 0x2AD3C8u;
    {
        const bool branch_taken_0x2ad3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad3c8) {
            ctx->pc = 0x2AD3E8u;
            goto label_2ad3e8;
        }
    }
    ctx->pc = 0x2AD3D0u;
label_2ad3d0:
    // 0x2ad3d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2ad3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad3d4:
    // 0x2ad3d4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2ad3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ad3d8:
    // 0x2ad3d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad3dc:
    // 0x2ad3dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad3e0:
    // 0x2ad3e0: 0xc12702a  jal         func_49C0A8
label_2ad3e4:
    if (ctx->pc == 0x2AD3E4u) {
        ctx->pc = 0x2AD3E8u;
        goto label_2ad3e8;
    }
    ctx->pc = 0x2AD3E0u;
    SET_GPR_U32(ctx, 31, 0x2AD3E8u);
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x2AD3E0u, 0x2AD3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD3E8u;
label_2ad3e8:
    // 0x2ad3e8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ad3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ad3ec:
    // 0x2ad3ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ad3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ad3f0:
    // 0x2ad3f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ad3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ad3f4:
    // 0x2ad3f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ad3f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ad3f8:
    // 0x2ad3f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad3fc:
    // 0x2ad3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad400:
    // 0x2ad400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad404:
    // 0x2ad404: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2ad404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ad408:
    // 0x2ad408: 0x3e00008  jr          $ra
label_2ad40c:
    if (ctx->pc == 0x2AD40Cu) {
        ctx->pc = 0x2AD410u;
        goto label_fallthrough_0x2ad408;
    }
    ctx->pc = 0x2AD408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad408:
    ctx->pc = 0x2AD410u;
}
