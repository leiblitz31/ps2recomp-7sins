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

// Function: sub_0039B068
// Address: 0x39b068 - 0x39b448
void sub_0039B068_0x39b068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B068_0x39b068");
#endif

    switch (ctx->pc) {
        case 0x39b068u: goto label_39b068;
        case 0x39b06cu: goto label_39b06c;
        case 0x39b070u: goto label_39b070;
        case 0x39b074u: goto label_39b074;
        case 0x39b078u: goto label_39b078;
        case 0x39b07cu: goto label_39b07c;
        case 0x39b080u: goto label_39b080;
        case 0x39b084u: goto label_39b084;
        case 0x39b088u: goto label_39b088;
        case 0x39b08cu: goto label_39b08c;
        case 0x39b090u: goto label_39b090;
        case 0x39b094u: goto label_39b094;
        case 0x39b098u: goto label_39b098;
        case 0x39b09cu: goto label_39b09c;
        case 0x39b0a0u: goto label_39b0a0;
        case 0x39b0a4u: goto label_39b0a4;
        case 0x39b0a8u: goto label_39b0a8;
        case 0x39b0acu: goto label_39b0ac;
        case 0x39b0b0u: goto label_39b0b0;
        case 0x39b0b4u: goto label_39b0b4;
        case 0x39b0b8u: goto label_39b0b8;
        case 0x39b0bcu: goto label_39b0bc;
        case 0x39b0c0u: goto label_39b0c0;
        case 0x39b0c4u: goto label_39b0c4;
        case 0x39b0c8u: goto label_39b0c8;
        case 0x39b0ccu: goto label_39b0cc;
        case 0x39b0d0u: goto label_39b0d0;
        case 0x39b0d4u: goto label_39b0d4;
        case 0x39b0d8u: goto label_39b0d8;
        case 0x39b0dcu: goto label_39b0dc;
        case 0x39b0e0u: goto label_39b0e0;
        case 0x39b0e4u: goto label_39b0e4;
        case 0x39b0e8u: goto label_39b0e8;
        case 0x39b0ecu: goto label_39b0ec;
        case 0x39b0f0u: goto label_39b0f0;
        case 0x39b0f4u: goto label_39b0f4;
        case 0x39b0f8u: goto label_39b0f8;
        case 0x39b0fcu: goto label_39b0fc;
        case 0x39b100u: goto label_39b100;
        case 0x39b104u: goto label_39b104;
        case 0x39b108u: goto label_39b108;
        case 0x39b10cu: goto label_39b10c;
        case 0x39b110u: goto label_39b110;
        case 0x39b114u: goto label_39b114;
        case 0x39b118u: goto label_39b118;
        case 0x39b11cu: goto label_39b11c;
        case 0x39b120u: goto label_39b120;
        case 0x39b124u: goto label_39b124;
        case 0x39b128u: goto label_39b128;
        case 0x39b12cu: goto label_39b12c;
        case 0x39b130u: goto label_39b130;
        case 0x39b134u: goto label_39b134;
        case 0x39b138u: goto label_39b138;
        case 0x39b13cu: goto label_39b13c;
        case 0x39b140u: goto label_39b140;
        case 0x39b144u: goto label_39b144;
        case 0x39b148u: goto label_39b148;
        case 0x39b14cu: goto label_39b14c;
        case 0x39b150u: goto label_39b150;
        case 0x39b154u: goto label_39b154;
        case 0x39b158u: goto label_39b158;
        case 0x39b15cu: goto label_39b15c;
        case 0x39b160u: goto label_39b160;
        case 0x39b164u: goto label_39b164;
        case 0x39b168u: goto label_39b168;
        case 0x39b16cu: goto label_39b16c;
        case 0x39b170u: goto label_39b170;
        case 0x39b174u: goto label_39b174;
        case 0x39b178u: goto label_39b178;
        case 0x39b17cu: goto label_39b17c;
        case 0x39b180u: goto label_39b180;
        case 0x39b184u: goto label_39b184;
        case 0x39b188u: goto label_39b188;
        case 0x39b18cu: goto label_39b18c;
        case 0x39b190u: goto label_39b190;
        case 0x39b194u: goto label_39b194;
        case 0x39b198u: goto label_39b198;
        case 0x39b19cu: goto label_39b19c;
        case 0x39b1a0u: goto label_39b1a0;
        case 0x39b1a4u: goto label_39b1a4;
        case 0x39b1a8u: goto label_39b1a8;
        case 0x39b1acu: goto label_39b1ac;
        case 0x39b1b0u: goto label_39b1b0;
        case 0x39b1b4u: goto label_39b1b4;
        case 0x39b1b8u: goto label_39b1b8;
        case 0x39b1bcu: goto label_39b1bc;
        case 0x39b1c0u: goto label_39b1c0;
        case 0x39b1c4u: goto label_39b1c4;
        case 0x39b1c8u: goto label_39b1c8;
        case 0x39b1ccu: goto label_39b1cc;
        case 0x39b1d0u: goto label_39b1d0;
        case 0x39b1d4u: goto label_39b1d4;
        case 0x39b1d8u: goto label_39b1d8;
        case 0x39b1dcu: goto label_39b1dc;
        case 0x39b1e0u: goto label_39b1e0;
        case 0x39b1e4u: goto label_39b1e4;
        case 0x39b1e8u: goto label_39b1e8;
        case 0x39b1ecu: goto label_39b1ec;
        case 0x39b1f0u: goto label_39b1f0;
        case 0x39b1f4u: goto label_39b1f4;
        case 0x39b1f8u: goto label_39b1f8;
        case 0x39b1fcu: goto label_39b1fc;
        case 0x39b200u: goto label_39b200;
        case 0x39b204u: goto label_39b204;
        case 0x39b208u: goto label_39b208;
        case 0x39b20cu: goto label_39b20c;
        case 0x39b210u: goto label_39b210;
        case 0x39b214u: goto label_39b214;
        case 0x39b218u: goto label_39b218;
        case 0x39b21cu: goto label_39b21c;
        case 0x39b220u: goto label_39b220;
        case 0x39b224u: goto label_39b224;
        case 0x39b228u: goto label_39b228;
        case 0x39b22cu: goto label_39b22c;
        case 0x39b230u: goto label_39b230;
        case 0x39b234u: goto label_39b234;
        case 0x39b238u: goto label_39b238;
        case 0x39b23cu: goto label_39b23c;
        case 0x39b240u: goto label_39b240;
        case 0x39b244u: goto label_39b244;
        case 0x39b248u: goto label_39b248;
        case 0x39b24cu: goto label_39b24c;
        case 0x39b250u: goto label_39b250;
        case 0x39b254u: goto label_39b254;
        case 0x39b258u: goto label_39b258;
        case 0x39b25cu: goto label_39b25c;
        case 0x39b260u: goto label_39b260;
        case 0x39b264u: goto label_39b264;
        case 0x39b268u: goto label_39b268;
        case 0x39b26cu: goto label_39b26c;
        case 0x39b270u: goto label_39b270;
        case 0x39b274u: goto label_39b274;
        case 0x39b278u: goto label_39b278;
        case 0x39b27cu: goto label_39b27c;
        case 0x39b280u: goto label_39b280;
        case 0x39b284u: goto label_39b284;
        case 0x39b288u: goto label_39b288;
        case 0x39b28cu: goto label_39b28c;
        case 0x39b290u: goto label_39b290;
        case 0x39b294u: goto label_39b294;
        case 0x39b298u: goto label_39b298;
        case 0x39b29cu: goto label_39b29c;
        case 0x39b2a0u: goto label_39b2a0;
        case 0x39b2a4u: goto label_39b2a4;
        case 0x39b2a8u: goto label_39b2a8;
        case 0x39b2acu: goto label_39b2ac;
        case 0x39b2b0u: goto label_39b2b0;
        case 0x39b2b4u: goto label_39b2b4;
        case 0x39b2b8u: goto label_39b2b8;
        case 0x39b2bcu: goto label_39b2bc;
        case 0x39b2c0u: goto label_39b2c0;
        case 0x39b2c4u: goto label_39b2c4;
        case 0x39b2c8u: goto label_39b2c8;
        case 0x39b2ccu: goto label_39b2cc;
        case 0x39b2d0u: goto label_39b2d0;
        case 0x39b2d4u: goto label_39b2d4;
        case 0x39b2d8u: goto label_39b2d8;
        case 0x39b2dcu: goto label_39b2dc;
        case 0x39b2e0u: goto label_39b2e0;
        case 0x39b2e4u: goto label_39b2e4;
        case 0x39b2e8u: goto label_39b2e8;
        case 0x39b2ecu: goto label_39b2ec;
        case 0x39b2f0u: goto label_39b2f0;
        case 0x39b2f4u: goto label_39b2f4;
        case 0x39b2f8u: goto label_39b2f8;
        case 0x39b2fcu: goto label_39b2fc;
        case 0x39b300u: goto label_39b300;
        case 0x39b304u: goto label_39b304;
        case 0x39b308u: goto label_39b308;
        case 0x39b30cu: goto label_39b30c;
        case 0x39b310u: goto label_39b310;
        case 0x39b314u: goto label_39b314;
        case 0x39b318u: goto label_39b318;
        case 0x39b31cu: goto label_39b31c;
        case 0x39b320u: goto label_39b320;
        case 0x39b324u: goto label_39b324;
        case 0x39b328u: goto label_39b328;
        case 0x39b32cu: goto label_39b32c;
        case 0x39b330u: goto label_39b330;
        case 0x39b334u: goto label_39b334;
        case 0x39b338u: goto label_39b338;
        case 0x39b33cu: goto label_39b33c;
        case 0x39b340u: goto label_39b340;
        case 0x39b344u: goto label_39b344;
        case 0x39b348u: goto label_39b348;
        case 0x39b34cu: goto label_39b34c;
        case 0x39b350u: goto label_39b350;
        case 0x39b354u: goto label_39b354;
        case 0x39b358u: goto label_39b358;
        case 0x39b35cu: goto label_39b35c;
        case 0x39b360u: goto label_39b360;
        case 0x39b364u: goto label_39b364;
        case 0x39b368u: goto label_39b368;
        case 0x39b36cu: goto label_39b36c;
        case 0x39b370u: goto label_39b370;
        case 0x39b374u: goto label_39b374;
        case 0x39b378u: goto label_39b378;
        case 0x39b37cu: goto label_39b37c;
        case 0x39b380u: goto label_39b380;
        case 0x39b384u: goto label_39b384;
        case 0x39b388u: goto label_39b388;
        case 0x39b38cu: goto label_39b38c;
        case 0x39b390u: goto label_39b390;
        case 0x39b394u: goto label_39b394;
        case 0x39b398u: goto label_39b398;
        case 0x39b39cu: goto label_39b39c;
        case 0x39b3a0u: goto label_39b3a0;
        case 0x39b3a4u: goto label_39b3a4;
        case 0x39b3a8u: goto label_39b3a8;
        case 0x39b3acu: goto label_39b3ac;
        case 0x39b3b0u: goto label_39b3b0;
        case 0x39b3b4u: goto label_39b3b4;
        case 0x39b3b8u: goto label_39b3b8;
        case 0x39b3bcu: goto label_39b3bc;
        case 0x39b3c0u: goto label_39b3c0;
        case 0x39b3c4u: goto label_39b3c4;
        case 0x39b3c8u: goto label_39b3c8;
        case 0x39b3ccu: goto label_39b3cc;
        case 0x39b3d0u: goto label_39b3d0;
        case 0x39b3d4u: goto label_39b3d4;
        case 0x39b3d8u: goto label_39b3d8;
        case 0x39b3dcu: goto label_39b3dc;
        case 0x39b3e0u: goto label_39b3e0;
        case 0x39b3e4u: goto label_39b3e4;
        case 0x39b3e8u: goto label_39b3e8;
        case 0x39b3ecu: goto label_39b3ec;
        case 0x39b3f0u: goto label_39b3f0;
        case 0x39b3f4u: goto label_39b3f4;
        case 0x39b3f8u: goto label_39b3f8;
        case 0x39b3fcu: goto label_39b3fc;
        case 0x39b400u: goto label_39b400;
        case 0x39b404u: goto label_39b404;
        case 0x39b408u: goto label_39b408;
        case 0x39b40cu: goto label_39b40c;
        case 0x39b410u: goto label_39b410;
        case 0x39b414u: goto label_39b414;
        case 0x39b418u: goto label_39b418;
        case 0x39b41cu: goto label_39b41c;
        case 0x39b420u: goto label_39b420;
        case 0x39b424u: goto label_39b424;
        case 0x39b428u: goto label_39b428;
        case 0x39b42cu: goto label_39b42c;
        case 0x39b430u: goto label_39b430;
        case 0x39b434u: goto label_39b434;
        case 0x39b438u: goto label_39b438;
        case 0x39b43cu: goto label_39b43c;
        case 0x39b440u: goto label_39b440;
        case 0x39b444u: goto label_39b444;
        default: break;
    }

    ctx->pc = 0x39b068u;

label_39b068:
    // 0x39b068: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x39b068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_39b06c:
    // 0x39b06c: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x39b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_39b070:
    // 0x39b070: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39b070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b074:
    // 0x39b074: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x39b074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_39b078:
    // 0x39b078: 0x26020094  addiu       $v0, $s0, 0x94
    ctx->pc = 0x39b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_39b07c:
    // 0x39b07c: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x39b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_39b080:
    // 0x39b080: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x39b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_39b084:
    // 0x39b084: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x39b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_39b088:
    // 0x39b088: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x39b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_39b08c:
    // 0x39b08c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39b08cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b090:
    // 0x39b090: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x39b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_39b094:
    // 0x39b094: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x39b094u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b098:
    // 0x39b098: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x39b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_39b09c:
    // 0x39b09c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x39b09cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b0a0:
    // 0x39b0a0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x39b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_39b0a4:
    // 0x39b0a4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x39b0a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b0a8:
    // 0x39b0a8: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x39b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_39b0ac:
    // 0x39b0ac: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x39b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_39b0b0:
    // 0x39b0b0: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39b0b4:
    // 0x39b0b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39b0b8:
    // 0x39b0b8: 0xc106784  jal         func_419E10
label_39b0bc:
    if (ctx->pc == 0x39B0BCu) {
        ctx->pc = 0x39B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0B8u;
        // 0x39b0bc: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0C0u;
        goto label_39b0c0;
    }
    ctx->pc = 0x39B0B8u;
    SET_GPR_U32(ctx, 31, 0x39B0C0u);
    ctx->pc = 0x39B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0B8u;
    // 0x39b0bc: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x39B0B8u, 0x39B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0C0u;
label_39b0c0:
    // 0x39b0c0: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x39b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_39b0c4:
    // 0x39b0c4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x39b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_39b0c8:
    // 0x39b0c8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x39b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_39b0cc:
    // 0x39b0cc: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x39b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_39b0d0:
    // 0x39b0d0: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x39b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
label_39b0d4:
    // 0x39b0d4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x39b0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39b0d8:
    // 0x39b0d8: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x39b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_39b0dc:
    // 0x39b0dc: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x39b0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_39b0e0:
    // 0x39b0e0: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x39b0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_39b0e4:
    // 0x39b0e4: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x39b0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39b0e8:
    // 0x39b0e8: 0xb3a60107  sdl         $a2, 0x107($sp)
    ctx->pc = 0x39b0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b0ec:
    // 0x39b0ec: 0xb7a60100  sdr         $a2, 0x100($sp)
    ctx->pc = 0x39b0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b0f0:
    // 0x39b0f0: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x39b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
label_39b0f4:
    // 0x39b0f4: 0x6a04011f  ldl         $a0, 0x11F($s0)
    ctx->pc = 0x39b0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_39b0f8:
    // 0x39b0f8: 0x6e040118  ldr         $a0, 0x118($s0)
    ctx->pc = 0x39b0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_39b0fc:
    // 0x39b0fc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x39b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_39b100:
    // 0x39b100: 0xb3a40117  sdl         $a0, 0x117($sp)
    ctx->pc = 0x39b100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b104:
    // 0x39b104: 0xb7a40110  sdr         $a0, 0x110($sp)
    ctx->pc = 0x39b104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b108:
    // 0x39b108: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x39b108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
label_39b10c:
    // 0x39b10c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x39b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_39b110:
    // 0x39b110: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x39b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_39b114:
    // 0x39b114: 0x6a0f0113  ldl         $t7, 0x113($s0)
    ctx->pc = 0x39b114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_39b118:
    // 0x39b118: 0x6e0f010c  ldr         $t7, 0x10C($s0)
    ctx->pc = 0x39b118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_39b11c:
    // 0x39b11c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x39b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_39b120:
    // 0x39b120: 0xb3af0127  sdl         $t7, 0x127($sp)
    ctx->pc = 0x39b120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b124:
    // 0x39b124: 0xb7af0120  sdr         $t7, 0x120($sp)
    ctx->pc = 0x39b124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b128:
    // 0x39b128: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x39b128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_39b12c:
    // 0x39b12c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x39b12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_39b130:
    // 0x39b130: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39b130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_39b134:
    // 0x39b134: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x39b134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_39b138:
    // 0x39b138: 0x8c91001c  lw          $s1, 0x1C($a0)
    ctx->pc = 0x39b138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_39b13c:
    // 0x39b13c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39b140:
    // 0x39b140: 0x4810086  bgez        $a0, . + 4 + (0x86 << 2)
label_39b144:
    if (ctx->pc == 0x39B144u) {
        ctx->pc = 0x39B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B140u;
        // 0x39b144: 0x8fa70158  lw          $a3, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B148u;
        goto label_39b148;
    }
    ctx->pc = 0x39B140u;
    {
        const bool branch_taken_0x39b140 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x39B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B140u;
        // 0x39b144: 0x8fa70158  lw          $a3, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b140) {
            ctx->pc = 0x39B35Cu;
            goto label_39b35c;
        }
    }
    ctx->pc = 0x39B148u;
label_39b148:
    // 0x39b148: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x39b148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_39b14c:
    // 0x39b14c: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x39b14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_39b150:
    // 0x39b150: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x39b150u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39b154:
    // 0x39b154: 0x24ae0078  addiu       $t6, $a1, 0x78
    ctx->pc = 0x39b154u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
label_39b158:
    // 0x39b158: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x39b158u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b15c:
    // 0x39b15c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x39b15cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b160:
    // 0x39b160: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x39b160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b164:
    // 0x39b164: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x39b164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b168:
    // 0x39b168: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x39b168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b16c:
    // 0x39b16c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x39b16cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b170:
    // 0x39b170: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39b170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b174:
    // 0x39b174: 0x0  nop
    ctx->pc = 0x39b174u;
    // NOP
label_39b178:
    // 0x39b178: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x39b178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_39b17c:
    // 0x39b17c: 0x90e30011  lbu         $v1, 0x11($a3)
    ctx->pc = 0x39b17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
label_39b180:
    // 0x39b180: 0x4d2018  mult        $a0, $v0, $t5
    ctx->pc = 0x39b180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39b184:
    // 0x39b184: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x39b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b188:
    // 0x39b188: 0x6d7818  mult        $t7, $v1, $t5
    ctx->pc = 0x39b188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_39b18c:
    // 0x39b18c: 0xc5440004  lwc1        $f4, 0x4($t2)
    ctx->pc = 0x39b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39b190:
    // 0x39b190: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x39b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b194:
    // 0x39b194: 0xc585000c  lwc1        $f5, 0xC($t4)
    ctx->pc = 0x39b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39b198:
    // 0x39b198: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x39b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_39b19c:
    // 0x39b19c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x39b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b1a0:
    // 0x39b1a0: 0x1f01821  addu        $v1, $t7, $s0
    ctx->pc = 0x39b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_39b1a4:
    // 0x39b1a4: 0x91040012  lbu         $a0, 0x12($t0)
    ctx->pc = 0x39b1a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
label_39b1a8:
    // 0x39b1a8: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x39b1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_39b1ac:
    // 0x39b1ac: 0x8d7818  mult        $t7, $a0, $t5
    ctx->pc = 0x39b1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_39b1b0:
    // 0x39b1b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39b1b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39b1b4:
    // 0x39b1b4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x39b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b1b8:
    // 0x39b1b8: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x39b1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_39b1bc:
    // 0x39b1bc: 0x1f02021  addu        $a0, $t7, $s0
    ctx->pc = 0x39b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_39b1c0:
    // 0x39b1c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x39b1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39b1c4:
    // 0x39b1c4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x39b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b1c8:
    // 0x39b1c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x39b1c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_39b1cc:
    // 0x39b1cc: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x39b1ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_39b1d0:
    // 0x39b1d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x39b1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_39b1d4:
    // 0x39b1d4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x39b1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_39b1d8:
    // 0x39b1d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b1dc:
    // 0x39b1dc: 0x0  nop
    ctx->pc = 0x39b1dcu;
    // NOP
label_39b1e0:
    // 0x39b1e0: 0x1c60005a  bgtz        $v1, . + 4 + (0x5A << 2)
label_39b1e4:
    if (ctx->pc == 0x39B1E4u) {
        ctx->pc = 0x39B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1E0u;
        // 0x39b1e4: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B1E8u;
        goto label_39b1e8;
    }
    ctx->pc = 0x39B1E0u;
    {
        const bool branch_taken_0x39b1e0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x39B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1E0u;
        // 0x39b1e4: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b1e0) {
            ctx->pc = 0x39B34Cu;
            goto label_39b34c;
        }
    }
    ctx->pc = 0x39B1E8u;
label_39b1e8:
    // 0x39b1e8: 0x90c20024  lbu         $v0, 0x24($a2)
    ctx->pc = 0x39b1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 36)));
label_39b1ec:
    // 0x39b1ec: 0x90e30025  lbu         $v1, 0x25($a3)
    ctx->pc = 0x39b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
label_39b1f0:
    // 0x39b1f0: 0x4d2018  mult        $a0, $v0, $t5
    ctx->pc = 0x39b1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39b1f4:
    // 0x39b1f4: 0xc5220014  lwc1        $f2, 0x14($t1)
    ctx->pc = 0x39b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b1f8:
    // 0x39b1f8: 0x6d7818  mult        $t7, $v1, $t5
    ctx->pc = 0x39b1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_39b1fc:
    // 0x39b1fc: 0xc5440018  lwc1        $f4, 0x18($t2)
    ctx->pc = 0x39b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39b200:
    // 0x39b200: 0xc563001c  lwc1        $f3, 0x1C($t3)
    ctx->pc = 0x39b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b204:
    // 0x39b204: 0xc5850020  lwc1        $f5, 0x20($t4)
    ctx->pc = 0x39b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39b208:
    // 0x39b208: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x39b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_39b20c:
    // 0x39b20c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x39b20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b210:
    // 0x39b210: 0x1f01821  addu        $v1, $t7, $s0
    ctx->pc = 0x39b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_39b214:
    // 0x39b214: 0x91040026  lbu         $a0, 0x26($t0)
    ctx->pc = 0x39b214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 38)));
label_39b218:
    // 0x39b218: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x39b218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_39b21c:
    // 0x39b21c: 0x8d7818  mult        $t7, $a0, $t5
    ctx->pc = 0x39b21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_39b220:
    // 0x39b220: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39b220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39b224:
    // 0x39b224: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x39b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b228:
    // 0x39b228: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x39b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_39b22c:
    // 0x39b22c: 0x1f02021  addu        $a0, $t7, $s0
    ctx->pc = 0x39b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_39b230:
    // 0x39b230: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x39b230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39b234:
    // 0x39b234: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x39b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b238:
    // 0x39b238: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x39b238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_39b23c:
    // 0x39b23c: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x39b23cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_39b240:
    // 0x39b240: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x39b240u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_39b244:
    // 0x39b244: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x39b244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_39b248:
    // 0x39b248: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b24c:
    // 0x39b24c: 0x0  nop
    ctx->pc = 0x39b24cu;
    // NOP
label_39b250:
    // 0x39b250: 0x1c60003e  bgtz        $v1, . + 4 + (0x3E << 2)
label_39b254:
    if (ctx->pc == 0x39B254u) {
        ctx->pc = 0x39B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B250u;
        // 0x39b254: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B258u;
        goto label_39b258;
    }
    ctx->pc = 0x39B250u;
    {
        const bool branch_taken_0x39b250 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x39B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B250u;
        // 0x39b254: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b250) {
            ctx->pc = 0x39B34Cu;
            goto label_39b34c;
        }
    }
    ctx->pc = 0x39B258u;
label_39b258:
    // 0x39b258: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x39b258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_39b25c:
    // 0x39b25c: 0x258c0028  addiu       $t4, $t4, 0x28
    ctx->pc = 0x39b25cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
label_39b260:
    // 0x39b260: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x39b260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
label_39b264:
    // 0x39b264: 0x254a0028  addiu       $t2, $t2, 0x28
    ctx->pc = 0x39b264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
label_39b268:
    // 0x39b268: 0x25290028  addiu       $t1, $t1, 0x28
    ctx->pc = 0x39b268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
label_39b26c:
    // 0x39b26c: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x39b26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
label_39b270:
    // 0x39b270: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x39b270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_39b274:
    // 0x39b274: 0xae102a  slt         $v0, $a1, $t6
    ctx->pc = 0x39b274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_39b278:
    // 0x39b278: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_39b27c:
    if (ctx->pc == 0x39B27Cu) {
        ctx->pc = 0x39B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B278u;
        // 0x39b27c: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B280u;
        goto label_39b280;
    }
    ctx->pc = 0x39B278u;
    {
        const bool branch_taken_0x39b278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B278u;
        // 0x39b27c: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b278) {
            ctx->pc = 0x39B178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b178;
        }
    }
    ctx->pc = 0x39B280u;
label_39b280:
    // 0x39b280: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x39b280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_39b284:
    // 0x39b284: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x39b284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39b288:
    // 0x39b288: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_39b28c:
    if (ctx->pc == 0x39B28Cu) {
        ctx->pc = 0x39B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B288u;
        // 0x39b28c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B290u;
        goto label_39b290;
    }
    ctx->pc = 0x39B288u;
    {
        const bool branch_taken_0x39b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b288) {
            ctx->pc = 0x39B28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B288u;
            // 0x39b28c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B33Cu;
            goto label_39b33c;
        }
    }
    ctx->pc = 0x39B290u;
label_39b290:
    // 0x39b290: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x39b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_39b294:
    // 0x39b294: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x39b294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39b298:
    // 0x39b298: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x39b298u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39b29c:
    // 0x39b29c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_39b2a0:
    if (ctx->pc == 0x39B2A0u) {
        ctx->pc = 0x39B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B29Cu;
        // 0x39b2a0: 0x27b20140  addiu       $s2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2A4u;
        goto label_39b2a4;
    }
    ctx->pc = 0x39B29Cu;
    {
        const bool branch_taken_0x39b29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B29Cu;
        // 0x39b2a0: 0x27b20140  addiu       $s2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b29c) {
            ctx->pc = 0x39B2C8u;
            goto label_39b2c8;
        }
    }
    ctx->pc = 0x39B2A4u;
label_39b2a4:
    // 0x39b2a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39b2a8:
    // 0x39b2a8: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x39b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_39b2ac:
    // 0x39b2ac: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39b2b0:
    // 0x39b2b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39b2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b2b4:
    // 0x39b2b4: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x39b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_39b2b8:
    // 0x39b2b8: 0x40f809  jalr        $v0
label_39b2bc:
    if (ctx->pc == 0x39B2BCu) {
        ctx->pc = 0x39B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2B8u;
        // 0x39b2bc: 0x34c60507  ori         $a2, $a2, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2C0u;
        goto label_39b2c0;
    }
    ctx->pc = 0x39B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B2C0u);
        ctx->pc = 0x39B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2B8u;
        // 0x39b2bc: 0x34c60507  ori         $a2, $a2, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B2B8u, 0x39B2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B2C0u;
label_39b2c0:
    // 0x39b2c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_39b2c4:
    if (ctx->pc == 0x39B2C4u) {
        ctx->pc = 0x39B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2C0u;
        // 0x39b2c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2C8u;
        goto label_39b2c8;
    }
    ctx->pc = 0x39B2C0u;
    {
        const bool branch_taken_0x39b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2C0u;
        // 0x39b2c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2c0) {
            ctx->pc = 0x39B2E8u;
            goto label_39b2e8;
        }
    }
    ctx->pc = 0x39B2C8u;
label_39b2c8:
    // 0x39b2c8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x39b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_39b2cc:
    // 0x39b2cc: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x39b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_39b2d0:
    // 0x39b2d0: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x39b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_39b2d4:
    // 0x39b2d4: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x39b2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_39b2d8:
    // 0x39b2d8: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x39b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_39b2dc:
    // 0x39b2dc: 0x40f809  jalr        $v0
label_39b2e0:
    if (ctx->pc == 0x39B2E0u) {
        ctx->pc = 0x39B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2DCu;
        // 0x39b2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2E4u;
        goto label_39b2e4;
    }
    ctx->pc = 0x39B2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B2E4u);
        ctx->pc = 0x39B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2DCu;
        // 0x39b2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B2DCu, 0x39B2E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B2E4u;
label_39b2e4:
    // 0x39b2e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39b2e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b2e8:
    // 0x39b2e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_39b2ec:
    if (ctx->pc == 0x39B2ECu) {
        ctx->pc = 0x39B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2E8u;
        // 0x39b2ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2F0u;
        goto label_39b2f0;
    }
    ctx->pc = 0x39B2E8u;
    {
        const bool branch_taken_0x39b2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2E8u;
        // 0x39b2ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2e8) {
            ctx->pc = 0x39B308u;
            goto label_39b308;
        }
    }
    ctx->pc = 0x39B2F0u;
label_39b2f0:
    // 0x39b2f0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x39b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_39b2f4:
    // 0x39b2f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b2f8:
    // 0x39b2f8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x39b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_39b2fc:
    // 0x39b2fc: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x39b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_39b300:
    // 0x39b300: 0x1000000b  b           . + 4 + (0xB << 2)
label_39b304:
    if (ctx->pc == 0x39B304u) {
        ctx->pc = 0x39B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B300u;
        // 0x39b304: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B308u;
        goto label_39b308;
    }
    ctx->pc = 0x39B300u;
    {
        const bool branch_taken_0x39b300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B300u;
        // 0x39b304: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b300) {
            ctx->pc = 0x39B330u;
            goto label_39b330;
        }
    }
    ctx->pc = 0x39B308u;
label_39b308:
    // 0x39b308: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x39b308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_39b30c:
    // 0x39b30c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39b30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b310:
    // 0x39b310: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x39b310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
label_39b314:
    // 0x39b314: 0xc1035f6  jal         func_40D7D8
label_39b318:
    if (ctx->pc == 0x39B318u) {
        ctx->pc = 0x39B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B314u;
        // 0x39b318: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B31Cu;
        goto label_39b31c;
    }
    ctx->pc = 0x39B314u;
    SET_GPR_U32(ctx, 31, 0x39B31Cu);
    ctx->pc = 0x39B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B314u;
    // 0x39b318: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x39B314u, 0x39B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B31Cu;
label_39b31c:
    // 0x39b31c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x39b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_39b320:
    // 0x39b320: 0xc103628  jal         func_40D8A0
label_39b324:
    if (ctx->pc == 0x39B324u) {
        ctx->pc = 0x39B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B320u;
        // 0x39b324: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B328u;
        goto label_39b328;
    }
    ctx->pc = 0x39B320u;
    SET_GPR_U32(ctx, 31, 0x39B328u);
    ctx->pc = 0x39B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B320u;
    // 0x39b324: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x39B320u, 0x39B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B328u;
label_39b328:
    // 0x39b328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39b328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b32c:
    // 0x39b32c: 0x0  nop
    ctx->pc = 0x39b32cu;
    // NOP
label_39b330:
    // 0x39b330: 0x50800038  beql        $a0, $zero, . + 4 + (0x38 << 2)
label_39b334:
    if (ctx->pc == 0x39B334u) {
        ctx->pc = 0x39B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B330u;
        // 0x39b334: 0xae960008  sw          $s6, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B338u;
        goto label_39b338;
    }
    ctx->pc = 0x39B330u;
    {
        const bool branch_taken_0x39b330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b330) {
            ctx->pc = 0x39B334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B330u;
            // 0x39b334: 0xae960008  sw          $s6, 0x8($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B414u;
            goto label_39b414;
        }
    }
    ctx->pc = 0x39B338u;
label_39b338:
    // 0x39b338: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x39b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39b33c:
    // 0x39b33c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x39b33cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_39b340:
    // 0x39b340: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x39b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_39b344:
    // 0x39b344: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x39b344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_39b348:
    // 0x39b348: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x39b348u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_39b34c:
    // 0x39b34c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x39b34cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39b350:
    // 0x39b350: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x39b350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_39b354:
    // 0x39b354: 0x1000002c  b           . + 4 + (0x2C << 2)
label_39b358:
    if (ctx->pc == 0x39B358u) {
        ctx->pc = 0x39B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B354u;
        // 0x39b358: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B35Cu;
        goto label_39b35c;
    }
    ctx->pc = 0x39B354u;
    {
        const bool branch_taken_0x39b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B354u;
        // 0x39b358: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b354) {
            ctx->pc = 0x39B408u;
            goto label_39b408;
        }
    }
    ctx->pc = 0x39B35Cu;
label_39b35c:
    // 0x39b35c: 0x8faf015c  lw          $t7, 0x15C($sp)
    ctx->pc = 0x39b35cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_39b360:
    // 0x39b360: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x39b360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_39b364:
    // 0x39b364: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x39b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b368:
    // 0x39b368: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x39b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b36c:
    // 0x39b36c: 0x1e41021  addu        $v0, $t7, $a0
    ctx->pc = 0x39b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_39b370:
    // 0x39b370: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x39b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b374:
    // 0x39b374: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x39b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b378:
    // 0x39b378: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x39b378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_39b37c:
    // 0x39b37c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x39b37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_39b380:
    // 0x39b380: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b384:
    // 0x39b384: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x39b384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_39b388:
    // 0x39b388: 0x461001e  bgez        $v1, . + 4 + (0x1E << 2)
label_39b38c:
    if (ctx->pc == 0x39B38Cu) {
        ctx->pc = 0x39B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B388u;
        // 0x39b38c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B390u;
        goto label_39b390;
    }
    ctx->pc = 0x39B388u;
    {
        const bool branch_taken_0x39b388 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x39B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B388u;
        // 0x39b38c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b388) {
            ctx->pc = 0x39B404u;
            goto label_39b404;
        }
    }
    ctx->pc = 0x39B390u;
label_39b390:
    // 0x39b390: 0x443001d  bgezl       $v0, . + 4 + (0x1D << 2)
label_39b394:
    if (ctx->pc == 0x39B394u) {
        ctx->pc = 0x39B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B390u;
        // 0x39b394: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B398u;
        goto label_39b398;
    }
    ctx->pc = 0x39B390u;
    {
        const bool branch_taken_0x39b390 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x39b390) {
            ctx->pc = 0x39B394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B390u;
            // 0x39b394: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B408u;
            goto label_39b408;
        }
    }
    ctx->pc = 0x39B398u;
label_39b398:
    // 0x39b398: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x39b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_39b39c:
    // 0x39b39c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x39b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b3a0:
    // 0x39b3a0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x39b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39b3a4:
    // 0x39b3a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b3a8:
    // 0x39b3a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39b3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b3ac:
    // 0x39b3ac: 0x0  nop
    ctx->pc = 0x39b3acu;
    // NOP
label_39b3b0:
    // 0x39b3b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_39b3b4:
    if (ctx->pc == 0x39B3B4u) {
        ctx->pc = 0x39B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3B0u;
        // 0x39b3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3B8u;
        goto label_39b3b8;
    }
    ctx->pc = 0x39B3B0u;
    {
        const bool branch_taken_0x39b3b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3B0u;
        // 0x39b3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3b0) {
            ctx->pc = 0x39B3BCu;
            goto label_39b3bc;
        }
    }
    ctx->pc = 0x39B3B8u;
label_39b3b8:
    // 0x39b3b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39b3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b3bc:
    // 0x39b3bc: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x39b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_39b3c0:
    // 0x39b3c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_39b3c4:
    if (ctx->pc == 0x39B3C4u) {
        ctx->pc = 0x39B3C8u;
        goto label_39b3c8;
    }
    ctx->pc = 0x39B3C0u;
    {
        const bool branch_taken_0x39b3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b3c0) {
            ctx->pc = 0x39B3D8u;
            goto label_39b3d8;
        }
    }
    ctx->pc = 0x39B3C8u;
label_39b3c8:
    // 0x39b3c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_39b3cc:
    if (ctx->pc == 0x39B3CCu) {
        ctx->pc = 0x39B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3C8u;
        // 0x39b3cc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3D0u;
        goto label_39b3d0;
    }
    ctx->pc = 0x39B3C8u;
    {
        const bool branch_taken_0x39b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b3c8) {
            ctx->pc = 0x39B3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B3C8u;
            // 0x39b3cc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B3E4u;
            goto label_39b3e4;
        }
    }
    ctx->pc = 0x39B3D0u;
label_39b3d0:
    // 0x39b3d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_39b3d4:
    if (ctx->pc == 0x39B3D4u) {
        ctx->pc = 0x39B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3D0u;
        // 0x39b3d4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3D8u;
        goto label_39b3d8;
    }
    ctx->pc = 0x39B3D0u;
    {
        const bool branch_taken_0x39b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3D0u;
        // 0x39b3d4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3d0) {
            ctx->pc = 0x39B3F0u;
            goto label_39b3f0;
        }
    }
    ctx->pc = 0x39B3D8u;
label_39b3d8:
    // 0x39b3d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_39b3dc:
    if (ctx->pc == 0x39B3DCu) {
        ctx->pc = 0x39B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3D8u;
        // 0x39b3dc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3E0u;
        goto label_39b3e0;
    }
    ctx->pc = 0x39B3D8u;
    {
        const bool branch_taken_0x39b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b3d8) {
            ctx->pc = 0x39B3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B3D8u;
            // 0x39b3dc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B3F0u;
            goto label_39b3f0;
        }
    }
    ctx->pc = 0x39B3E0u;
label_39b3e0:
    // 0x39b3e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x39b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_39b3e4:
    // 0x39b3e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x39b3e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_39b3e8:
    // 0x39b3e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_39b3ec:
    if (ctx->pc == 0x39B3ECu) {
        ctx->pc = 0x39B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3E8u;
        // 0x39b3ec: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3F0u;
        goto label_39b3f0;
    }
    ctx->pc = 0x39B3E8u;
    {
        const bool branch_taken_0x39b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3E8u;
        // 0x39b3ec: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3e8) {
            ctx->pc = 0x39B3F8u;
            goto label_39b3f8;
        }
    }
    ctx->pc = 0x39B3F0u;
label_39b3f0:
    // 0x39b3f0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x39b3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_39b3f4:
    // 0x39b3f4: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x39b3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39b3f8:
    // 0x39b3f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x39b3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_39b3fc:
    // 0x39b3fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_39b400:
    if (ctx->pc == 0x39B400u) {
        ctx->pc = 0x39B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3FCu;
        // 0x39b400: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B404u;
        goto label_39b404;
    }
    ctx->pc = 0x39B3FCu;
    {
        const bool branch_taken_0x39b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3FCu;
        // 0x39b400: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3fc) {
            ctx->pc = 0x39B408u;
            goto label_39b408;
        }
    }
    ctx->pc = 0x39B404u;
label_39b404:
    // 0x39b404: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x39b404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39b408:
    // 0x39b408: 0x6a3ff4d  bgezl       $s5, . + 4 + (-0xB3 << 2)
label_39b40c:
    if (ctx->pc == 0x39B40Cu) {
        ctx->pc = 0x39B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B408u;
        // 0x39b40c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B410u;
        goto label_39b410;
    }
    ctx->pc = 0x39B408u;
    {
        const bool branch_taken_0x39b408 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x39b408) {
            ctx->pc = 0x39B40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B408u;
            // 0x39b40c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b140;
        }
    }
    ctx->pc = 0x39B410u;
label_39b410:
    // 0x39b410: 0xae960008  sw          $s6, 0x8($s4)
    ctx->pc = 0x39b410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 22));
label_39b414:
    // 0x39b414: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x39b414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39b418:
    // 0x39b418: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x39b418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_39b41c:
    // 0x39b41c: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x39b41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_39b420:
    // 0x39b420: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x39b420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_39b424:
    // 0x39b424: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x39b424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_39b428:
    // 0x39b428: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x39b428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_39b42c:
    // 0x39b42c: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x39b42cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_39b430:
    // 0x39b430: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x39b430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_39b434:
    // 0x39b434: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x39b434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_39b438:
    // 0x39b438: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x39b438u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_39b43c:
    // 0x39b43c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x39b43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_39b440:
    // 0x39b440: 0x3e00008  jr          $ra
label_39b444:
    if (ctx->pc == 0x39B444u) {
        ctx->pc = 0x39B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B440u;
        // 0x39b444: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B448u;
        goto label_fallthrough_0x39b440;
    }
    ctx->pc = 0x39B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B440u;
        // 0x39b444: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b440:
    ctx->pc = 0x39B448u;
}
