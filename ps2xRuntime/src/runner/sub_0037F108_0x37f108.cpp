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

// Function: sub_0037F108
// Address: 0x37f108 - 0x37f4b0
void sub_0037F108_0x37f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F108_0x37f108");
#endif

    switch (ctx->pc) {
        case 0x37f108u: goto label_37f108;
        case 0x37f10cu: goto label_37f10c;
        case 0x37f110u: goto label_37f110;
        case 0x37f114u: goto label_37f114;
        case 0x37f118u: goto label_37f118;
        case 0x37f11cu: goto label_37f11c;
        case 0x37f120u: goto label_37f120;
        case 0x37f124u: goto label_37f124;
        case 0x37f128u: goto label_37f128;
        case 0x37f12cu: goto label_37f12c;
        case 0x37f130u: goto label_37f130;
        case 0x37f134u: goto label_37f134;
        case 0x37f138u: goto label_37f138;
        case 0x37f13cu: goto label_37f13c;
        case 0x37f140u: goto label_37f140;
        case 0x37f144u: goto label_37f144;
        case 0x37f148u: goto label_37f148;
        case 0x37f14cu: goto label_37f14c;
        case 0x37f150u: goto label_37f150;
        case 0x37f154u: goto label_37f154;
        case 0x37f158u: goto label_37f158;
        case 0x37f15cu: goto label_37f15c;
        case 0x37f160u: goto label_37f160;
        case 0x37f164u: goto label_37f164;
        case 0x37f168u: goto label_37f168;
        case 0x37f16cu: goto label_37f16c;
        case 0x37f170u: goto label_37f170;
        case 0x37f174u: goto label_37f174;
        case 0x37f178u: goto label_37f178;
        case 0x37f17cu: goto label_37f17c;
        case 0x37f180u: goto label_37f180;
        case 0x37f184u: goto label_37f184;
        case 0x37f188u: goto label_37f188;
        case 0x37f18cu: goto label_37f18c;
        case 0x37f190u: goto label_37f190;
        case 0x37f194u: goto label_37f194;
        case 0x37f198u: goto label_37f198;
        case 0x37f19cu: goto label_37f19c;
        case 0x37f1a0u: goto label_37f1a0;
        case 0x37f1a4u: goto label_37f1a4;
        case 0x37f1a8u: goto label_37f1a8;
        case 0x37f1acu: goto label_37f1ac;
        case 0x37f1b0u: goto label_37f1b0;
        case 0x37f1b4u: goto label_37f1b4;
        case 0x37f1b8u: goto label_37f1b8;
        case 0x37f1bcu: goto label_37f1bc;
        case 0x37f1c0u: goto label_37f1c0;
        case 0x37f1c4u: goto label_37f1c4;
        case 0x37f1c8u: goto label_37f1c8;
        case 0x37f1ccu: goto label_37f1cc;
        case 0x37f1d0u: goto label_37f1d0;
        case 0x37f1d4u: goto label_37f1d4;
        case 0x37f1d8u: goto label_37f1d8;
        case 0x37f1dcu: goto label_37f1dc;
        case 0x37f1e0u: goto label_37f1e0;
        case 0x37f1e4u: goto label_37f1e4;
        case 0x37f1e8u: goto label_37f1e8;
        case 0x37f1ecu: goto label_37f1ec;
        case 0x37f1f0u: goto label_37f1f0;
        case 0x37f1f4u: goto label_37f1f4;
        case 0x37f1f8u: goto label_37f1f8;
        case 0x37f1fcu: goto label_37f1fc;
        case 0x37f200u: goto label_37f200;
        case 0x37f204u: goto label_37f204;
        case 0x37f208u: goto label_37f208;
        case 0x37f20cu: goto label_37f20c;
        case 0x37f210u: goto label_37f210;
        case 0x37f214u: goto label_37f214;
        case 0x37f218u: goto label_37f218;
        case 0x37f21cu: goto label_37f21c;
        case 0x37f220u: goto label_37f220;
        case 0x37f224u: goto label_37f224;
        case 0x37f228u: goto label_37f228;
        case 0x37f22cu: goto label_37f22c;
        case 0x37f230u: goto label_37f230;
        case 0x37f234u: goto label_37f234;
        case 0x37f238u: goto label_37f238;
        case 0x37f23cu: goto label_37f23c;
        case 0x37f240u: goto label_37f240;
        case 0x37f244u: goto label_37f244;
        case 0x37f248u: goto label_37f248;
        case 0x37f24cu: goto label_37f24c;
        case 0x37f250u: goto label_37f250;
        case 0x37f254u: goto label_37f254;
        case 0x37f258u: goto label_37f258;
        case 0x37f25cu: goto label_37f25c;
        case 0x37f260u: goto label_37f260;
        case 0x37f264u: goto label_37f264;
        case 0x37f268u: goto label_37f268;
        case 0x37f26cu: goto label_37f26c;
        case 0x37f270u: goto label_37f270;
        case 0x37f274u: goto label_37f274;
        case 0x37f278u: goto label_37f278;
        case 0x37f27cu: goto label_37f27c;
        case 0x37f280u: goto label_37f280;
        case 0x37f284u: goto label_37f284;
        case 0x37f288u: goto label_37f288;
        case 0x37f28cu: goto label_37f28c;
        case 0x37f290u: goto label_37f290;
        case 0x37f294u: goto label_37f294;
        case 0x37f298u: goto label_37f298;
        case 0x37f29cu: goto label_37f29c;
        case 0x37f2a0u: goto label_37f2a0;
        case 0x37f2a4u: goto label_37f2a4;
        case 0x37f2a8u: goto label_37f2a8;
        case 0x37f2acu: goto label_37f2ac;
        case 0x37f2b0u: goto label_37f2b0;
        case 0x37f2b4u: goto label_37f2b4;
        case 0x37f2b8u: goto label_37f2b8;
        case 0x37f2bcu: goto label_37f2bc;
        case 0x37f2c0u: goto label_37f2c0;
        case 0x37f2c4u: goto label_37f2c4;
        case 0x37f2c8u: goto label_37f2c8;
        case 0x37f2ccu: goto label_37f2cc;
        case 0x37f2d0u: goto label_37f2d0;
        case 0x37f2d4u: goto label_37f2d4;
        case 0x37f2d8u: goto label_37f2d8;
        case 0x37f2dcu: goto label_37f2dc;
        case 0x37f2e0u: goto label_37f2e0;
        case 0x37f2e4u: goto label_37f2e4;
        case 0x37f2e8u: goto label_37f2e8;
        case 0x37f2ecu: goto label_37f2ec;
        case 0x37f2f0u: goto label_37f2f0;
        case 0x37f2f4u: goto label_37f2f4;
        case 0x37f2f8u: goto label_37f2f8;
        case 0x37f2fcu: goto label_37f2fc;
        case 0x37f300u: goto label_37f300;
        case 0x37f304u: goto label_37f304;
        case 0x37f308u: goto label_37f308;
        case 0x37f30cu: goto label_37f30c;
        case 0x37f310u: goto label_37f310;
        case 0x37f314u: goto label_37f314;
        case 0x37f318u: goto label_37f318;
        case 0x37f31cu: goto label_37f31c;
        case 0x37f320u: goto label_37f320;
        case 0x37f324u: goto label_37f324;
        case 0x37f328u: goto label_37f328;
        case 0x37f32cu: goto label_37f32c;
        case 0x37f330u: goto label_37f330;
        case 0x37f334u: goto label_37f334;
        case 0x37f338u: goto label_37f338;
        case 0x37f33cu: goto label_37f33c;
        case 0x37f340u: goto label_37f340;
        case 0x37f344u: goto label_37f344;
        case 0x37f348u: goto label_37f348;
        case 0x37f34cu: goto label_37f34c;
        case 0x37f350u: goto label_37f350;
        case 0x37f354u: goto label_37f354;
        case 0x37f358u: goto label_37f358;
        case 0x37f35cu: goto label_37f35c;
        case 0x37f360u: goto label_37f360;
        case 0x37f364u: goto label_37f364;
        case 0x37f368u: goto label_37f368;
        case 0x37f36cu: goto label_37f36c;
        case 0x37f370u: goto label_37f370;
        case 0x37f374u: goto label_37f374;
        case 0x37f378u: goto label_37f378;
        case 0x37f37cu: goto label_37f37c;
        case 0x37f380u: goto label_37f380;
        case 0x37f384u: goto label_37f384;
        case 0x37f388u: goto label_37f388;
        case 0x37f38cu: goto label_37f38c;
        case 0x37f390u: goto label_37f390;
        case 0x37f394u: goto label_37f394;
        case 0x37f398u: goto label_37f398;
        case 0x37f39cu: goto label_37f39c;
        case 0x37f3a0u: goto label_37f3a0;
        case 0x37f3a4u: goto label_37f3a4;
        case 0x37f3a8u: goto label_37f3a8;
        case 0x37f3acu: goto label_37f3ac;
        case 0x37f3b0u: goto label_37f3b0;
        case 0x37f3b4u: goto label_37f3b4;
        case 0x37f3b8u: goto label_37f3b8;
        case 0x37f3bcu: goto label_37f3bc;
        case 0x37f3c0u: goto label_37f3c0;
        case 0x37f3c4u: goto label_37f3c4;
        case 0x37f3c8u: goto label_37f3c8;
        case 0x37f3ccu: goto label_37f3cc;
        case 0x37f3d0u: goto label_37f3d0;
        case 0x37f3d4u: goto label_37f3d4;
        case 0x37f3d8u: goto label_37f3d8;
        case 0x37f3dcu: goto label_37f3dc;
        case 0x37f3e0u: goto label_37f3e0;
        case 0x37f3e4u: goto label_37f3e4;
        case 0x37f3e8u: goto label_37f3e8;
        case 0x37f3ecu: goto label_37f3ec;
        case 0x37f3f0u: goto label_37f3f0;
        case 0x37f3f4u: goto label_37f3f4;
        case 0x37f3f8u: goto label_37f3f8;
        case 0x37f3fcu: goto label_37f3fc;
        case 0x37f400u: goto label_37f400;
        case 0x37f404u: goto label_37f404;
        case 0x37f408u: goto label_37f408;
        case 0x37f40cu: goto label_37f40c;
        case 0x37f410u: goto label_37f410;
        case 0x37f414u: goto label_37f414;
        case 0x37f418u: goto label_37f418;
        case 0x37f41cu: goto label_37f41c;
        case 0x37f420u: goto label_37f420;
        case 0x37f424u: goto label_37f424;
        case 0x37f428u: goto label_37f428;
        case 0x37f42cu: goto label_37f42c;
        case 0x37f430u: goto label_37f430;
        case 0x37f434u: goto label_37f434;
        case 0x37f438u: goto label_37f438;
        case 0x37f43cu: goto label_37f43c;
        case 0x37f440u: goto label_37f440;
        case 0x37f444u: goto label_37f444;
        case 0x37f448u: goto label_37f448;
        case 0x37f44cu: goto label_37f44c;
        case 0x37f450u: goto label_37f450;
        case 0x37f454u: goto label_37f454;
        case 0x37f458u: goto label_37f458;
        case 0x37f45cu: goto label_37f45c;
        case 0x37f460u: goto label_37f460;
        case 0x37f464u: goto label_37f464;
        case 0x37f468u: goto label_37f468;
        case 0x37f46cu: goto label_37f46c;
        case 0x37f470u: goto label_37f470;
        case 0x37f474u: goto label_37f474;
        case 0x37f478u: goto label_37f478;
        case 0x37f47cu: goto label_37f47c;
        case 0x37f480u: goto label_37f480;
        case 0x37f484u: goto label_37f484;
        case 0x37f488u: goto label_37f488;
        case 0x37f48cu: goto label_37f48c;
        case 0x37f490u: goto label_37f490;
        case 0x37f494u: goto label_37f494;
        case 0x37f498u: goto label_37f498;
        case 0x37f49cu: goto label_37f49c;
        case 0x37f4a0u: goto label_37f4a0;
        case 0x37f4a4u: goto label_37f4a4;
        case 0x37f4a8u: goto label_37f4a8;
        case 0x37f4acu: goto label_37f4ac;
        default: break;
    }

    ctx->pc = 0x37f108u;

label_37f108:
    // 0x37f108: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37f108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_37f10c:
    // 0x37f10c: 0x8f82a8f8  lw          $v0, -0x5708($gp)
    ctx->pc = 0x37f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
label_37f110:
    // 0x37f110: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x37f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_37f114:
    // 0x37f114: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x37f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_37f118:
    // 0x37f118: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37f118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37f11c:
    // 0x37f11c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37f11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_37f120:
    // 0x37f120: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x37f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_37f124:
    // 0x37f124: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x37f124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_37f128:
    // 0x37f128: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_37f12c:
    // 0x37f12c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37f130:
    // 0x37f130: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x37f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_37f134:
    // 0x37f134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37f134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37f138:
    // 0x37f138: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x37f138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_37f13c:
    // 0x37f13c: 0x1080007a  beqz        $a0, . + 4 + (0x7A << 2)
label_37f140:
    if (ctx->pc == 0x37F140u) {
        ctx->pc = 0x37F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F13Cu;
        // 0x37f140: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F144u;
        goto label_37f144;
    }
    ctx->pc = 0x37F13Cu;
    {
        const bool branch_taken_0x37f13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F13Cu;
        // 0x37f140: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f13c) {
            ctx->pc = 0x37F328u;
            goto label_37f328;
        }
    }
    ctx->pc = 0x37F144u;
label_37f144:
    // 0x37f144: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x37f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37f148:
    // 0x37f148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f14c:
    // 0x37f14c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_37f150:
    if (ctx->pc == 0x37F150u) {
        ctx->pc = 0x37F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F14Cu;
        // 0x37f150: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F154u;
        goto label_37f154;
    }
    ctx->pc = 0x37F14Cu;
    {
        const bool branch_taken_0x37f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F14Cu;
        // 0x37f150: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f14c) {
            ctx->pc = 0x37F224u;
            goto label_37f224;
        }
    }
    ctx->pc = 0x37F154u;
label_37f154:
    // 0x37f154: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37f154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37f158:
    // 0x37f158: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x37f158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_37f15c:
    // 0x37f15c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x37f15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37f160:
    // 0x37f160: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
label_37f164:
    if (ctx->pc == 0x37F164u) {
        ctx->pc = 0x37F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F160u;
        // 0x37f164: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F168u;
        goto label_37f168;
    }
    ctx->pc = 0x37F160u;
    {
        const bool branch_taken_0x37f160 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x37F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F160u;
        // 0x37f164: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f160) {
            ctx->pc = 0x37F1B8u;
            goto label_37f1b8;
        }
    }
    ctx->pc = 0x37F168u;
label_37f168:
    // 0x37f168: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_37f16c:
    if (ctx->pc == 0x37F16Cu) {
        ctx->pc = 0x37F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F168u;
        // 0x37f16c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F170u;
        goto label_37f170;
    }
    ctx->pc = 0x37F168u;
    {
        const bool branch_taken_0x37f168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F168u;
        // 0x37f16c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f168) {
            ctx->pc = 0x37F1D8u;
            goto label_37f1d8;
        }
    }
    ctx->pc = 0x37F170u;
label_37f170:
    // 0x37f170: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_37f174:
    if (ctx->pc == 0x37F174u) {
        ctx->pc = 0x37F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F170u;
        // 0x37f174: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F178u;
        goto label_37f178;
    }
    ctx->pc = 0x37F170u;
    {
        const bool branch_taken_0x37f170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f170) {
            ctx->pc = 0x37F174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F170u;
            // 0x37f174: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F1BCu;
            goto label_37f1bc;
        }
    }
    ctx->pc = 0x37F178u;
label_37f178:
    // 0x37f178: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x37f178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_37f17c:
    // 0x37f17c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_37f180:
    if (ctx->pc == 0x37F180u) {
        ctx->pc = 0x37F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F17Cu;
        // 0x37f180: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F184u;
        goto label_37f184;
    }
    ctx->pc = 0x37F17Cu;
    {
        const bool branch_taken_0x37f17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f17c) {
            ctx->pc = 0x37F180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F17Cu;
            // 0x37f180: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F1A4u;
            goto label_37f1a4;
        }
    }
    ctx->pc = 0x37F184u;
label_37f184:
    // 0x37f184: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x37f184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37f188:
    // 0x37f188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37f18c:
    // 0x37f18c: 0x1052002a  beq         $v0, $s2, . + 4 + (0x2A << 2)
label_37f190:
    if (ctx->pc == 0x37F190u) {
        ctx->pc = 0x37F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F18Cu;
        // 0x37f190: 0x24620014  addiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F194u;
        goto label_37f194;
    }
    ctx->pc = 0x37F18Cu;
    {
        const bool branch_taken_0x37f18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F18Cu;
        // 0x37f190: 0x24620014  addiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f18c) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F194u;
label_37f194:
    // 0x37f194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37f194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37f198:
    // 0x37f198: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37f198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37f19c:
    // 0x37f19c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x37f19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37f1a0:
    // 0x37f1a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37f1a4:
    // 0x37f1a4: 0x10520024  beq         $v0, $s2, . + 4 + (0x24 << 2)
label_37f1a8:
    if (ctx->pc == 0x37F1A8u) {
        ctx->pc = 0x37F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1A4u;
        // 0x37f1a8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F1ACu;
        goto label_37f1ac;
    }
    ctx->pc = 0x37F1A4u;
    {
        const bool branch_taken_0x37f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1A4u;
        // 0x37f1a8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1a4) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F1ACu;
label_37f1ac:
    // 0x37f1ac: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x37f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_37f1b0:
    // 0x37f1b0: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x37f1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_37f1b4:
    // 0x37f1b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x37f1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_37f1b8:
    // 0x37f1b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37f1bc:
    // 0x37f1bc: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
label_37f1c0:
    if (ctx->pc == 0x37F1C0u) {
        ctx->pc = 0x37F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1BCu;
        // 0x37f1c0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F1C4u;
        goto label_37f1c4;
    }
    ctx->pc = 0x37F1BCu;
    {
        const bool branch_taken_0x37f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1BCu;
        // 0x37f1c0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1bc) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F1C4u;
label_37f1c4:
    // 0x37f1c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x37f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_37f1c8:
    // 0x37f1c8: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x37f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_37f1cc:
    // 0x37f1cc: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x37f1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_37f1d0:
    // 0x37f1d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_37f1d4:
    if (ctx->pc == 0x37F1D4u) {
        ctx->pc = 0x37F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1D0u;
        // 0x37f1d4: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F1D8u;
        goto label_37f1d8;
    }
    ctx->pc = 0x37F1D0u;
    {
        const bool branch_taken_0x37f1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1D0u;
        // 0x37f1d4: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1d0) {
            ctx->pc = 0x37F224u;
            goto label_37f224;
        }
    }
    ctx->pc = 0x37F1D8u;
label_37f1d8:
    // 0x37f1d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37f1dc:
    // 0x37f1dc: 0x0  nop
    ctx->pc = 0x37f1dcu;
    // NOP
label_37f1e0:
    // 0x37f1e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37f1e4:
    // 0x37f1e4: 0x10520014  beq         $v0, $s2, . + 4 + (0x14 << 2)
label_37f1e8:
    if (ctx->pc == 0x37F1E8u) {
        ctx->pc = 0x37F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1E4u;
        // 0x37f1e8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F1ECu;
        goto label_37f1ec;
    }
    ctx->pc = 0x37F1E4u;
    {
        const bool branch_taken_0x37f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1E4u;
        // 0x37f1e8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1e4) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F1ECu;
label_37f1ec:
    // 0x37f1ec: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x37f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_37f1f0:
    // 0x37f1f0: 0x10520011  beq         $v0, $s2, . + 4 + (0x11 << 2)
label_37f1f4:
    if (ctx->pc == 0x37F1F4u) {
        ctx->pc = 0x37F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1F0u;
        // 0x37f1f4: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F1F8u;
        goto label_37f1f8;
    }
    ctx->pc = 0x37F1F0u;
    {
        const bool branch_taken_0x37f1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1F0u;
        // 0x37f1f4: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1f0) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F1F8u;
label_37f1f8:
    // 0x37f1f8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x37f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37f1fc:
    // 0x37f1fc: 0x1052000e  beq         $v0, $s2, . + 4 + (0xE << 2)
label_37f200:
    if (ctx->pc == 0x37F200u) {
        ctx->pc = 0x37F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1FCu;
        // 0x37f200: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F204u;
        goto label_37f204;
    }
    ctx->pc = 0x37F1FCu;
    {
        const bool branch_taken_0x37f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1FCu;
        // 0x37f200: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1fc) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F204u;
label_37f204:
    // 0x37f204: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x37f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_37f208:
    // 0x37f208: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_37f20c:
    if (ctx->pc == 0x37F20Cu) {
        ctx->pc = 0x37F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F208u;
        // 0x37f20c: 0x24a3003c  addiu       $v1, $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F210u;
        goto label_37f210;
    }
    ctx->pc = 0x37F208u;
    {
        const bool branch_taken_0x37f208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F208u;
        // 0x37f20c: 0x24a3003c  addiu       $v1, $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f208) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F210u;
label_37f210:
    // 0x37f210: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x37f210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_37f214:
    // 0x37f214: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x37f214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_37f218:
    // 0x37f218: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x37f218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_37f21c:
    // 0x37f21c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_37f220:
    if (ctx->pc == 0x37F220u) {
        ctx->pc = 0x37F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F21Cu;
        // 0x37f220: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F224u;
        goto label_37f224;
    }
    ctx->pc = 0x37F21Cu;
    {
        const bool branch_taken_0x37f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F21Cu;
        // 0x37f220: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f21c) {
            ctx->pc = 0x37F1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f1e0;
        }
    }
    ctx->pc = 0x37F224u;
label_37f224:
    // 0x37f224: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x37f224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f228:
    // 0x37f228: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_37f22c:
    if (ctx->pc == 0x37F22Cu) {
        ctx->pc = 0x37F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F228u;
        // 0x37f22c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F230u;
        goto label_37f230;
    }
    ctx->pc = 0x37F228u;
    {
        const bool branch_taken_0x37f228 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F228u;
        // 0x37f22c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f228) {
            ctx->pc = 0x37F240u;
            goto label_37f240;
        }
    }
    ctx->pc = 0x37F230u;
label_37f230:
    // 0x37f230: 0x10000095  b           . + 4 + (0x95 << 2)
label_37f234:
    if (ctx->pc == 0x37F234u) {
        ctx->pc = 0x37F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F230u;
        // 0x37f234: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F238u;
        goto label_37f238;
    }
    ctx->pc = 0x37F230u;
    {
        const bool branch_taken_0x37f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F230u;
        // 0x37f234: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f230) {
            ctx->pc = 0x37F488u;
            goto label_37f488;
        }
    }
    ctx->pc = 0x37F238u;
label_37f238:
    // 0x37f238: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_37f23c:
    if (ctx->pc == 0x37F23Cu) {
        ctx->pc = 0x37F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F238u;
        // 0x37f23c: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F240u;
        goto label_37f240;
    }
    ctx->pc = 0x37F238u;
    {
        const bool branch_taken_0x37f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F238u;
        // 0x37f23c: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f238) {
            ctx->pc = 0x37F228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f228;
        }
    }
    ctx->pc = 0x37F240u;
label_37f240:
    // 0x37f240: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x37f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_37f244:
    // 0x37f244: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x37f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37f248:
    // 0x37f248: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x37f248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_37f24c:
    // 0x37f24c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x37f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_37f250:
    // 0x37f250: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x37f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_37f254:
    // 0x37f254: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37f254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37f258:
    // 0x37f258: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37f25c:
    // 0x37f25c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x37f25cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37f260:
    // 0x37f260: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x37f260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
label_37f264:
    // 0x37f264: 0x40f809  jalr        $v0
label_37f268:
    if (ctx->pc == 0x37F268u) {
        ctx->pc = 0x37F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F264u;
        // 0x37f268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F26Cu;
        goto label_37f26c;
    }
    ctx->pc = 0x37F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37F26Cu);
        ctx->pc = 0x37F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F264u;
        // 0x37f268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F264u, 0x37F26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37F26Cu;
label_37f26c:
    // 0x37f26c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37f26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37f270:
    // 0x37f270: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_37f274:
    if (ctx->pc == 0x37F274u) {
        ctx->pc = 0x37F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F270u;
        // 0x37f274: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F278u;
        goto label_37f278;
    }
    ctx->pc = 0x37F270u;
    {
        const bool branch_taken_0x37f270 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F270u;
        // 0x37f274: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f270) {
            ctx->pc = 0x37F2A0u;
            goto label_37f2a0;
        }
    }
    ctx->pc = 0x37F278u;
label_37f278:
    // 0x37f278: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x37f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_37f27c:
    // 0x37f27c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37f280:
    // 0x37f280: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37f280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37f284:
    // 0x37f284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37f284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f288:
    // 0x37f288: 0xc1035f6  jal         func_40D7D8
label_37f28c:
    if (ctx->pc == 0x37F28Cu) {
        ctx->pc = 0x37F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F288u;
        // 0x37f28c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F290u;
        goto label_37f290;
    }
    ctx->pc = 0x37F288u;
    SET_GPR_U32(ctx, 31, 0x37F290u);
    ctx->pc = 0x37F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F288u;
    // 0x37f28c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37F288u, 0x37F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F290u;
label_37f290:
    // 0x37f290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37f294:
    // 0x37f294: 0x1000005c  b           . + 4 + (0x5C << 2)
label_37f298:
    if (ctx->pc == 0x37F298u) {
        ctx->pc = 0x37F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F294u;
        // 0x37f298: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F29Cu;
        goto label_37f29c;
    }
    ctx->pc = 0x37F294u;
    {
        const bool branch_taken_0x37f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F294u;
        // 0x37f298: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f294) {
            ctx->pc = 0x37F408u;
            goto label_37f408;
        }
    }
    ctx->pc = 0x37F29Cu;
label_37f29c:
    // 0x37f29c: 0x0  nop
    ctx->pc = 0x37f29cu;
    // NOP
label_37f2a0:
    // 0x37f2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37f2a4:
    // 0x37f2a4: 0xc0bb7e6  jal         func_2EDF98
label_37f2a8:
    if (ctx->pc == 0x37F2A8u) {
        ctx->pc = 0x37F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2A4u;
        // 0x37f2a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F2ACu;
        goto label_37f2ac;
    }
    ctx->pc = 0x37F2A4u;
    SET_GPR_U32(ctx, 31, 0x37F2ACu);
    ctx->pc = 0x37F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2A4u;
    // 0x37f2a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37F2A4u, 0x37F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2ACu;
label_37f2ac:
    // 0x37f2ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x37f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37f2b0:
    // 0x37f2b0: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x37f2b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37f2b4:
    // 0x37f2b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_37f2b8:
    if (ctx->pc == 0x37F2B8u) {
        ctx->pc = 0x37F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2B4u;
        // 0x37f2b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F2BCu;
        goto label_37f2bc;
    }
    ctx->pc = 0x37F2B4u;
    {
        const bool branch_taken_0x37f2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2B4u;
        // 0x37f2b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f2b4) {
            ctx->pc = 0x37F300u;
            goto label_37f300;
        }
    }
    ctx->pc = 0x37F2BCu;
label_37f2bc:
    // 0x37f2bc: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x37f2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_37f2c0:
    // 0x37f2c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37f2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37f2c4:
    // 0x37f2c4: 0x0  nop
    ctx->pc = 0x37f2c4u;
    // NOP
label_37f2c8:
    // 0x37f2c8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x37f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_37f2cc:
    // 0x37f2cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x37f2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_37f2d0:
    // 0x37f2d0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x37f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_37f2d4:
    // 0x37f2d4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x37f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_37f2d8:
    // 0x37f2d8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x37f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_37f2dc:
    // 0x37f2dc: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x37f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_37f2e0:
    // 0x37f2e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x37f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37f2e4:
    // 0x37f2e4: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x37f2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_37f2e8:
    // 0x37f2e8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x37f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_37f2ec:
    // 0x37f2ec: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x37f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_37f2f0:
    // 0x37f2f0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x37f2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37f2f4:
    // 0x37f2f4: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x37f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_37f2f8:
    // 0x37f2f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_37f2fc:
    if (ctx->pc == 0x37F2FCu) {
        ctx->pc = 0x37F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2F8u;
        // 0x37f2fc: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F300u;
        goto label_37f300;
    }
    ctx->pc = 0x37F2F8u;
    {
        const bool branch_taken_0x37f2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2F8u;
        // 0x37f2fc: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f2f8) {
            ctx->pc = 0x37F2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F300u;
label_37f300:
    // 0x37f300: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x37f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_37f304:
    // 0x37f304: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x37f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_37f308:
    // 0x37f308: 0x40f809  jalr        $v0
label_37f30c:
    if (ctx->pc == 0x37F30Cu) {
        ctx->pc = 0x37F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F308u;
        // 0x37f30c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F310u;
        goto label_37f310;
    }
    ctx->pc = 0x37F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37F310u);
        ctx->pc = 0x37F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F308u;
        // 0x37f30c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F308u, 0x37F310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37F310u;
label_37f310:
    // 0x37f310: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x37f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37f314:
    // 0x37f314: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x37f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37f318:
    // 0x37f318: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x37f318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
label_37f31c:
    // 0x37f31c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x37f31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37f320:
    // 0x37f320: 0x1000001e  b           . + 4 + (0x1E << 2)
label_37f324:
    if (ctx->pc == 0x37F324u) {
        ctx->pc = 0x37F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F320u;
        // 0x37f324: 0x91a821  addu        $s5, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F328u;
        goto label_37f328;
    }
    ctx->pc = 0x37F320u;
    {
        const bool branch_taken_0x37f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F320u;
        // 0x37f324: 0x91a821  addu        $s5, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f320) {
            ctx->pc = 0x37F39Cu;
            goto label_37f39c;
        }
    }
    ctx->pc = 0x37F328u;
label_37f328:
    // 0x37f328: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x37f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37f32c:
    // 0x37f32c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x37f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37f330:
    // 0x37f330: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x37f330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_37f334:
    // 0x37f334: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37f334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37f338:
    // 0x37f338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37f33c:
    // 0x37f33c: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x37f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_37f340:
    // 0x37f340: 0x468018  mult        $s0, $v0, $a2
    ctx->pc = 0x37f340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_37f344:
    // 0x37f344: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x37f344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37f348:
    // 0x37f348: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37f34c:
    // 0x37f34c: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x37f34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
label_37f350:
    // 0x37f350: 0x40f809  jalr        $v0
label_37f354:
    if (ctx->pc == 0x37F354u) {
        ctx->pc = 0x37F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F350u;
        // 0x37f354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F358u;
        goto label_37f358;
    }
    ctx->pc = 0x37F350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37F358u);
        ctx->pc = 0x37F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F350u;
        // 0x37f354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F350u, 0x37F358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37F358u;
label_37f358:
    // 0x37f358: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_37f35c:
    if (ctx->pc == 0x37F35Cu) {
        ctx->pc = 0x37F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F358u;
        // 0x37f35c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F360u;
        goto label_37f360;
    }
    ctx->pc = 0x37F358u;
    {
        const bool branch_taken_0x37f358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F358u;
        // 0x37f35c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f358) {
            ctx->pc = 0x37F388u;
            goto label_37f388;
        }
    }
    ctx->pc = 0x37F360u;
label_37f360:
    // 0x37f360: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x37f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_37f364:
    // 0x37f364: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37f364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37f368:
    // 0x37f368: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37f368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_37f36c:
    // 0x37f36c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37f36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f370:
    // 0x37f370: 0xc1035f6  jal         func_40D7D8
label_37f374:
    if (ctx->pc == 0x37F374u) {
        ctx->pc = 0x37F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F370u;
        // 0x37f374: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F378u;
        goto label_37f378;
    }
    ctx->pc = 0x37F370u;
    SET_GPR_U32(ctx, 31, 0x37F378u);
    ctx->pc = 0x37F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F370u;
    // 0x37f374: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37F370u, 0x37F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F378u;
label_37f378:
    // 0x37f378: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_37f37c:
    // 0x37f37c: 0x10000022  b           . + 4 + (0x22 << 2)
label_37f380:
    if (ctx->pc == 0x37F380u) {
        ctx->pc = 0x37F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F37Cu;
        // 0x37f380: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F384u;
        goto label_37f384;
    }
    ctx->pc = 0x37F37Cu;
    {
        const bool branch_taken_0x37f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F37Cu;
        // 0x37f380: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f37c) {
            ctx->pc = 0x37F408u;
            goto label_37f408;
        }
    }
    ctx->pc = 0x37F384u;
label_37f384:
    // 0x37f384: 0x0  nop
    ctx->pc = 0x37f384u;
    // NOP
label_37f388:
    // 0x37f388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37f388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37f38c:
    // 0x37f38c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37f38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f390:
    // 0x37f390: 0xc0bb7e6  jal         func_2EDF98
label_37f394:
    if (ctx->pc == 0x37F394u) {
        ctx->pc = 0x37F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F390u;
        // 0x37f394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F398u;
        goto label_37f398;
    }
    ctx->pc = 0x37F390u;
    SET_GPR_U32(ctx, 31, 0x37F398u);
    ctx->pc = 0x37F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F390u;
    // 0x37f394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37F390u, 0x37F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F398u;
label_37f398:
    // 0x37f398: 0x8e950004  lw          $s5, 0x4($s4)
    ctx->pc = 0x37f398u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_37f39c:
    // 0x37f39c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37f3a0:
    // 0x37f3a0: 0xc0c97b0  jal         func_325EC0
label_37f3a4:
    if (ctx->pc == 0x37F3A4u) {
        ctx->pc = 0x37F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3A0u;
        // 0x37f3a4: 0x8e530010  lw          $s3, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F3A8u;
        goto label_37f3a8;
    }
    ctx->pc = 0x37F3A0u;
    SET_GPR_U32(ctx, 31, 0x37F3A8u);
    ctx->pc = 0x37F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F3A0u;
    // 0x37f3a4: 0x8e530010  lw          $s3, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325EC0u, 0x37F3A0u, 0x37F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F3A8u;
label_37f3a8:
    // 0x37f3a8: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x37f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_37f3ac:
    // 0x37f3ac: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x37f3acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_37f3b0:
    // 0x37f3b0: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x37f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_37f3b4:
    // 0x37f3b4: 0x26c4e880  addiu       $a0, $s6, -0x1780
    ctx->pc = 0x37f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_37f3b8:
    // 0x37f3b8: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x37f3b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_37f3bc:
    // 0x37f3bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37f3c0:
    // 0x37f3c0: 0x13b080  sll         $s6, $s3, 2
    ctx->pc = 0x37f3c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_37f3c4:
    // 0x37f3c4: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x37f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_37f3c8:
    // 0x37f3c8: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x37f3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_37f3cc:
    // 0x37f3cc: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x37f3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
label_37f3d0:
    // 0x37f3d0: 0x40f809  jalr        $v0
label_37f3d4:
    if (ctx->pc == 0x37F3D4u) {
        ctx->pc = 0x37F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3D0u;
        // 0x37f3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F3D8u;
        goto label_37f3d8;
    }
    ctx->pc = 0x37F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37F3D8u);
        ctx->pc = 0x37F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3D0u;
        // 0x37f3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F3D0u, 0x37F3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37F3D8u;
label_37f3d8:
    // 0x37f3d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37f3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37f3dc:
    // 0x37f3dc: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_37f3e0:
    if (ctx->pc == 0x37F3E0u) {
        ctx->pc = 0x37F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3DCu;
        // 0x37f3e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F3E4u;
        goto label_37f3e4;
    }
    ctx->pc = 0x37F3DCu;
    {
        const bool branch_taken_0x37f3dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3DCu;
        // 0x37f3e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3dc) {
            ctx->pc = 0x37F418u;
            goto label_37f418;
        }
    }
    ctx->pc = 0x37F3E4u;
label_37f3e4:
    // 0x37f3e4: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x37f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_37f3e8:
    // 0x37f3e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37f3ec:
    // 0x37f3ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_37f3f0:
    // 0x37f3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37f3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f3f4:
    // 0x37f3f4: 0xc1035f6  jal         func_40D7D8
label_37f3f8:
    if (ctx->pc == 0x37F3F8u) {
        ctx->pc = 0x37F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3F4u;
        // 0x37f3f8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F3FCu;
        goto label_37f3fc;
    }
    ctx->pc = 0x37F3F4u;
    SET_GPR_U32(ctx, 31, 0x37F3FCu);
    ctx->pc = 0x37F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F3F4u;
    // 0x37f3f8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37F3F4u, 0x37F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F3FCu;
label_37f3fc:
    // 0x37f3fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_37f400:
    // 0x37f400: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x37f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37f404:
    // 0x37f404: 0x0  nop
    ctx->pc = 0x37f404u;
    // NOP
label_37f408:
    // 0x37f408: 0xc103628  jal         func_40D8A0
label_37f40c:
    if (ctx->pc == 0x37F40Cu) {
        ctx->pc = 0x37F410u;
        goto label_37f410;
    }
    ctx->pc = 0x37F408u;
    SET_GPR_U32(ctx, 31, 0x37F410u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37F408u, 0x37F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F410u;
label_37f410:
    // 0x37f410: 0x1000001c  b           . + 4 + (0x1C << 2)
label_37f414:
    if (ctx->pc == 0x37F414u) {
        ctx->pc = 0x37F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F410u;
        // 0x37f414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F418u;
        goto label_37f418;
    }
    ctx->pc = 0x37F410u;
    {
        const bool branch_taken_0x37f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F410u;
        // 0x37f414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f410) {
            ctx->pc = 0x37F484u;
            goto label_37f484;
        }
    }
    ctx->pc = 0x37F418u;
label_37f418:
    // 0x37f418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f41c:
    // 0x37f41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37f420:
    // 0x37f420: 0xc0bb7e6  jal         func_2EDF98
label_37f424:
    if (ctx->pc == 0x37F424u) {
        ctx->pc = 0x37F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F420u;
        // 0x37f424: 0x2368021  addu        $s0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F428u;
        goto label_37f428;
    }
    ctx->pc = 0x37F420u;
    SET_GPR_U32(ctx, 31, 0x37F428u);
    ctx->pc = 0x37F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F420u;
    // 0x37f424: 0x2368021  addu        $s0, $s1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37F420u, 0x37F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F428u;
label_37f428:
    // 0x37f428: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x37f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_37f42c:
    // 0x37f42c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_37f430:
    if (ctx->pc == 0x37F430u) {
        ctx->pc = 0x37F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F42Cu;
        // 0x37f430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F434u;
        goto label_37f434;
    }
    ctx->pc = 0x37F42Cu;
    {
        const bool branch_taken_0x37f42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F42Cu;
        // 0x37f430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f42c) {
            ctx->pc = 0x37F464u;
            goto label_37f464;
        }
    }
    ctx->pc = 0x37F434u;
label_37f434:
    // 0x37f434: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x37f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_37f438:
    // 0x37f438: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x37f438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f43c:
    // 0x37f43c: 0x0  nop
    ctx->pc = 0x37f43cu;
    // NOP
label_37f440:
    // 0x37f440: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37f440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_37f444:
    // 0x37f444: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x37f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_37f448:
    // 0x37f448: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x37f448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_37f44c:
    // 0x37f44c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x37f44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_37f450:
    // 0x37f450: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x37f450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_37f454:
    // 0x37f454: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x37f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_37f458:
    // 0x37f458: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x37f458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37f45c:
    // 0x37f45c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_37f460:
    if (ctx->pc == 0x37F460u) {
        ctx->pc = 0x37F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F45Cu;
        // 0x37f460: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F464u;
        goto label_37f464;
    }
    ctx->pc = 0x37F45Cu;
    {
        const bool branch_taken_0x37f45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F45Cu;
        // 0x37f460: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f45c) {
            ctx->pc = 0x37F440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f440;
        }
    }
    ctx->pc = 0x37F464u;
label_37f464:
    // 0x37f464: 0xaeb30008  sw          $s3, 0x8($s5)
    ctx->pc = 0x37f464u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 19));
label_37f468:
    // 0x37f468: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x37f468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37f46c:
    // 0x37f46c: 0xaeb1000c  sw          $s1, 0xC($s5)
    ctx->pc = 0x37f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 17));
label_37f470:
    // 0x37f470: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x37f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37f474:
    // 0x37f474: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x37f474u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
label_37f478:
    // 0x37f478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37f47c:
    // 0x37f47c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x37f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_37f480:
    // 0x37f480: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x37f480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_37f484:
    // 0x37f484: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37f484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37f488:
    // 0x37f488: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37f488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37f48c:
    // 0x37f48c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x37f48cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37f490:
    // 0x37f490: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x37f490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37f494:
    // 0x37f494: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37f494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37f498:
    // 0x37f498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37f498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37f49c:
    // 0x37f49c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x37f49cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37f4a0:
    // 0x37f4a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37f4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37f4a4:
    // 0x37f4a4: 0x3e00008  jr          $ra
label_37f4a8:
    if (ctx->pc == 0x37F4A8u) {
        ctx->pc = 0x37F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4A4u;
        // 0x37f4a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F4ACu;
        goto label_37f4ac;
    }
    ctx->pc = 0x37F4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4A4u;
        // 0x37f4a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F4ACu;
label_37f4ac:
    // 0x37f4ac: 0x0  nop
    ctx->pc = 0x37f4acu;
    // NOP
    ctx->pc = 0x37f4b0u;
}
