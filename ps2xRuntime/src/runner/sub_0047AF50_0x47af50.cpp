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

// Function: sub_0047AF50
// Address: 0x47af50 - 0x47b4e0
void sub_0047AF50_0x47af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AF50_0x47af50");
#endif

    switch (ctx->pc) {
        case 0x47af50u: goto label_47af50;
        case 0x47af54u: goto label_47af54;
        case 0x47af58u: goto label_47af58;
        case 0x47af5cu: goto label_47af5c;
        case 0x47af60u: goto label_47af60;
        case 0x47af64u: goto label_47af64;
        case 0x47af68u: goto label_47af68;
        case 0x47af6cu: goto label_47af6c;
        case 0x47af70u: goto label_47af70;
        case 0x47af74u: goto label_47af74;
        case 0x47af78u: goto label_47af78;
        case 0x47af7cu: goto label_47af7c;
        case 0x47af80u: goto label_47af80;
        case 0x47af84u: goto label_47af84;
        case 0x47af88u: goto label_47af88;
        case 0x47af8cu: goto label_47af8c;
        case 0x47af90u: goto label_47af90;
        case 0x47af94u: goto label_47af94;
        case 0x47af98u: goto label_47af98;
        case 0x47af9cu: goto label_47af9c;
        case 0x47afa0u: goto label_47afa0;
        case 0x47afa4u: goto label_47afa4;
        case 0x47afa8u: goto label_47afa8;
        case 0x47afacu: goto label_47afac;
        case 0x47afb0u: goto label_47afb0;
        case 0x47afb4u: goto label_47afb4;
        case 0x47afb8u: goto label_47afb8;
        case 0x47afbcu: goto label_47afbc;
        case 0x47afc0u: goto label_47afc0;
        case 0x47afc4u: goto label_47afc4;
        case 0x47afc8u: goto label_47afc8;
        case 0x47afccu: goto label_47afcc;
        case 0x47afd0u: goto label_47afd0;
        case 0x47afd4u: goto label_47afd4;
        case 0x47afd8u: goto label_47afd8;
        case 0x47afdcu: goto label_47afdc;
        case 0x47afe0u: goto label_47afe0;
        case 0x47afe4u: goto label_47afe4;
        case 0x47afe8u: goto label_47afe8;
        case 0x47afecu: goto label_47afec;
        case 0x47aff0u: goto label_47aff0;
        case 0x47aff4u: goto label_47aff4;
        case 0x47aff8u: goto label_47aff8;
        case 0x47affcu: goto label_47affc;
        case 0x47b000u: goto label_47b000;
        case 0x47b004u: goto label_47b004;
        case 0x47b008u: goto label_47b008;
        case 0x47b00cu: goto label_47b00c;
        case 0x47b010u: goto label_47b010;
        case 0x47b014u: goto label_47b014;
        case 0x47b018u: goto label_47b018;
        case 0x47b01cu: goto label_47b01c;
        case 0x47b020u: goto label_47b020;
        case 0x47b024u: goto label_47b024;
        case 0x47b028u: goto label_47b028;
        case 0x47b02cu: goto label_47b02c;
        case 0x47b030u: goto label_47b030;
        case 0x47b034u: goto label_47b034;
        case 0x47b038u: goto label_47b038;
        case 0x47b03cu: goto label_47b03c;
        case 0x47b040u: goto label_47b040;
        case 0x47b044u: goto label_47b044;
        case 0x47b048u: goto label_47b048;
        case 0x47b04cu: goto label_47b04c;
        case 0x47b050u: goto label_47b050;
        case 0x47b054u: goto label_47b054;
        case 0x47b058u: goto label_47b058;
        case 0x47b05cu: goto label_47b05c;
        case 0x47b060u: goto label_47b060;
        case 0x47b064u: goto label_47b064;
        case 0x47b068u: goto label_47b068;
        case 0x47b06cu: goto label_47b06c;
        case 0x47b070u: goto label_47b070;
        case 0x47b074u: goto label_47b074;
        case 0x47b078u: goto label_47b078;
        case 0x47b07cu: goto label_47b07c;
        case 0x47b080u: goto label_47b080;
        case 0x47b084u: goto label_47b084;
        case 0x47b088u: goto label_47b088;
        case 0x47b08cu: goto label_47b08c;
        case 0x47b090u: goto label_47b090;
        case 0x47b094u: goto label_47b094;
        case 0x47b098u: goto label_47b098;
        case 0x47b09cu: goto label_47b09c;
        case 0x47b0a0u: goto label_47b0a0;
        case 0x47b0a4u: goto label_47b0a4;
        case 0x47b0a8u: goto label_47b0a8;
        case 0x47b0acu: goto label_47b0ac;
        case 0x47b0b0u: goto label_47b0b0;
        case 0x47b0b4u: goto label_47b0b4;
        case 0x47b0b8u: goto label_47b0b8;
        case 0x47b0bcu: goto label_47b0bc;
        case 0x47b0c0u: goto label_47b0c0;
        case 0x47b0c4u: goto label_47b0c4;
        case 0x47b0c8u: goto label_47b0c8;
        case 0x47b0ccu: goto label_47b0cc;
        case 0x47b0d0u: goto label_47b0d0;
        case 0x47b0d4u: goto label_47b0d4;
        case 0x47b0d8u: goto label_47b0d8;
        case 0x47b0dcu: goto label_47b0dc;
        case 0x47b0e0u: goto label_47b0e0;
        case 0x47b0e4u: goto label_47b0e4;
        case 0x47b0e8u: goto label_47b0e8;
        case 0x47b0ecu: goto label_47b0ec;
        case 0x47b0f0u: goto label_47b0f0;
        case 0x47b0f4u: goto label_47b0f4;
        case 0x47b0f8u: goto label_47b0f8;
        case 0x47b0fcu: goto label_47b0fc;
        case 0x47b100u: goto label_47b100;
        case 0x47b104u: goto label_47b104;
        case 0x47b108u: goto label_47b108;
        case 0x47b10cu: goto label_47b10c;
        case 0x47b110u: goto label_47b110;
        case 0x47b114u: goto label_47b114;
        case 0x47b118u: goto label_47b118;
        case 0x47b11cu: goto label_47b11c;
        case 0x47b120u: goto label_47b120;
        case 0x47b124u: goto label_47b124;
        case 0x47b128u: goto label_47b128;
        case 0x47b12cu: goto label_47b12c;
        case 0x47b130u: goto label_47b130;
        case 0x47b134u: goto label_47b134;
        case 0x47b138u: goto label_47b138;
        case 0x47b13cu: goto label_47b13c;
        case 0x47b140u: goto label_47b140;
        case 0x47b144u: goto label_47b144;
        case 0x47b148u: goto label_47b148;
        case 0x47b14cu: goto label_47b14c;
        case 0x47b150u: goto label_47b150;
        case 0x47b154u: goto label_47b154;
        case 0x47b158u: goto label_47b158;
        case 0x47b15cu: goto label_47b15c;
        case 0x47b160u: goto label_47b160;
        case 0x47b164u: goto label_47b164;
        case 0x47b168u: goto label_47b168;
        case 0x47b16cu: goto label_47b16c;
        case 0x47b170u: goto label_47b170;
        case 0x47b174u: goto label_47b174;
        case 0x47b178u: goto label_47b178;
        case 0x47b17cu: goto label_47b17c;
        case 0x47b180u: goto label_47b180;
        case 0x47b184u: goto label_47b184;
        case 0x47b188u: goto label_47b188;
        case 0x47b18cu: goto label_47b18c;
        case 0x47b190u: goto label_47b190;
        case 0x47b194u: goto label_47b194;
        case 0x47b198u: goto label_47b198;
        case 0x47b19cu: goto label_47b19c;
        case 0x47b1a0u: goto label_47b1a0;
        case 0x47b1a4u: goto label_47b1a4;
        case 0x47b1a8u: goto label_47b1a8;
        case 0x47b1acu: goto label_47b1ac;
        case 0x47b1b0u: goto label_47b1b0;
        case 0x47b1b4u: goto label_47b1b4;
        case 0x47b1b8u: goto label_47b1b8;
        case 0x47b1bcu: goto label_47b1bc;
        case 0x47b1c0u: goto label_47b1c0;
        case 0x47b1c4u: goto label_47b1c4;
        case 0x47b1c8u: goto label_47b1c8;
        case 0x47b1ccu: goto label_47b1cc;
        case 0x47b1d0u: goto label_47b1d0;
        case 0x47b1d4u: goto label_47b1d4;
        case 0x47b1d8u: goto label_47b1d8;
        case 0x47b1dcu: goto label_47b1dc;
        case 0x47b1e0u: goto label_47b1e0;
        case 0x47b1e4u: goto label_47b1e4;
        case 0x47b1e8u: goto label_47b1e8;
        case 0x47b1ecu: goto label_47b1ec;
        case 0x47b1f0u: goto label_47b1f0;
        case 0x47b1f4u: goto label_47b1f4;
        case 0x47b1f8u: goto label_47b1f8;
        case 0x47b1fcu: goto label_47b1fc;
        case 0x47b200u: goto label_47b200;
        case 0x47b204u: goto label_47b204;
        case 0x47b208u: goto label_47b208;
        case 0x47b20cu: goto label_47b20c;
        case 0x47b210u: goto label_47b210;
        case 0x47b214u: goto label_47b214;
        case 0x47b218u: goto label_47b218;
        case 0x47b21cu: goto label_47b21c;
        case 0x47b220u: goto label_47b220;
        case 0x47b224u: goto label_47b224;
        case 0x47b228u: goto label_47b228;
        case 0x47b22cu: goto label_47b22c;
        case 0x47b230u: goto label_47b230;
        case 0x47b234u: goto label_47b234;
        case 0x47b238u: goto label_47b238;
        case 0x47b23cu: goto label_47b23c;
        case 0x47b240u: goto label_47b240;
        case 0x47b244u: goto label_47b244;
        case 0x47b248u: goto label_47b248;
        case 0x47b24cu: goto label_47b24c;
        case 0x47b250u: goto label_47b250;
        case 0x47b254u: goto label_47b254;
        case 0x47b258u: goto label_47b258;
        case 0x47b25cu: goto label_47b25c;
        case 0x47b260u: goto label_47b260;
        case 0x47b264u: goto label_47b264;
        case 0x47b268u: goto label_47b268;
        case 0x47b26cu: goto label_47b26c;
        case 0x47b270u: goto label_47b270;
        case 0x47b274u: goto label_47b274;
        case 0x47b278u: goto label_47b278;
        case 0x47b27cu: goto label_47b27c;
        case 0x47b280u: goto label_47b280;
        case 0x47b284u: goto label_47b284;
        case 0x47b288u: goto label_47b288;
        case 0x47b28cu: goto label_47b28c;
        case 0x47b290u: goto label_47b290;
        case 0x47b294u: goto label_47b294;
        case 0x47b298u: goto label_47b298;
        case 0x47b29cu: goto label_47b29c;
        case 0x47b2a0u: goto label_47b2a0;
        case 0x47b2a4u: goto label_47b2a4;
        case 0x47b2a8u: goto label_47b2a8;
        case 0x47b2acu: goto label_47b2ac;
        case 0x47b2b0u: goto label_47b2b0;
        case 0x47b2b4u: goto label_47b2b4;
        case 0x47b2b8u: goto label_47b2b8;
        case 0x47b2bcu: goto label_47b2bc;
        case 0x47b2c0u: goto label_47b2c0;
        case 0x47b2c4u: goto label_47b2c4;
        case 0x47b2c8u: goto label_47b2c8;
        case 0x47b2ccu: goto label_47b2cc;
        case 0x47b2d0u: goto label_47b2d0;
        case 0x47b2d4u: goto label_47b2d4;
        case 0x47b2d8u: goto label_47b2d8;
        case 0x47b2dcu: goto label_47b2dc;
        case 0x47b2e0u: goto label_47b2e0;
        case 0x47b2e4u: goto label_47b2e4;
        case 0x47b2e8u: goto label_47b2e8;
        case 0x47b2ecu: goto label_47b2ec;
        case 0x47b2f0u: goto label_47b2f0;
        case 0x47b2f4u: goto label_47b2f4;
        case 0x47b2f8u: goto label_47b2f8;
        case 0x47b2fcu: goto label_47b2fc;
        case 0x47b300u: goto label_47b300;
        case 0x47b304u: goto label_47b304;
        case 0x47b308u: goto label_47b308;
        case 0x47b30cu: goto label_47b30c;
        case 0x47b310u: goto label_47b310;
        case 0x47b314u: goto label_47b314;
        case 0x47b318u: goto label_47b318;
        case 0x47b31cu: goto label_47b31c;
        case 0x47b320u: goto label_47b320;
        case 0x47b324u: goto label_47b324;
        case 0x47b328u: goto label_47b328;
        case 0x47b32cu: goto label_47b32c;
        case 0x47b330u: goto label_47b330;
        case 0x47b334u: goto label_47b334;
        case 0x47b338u: goto label_47b338;
        case 0x47b33cu: goto label_47b33c;
        case 0x47b340u: goto label_47b340;
        case 0x47b344u: goto label_47b344;
        case 0x47b348u: goto label_47b348;
        case 0x47b34cu: goto label_47b34c;
        case 0x47b350u: goto label_47b350;
        case 0x47b354u: goto label_47b354;
        case 0x47b358u: goto label_47b358;
        case 0x47b35cu: goto label_47b35c;
        case 0x47b360u: goto label_47b360;
        case 0x47b364u: goto label_47b364;
        case 0x47b368u: goto label_47b368;
        case 0x47b36cu: goto label_47b36c;
        case 0x47b370u: goto label_47b370;
        case 0x47b374u: goto label_47b374;
        case 0x47b378u: goto label_47b378;
        case 0x47b37cu: goto label_47b37c;
        case 0x47b380u: goto label_47b380;
        case 0x47b384u: goto label_47b384;
        case 0x47b388u: goto label_47b388;
        case 0x47b38cu: goto label_47b38c;
        case 0x47b390u: goto label_47b390;
        case 0x47b394u: goto label_47b394;
        case 0x47b398u: goto label_47b398;
        case 0x47b39cu: goto label_47b39c;
        case 0x47b3a0u: goto label_47b3a0;
        case 0x47b3a4u: goto label_47b3a4;
        case 0x47b3a8u: goto label_47b3a8;
        case 0x47b3acu: goto label_47b3ac;
        case 0x47b3b0u: goto label_47b3b0;
        case 0x47b3b4u: goto label_47b3b4;
        case 0x47b3b8u: goto label_47b3b8;
        case 0x47b3bcu: goto label_47b3bc;
        case 0x47b3c0u: goto label_47b3c0;
        case 0x47b3c4u: goto label_47b3c4;
        case 0x47b3c8u: goto label_47b3c8;
        case 0x47b3ccu: goto label_47b3cc;
        case 0x47b3d0u: goto label_47b3d0;
        case 0x47b3d4u: goto label_47b3d4;
        case 0x47b3d8u: goto label_47b3d8;
        case 0x47b3dcu: goto label_47b3dc;
        case 0x47b3e0u: goto label_47b3e0;
        case 0x47b3e4u: goto label_47b3e4;
        case 0x47b3e8u: goto label_47b3e8;
        case 0x47b3ecu: goto label_47b3ec;
        case 0x47b3f0u: goto label_47b3f0;
        case 0x47b3f4u: goto label_47b3f4;
        case 0x47b3f8u: goto label_47b3f8;
        case 0x47b3fcu: goto label_47b3fc;
        case 0x47b400u: goto label_47b400;
        case 0x47b404u: goto label_47b404;
        case 0x47b408u: goto label_47b408;
        case 0x47b40cu: goto label_47b40c;
        case 0x47b410u: goto label_47b410;
        case 0x47b414u: goto label_47b414;
        case 0x47b418u: goto label_47b418;
        case 0x47b41cu: goto label_47b41c;
        case 0x47b420u: goto label_47b420;
        case 0x47b424u: goto label_47b424;
        case 0x47b428u: goto label_47b428;
        case 0x47b42cu: goto label_47b42c;
        case 0x47b430u: goto label_47b430;
        case 0x47b434u: goto label_47b434;
        case 0x47b438u: goto label_47b438;
        case 0x47b43cu: goto label_47b43c;
        case 0x47b440u: goto label_47b440;
        case 0x47b444u: goto label_47b444;
        case 0x47b448u: goto label_47b448;
        case 0x47b44cu: goto label_47b44c;
        case 0x47b450u: goto label_47b450;
        case 0x47b454u: goto label_47b454;
        case 0x47b458u: goto label_47b458;
        case 0x47b45cu: goto label_47b45c;
        case 0x47b460u: goto label_47b460;
        case 0x47b464u: goto label_47b464;
        case 0x47b468u: goto label_47b468;
        case 0x47b46cu: goto label_47b46c;
        case 0x47b470u: goto label_47b470;
        case 0x47b474u: goto label_47b474;
        case 0x47b478u: goto label_47b478;
        case 0x47b47cu: goto label_47b47c;
        case 0x47b480u: goto label_47b480;
        case 0x47b484u: goto label_47b484;
        case 0x47b488u: goto label_47b488;
        case 0x47b48cu: goto label_47b48c;
        case 0x47b490u: goto label_47b490;
        case 0x47b494u: goto label_47b494;
        case 0x47b498u: goto label_47b498;
        case 0x47b49cu: goto label_47b49c;
        case 0x47b4a0u: goto label_47b4a0;
        case 0x47b4a4u: goto label_47b4a4;
        case 0x47b4a8u: goto label_47b4a8;
        case 0x47b4acu: goto label_47b4ac;
        case 0x47b4b0u: goto label_47b4b0;
        case 0x47b4b4u: goto label_47b4b4;
        case 0x47b4b8u: goto label_47b4b8;
        case 0x47b4bcu: goto label_47b4bc;
        case 0x47b4c0u: goto label_47b4c0;
        case 0x47b4c4u: goto label_47b4c4;
        case 0x47b4c8u: goto label_47b4c8;
        case 0x47b4ccu: goto label_47b4cc;
        case 0x47b4d0u: goto label_47b4d0;
        case 0x47b4d4u: goto label_47b4d4;
        case 0x47b4d8u: goto label_47b4d8;
        case 0x47b4dcu: goto label_47b4dc;
        default: break;
    }

    ctx->pc = 0x47af50u;

label_47af50:
    // 0x47af50: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x47af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_47af54:
    // 0x47af54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x47af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_47af58:
    // 0x47af58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x47af58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_47af5c:
    // 0x47af5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_47af60:
    // 0x47af60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47af60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47af64:
    // 0x47af64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47af64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47af68:
    // 0x47af68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47af6c:
    // 0x47af6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47af6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47af70:
    // 0x47af70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47af74:
    // 0x47af74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47af74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47af78:
    // 0x47af78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47af7c:
    // 0x47af7c: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x47af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
label_47af80:
    // 0x47af80: 0xe7ac0230  swc1        $f12, 0x230($sp)
    ctx->pc = 0x47af80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_47af84:
    // 0x47af84: 0xe7ad0240  swc1        $f13, 0x240($sp)
    ctx->pc = 0x47af84u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_47af88:
    // 0x47af88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x47af88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_47af8c:
    // 0x47af8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47af8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47af90:
    // 0x47af90: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x47af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47af94:
    // 0x47af94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x47af94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_47af98:
    // 0x47af98: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x47af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_47af9c:
    // 0x47af9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x47af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_47afa0:
    // 0x47afa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47afa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47afa4:
    // 0x47afa4: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x47afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47afa8:
    // 0x47afa8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x47afa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_47afac:
    // 0x47afac: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x47afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_47afb0:
    // 0x47afb0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x47afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_47afb4:
    // 0x47afb4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x47afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_47afb8:
    // 0x47afb8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_47afbc:
    if (ctx->pc == 0x47AFBCu) {
        ctx->pc = 0x47AFC0u;
        goto label_47afc0;
    }
    ctx->pc = 0x47AFB8u;
    {
        const bool branch_taken_0x47afb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47afb8) {
            ctx->pc = 0x47AFE0u;
            goto label_47afe0;
        }
    }
    ctx->pc = 0x47AFC0u;
label_47afc0:
    // 0x47afc0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x47afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_47afc4:
    // 0x47afc4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x47afc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_47afc8:
    // 0x47afc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47afcc:
    // 0x47afcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47afccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_47afd0:
    // 0x47afd0: 0x0  nop
    ctx->pc = 0x47afd0u;
    // NOP
label_47afd4:
    // 0x47afd4: 0x0  nop
    ctx->pc = 0x47afd4u;
    // NOP
label_47afd8:
    // 0x47afd8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_47afdc:
    if (ctx->pc == 0x47AFDCu) {
        ctx->pc = 0x47AFE0u;
        goto label_47afe0;
    }
    ctx->pc = 0x47AFD8u;
    {
        const bool branch_taken_0x47afd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47afd8) {
            ctx->pc = 0x47AFC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47afc4;
        }
    }
    ctx->pc = 0x47AFE0u;
label_47afe0:
    // 0x47afe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47afe4:
    // 0x47afe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47afe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47afe8:
    // 0x47afe8: 0x0  nop
    ctx->pc = 0x47afe8u;
    // NOP
label_47afec:
    // 0x47afec: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x47afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_47aff0:
    // 0x47aff0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47aff4:
    // 0x47aff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47aff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47aff8:
    // 0x47aff8: 0x0  nop
    ctx->pc = 0x47aff8u;
    // NOP
label_47affc:
    // 0x47affc: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x47affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_47b000:
    // 0x47b000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b004:
    // 0x47b004: 0x0  nop
    ctx->pc = 0x47b004u;
    // NOP
label_47b008:
    // 0x47b008: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x47b008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_47b00c:
    // 0x47b00c: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x47b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_47b010:
    // 0x47b010: 0xc780b4b4  lwc1        $f0, -0x4B4C($gp)
    ctx->pc = 0x47b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b014:
    // 0x47b014: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x47b014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_47b018:
    // 0x47b018: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x47b018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
label_47b01c:
    // 0x47b01c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47b01cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b020:
    // 0x47b020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47b020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b024:
    // 0x47b024: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x47b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
label_47b028:
    // 0x47b028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47b028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b02c:
    // 0x47b02c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47b02cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b030:
    // 0x47b030: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x47b030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_47b034:
    // 0x47b034: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x47b034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_47b038:
    // 0x47b038: 0xc0e3992  jal         func_38E648
label_47b03c:
    if (ctx->pc == 0x47B03Cu) {
        ctx->pc = 0x47B040u;
        goto label_47b040;
    }
    ctx->pc = 0x47B038u;
    SET_GPR_U32(ctx, 31, 0x47B040u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x47B038u, 0x47B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B040u;
label_47b040:
    // 0x47b040: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x47b040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_47b044:
    // 0x47b044: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_47b048:
    if (ctx->pc == 0x47B048u) {
        ctx->pc = 0x47B04Cu;
        goto label_47b04c;
    }
    ctx->pc = 0x47B044u;
    {
        const bool branch_taken_0x47b044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b044) {
            ctx->pc = 0x47B058u;
            goto label_47b058;
        }
    }
    ctx->pc = 0x47B04Cu;
label_47b04c:
    // 0x47b04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47b04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b050:
    // 0x47b050: 0x10000115  b           . + 4 + (0x115 << 2)
label_47b054:
    if (ctx->pc == 0x47B054u) {
        ctx->pc = 0x47B058u;
        goto label_47b058;
    }
    ctx->pc = 0x47B050u;
    {
        const bool branch_taken_0x47b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b050) {
            ctx->pc = 0x47B4A8u;
            goto label_47b4a8;
        }
    }
    ctx->pc = 0x47B058u;
label_47b058:
    // 0x47b058: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x47b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_47b05c:
    // 0x47b05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47b05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b060:
    // 0x47b060: 0xc0e39e0  jal         func_38E780
label_47b064:
    if (ctx->pc == 0x47B064u) {
        ctx->pc = 0x47B068u;
        goto label_47b068;
    }
    ctx->pc = 0x47B060u;
    SET_GPR_U32(ctx, 31, 0x47B068u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x47B060u, 0x47B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B068u;
label_47b068:
    // 0x47b068: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x47b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47b06c:
    // 0x47b06c: 0xa7a2021e  sh          $v0, 0x21E($sp)
    ctx->pc = 0x47b06cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 542), (uint16_t)GPR_U32(ctx, 2));
label_47b070:
    // 0x47b070: 0x97a2021e  lhu         $v0, 0x21E($sp)
    ctx->pc = 0x47b070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 542)));
label_47b074:
    // 0x47b074: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x47b074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47b078:
    // 0x47b078: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x47b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47b07c:
    // 0x47b07c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b080:
    // 0x47b080: 0xc0e2dbc  jal         func_38B6F0
label_47b084:
    if (ctx->pc == 0x47B084u) {
        ctx->pc = 0x47B088u;
        goto label_47b088;
    }
    ctx->pc = 0x47B080u;
    SET_GPR_U32(ctx, 31, 0x47B088u);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x47B080u, 0x47B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B088u;
label_47b088:
    // 0x47b088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47b088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b08c:
    // 0x47b08c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_47b090:
    if (ctx->pc == 0x47B090u) {
        ctx->pc = 0x47B094u;
        goto label_47b094;
    }
    ctx->pc = 0x47B08Cu;
    {
        const bool branch_taken_0x47b08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b08c) {
            ctx->pc = 0x47B0A0u;
            goto label_47b0a0;
        }
    }
    ctx->pc = 0x47B094u;
label_47b094:
    // 0x47b094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47b094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b098:
    // 0x47b098: 0x10000103  b           . + 4 + (0x103 << 2)
label_47b09c:
    if (ctx->pc == 0x47B09Cu) {
        ctx->pc = 0x47B0A0u;
        goto label_47b0a0;
    }
    ctx->pc = 0x47B098u;
    {
        const bool branch_taken_0x47b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b098) {
            ctx->pc = 0x47B4A8u;
            goto label_47b4a8;
        }
    }
    ctx->pc = 0x47B0A0u;
label_47b0a0:
    // 0x47b0a0: 0x8e350030  lw          $s5, 0x30($s1)
    ctx->pc = 0x47b0a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_47b0a4:
    // 0x47b0a4: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x47b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_47b0a8:
    // 0x47b0a8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x47b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_47b0ac:
    // 0x47b0ac: 0xc052608  jal         func_149820
label_47b0b0:
    if (ctx->pc == 0x47B0B0u) {
        ctx->pc = 0x47B0B4u;
        goto label_47b0b4;
    }
    ctx->pc = 0x47B0ACu;
    SET_GPR_U32(ctx, 31, 0x47B0B4u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47B0ACu, 0x47B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B0B4u;
label_47b0b4:
    // 0x47b0b4: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x47b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_47b0b8:
    // 0x47b0b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47b0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b0bc:
    // 0x47b0bc: 0xc052608  jal         func_149820
label_47b0c0:
    if (ctx->pc == 0x47B0C0u) {
        ctx->pc = 0x47B0C4u;
        goto label_47b0c4;
    }
    ctx->pc = 0x47B0BCu;
    SET_GPR_U32(ctx, 31, 0x47B0C4u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47B0BCu, 0x47B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B0C4u;
label_47b0c4:
    // 0x47b0c4: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x47b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_47b0c8:
    // 0x47b0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b0cc:
    // 0x47b0cc: 0xc052608  jal         func_149820
label_47b0d0:
    if (ctx->pc == 0x47B0D0u) {
        ctx->pc = 0x47B0D4u;
        goto label_47b0d4;
    }
    ctx->pc = 0x47B0CCu;
    SET_GPR_U32(ctx, 31, 0x47B0D4u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47B0CCu, 0x47B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B0D4u;
label_47b0d4:
    // 0x47b0d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x47b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47b0d8:
    // 0x47b0d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47b0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b0dc:
    // 0x47b0dc: 0xc052608  jal         func_149820
label_47b0e0:
    if (ctx->pc == 0x47B0E0u) {
        ctx->pc = 0x47B0E4u;
        goto label_47b0e4;
    }
    ctx->pc = 0x47B0DCu;
    SET_GPR_U32(ctx, 31, 0x47B0E4u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47B0DCu, 0x47B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B0E4u;
label_47b0e4:
    // 0x47b0e4: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x47b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_47b0e8:
    // 0x47b0e8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x47b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47b0ec:
    // 0x47b0ec: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x47b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_47b0f0:
    // 0x47b0f0: 0xc11edd4  jal         func_47B750
label_47b0f4:
    if (ctx->pc == 0x47B0F4u) {
        ctx->pc = 0x47B0F8u;
        goto label_47b0f8;
    }
    ctx->pc = 0x47B0F0u;
    SET_GPR_U32(ctx, 31, 0x47B0F8u);
    ctx->pc = 0x47B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B750u, 0x47B0F0u, 0x47B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B0F8u;
label_47b0f8:
    // 0x47b0f8: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x47b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_47b0fc:
    // 0x47b0fc: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x47b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_47b100:
    // 0x47b100: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x47b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_47b104:
    // 0x47b104: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x47b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_47b108:
    // 0x47b108: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x47b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_47b10c:
    // 0x47b10c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x47b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_47b110:
    // 0x47b110: 0xc052608  jal         func_149820
label_47b114:
    if (ctx->pc == 0x47B114u) {
        ctx->pc = 0x47B118u;
        goto label_47b118;
    }
    ctx->pc = 0x47B110u;
    SET_GPR_U32(ctx, 31, 0x47B118u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47B110u, 0x47B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B118u;
label_47b118:
    // 0x47b118: 0x27be0204  addiu       $fp, $sp, 0x204
    ctx->pc = 0x47b118u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_47b11c:
    // 0x47b11c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x47b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_47b120:
    // 0x47b120: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x47b120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_47b124:
    // 0x47b124: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x47b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_47b128:
    // 0x47b128: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x47b128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_47b12c:
    // 0x47b12c: 0x8e33002c  lw          $s3, 0x2C($s1)
    ctx->pc = 0x47b12cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_47b130:
    // 0x47b130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47b130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b134:
    // 0x47b134: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47b138:
    // 0x47b138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b13c:
    // 0x47b13c: 0x0  nop
    ctx->pc = 0x47b13cu;
    // NOP
label_47b140:
    // 0x47b140: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x47b140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_47b144:
    // 0x47b144: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b148:
    // 0x47b148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b14c:
    // 0x47b14c: 0x0  nop
    ctx->pc = 0x47b14cu;
    // NOP
label_47b150:
    // 0x47b150: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x47b150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_47b154:
    // 0x47b154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b158:
    // 0x47b158: 0x0  nop
    ctx->pc = 0x47b158u;
    // NOP
label_47b15c:
    // 0x47b15c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x47b15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_47b160:
    // 0x47b160: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b164:
    // 0x47b164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b168:
    // 0x47b168: 0x0  nop
    ctx->pc = 0x47b168u;
    // NOP
label_47b16c:
    // 0x47b16c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x47b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_47b170:
    // 0x47b170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b174:
    // 0x47b174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b178:
    // 0x47b178: 0x0  nop
    ctx->pc = 0x47b178u;
    // NOP
label_47b17c:
    // 0x47b17c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x47b17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_47b180:
    // 0x47b180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b184:
    // 0x47b184: 0x0  nop
    ctx->pc = 0x47b184u;
    // NOP
label_47b188:
    // 0x47b188: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x47b188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_47b18c:
    // 0x47b18c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b190:
    // 0x47b190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b194:
    // 0x47b194: 0x0  nop
    ctx->pc = 0x47b194u;
    // NOP
label_47b198:
    // 0x47b198: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x47b198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_47b19c:
    // 0x47b19c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47b1a0:
    // 0x47b1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b1a4:
    // 0x47b1a4: 0x0  nop
    ctx->pc = 0x47b1a4u;
    // NOP
label_47b1a8:
    // 0x47b1a8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x47b1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_47b1ac:
    // 0x47b1ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b1b0:
    // 0x47b1b0: 0x0  nop
    ctx->pc = 0x47b1b0u;
    // NOP
label_47b1b4:
    // 0x47b1b4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x47b1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_47b1b8:
    // 0x47b1b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47b1bc:
    // 0x47b1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b1c0:
    // 0x47b1c0: 0x0  nop
    ctx->pc = 0x47b1c0u;
    // NOP
label_47b1c4:
    // 0x47b1c4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x47b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_47b1c8:
    // 0x47b1c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47b1cc:
    // 0x47b1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b1d0:
    // 0x47b1d0: 0x0  nop
    ctx->pc = 0x47b1d0u;
    // NOP
label_47b1d4:
    // 0x47b1d4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x47b1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_47b1d8:
    // 0x47b1d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b1d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b1dc:
    // 0x47b1dc: 0x0  nop
    ctx->pc = 0x47b1dcu;
    // NOP
label_47b1e0:
    // 0x47b1e0: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x47b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_47b1e4:
    // 0x47b1e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x47b1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b1e8:
    // 0x47b1e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_47b1ec:
    if (ctx->pc == 0x47B1ECu) {
        ctx->pc = 0x47B1F0u;
        goto label_47b1f0;
    }
    ctx->pc = 0x47B1E8u;
    {
        const bool branch_taken_0x47b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b1e8) {
            ctx->pc = 0x47B234u;
            goto label_47b234;
        }
    }
    ctx->pc = 0x47B1F0u;
label_47b1f0:
    // 0x47b1f0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x47b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_47b1f4:
    // 0x47b1f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x47b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_47b1f8:
    // 0x47b1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47b1fc:
    // 0x47b1fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47b200:
    // 0x47b200: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47b204:
    // 0x47b204: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x47b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b208:
    // 0x47b208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47b20c:
    // 0x47b20c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x47b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_47b210:
    // 0x47b210: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x47b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_47b214:
    // 0x47b214: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x47b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_47b218:
    // 0x47b218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47b218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47b21c:
    // 0x47b21c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_47b220:
    // 0x47b220: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x47b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47b224:
    // 0x47b224: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x47b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b228:
    // 0x47b228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47b228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47b22c:
    // 0x47b22c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x47b22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_47b230:
    // 0x47b230: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x47b230u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_47b234:
    // 0x47b234: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x47b234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_47b238:
    // 0x47b238: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_47b23c:
    if (ctx->pc == 0x47B23Cu) {
        ctx->pc = 0x47B240u;
        goto label_47b240;
    }
    ctx->pc = 0x47B238u;
    {
        const bool branch_taken_0x47b238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b238) {
            ctx->pc = 0x47B1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47b1f0;
        }
    }
    ctx->pc = 0x47B240u;
label_47b240:
    // 0x47b240: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x47b240u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_47b244:
    // 0x47b244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b248:
    // 0x47b248: 0x0  nop
    ctx->pc = 0x47b248u;
    // NOP
label_47b24c:
    // 0x47b24c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x47b24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_47b250:
    // 0x47b250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b254:
    // 0x47b254: 0x0  nop
    ctx->pc = 0x47b254u;
    // NOP
label_47b258:
    // 0x47b258: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x47b258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_47b25c:
    // 0x47b25c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b260:
    // 0x47b260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b264:
    // 0x47b264: 0x0  nop
    ctx->pc = 0x47b264u;
    // NOP
label_47b268:
    // 0x47b268: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x47b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_47b26c:
    // 0x47b26c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b270:
    // 0x47b270: 0x0  nop
    ctx->pc = 0x47b270u;
    // NOP
label_47b274:
    // 0x47b274: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x47b274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_47b278:
    // 0x47b278: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b27c:
    // 0x47b27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b280:
    // 0x47b280: 0x0  nop
    ctx->pc = 0x47b280u;
    // NOP
label_47b284:
    // 0x47b284: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x47b284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_47b288:
    // 0x47b288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b28c:
    // 0x47b28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b290:
    // 0x47b290: 0x0  nop
    ctx->pc = 0x47b290u;
    // NOP
label_47b294:
    // 0x47b294: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x47b294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_47b298:
    // 0x47b298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47b298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b29c:
    // 0x47b29c: 0x0  nop
    ctx->pc = 0x47b29cu;
    // NOP
label_47b2a0:
    // 0x47b2a0: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x47b2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_47b2a4:
    // 0x47b2a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b2a8:
    // 0x47b2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b2ac:
    // 0x47b2ac: 0x0  nop
    ctx->pc = 0x47b2acu;
    // NOP
label_47b2b0:
    // 0x47b2b0: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x47b2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_47b2b4:
    // 0x47b2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b2b8:
    // 0x47b2b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47b2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47b2bc:
    // 0x47b2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47b2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b2c0:
    // 0x47b2c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x47b2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b2c4:
    // 0x47b2c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x47b2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b2c8:
    // 0x47b2c8: 0xc0e3356  jal         func_38CD58
label_47b2cc:
    if (ctx->pc == 0x47B2CCu) {
        ctx->pc = 0x47B2D0u;
        goto label_47b2d0;
    }
    ctx->pc = 0x47B2C8u;
    SET_GPR_U32(ctx, 31, 0x47B2D0u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47B2C8u, 0x47B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B2D0u;
label_47b2d0:
    // 0x47b2d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47b2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47b2d4:
    // 0x47b2d4: 0x24b30008  addiu       $s3, $a1, 0x8
    ctx->pc = 0x47b2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_47b2d8:
    // 0x47b2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b2dc:
    // 0x47b2dc: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x47b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_47b2e0:
    // 0x47b2e0: 0xc0e335c  jal         func_38CD70
label_47b2e4:
    if (ctx->pc == 0x47B2E4u) {
        ctx->pc = 0x47B2E8u;
        goto label_47b2e8;
    }
    ctx->pc = 0x47B2E0u;
    SET_GPR_U32(ctx, 31, 0x47B2E8u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x47B2E0u, 0x47B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B2E8u;
label_47b2e8:
    // 0x47b2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b2ec:
    // 0x47b2ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47b2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47b2f0:
    // 0x47b2f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47b2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b2f4:
    // 0x47b2f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x47b2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47b2f8:
    // 0x47b2f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x47b2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b2fc:
    // 0x47b2fc: 0xc0e3356  jal         func_38CD58
label_47b300:
    if (ctx->pc == 0x47B300u) {
        ctx->pc = 0x47B304u;
        goto label_47b304;
    }
    ctx->pc = 0x47B2FCu;
    SET_GPR_U32(ctx, 31, 0x47B304u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x47B2FCu, 0x47B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B304u;
label_47b304:
    // 0x47b304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b308:
    // 0x47b308: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47b308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47b30c:
    // 0x47b30c: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x47b30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_47b310:
    // 0x47b310: 0xc0e335c  jal         func_38CD70
label_47b314:
    if (ctx->pc == 0x47B314u) {
        ctx->pc = 0x47B318u;
        goto label_47b318;
    }
    ctx->pc = 0x47B310u;
    SET_GPR_U32(ctx, 31, 0x47B318u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x47B310u, 0x47B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B318u;
label_47b318:
    // 0x47b318: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x47b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_47b31c:
    // 0x47b31c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x47b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_47b320:
    // 0x47b320: 0xc0e2ab0  jal         func_38AAC0
label_47b324:
    if (ctx->pc == 0x47B324u) {
        ctx->pc = 0x47B328u;
        goto label_47b328;
    }
    ctx->pc = 0x47B320u;
    SET_GPR_U32(ctx, 31, 0x47B328u);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x47B320u, 0x47B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B328u;
label_47b328:
    // 0x47b328: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x47b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_47b32c:
    // 0x47b32c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x47b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_47b330:
    // 0x47b330: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x47b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_47b334:
    // 0x47b334: 0xc046270  jal         func_1189C0
label_47b338:
    if (ctx->pc == 0x47B338u) {
        ctx->pc = 0x47B33Cu;
        goto label_47b33c;
    }
    ctx->pc = 0x47B334u;
    SET_GPR_U32(ctx, 31, 0x47B33Cu);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x47B334u, 0x47B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B33Cu;
label_47b33c:
    // 0x47b33c: 0x27b70208  addiu       $s7, $sp, 0x208
    ctx->pc = 0x47b33cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_47b340:
    // 0x47b340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b344:
    // 0x47b344: 0xc0e2d08  jal         func_38B420
label_47b348:
    if (ctx->pc == 0x47B348u) {
        ctx->pc = 0x47B34Cu;
        goto label_47b34c;
    }
    ctx->pc = 0x47B344u;
    SET_GPR_U32(ctx, 31, 0x47B34Cu);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x47B344u, 0x47B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B34Cu;
label_47b34c:
    // 0x47b34c: 0xc0e2094  jal         func_388250
label_47b350:
    if (ctx->pc == 0x47B350u) {
        ctx->pc = 0x47B354u;
        goto label_47b354;
    }
    ctx->pc = 0x47B34Cu;
    SET_GPR_U32(ctx, 31, 0x47B354u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x47B34Cu, 0x47B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B354u;
label_47b354:
    // 0x47b354: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x47b354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_47b358:
    // 0x47b358: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_47b35c:
    if (ctx->pc == 0x47B35Cu) {
        ctx->pc = 0x47B360u;
        goto label_47b360;
    }
    ctx->pc = 0x47B358u;
    {
        const bool branch_taken_0x47b358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b358) {
            ctx->pc = 0x47B36Cu;
            goto label_47b36c;
        }
    }
    ctx->pc = 0x47B360u;
label_47b360:
    // 0x47b360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47b360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b364:
    // 0x47b364: 0x10000050  b           . + 4 + (0x50 << 2)
label_47b368:
    if (ctx->pc == 0x47B368u) {
        ctx->pc = 0x47B36Cu;
        goto label_47b36c;
    }
    ctx->pc = 0x47B364u;
    {
        const bool branch_taken_0x47b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b364) {
            ctx->pc = 0x47B4A8u;
            goto label_47b4a8;
        }
    }
    ctx->pc = 0x47B36Cu;
label_47b36c:
    // 0x47b36c: 0xc1067b0  jal         func_419EC0
label_47b370:
    if (ctx->pc == 0x47B370u) {
        ctx->pc = 0x47B374u;
        goto label_47b374;
    }
    ctx->pc = 0x47B36Cu;
    SET_GPR_U32(ctx, 31, 0x47B374u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x47B36Cu, 0x47B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B374u;
label_47b374:
    // 0x47b374: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x47b374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b378:
    // 0x47b378: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_47b37c:
    if (ctx->pc == 0x47B37Cu) {
        ctx->pc = 0x47B380u;
        goto label_47b380;
    }
    ctx->pc = 0x47B378u;
    {
        const bool branch_taken_0x47b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b378) {
            ctx->pc = 0x47B38Cu;
            goto label_47b38c;
        }
    }
    ctx->pc = 0x47B380u;
label_47b380:
    // 0x47b380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47b380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b384:
    // 0x47b384: 0x10000048  b           . + 4 + (0x48 << 2)
label_47b388:
    if (ctx->pc == 0x47B388u) {
        ctx->pc = 0x47B38Cu;
        goto label_47b38c;
    }
    ctx->pc = 0x47B384u;
    {
        const bool branch_taken_0x47b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b384) {
            ctx->pc = 0x47B4A8u;
            goto label_47b4a8;
        }
    }
    ctx->pc = 0x47B38Cu;
label_47b38c:
    // 0x47b38c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x47b38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_47b390:
    // 0x47b390: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x47b390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_47b394:
    // 0x47b394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47b394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b398:
    // 0x47b398: 0xc106598  jal         func_419660
label_47b39c:
    if (ctx->pc == 0x47B39Cu) {
        ctx->pc = 0x47B3A0u;
        goto label_47b3a0;
    }
    ctx->pc = 0x47B398u;
    SET_GPR_U32(ctx, 31, 0x47B3A0u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x47B398u, 0x47B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B3A0u;
label_47b3a0:
    // 0x47b3a0: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x47b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_47b3a4:
    // 0x47b3a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x47b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_47b3a8:
    // 0x47b3a8: 0xc0e2686  jal         func_389A18
label_47b3ac:
    if (ctx->pc == 0x47B3ACu) {
        ctx->pc = 0x47B3B0u;
        goto label_47b3b0;
    }
    ctx->pc = 0x47B3A8u;
    SET_GPR_U32(ctx, 31, 0x47B3B0u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x47B3A8u, 0x47B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B3B0u;
label_47b3b0:
    // 0x47b3b0: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x47b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_47b3b4:
    // 0x47b3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b3b8:
    // 0x47b3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47b3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b3bc:
    // 0x47b3bc: 0xc0e2836  jal         func_38A0D8
label_47b3c0:
    if (ctx->pc == 0x47B3C0u) {
        ctx->pc = 0x47B3C4u;
        goto label_47b3c4;
    }
    ctx->pc = 0x47B3BCu;
    SET_GPR_U32(ctx, 31, 0x47B3C4u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x47B3BCu, 0x47B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B3C4u;
label_47b3c4:
    // 0x47b3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b3c8:
    // 0x47b3c8: 0xc0e3414  jal         func_38D050
label_47b3cc:
    if (ctx->pc == 0x47B3CCu) {
        ctx->pc = 0x47B3D0u;
        goto label_47b3d0;
    }
    ctx->pc = 0x47B3C8u;
    SET_GPR_U32(ctx, 31, 0x47B3D0u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x47B3C8u, 0x47B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B3D0u;
label_47b3d0:
    // 0x47b3d0: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x47b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_47b3d4:
    // 0x47b3d4: 0xc0e39c0  jal         func_38E700
label_47b3d8:
    if (ctx->pc == 0x47B3D8u) {
        ctx->pc = 0x47B3DCu;
        goto label_47b3dc;
    }
    ctx->pc = 0x47B3D4u;
    SET_GPR_U32(ctx, 31, 0x47B3DCu);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x47B3D4u, 0x47B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B3DCu;
label_47b3dc:
    // 0x47b3dc: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x47b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_47b3e0:
    // 0x47b3e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47b3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47b3e4:
    // 0x47b3e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47b3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47b3e8:
    // 0x47b3e8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47b3ec:
    if (ctx->pc == 0x47B3ECu) {
        ctx->pc = 0x47B3F0u;
        goto label_47b3f0;
    }
    ctx->pc = 0x47B3E8u;
    {
        const bool branch_taken_0x47b3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47b3e8) {
            ctx->pc = 0x47B494u;
            goto label_47b494;
        }
    }
    ctx->pc = 0x47B3F0u;
label_47b3f0:
    // 0x47b3f0: 0x8f82b4b8  lw          $v0, -0x4B48($gp)
    ctx->pc = 0x47b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
label_47b3f4:
    // 0x47b3f4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47b3f8:
    if (ctx->pc == 0x47B3F8u) {
        ctx->pc = 0x47B3FCu;
        goto label_47b3fc;
    }
    ctx->pc = 0x47B3F4u;
    {
        const bool branch_taken_0x47b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b3f4) {
            ctx->pc = 0x47B494u;
            goto label_47b494;
        }
    }
    ctx->pc = 0x47B3FCu;
label_47b3fc:
    // 0x47b3fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47b400:
    // 0x47b400: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b404:
    // 0x47b404: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x47b404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_47b408:
    // 0x47b408: 0xc115ee8  jal         func_457BA0
label_47b40c:
    if (ctx->pc == 0x47B40Cu) {
        ctx->pc = 0x47B410u;
        goto label_47b410;
    }
    ctx->pc = 0x47B408u;
    SET_GPR_U32(ctx, 31, 0x47B410u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47B408u, 0x47B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B410u;
label_47b410:
    // 0x47b410: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47b414:
    if (ctx->pc == 0x47B414u) {
        ctx->pc = 0x47B418u;
        goto label_47b418;
    }
    ctx->pc = 0x47B410u;
    {
        const bool branch_taken_0x47b410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b410) {
            ctx->pc = 0x47B494u;
            goto label_47b494;
        }
    }
    ctx->pc = 0x47B418u;
label_47b418:
    // 0x47b418: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x47b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_47b41c:
    // 0x47b41c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47b420:
    if (ctx->pc == 0x47B420u) {
        ctx->pc = 0x47B424u;
        goto label_47b424;
    }
    ctx->pc = 0x47B41Cu;
    {
        const bool branch_taken_0x47b41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b41c) {
            ctx->pc = 0x47B494u;
            goto label_47b494;
        }
    }
    ctx->pc = 0x47B424u;
label_47b424:
    // 0x47b424: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47b428:
    // 0x47b428: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47b42c:
    // 0x47b42c: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x47b42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_47b430:
    // 0x47b430: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47b430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47b434:
    // 0x47b434: 0x24e714c0  addiu       $a3, $a3, 0x14C0
    ctx->pc = 0x47b434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
label_47b438:
    // 0x47b438: 0x24080102  addiu       $t0, $zero, 0x102
    ctx->pc = 0x47b438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_47b43c:
    // 0x47b43c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47b43cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47b440:
    // 0x47b440: 0x252914d8  addiu       $t1, $t1, 0x14D8
    ctx->pc = 0x47b440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5336));
label_47b444:
    // 0x47b444: 0xc113940  jal         func_44E500
label_47b448:
    if (ctx->pc == 0x47B448u) {
        ctx->pc = 0x47B44Cu;
        goto label_47b44c;
    }
    ctx->pc = 0x47B444u;
    SET_GPR_U32(ctx, 31, 0x47B44Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47B444u, 0x47B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B44Cu;
label_47b44c:
    // 0x47b44c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47b450:
    // 0x47b450: 0x2785b4bc  addiu       $a1, $gp, -0x4B44
    ctx->pc = 0x47b450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948028));
label_47b454:
    // 0x47b454: 0xc115c24  jal         func_457090
label_47b458:
    if (ctx->pc == 0x47B458u) {
        ctx->pc = 0x47B45Cu;
        goto label_47b45c;
    }
    ctx->pc = 0x47B454u;
    SET_GPR_U32(ctx, 31, 0x47B45Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47B454u, 0x47B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B45Cu;
label_47b45c:
    // 0x47b45c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47b460:
    // 0x47b460: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x47b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_47b464:
    // 0x47b464: 0x40f809  jalr        $v0
label_47b468:
    if (ctx->pc == 0x47B468u) {
        ctx->pc = 0x47B46Cu;
        goto label_47b46c;
    }
    ctx->pc = 0x47B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47B46Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B464u, 0x47B46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47B46Cu;
label_47b46c:
    // 0x47b46c: 0xaf82b4b8  sw          $v0, -0x4B48($gp)
    ctx->pc = 0x47b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948024), GPR_U32(ctx, 2));
label_47b470:
    // 0x47b470: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x47b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_47b474:
    // 0x47b474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47b478:
    if (ctx->pc == 0x47B478u) {
        ctx->pc = 0x47B47Cu;
        goto label_47b47c;
    }
    ctx->pc = 0x47B474u;
    {
        const bool branch_taken_0x47b474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b474) {
            ctx->pc = 0x47B484u;
            goto label_47b484;
        }
    }
    ctx->pc = 0x47B47Cu;
label_47b47c:
    // 0x47b47c: 0xd  break       0
    ctx->pc = 0x47b47cu;
    runtime->handleBreak(rdram, ctx);
label_47b480:
    // 0x47b480: 0x0  nop
    ctx->pc = 0x47b480u;
    // NOP
label_47b484:
    // 0x47b484: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47b488:
    // 0x47b488: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47b48c:
    // 0x47b48c: 0xc11392c  jal         func_44E4B0
label_47b490:
    if (ctx->pc == 0x47B490u) {
        ctx->pc = 0x47B494u;
        goto label_47b494;
    }
    ctx->pc = 0x47B48Cu;
    SET_GPR_U32(ctx, 31, 0x47B494u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47B48Cu, 0x47B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B494u;
label_47b494:
    // 0x47b494: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x47b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_47b498:
    // 0x47b498: 0x27a5020c  addiu       $a1, $sp, 0x20C
    ctx->pc = 0x47b498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_47b49c:
    // 0x47b49c: 0xc11ed38  jal         func_47B4E0
label_47b4a0:
    if (ctx->pc == 0x47B4A0u) {
        ctx->pc = 0x47B4A4u;
        goto label_47b4a4;
    }
    ctx->pc = 0x47B49Cu;
    SET_GPR_U32(ctx, 31, 0x47B4A4u);
    ctx->pc = 0x47B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B4E0u, 0x47B49Cu, 0x47B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B4A4u;
label_47b4a4:
    // 0x47b4a4: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x47b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_47b4a8:
    // 0x47b4a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x47b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_47b4ac:
    // 0x47b4ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x47b4acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47b4b0:
    // 0x47b4b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47b4b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47b4b4:
    // 0x47b4b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47b4b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47b4b8:
    // 0x47b4b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47b4b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47b4bc:
    // 0x47b4bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47b4bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47b4c0:
    // 0x47b4c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47b4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47b4c4:
    // 0x47b4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b4c8:
    // 0x47b4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b4cc:
    // 0x47b4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b4d0:
    // 0x47b4d0: 0x27bd0250  addiu       $sp, $sp, 0x250
    ctx->pc = 0x47b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_47b4d4:
    // 0x47b4d4: 0x3e00008  jr          $ra
label_47b4d8:
    if (ctx->pc == 0x47B4D8u) {
        ctx->pc = 0x47B4DCu;
        goto label_47b4dc;
    }
    ctx->pc = 0x47B4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B4DCu;
label_47b4dc:
    // 0x47b4dc: 0x0  nop
    ctx->pc = 0x47b4dcu;
    // NOP
    ctx->pc = 0x47b4e0u;
}
