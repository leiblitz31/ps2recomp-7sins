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

// Function: sub_00206390
// Address: 0x206390 - 0x2074b0
void sub_00206390_0x206390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206390_0x206390");
#endif

    switch (ctx->pc) {
        case 0x206400u: goto label_206400;
        case 0x206454u: goto label_206454;
        case 0x206474u: goto label_206474;
        case 0x206484u: goto label_206484;
        case 0x206498u: goto label_206498;
        case 0x2064ccu: goto label_2064cc;
        case 0x2064e0u: goto label_2064e0;
        case 0x2064ecu: goto label_2064ec;
        case 0x2064f8u: goto label_2064f8;
        case 0x206524u: goto label_206524;
        case 0x206538u: goto label_206538;
        case 0x206544u: goto label_206544;
        case 0x206550u: goto label_206550;
        case 0x20657cu: goto label_20657c;
        case 0x206590u: goto label_206590;
        case 0x2065a0u: goto label_2065a0;
        case 0x2065acu: goto label_2065ac;
        case 0x2065d8u: goto label_2065d8;
        case 0x2065ecu: goto label_2065ec;
        case 0x2065f8u: goto label_2065f8;
        case 0x206604u: goto label_206604;
        case 0x206634u: goto label_206634;
        case 0x206648u: goto label_206648;
        case 0x206654u: goto label_206654;
        case 0x206660u: goto label_206660;
        case 0x20668cu: goto label_20668c;
        case 0x2066a0u: goto label_2066a0;
        case 0x2066b0u: goto label_2066b0;
        case 0x2066bcu: goto label_2066bc;
        case 0x2066f0u: goto label_2066f0;
        case 0x206704u: goto label_206704;
        case 0x206710u: goto label_206710;
        case 0x20671cu: goto label_20671c;
        case 0x206750u: goto label_206750;
        case 0x206764u: goto label_206764;
        case 0x206770u: goto label_206770;
        case 0x20677cu: goto label_20677c;
        case 0x2067b8u: goto label_2067b8;
        case 0x2067ccu: goto label_2067cc;
        case 0x2067dcu: goto label_2067dc;
        case 0x2067e8u: goto label_2067e8;
        case 0x20681cu: goto label_20681c;
        case 0x206830u: goto label_206830;
        case 0x20683cu: goto label_20683c;
        case 0x206848u: goto label_206848;
        case 0x20687cu: goto label_20687c;
        case 0x206894u: goto label_206894;
        case 0x2068a4u: goto label_2068a4;
        case 0x2068b0u: goto label_2068b0;
        case 0x2068e0u: goto label_2068e0;
        case 0x2068f4u: goto label_2068f4;
        case 0x206900u: goto label_206900;
        case 0x20690cu: goto label_20690c;
        case 0x20693cu: goto label_20693c;
        case 0x206950u: goto label_206950;
        case 0x20695cu: goto label_20695c;
        case 0x20698cu: goto label_20698c;
        case 0x2069a0u: goto label_2069a0;
        case 0x2069acu: goto label_2069ac;
        case 0x2069b8u: goto label_2069b8;
        case 0x2069e8u: goto label_2069e8;
        case 0x2069fcu: goto label_2069fc;
        case 0x206a08u: goto label_206a08;
        case 0x206a14u: goto label_206a14;
        case 0x206a44u: goto label_206a44;
        case 0x206a58u: goto label_206a58;
        case 0x206a64u: goto label_206a64;
        case 0x206a70u: goto label_206a70;
        case 0x206aa0u: goto label_206aa0;
        case 0x206ab4u: goto label_206ab4;
        case 0x206ac0u: goto label_206ac0;
        case 0x206b08u: goto label_206b08;
        case 0x206b1cu: goto label_206b1c;
        case 0x206b28u: goto label_206b28;
        case 0x206b70u: goto label_206b70;
        case 0x206b80u: goto label_206b80;
        case 0x206b8cu: goto label_206b8c;
        case 0x206ba4u: goto label_206ba4;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bc4u: goto label_206bc4;
        case 0x206c04u: goto label_206c04;
        case 0x206c20u: goto label_206c20;
        case 0x206c30u: goto label_206c30;
        case 0x206c40u: goto label_206c40;
        case 0x206c50u: goto label_206c50;
        case 0x206c60u: goto label_206c60;
        case 0x206c7cu: goto label_206c7c;
        case 0x206c90u: goto label_206c90;
        case 0x206ca8u: goto label_206ca8;
        case 0x206cbcu: goto label_206cbc;
        case 0x206d14u: goto label_206d14;
        case 0x206db4u: goto label_206db4;
        case 0x206e50u: goto label_206e50;
        case 0x206f04u: goto label_206f04;
        case 0x206f18u: goto label_206f18;
        case 0x206f38u: goto label_206f38;
        case 0x206f50u: goto label_206f50;
        case 0x206f78u: goto label_206f78;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fc8u: goto label_206fc8;
        case 0x206ff4u: goto label_206ff4;
        case 0x20702cu: goto label_20702c;
        case 0x20703cu: goto label_20703c;
        case 0x207050u: goto label_207050;
        case 0x20706cu: goto label_20706c;
        case 0x2070ccu: goto label_2070cc;
        case 0x207334u: goto label_207334;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073e0u: goto label_2073e0;
        case 0x2073f0u: goto label_2073f0;
        default: break;
    }

    ctx->pc = 0x206390u;

    // 0x206390: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x206390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x206394: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x206394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x206398: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x206398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x20639c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2063a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2063a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2063a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2063a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2063a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2063a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2063ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2063acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2063b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2063b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2063b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2063b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2063b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2063b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2063bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2063bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2063c0: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x2063c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
    // 0x2063c4: 0xafa50230  sw          $a1, 0x230($sp)
    ctx->pc = 0x2063c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 5));
    // 0x2063c8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2063cc: 0x24520054  addiu       $s2, $v0, 0x54
    ctx->pc = 0x2063ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2063d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2063d4: 0x24a59260  addiu       $a1, $a1, -0x6DA0
    ctx->pc = 0x2063d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939232));
    // 0x2063d8: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x2063d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2063dc: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2063dcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x4E9260u));
    // 0x2063e0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2063e0u;
    { uint32_t bits = FAST_READ32(0x4E9268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2063e4: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x2063e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x2063e8: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2063e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2063ec: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x2063f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2063f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2063f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2063F4u;
    {
        const bool branch_taken_0x2063f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2063f4) {
            ctx->pc = 0x20641Cu;
            goto label_20641c;
        }
    }
    ctx->pc = 0x2063FCu;
    // 0x2063fc: 0x40a821  addu        $s5, $v0, $zero
    ctx->pc = 0x2063fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_206400:
    // 0x206400: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x206400u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x206404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206408: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20640c: 0x0  nop
    ctx->pc = 0x20640cu;
    // NOP
    // 0x206410: 0x0  nop
    ctx->pc = 0x206410u;
    // NOP
    // 0x206414: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x206414u;
    {
        const bool branch_taken_0x206414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x206414) {
            ctx->pc = 0x206400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206400;
        }
    }
    ctx->pc = 0x20641Cu;
label_20641c:
    // 0x20641c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x20641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206420: 0x24429270  addiu       $v0, $v0, -0x6D90
    ctx->pc = 0x206420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939248));
    // 0x206424: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x206424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x206428: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x206428u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4E9270u));
    // 0x20642c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x20642cu;
    { uint32_t bits = FAST_READ32(0x4E9278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206430: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x206430u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x206434: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x206434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x206438: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x206438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20643c: 0x0  nop
    ctx->pc = 0x20643cu;
    // NOP
    // 0x206440: 0xe7a10218  swc1        $f1, 0x218($sp)
    ctx->pc = 0x206440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x206444: 0xa3a0021f  sb          $zero, 0x21F($sp)
    ctx->pc = 0x206444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x206448: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x206448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20644c: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x20644Cu;
    {
        const bool branch_taken_0x20644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20644c) {
            ctx->pc = 0x206B50u;
            goto label_206b50;
        }
    }
    ctx->pc = 0x206454u;
label_206454:
    // 0x206454: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x206454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206458: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x206458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x20645c: 0x24639050  addiu       $v1, $v1, -0x6FB0
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938704));
    // 0x206460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x206460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206464: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x206464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x206468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20646c: 0xc040304  jal         func_100C10
    ctx->pc = 0x20646Cu;
    SET_GPR_U32(ctx, 31, 0x206474u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x20646Cu, 0x206474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206474u;
label_206474:
    // 0x206474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206478: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x206478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x20647c: 0xc05c618  jal         func_171860
    ctx->pc = 0x20647Cu;
    SET_GPR_U32(ctx, 31, 0x206484u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x20647Cu, 0x206484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206484u;
label_206484:
    // 0x206484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206488: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x206488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x20648c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206490: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x206490u;
    SET_GPR_U32(ctx, 31, 0x206498u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x206490u, 0x206498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206498u;
label_206498:
    // 0x206498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20649c: 0x122201ab  beq         $s1, $v0, . + 4 + (0x1AB << 2)
    ctx->pc = 0x20649Cu;
    {
        const bool branch_taken_0x20649c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x20649c) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x2064A4u;
    // 0x2064a4: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x2064a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x2064a8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2064a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2064ac: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2064acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2064b0: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2064b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2064b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2064b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2064b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2064b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2064bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2064bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064c0: 0x27859a08  addiu       $a1, $gp, -0x65F8
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941192));
    // 0x2064c4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2064C4u;
    SET_GPR_U32(ctx, 31, 0x2064CCu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2064C4u, 0x2064CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064CCu;
label_2064cc:
    // 0x2064cc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2064CCu;
    {
        const bool branch_taken_0x2064cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2064cc) {
            ctx->pc = 0x206504u;
            goto label_206504;
        }
    }
    ctx->pc = 0x2064D4u;
    // 0x2064d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2064d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064d8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2064D8u;
    SET_GPR_U32(ctx, 31, 0x2064E0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2064D8u, 0x2064E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064E0u;
label_2064e0:
    // 0x2064e0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2064e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2064e4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2064E4u;
    SET_GPR_U32(ctx, 31, 0x2064ECu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2064E4u, 0x2064ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064ECu;
label_2064ec:
    // 0x2064ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2064ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064f0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2064F0u;
    SET_GPR_U32(ctx, 31, 0x2064F8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2064F0u, 0x2064F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064F8u;
label_2064f8:
    // 0x2064f8: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2064f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2064fc: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2064FCu;
    {
        const bool branch_taken_0x2064fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064fc) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206504u;
label_206504:
    // 0x206504: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206508: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x20650c: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x20650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206514: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206518: 0x27859a0c  addiu       $a1, $gp, -0x65F4
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941196));
    // 0x20651c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x20651Cu;
    SET_GPR_U32(ctx, 31, 0x206524u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x20651Cu, 0x206524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206524u;
label_206524:
    // 0x206524: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x206524u;
    {
        const bool branch_taken_0x206524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206524) {
            ctx->pc = 0x20655Cu;
            goto label_20655c;
        }
    }
    ctx->pc = 0x20652Cu;
    // 0x20652c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206530: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206530u;
    SET_GPR_U32(ctx, 31, 0x206538u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206530u, 0x206538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206538u;
label_206538:
    // 0x206538: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20653c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x20653Cu;
    SET_GPR_U32(ctx, 31, 0x206544u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x20653Cu, 0x206544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206544u;
label_206544:
    // 0x206544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206548: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206548u;
    SET_GPR_U32(ctx, 31, 0x206550u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206548u, 0x206550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206550u;
label_206550:
    // 0x206550: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x206550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x206554: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x206554u;
    {
        const bool branch_taken_0x206554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206554) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x20655Cu;
label_20655c:
    // 0x20655c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x20655cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206560: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x206564: 0x24a59050  addiu       $a1, $a1, -0x6FB0
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938704));
    // 0x206568: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x206568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20656c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206570: 0x27859a10  addiu       $a1, $gp, -0x65F0
    ctx->pc = 0x206570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941200));
    // 0x206574: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206574u;
    SET_GPR_U32(ctx, 31, 0x20657Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206574u, 0x20657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20657Cu;
label_20657c:
    // 0x20657c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20657Cu;
    {
        const bool branch_taken_0x20657c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20657c) {
            ctx->pc = 0x2065B8u;
            goto label_2065b8;
        }
    }
    ctx->pc = 0x206584u;
    // 0x206584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206588: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206588u;
    SET_GPR_U32(ctx, 31, 0x206590u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206588u, 0x206590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206590u;
label_206590:
    // 0x206590: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x206590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206594: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x206594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206598: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x206598u;
    SET_GPR_U32(ctx, 31, 0x2065A0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x206598u, 0x2065A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065A0u;
label_2065a0:
    // 0x2065a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2065a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065a4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2065A4u;
    SET_GPR_U32(ctx, 31, 0x2065ACu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2065A4u, 0x2065ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065ACu;
label_2065ac:
    // 0x2065ac: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2065acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2065b0: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2065B0u;
    {
        const bool branch_taken_0x2065b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065b0) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x2065B8u;
label_2065b8:
    // 0x2065b8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2065b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2065bc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2065bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2065c0: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2065c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2065c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2065c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2065c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2065cc: 0x27859a14  addiu       $a1, $gp, -0x65EC
    ctx->pc = 0x2065ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941204));
    // 0x2065d0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2065D0u;
    SET_GPR_U32(ctx, 31, 0x2065D8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2065D0u, 0x2065D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065D8u;
label_2065d8:
    // 0x2065d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2065D8u;
    {
        const bool branch_taken_0x2065d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2065d8) {
            ctx->pc = 0x206614u;
            goto label_206614;
        }
    }
    ctx->pc = 0x2065E0u;
    // 0x2065e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2065e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065e4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2065E4u;
    SET_GPR_U32(ctx, 31, 0x2065ECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2065E4u, 0x2065ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065ECu;
label_2065ec:
    // 0x2065ec: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2065ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2065f0: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2065F0u;
    SET_GPR_U32(ctx, 31, 0x2065F8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2065F0u, 0x2065F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065F8u;
label_2065f8:
    // 0x2065f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2065f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065fc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2065FCu;
    SET_GPR_U32(ctx, 31, 0x206604u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2065FCu, 0x206604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206604u;
label_206604:
    // 0x206604: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x206604u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x206608: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x206608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x20660c: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x20660Cu;
    {
        const bool branch_taken_0x20660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20660c) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206614u;
label_206614:
    // 0x206614: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206618: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x206618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x20661c: 0x24639050  addiu       $v1, $v1, -0x6FB0
    ctx->pc = 0x20661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938704));
    // 0x206620: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206624: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206628: 0x27859a18  addiu       $a1, $gp, -0x65E8
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941208));
    // 0x20662c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x20662Cu;
    SET_GPR_U32(ctx, 31, 0x206634u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x20662Cu, 0x206634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206634u;
label_206634:
    // 0x206634: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x206634u;
    {
        const bool branch_taken_0x206634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206634) {
            ctx->pc = 0x20666Cu;
            goto label_20666c;
        }
    }
    ctx->pc = 0x20663Cu;
    // 0x20663c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206640: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206640u;
    SET_GPR_U32(ctx, 31, 0x206648u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206640u, 0x206648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206648u;
label_206648:
    // 0x206648: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20664c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x20664Cu;
    SET_GPR_U32(ctx, 31, 0x206654u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x20664Cu, 0x206654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206654u;
label_206654:
    // 0x206654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206658: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206658u;
    SET_GPR_U32(ctx, 31, 0x206660u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206658u, 0x206660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206660u;
label_206660:
    // 0x206660: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x206660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x206664: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x206664u;
    {
        const bool branch_taken_0x206664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206664) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x20666Cu;
label_20666c:
    // 0x20666c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206670: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206674: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20667c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206680: 0x27859a1c  addiu       $a1, $gp, -0x65E4
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941212));
    // 0x206684: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206684u;
    SET_GPR_U32(ctx, 31, 0x20668Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206684u, 0x20668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20668Cu;
label_20668c:
    // 0x20668c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20668Cu;
    {
        const bool branch_taken_0x20668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20668c) {
            ctx->pc = 0x2066CCu;
            goto label_2066cc;
        }
    }
    ctx->pc = 0x206694u;
    // 0x206694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206698: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206698u;
    SET_GPR_U32(ctx, 31, 0x2066A0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206698u, 0x2066A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066A0u;
label_2066a0:
    // 0x2066a0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2066a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2066a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066a8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2066A8u;
    SET_GPR_U32(ctx, 31, 0x2066B0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2066A8u, 0x2066B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066B0u;
label_2066b0:
    // 0x2066b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2066b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066b4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2066B4u;
    SET_GPR_U32(ctx, 31, 0x2066BCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2066B4u, 0x2066BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066BCu;
label_2066bc:
    // 0x2066bc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2066bcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2066c0: 0xe7a301d0  swc1        $f3, 0x1D0($sp)
    ctx->pc = 0x2066c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2066c4: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2066C4u;
    {
        const bool branch_taken_0x2066c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066c4) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x2066CCu;
label_2066cc:
    // 0x2066cc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2066ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2066d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2066d4: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2066d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2066d8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2066d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2066dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2066e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2066e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066e4: 0x27859a20  addiu       $a1, $gp, -0x65E0
    ctx->pc = 0x2066e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941216));
    // 0x2066e8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2066E8u;
    SET_GPR_U32(ctx, 31, 0x2066F0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2066E8u, 0x2066F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066F0u;
label_2066f0:
    // 0x2066f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2066F0u;
    {
        const bool branch_taken_0x2066f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2066f0) {
            ctx->pc = 0x206730u;
            goto label_206730;
        }
    }
    ctx->pc = 0x2066F8u;
    // 0x2066f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2066f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066fc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2066FCu;
    SET_GPR_U32(ctx, 31, 0x206704u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2066FCu, 0x206704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206704u;
label_206704:
    // 0x206704: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206708: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x206708u;
    SET_GPR_U32(ctx, 31, 0x206710u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x206708u, 0x206710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206710u;
label_206710:
    // 0x206710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206714: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206714u;
    SET_GPR_U32(ctx, 31, 0x20671Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206714u, 0x20671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20671Cu;
label_20671c:
    // 0x20671c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x20671cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x206720: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206724: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x206724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x206728: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x206728u;
    {
        const bool branch_taken_0x206728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206728) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206730u;
label_206730:
    // 0x206730: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206734: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206738: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x20673c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206744: 0x27859a24  addiu       $a1, $gp, -0x65DC
    ctx->pc = 0x206744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941220));
    // 0x206748: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206748u;
    SET_GPR_U32(ctx, 31, 0x206750u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206748u, 0x206750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206750u;
label_206750:
    // 0x206750: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206750u;
    {
        const bool branch_taken_0x206750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206750) {
            ctx->pc = 0x206798u;
            goto label_206798;
        }
    }
    ctx->pc = 0x206758u;
    // 0x206758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20675c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20675Cu;
    SET_GPR_U32(ctx, 31, 0x206764u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20675Cu, 0x206764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206764u;
label_206764:
    // 0x206764: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206768: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x206768u;
    SET_GPR_U32(ctx, 31, 0x206770u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x206768u, 0x206770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206770u;
label_206770:
    // 0x206770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206774: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206774u;
    SET_GPR_U32(ctx, 31, 0x20677Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206774u, 0x20677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20677Cu;
label_20677c:
    // 0x20677c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x20677cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x206780: 0xc782825c  lwc1        $f2, -0x7DA4($gp)
    ctx->pc = 0x206780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206784: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x206784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x206788: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20678c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x20678cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x206790: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x206790u;
    {
        const bool branch_taken_0x206790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206790) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206798u;
label_206798:
    // 0x206798: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20679c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x20679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2067a0: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2067a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2067a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2067a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2067a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2067a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2067ac: 0x27859a28  addiu       $a1, $gp, -0x65D8
    ctx->pc = 0x2067acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941224));
    // 0x2067b0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2067B0u;
    SET_GPR_U32(ctx, 31, 0x2067B8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2067B0u, 0x2067B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067B8u;
label_2067b8:
    // 0x2067b8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2067B8u;
    {
        const bool branch_taken_0x2067b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2067b8) {
            ctx->pc = 0x2067FCu;
            goto label_2067fc;
        }
    }
    ctx->pc = 0x2067C0u;
    // 0x2067c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2067c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067c4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2067C4u;
    SET_GPR_U32(ctx, 31, 0x2067CCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2067C4u, 0x2067CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067CCu;
label_2067cc:
    // 0x2067cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2067ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067d0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2067d4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2067D4u;
    SET_GPR_U32(ctx, 31, 0x2067DCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2067D4u, 0x2067DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067DCu;
label_2067dc:
    // 0x2067dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2067dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067e0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2067E0u;
    SET_GPR_U32(ctx, 31, 0x2067E8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2067E0u, 0x2067E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067E8u;
label_2067e8:
    // 0x2067e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2067e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2067ec: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2067f0: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x2067f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2067f4: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2067F4u;
    {
        const bool branch_taken_0x2067f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2067f4) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x2067FCu;
label_2067fc:
    // 0x2067fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2067fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206800: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206804: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20680c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206810: 0x27859a2c  addiu       $a1, $gp, -0x65D4
    ctx->pc = 0x206810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941228));
    // 0x206814: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206814u;
    SET_GPR_U32(ctx, 31, 0x20681Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206814u, 0x20681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20681Cu;
label_20681c:
    // 0x20681c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20681Cu;
    {
        const bool branch_taken_0x20681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20681c) {
            ctx->pc = 0x206858u;
            goto label_206858;
        }
    }
    ctx->pc = 0x206824u;
    // 0x206824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206828: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206828u;
    SET_GPR_U32(ctx, 31, 0x206830u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206828u, 0x206830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206830u;
label_206830:
    // 0x206830: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206834: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x206834u;
    SET_GPR_U32(ctx, 31, 0x20683Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x206834u, 0x20683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20683Cu;
label_20683c:
    // 0x20683c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206840: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206840u;
    SET_GPR_U32(ctx, 31, 0x206848u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206840u, 0x206848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206848u;
label_206848:
    // 0x206848: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20684c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x206850: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x206850u;
    {
        const bool branch_taken_0x206850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206850) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206858u;
label_206858:
    // 0x206858: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20685c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x20685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206860: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206864: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x206864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206868: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x206868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20686c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206870: 0x27859a30  addiu       $a1, $gp, -0x65D0
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941232));
    // 0x206874: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206874u;
    SET_GPR_U32(ctx, 31, 0x20687Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206874u, 0x20687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20687Cu;
label_20687c:
    // 0x20687c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20687cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206880: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x206880u;
    {
        const bool branch_taken_0x206880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206880) {
            ctx->pc = 0x2068C0u;
            goto label_2068c0;
        }
    }
    ctx->pc = 0x206888u;
    // 0x206888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20688c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20688Cu;
    SET_GPR_U32(ctx, 31, 0x206894u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20688Cu, 0x206894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206894u;
label_206894:
    // 0x206894: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206898: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x206898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20689c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x20689Cu;
    SET_GPR_U32(ctx, 31, 0x2068A4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x20689Cu, 0x2068A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068A4u;
label_2068a4:
    // 0x2068a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2068a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068a8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2068A8u;
    SET_GPR_U32(ctx, 31, 0x2068B0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2068A8u, 0x2068B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068B0u;
label_2068b0:
    // 0x2068b0: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2068b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2068b4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2068b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2068b8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2068B8u;
    {
        const bool branch_taken_0x2068b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068b8) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x2068C0u;
label_2068c0:
    // 0x2068c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2068c4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2068c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2068c8: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2068c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2068cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2068ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2068d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2068d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2068d4: 0x27859a34  addiu       $a1, $gp, -0x65CC
    ctx->pc = 0x2068d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941236));
    // 0x2068d8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2068D8u;
    SET_GPR_U32(ctx, 31, 0x2068E0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2068D8u, 0x2068E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068E0u;
label_2068e0:
    // 0x2068e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2068E0u;
    {
        const bool branch_taken_0x2068e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2068e0) {
            ctx->pc = 0x20691Cu;
            goto label_20691c;
        }
    }
    ctx->pc = 0x2068E8u;
    // 0x2068e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2068e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068ec: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2068ECu;
    SET_GPR_U32(ctx, 31, 0x2068F4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2068ECu, 0x2068F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068F4u;
label_2068f4:
    // 0x2068f4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2068f8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2068F8u;
    SET_GPR_U32(ctx, 31, 0x206900u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2068F8u, 0x206900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206900u;
label_206900:
    // 0x206900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206904: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206904u;
    SET_GPR_U32(ctx, 31, 0x20690Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206904u, 0x20690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20690Cu;
label_20690c:
    // 0x20690c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x20690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206910: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x206910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x206914: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x206914u;
    {
        const bool branch_taken_0x206914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206914) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x20691Cu;
label_20691c:
    // 0x20691c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20691cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206920: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206924: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20692c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206930: 0x27859a38  addiu       $a1, $gp, -0x65C8
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941240));
    // 0x206934: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206934u;
    SET_GPR_U32(ctx, 31, 0x20693Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206934u, 0x20693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20693Cu;
label_20693c:
    // 0x20693c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20693Cu;
    {
        const bool branch_taken_0x20693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20693c) {
            ctx->pc = 0x20696Cu;
            goto label_20696c;
        }
    }
    ctx->pc = 0x206944u;
    // 0x206944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206948: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206948u;
    SET_GPR_U32(ctx, 31, 0x206950u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206948u, 0x206950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206950u;
label_206950:
    // 0x206950: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206954: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x206954u;
    SET_GPR_U32(ctx, 31, 0x20695Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x206954u, 0x20695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20695Cu;
label_20695c:
    // 0x20695c: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x20695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206960: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x206960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
    // 0x206964: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x206964u;
    {
        const bool branch_taken_0x206964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206964) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x20696Cu;
label_20696c:
    // 0x20696c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20696cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206970: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206974: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20697c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206980: 0x27859a3c  addiu       $a1, $gp, -0x65C4
    ctx->pc = 0x206980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941244));
    // 0x206984: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206984u;
    SET_GPR_U32(ctx, 31, 0x20698Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206984u, 0x20698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20698Cu;
label_20698c:
    // 0x20698c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20698Cu;
    {
        const bool branch_taken_0x20698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20698c) {
            ctx->pc = 0x2069C8u;
            goto label_2069c8;
        }
    }
    ctx->pc = 0x206994u;
    // 0x206994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206998: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206998u;
    SET_GPR_U32(ctx, 31, 0x2069A0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206998u, 0x2069A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069A0u;
label_2069a0:
    // 0x2069a0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2069a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2069a4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x2069A4u;
    SET_GPR_U32(ctx, 31, 0x2069ACu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2069A4u, 0x2069ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069ACu;
label_2069ac:
    // 0x2069ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2069acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069b0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2069B0u;
    SET_GPR_U32(ctx, 31, 0x2069B8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2069B0u, 0x2069B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069B8u;
label_2069b8:
    // 0x2069b8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2069b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2069bc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2069bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2069c0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2069C0u;
    {
        const bool branch_taken_0x2069c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069c0) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x2069C8u;
label_2069c8:
    // 0x2069c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2069c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2069cc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2069ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2069d0: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2069d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2069d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2069d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2069d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2069dc: 0x27859a40  addiu       $a1, $gp, -0x65C0
    ctx->pc = 0x2069dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941248));
    // 0x2069e0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2069E0u;
    SET_GPR_U32(ctx, 31, 0x2069E8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2069E0u, 0x2069E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069E8u;
label_2069e8:
    // 0x2069e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2069E8u;
    {
        const bool branch_taken_0x2069e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2069e8) {
            ctx->pc = 0x206A24u;
            goto label_206a24;
        }
    }
    ctx->pc = 0x2069F0u;
    // 0x2069f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2069f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069f4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2069F4u;
    SET_GPR_U32(ctx, 31, 0x2069FCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2069F4u, 0x2069FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069FCu;
label_2069fc:
    // 0x2069fc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2069fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206a00: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x206A00u;
    SET_GPR_U32(ctx, 31, 0x206A08u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x206A00u, 0x206A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A08u;
label_206a08:
    // 0x206a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a0c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206A0Cu;
    SET_GPR_U32(ctx, 31, 0x206A14u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206A0Cu, 0x206A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A14u;
label_206a14:
    // 0x206a14: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206a18: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x206a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x206a1c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x206A1Cu;
    {
        const bool branch_taken_0x206a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a1c) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206A24u;
label_206a24:
    // 0x206a24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206a28: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206a2c: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206a34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206a38: 0x27859a44  addiu       $a1, $gp, -0x65BC
    ctx->pc = 0x206a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941252));
    // 0x206a3c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206A3Cu;
    SET_GPR_U32(ctx, 31, 0x206A44u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206A3Cu, 0x206A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A44u;
label_206a44:
    // 0x206a44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x206A44u;
    {
        const bool branch_taken_0x206a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206a44) {
            ctx->pc = 0x206A80u;
            goto label_206a80;
        }
    }
    ctx->pc = 0x206A4Cu;
    // 0x206a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a50: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206A50u;
    SET_GPR_U32(ctx, 31, 0x206A58u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206A50u, 0x206A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A58u;
label_206a58:
    // 0x206a58: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206a5c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x206A5Cu;
    SET_GPR_U32(ctx, 31, 0x206A64u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x206A5Cu, 0x206A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A64u;
label_206a64:
    // 0x206a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a68: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x206A68u;
    SET_GPR_U32(ctx, 31, 0x206A70u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x206A68u, 0x206A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A70u;
label_206a70:
    // 0x206a70: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x206a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206a74: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x206a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x206a78: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x206A78u;
    {
        const bool branch_taken_0x206a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a78) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206A80u;
label_206a80:
    // 0x206a80: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206a84: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206a88: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206a90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206a94: 0x27859a48  addiu       $a1, $gp, -0x65B8
    ctx->pc = 0x206a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941256));
    // 0x206a98: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206A98u;
    SET_GPR_U32(ctx, 31, 0x206AA0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206A98u, 0x206AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AA0u;
label_206aa0:
    // 0x206aa0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206AA0u;
    {
        const bool branch_taken_0x206aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206aa0) {
            ctx->pc = 0x206AE8u;
            goto label_206ae8;
        }
    }
    ctx->pc = 0x206AA8u;
    // 0x206aa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206aac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206AACu;
    SET_GPR_U32(ctx, 31, 0x206AB4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206AACu, 0x206AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AB4u;
label_206ab4:
    // 0x206ab4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206ab8: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x206AB8u;
    SET_GPR_U32(ctx, 31, 0x206AC0u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x206AB8u, 0x206AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AC0u;
label_206ac0:
    // 0x206ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206AC0u;
    {
        const bool branch_taken_0x206ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ac0) {
            ctx->pc = 0x206AD8u;
            goto label_206ad8;
        }
    }
    ctx->pc = 0x206AC8u;
    // 0x206ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206acc: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x206accu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206AD0u;
    {
        const bool branch_taken_0x206ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ad0) {
            ctx->pc = 0x206ADCu;
            goto label_206adc;
        }
    }
    ctx->pc = 0x206AD8u;
label_206ad8:
    // 0x206ad8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x206ad8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206adc:
    // 0x206adc: 0xa3b7021f  sb          $s7, 0x21F($sp)
    ctx->pc = 0x206adcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 543), (uint8_t)GPR_U32(ctx, 23));
    // 0x206ae0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x206AE0u;
    {
        const bool branch_taken_0x206ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ae0) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206AE8u;
label_206ae8:
    // 0x206ae8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x206ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x206aec: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x206af0: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x206af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206af8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206afc: 0x27859a4c  addiu       $a1, $gp, -0x65B4
    ctx->pc = 0x206afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941260));
    // 0x206b00: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x206B00u;
    SET_GPR_U32(ctx, 31, 0x206B08u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x206B00u, 0x206B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B08u;
label_206b08:
    // 0x206b08: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x206B08u;
    {
        const bool branch_taken_0x206b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206b08) {
            ctx->pc = 0x206B4Cu;
            goto label_206b4c;
        }
    }
    ctx->pc = 0x206B10u;
    // 0x206b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b14: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x206B14u;
    SET_GPR_U32(ctx, 31, 0x206B1Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x206B14u, 0x206B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B1Cu;
label_206b1c:
    // 0x206b1c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x206b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206b20: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x206B20u;
    SET_GPR_U32(ctx, 31, 0x206B28u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x206B20u, 0x206B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B28u;
label_206b28:
    // 0x206b28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206B28u;
    {
        const bool branch_taken_0x206b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b28) {
            ctx->pc = 0x206B40u;
            goto label_206b40;
        }
    }
    ctx->pc = 0x206B30u;
    // 0x206b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206b34: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x206b34u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206B38u;
    {
        const bool branch_taken_0x206b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b38) {
            ctx->pc = 0x206B44u;
            goto label_206b44;
        }
    }
    ctx->pc = 0x206B40u;
label_206b40:
    // 0x206b40: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x206b40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206b44:
    // 0x206b44: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206b48: 0xa05600e0  sb          $s6, 0xE0($v0)
    ctx->pc = 0x206b48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 224), (uint8_t)GPR_U32(ctx, 22));
label_206b4c:
    // 0x206b4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x206b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_206b50:
    // 0x206b50: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x206b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x206b54: 0x1440fe3f  bnez        $v0, . + 4 + (-0x1C1 << 2)
    ctx->pc = 0x206B54u;
    {
        const bool branch_taken_0x206b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206b54) {
            ctx->pc = 0x206454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206454;
        }
    }
    ctx->pc = 0x206B5Cu;
    // 0x206b5c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x206b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x206b60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206b64: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x206b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x206b68: 0xc085538  jal         func_2154E0
    ctx->pc = 0x206B68u;
    SET_GPR_U32(ctx, 31, 0x206B70u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x206B68u, 0x206B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B70u;
label_206b70:
    // 0x206b70: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x206b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x206b74: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x206b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x206b78: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x206B78u;
    SET_GPR_U32(ctx, 31, 0x206B80u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x206B78u, 0x206B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B80u;
label_206b80:
    // 0x206b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b84: 0xc0aeea8  jal         func_2BBAA0
    ctx->pc = 0x206B84u;
    SET_GPR_U32(ctx, 31, 0x206B8Cu);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x206B84u, 0x206B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B8Cu;
label_206b8c:
    // 0x206b8c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x206b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x206b90: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x206b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x206b94: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x206b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x206b98: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206b9c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x206B9Cu;
    SET_GPR_U32(ctx, 31, 0x206BA4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x206B9Cu, 0x206BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BA4u;
label_206ba4:
    // 0x206ba4: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x206ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x206ba8: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x206ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x206bac: 0xc091018  jal         func_244060
    ctx->pc = 0x206BACu;
    SET_GPR_U32(ctx, 31, 0x206BB4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x206BACu, 0x206BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BB4u;
label_206bb4:
    // 0x206bb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x206bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bbc: 0xc106784  jal         func_419E10
    ctx->pc = 0x206BBCu;
    SET_GPR_U32(ctx, 31, 0x206BC4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206BBCu, 0x206BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BC4u;
label_206bc4:
    // 0x206bc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x206bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bc8: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x206bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206bcc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x206bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206bd4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206BD4u;
    {
        const bool branch_taken_0x206bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x206bd4) {
            ctx->pc = 0x206BF0u;
            goto label_206bf0;
        }
    }
    ctx->pc = 0x206BDCu;
    // 0x206bdc: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x206bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206be0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x206be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x206be4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206be8: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x206BE8u;
    {
        const bool branch_taken_0x206be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206be8) {
            ctx->pc = 0x206E38u;
            goto label_206e38;
        }
    }
    ctx->pc = 0x206BF0u;
label_206bf0:
    // 0x206bf0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x206bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x206bf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206bf8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206bfc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x206BFCu;
    SET_GPR_U32(ctx, 31, 0x206C04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x206BFCu, 0x206C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C04u;
label_206c04:
    // 0x206c04: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x206c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x206c08: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x206c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x206c0c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x206c18: 0xc085538  jal         func_2154E0
    ctx->pc = 0x206C18u;
    SET_GPR_U32(ctx, 31, 0x206C20u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x206C18u, 0x206C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C20u;
label_206c20:
    // 0x206c20: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x206c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x206c24: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x206c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x206c28: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x206C28u;
    SET_GPR_U32(ctx, 31, 0x206C30u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x206C28u, 0x206C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C30u;
label_206c30:
    // 0x206c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c34: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x206c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x206c38: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x206C38u;
    SET_GPR_U32(ctx, 31, 0x206C40u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x206C38u, 0x206C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C40u;
label_206c40:
    // 0x206c40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x206c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c48: 0xc106784  jal         func_419E10
    ctx->pc = 0x206C48u;
    SET_GPR_U32(ctx, 31, 0x206C50u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206C48u, 0x206C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C50u;
label_206c50:
    // 0x206c50: 0xc4540030  lwc1        $f20, 0x30($v0)
    ctx->pc = 0x206c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c58: 0xc106784  jal         func_419E10
    ctx->pc = 0x206C58u;
    SET_GPR_U32(ctx, 31, 0x206C60u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206C58u, 0x206C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C60u;
label_206c60:
    // 0x206c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c64: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x206c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206c68: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x206c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x206c6c: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x206c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x206c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c74: 0xc106784  jal         func_419E10
    ctx->pc = 0x206C74u;
    SET_GPR_U32(ctx, 31, 0x206C7Cu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206C74u, 0x206C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C7Cu;
label_206c7c:
    // 0x206c7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c80: 0xc4740034  lwc1        $f20, 0x34($v1)
    ctx->pc = 0x206c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206c84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c88: 0xc106784  jal         func_419E10
    ctx->pc = 0x206C88u;
    SET_GPR_U32(ctx, 31, 0x206C90u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206C88u, 0x206C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C90u;
label_206c90:
    // 0x206c90: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x206c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206c94: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x206c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x206c98: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x206c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x206c9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ca0: 0xc106784  jal         func_419E10
    ctx->pc = 0x206CA0u;
    SET_GPR_U32(ctx, 31, 0x206CA8u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206CA0u, 0x206CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CA8u;
label_206ca8:
    // 0x206ca8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206cac: 0xc4740038  lwc1        $f20, 0x38($v1)
    ctx->pc = 0x206cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206cb4: 0xc106784  jal         func_419E10
    ctx->pc = 0x206CB4u;
    SET_GPR_U32(ctx, 31, 0x206CBCu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206CB4u, 0x206CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CBCu;
label_206cbc:
    // 0x206cbc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x206cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206cc0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x206cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x206cc4: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x206cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x206cc8: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x206cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206ccc: 0x8c8500cc  lw          $a1, 0xCC($a0)
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x206cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206cd4: 0x14a2002b  bne         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x206CD4u;
    {
        const bool branch_taken_0x206cd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x206cd4) {
            ctx->pc = 0x206D84u;
            goto label_206d84;
        }
    }
    ctx->pc = 0x206CDCu;
    // 0x206cdc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x206cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x206ce0: 0x24a59280  addiu       $a1, $a1, -0x6D80
    ctx->pc = 0x206ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939264));
    // 0x206ce4: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x206ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x206ce8: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x206ce8u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x4E9280u));
    // 0x206cec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x206cecu;
    { uint32_t bits = FAST_READ32(0x4E9288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206cf0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x206cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x206cf4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x206cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x206cf8: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x206cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x206cfc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x206cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d00: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x206d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x206d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d0c: 0xc104d84  jal         func_413610
    ctx->pc = 0x206D0Cu;
    SET_GPR_U32(ctx, 31, 0x206D14u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x206D0Cu, 0x206D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D14u;
label_206d14:
    // 0x206d14: 0xc7a501a0  lwc1        $f5, 0x1A0($sp)
    ctx->pc = 0x206d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x206d18: 0xc7a401b0  lwc1        $f4, 0x1B0($sp)
    ctx->pc = 0x206d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x206d1c: 0xc7a30198  lwc1        $f3, 0x198($sp)
    ctx->pc = 0x206d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x206d20: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x206d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206d24: 0xc7a1019c  lwc1        $f1, 0x19C($sp)
    ctx->pc = 0x206d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206d28: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x206d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206d2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x206d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206d34: 0x0  nop
    ctx->pc = 0x206d34u;
    // NOP
    // 0x206d38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206d38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206d3c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x206d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x206d40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206d44: 0x0  nop
    ctx->pc = 0x206d44u;
    // NOP
    // 0x206d48: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206d48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206d4c: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x206d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x206d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206d54: 0x0  nop
    ctx->pc = 0x206d54u;
    // NOP
    // 0x206d58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206d5c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x206D5Cu;
    {
        const bool branch_taken_0x206d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206d5c) {
            ctx->pc = 0x206E38u;
            goto label_206e38;
        }
    }
    ctx->pc = 0x206D64u;
    // 0x206d64: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x206d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206d68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206d68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206d6c: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x206d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x206d70: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x206d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206d74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206d74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206d78: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x206d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x206d7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x206D7Cu;
    {
        const bool branch_taken_0x206d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d7c) {
            ctx->pc = 0x206E38u;
            goto label_206e38;
        }
    }
    ctx->pc = 0x206D84u;
label_206d84:
    // 0x206d84: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x206d84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x206d88: 0x26319290  addiu       $s1, $s1, -0x6D70
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939280));
    // 0x206d8c: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x206d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x206d90: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x206d90u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E9290u));
    // 0x206d94: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x206d94u;
    { uint32_t bits = FAST_READ32(0x4E9298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206d98: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x206d98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x206d9c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x206d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x206da0: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x206da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x206da4: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x206da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x206da8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dac: 0xc104d84  jal         func_413610
    ctx->pc = 0x206DACu;
    SET_GPR_U32(ctx, 31, 0x206DB4u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x206DACu, 0x206DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DB4u;
label_206db4:
    // 0x206db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206db8: 0xc7a501a0  lwc1        $f5, 0x1A0($sp)
    ctx->pc = 0x206db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x206dbc: 0xc7a401b0  lwc1        $f4, 0x1B0($sp)
    ctx->pc = 0x206dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x206dc0: 0xc7a30198  lwc1        $f3, 0x198($sp)
    ctx->pc = 0x206dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x206dc4: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x206dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206dc8: 0xc7a1019c  lwc1        $f1, 0x19C($sp)
    ctx->pc = 0x206dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206dcc: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x206dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206dd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x206dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206dd8: 0x0  nop
    ctx->pc = 0x206dd8u;
    // NOP
    // 0x206ddc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206ddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206de0: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x206de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x206de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206de8: 0x0  nop
    ctx->pc = 0x206de8u;
    // NOP
    // 0x206dec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x206decu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x206df0: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x206df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x206df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206df8: 0x0  nop
    ctx->pc = 0x206df8u;
    // NOP
    // 0x206dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x206dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206e00: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x206E00u;
    {
        const bool branch_taken_0x206e00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206e00) {
            ctx->pc = 0x206E38u;
            goto label_206e38;
        }
    }
    ctx->pc = 0x206E08u;
    // 0x206e08: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x206e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206e10: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x206e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x206e14: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x206e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206e18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206e1c: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x206e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x206e20: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x206e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206e24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206e28: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x206e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x206e2c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x206e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206e30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206e34: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x206e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_206e38:
    // 0x206e38: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x206e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x206e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e40: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x206e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x206e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e48: 0xc041d58  jal         func_107560
    ctx->pc = 0x206E48u;
    SET_GPR_U32(ctx, 31, 0x206E50u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x206E48u, 0x206E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E50u;
label_206e50:
    // 0x206e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e54: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206e58: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x206e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e5c: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x206e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206e60: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x206e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x206e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206e68: 0x0  nop
    ctx->pc = 0x206e68u;
    // NOP
    // 0x206e6c: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x206e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x206e70: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x206e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206e74: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x206e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x206e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206e7c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206e80: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x206e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x206e84: 0xc7a101cc  lwc1        $f1, 0x1CC($sp)
    ctx->pc = 0x206e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206e88: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x206e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x206e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206e90: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206e94: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x206e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x206e98: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x206e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206e9c: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x206e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206ea0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x206ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206ea4: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x206ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206ea8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x206ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x206eac: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x206eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206eb0: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x206eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206eb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x206eb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206eb8: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x206eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206ebc: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x206ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x206ec0: 0xc7a101cc  lwc1        $f1, 0x1CC($sp)
    ctx->pc = 0x206ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206ec4: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x206ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x206ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206ecc: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206ed0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x206ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x206ed4: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x206ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206ed8: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x206ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206edc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x206edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x206ee0: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206ee4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x206ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x206ee8: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206eec: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206ef0: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x206ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x206ef4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x206ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x206ef8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206efc: 0xc104d84  jal         func_413610
    ctx->pc = 0x206EFCu;
    SET_GPR_U32(ctx, 31, 0x206F04u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x206EFCu, 0x206F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F04u;
label_206f04:
    // 0x206f04: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x206f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206f08: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x206f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x206f0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f10: 0xc104d64  jal         func_413590
    ctx->pc = 0x206F10u;
    SET_GPR_U32(ctx, 31, 0x206F18u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x206F10u, 0x206F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F18u;
label_206f18:
    // 0x206f18: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206f1c: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x206f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206f20: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x206f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f28: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x206f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x206f2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f30: 0xc104d84  jal         func_413610
    ctx->pc = 0x206F30u;
    SET_GPR_U32(ctx, 31, 0x206F38u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x206F30u, 0x206F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F38u;
label_206f38:
    // 0x206f38: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x206f3c: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x206f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x206f40: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x206f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x206f44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x206f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f48: 0xc104d64  jal         func_413590
    ctx->pc = 0x206F48u;
    SET_GPR_U32(ctx, 31, 0x206F50u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x206F48u, 0x206F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F50u;
label_206f50:
    // 0x206f50: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x206f54: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x206f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x206f58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206f5c: 0x148200c4  bne         $a0, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x206F5Cu;
    {
        const bool branch_taken_0x206f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x206f5c) {
            ctx->pc = 0x207270u;
            goto label_207270;
        }
    }
    ctx->pc = 0x206F64u;
    // 0x206f64: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x206f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x206f68: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x206f6c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206F6Cu;
    {
        const bool branch_taken_0x206f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f6c) {
            ctx->pc = 0x206F94u;
            goto label_206f94;
        }
    }
    ctx->pc = 0x206F74u;
    // 0x206f74: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x206f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_206f78:
    // 0x206f78: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x206f78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x206f7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x206f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206f80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x206f84: 0x0  nop
    ctx->pc = 0x206f84u;
    // NOP
    // 0x206f88: 0x0  nop
    ctx->pc = 0x206f88u;
    // NOP
    // 0x206f8c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x206F8Cu;
    {
        const bool branch_taken_0x206f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206f8c) {
            ctx->pc = 0x206F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206f78;
        }
    }
    ctx->pc = 0x206F94u;
label_206f94:
    // 0x206f94: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x206f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x206f98: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206f9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x206f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x206FA8u;
    SET_GPR_U32(ctx, 31, 0x206FB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x206FA8u, 0x206FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FB0u;
label_206fb0:
    // 0x206fb0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x206fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x206fb4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x206fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x206fb8: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x206fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x206fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fc0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x206FC0u;
    SET_GPR_U32(ctx, 31, 0x206FC8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x206FC0u, 0x206FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FC8u;
label_206fc8:
    // 0x206fc8: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x206fcc: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x206fd0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x206fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206fd4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x206fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206fd8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x206fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206fdc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x206fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x206fe0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x206fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x206fe4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x206fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x206fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fec: 0xc106784  jal         func_419E10
    ctx->pc = 0x206FECu;
    SET_GPR_U32(ctx, 31, 0x206FF4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x206FECu, 0x206FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FF4u;
label_206ff4:
    // 0x206ff4: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x206ff8: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x206ffc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x206ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207000: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x207000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207004: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x207004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207008: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x207008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x20700c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x20700cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x207010: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x207010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x207014: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x207018: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20701c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20701cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207020: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x207020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x207024: 0xc085538  jal         func_2154E0
    ctx->pc = 0x207024u;
    SET_GPR_U32(ctx, 31, 0x20702Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x207024u, 0x20702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20702Cu;
label_20702c:
    // 0x20702c: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x20702cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x207030: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x207034: 0xc081d2c  jal         func_2074B0
    ctx->pc = 0x207034u;
    SET_GPR_U32(ctx, 31, 0x20703Cu);
    ctx->pc = 0x2074B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074B0u, 0x207034u, 0x20703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20703Cu;
label_20703c:
    // 0x20703c: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x20703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x207040: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x207044: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x207048: 0xc085538  jal         func_2154E0
    ctx->pc = 0x207048u;
    SET_GPR_U32(ctx, 31, 0x207050u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x207048u, 0x207050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207050u;
label_207050:
    // 0x207050: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207054: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x207054u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207058: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x207058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x20705c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207060: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x207060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207064: 0xc090f80  jal         func_243E00
    ctx->pc = 0x207064u;
    SET_GPR_U32(ctx, 31, 0x20706Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x207064u, 0x20706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20706Cu;
label_20706c:
    // 0x20706c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x20706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x207070: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x207074: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x207074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207078: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x207078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20707c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207080: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x207080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x207084: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x207084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x207088: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x207088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20708c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x20708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207090: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x207090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207098: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x207098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x20709c: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x20709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2070a0: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x2070a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2070a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2070a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2070a8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2070a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2070ac: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2070acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2070b0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2070b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2070b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2070b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2070b8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2070b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2070bc: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x2070bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2070c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2070c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070c4: 0xc104d24  jal         func_413490
    ctx->pc = 0x2070C4u;
    SET_GPR_U32(ctx, 31, 0x2070CCu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2070C4u, 0x2070CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070CCu;
label_2070cc:
    // 0x2070cc: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2070ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2070d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2070d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2070d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2070d8: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2070d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2070dc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2070dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2070e0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2070e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2070e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2070e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2070e8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2070e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2070ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2070ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2070f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2070f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2070f4: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2070f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2070f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2070f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2070fc: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2070fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207100: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x207100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x207104: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x207104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x207108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20710c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20710cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207110: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x207110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207114: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x207114u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x207118: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x207118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20711c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20711cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x207120: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x207120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x207124: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x207124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207128: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x207128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20712c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20712cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207130: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x207130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x207134: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x207134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207138: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x207138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20713c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20713cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207140: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x207140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x207144: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x207144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207148: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x207148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20714c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20714cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207150: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x207150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x207154: 0xc7a50130  lwc1        $f5, 0x130($sp)
    ctx->pc = 0x207154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x207158: 0xc7a40120  lwc1        $f4, 0x120($sp)
    ctx->pc = 0x207158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20715c: 0xc7a30128  lwc1        $f3, 0x128($sp)
    ctx->pc = 0x20715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x207160: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x207160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207164: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x207164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207168: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x207168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20716c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20716cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207174: 0x0  nop
    ctx->pc = 0x207174u;
    // NOP
    // 0x207178: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207178u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20717c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x20717cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x207180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207184: 0x0  nop
    ctx->pc = 0x207184u;
    // NOP
    // 0x207188: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207188u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20718c: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x20718cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x207190: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x207190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x207194: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x207194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x207198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x207198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20719c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x20719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2071a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2071a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2071a4: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2071a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2071a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2071a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2071ac: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2071acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x2071b0: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2071b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2071b4: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2071b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2071b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2071b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2071bc: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2071bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2071c0: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x2071c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2071c4: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2071c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2071c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2071c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2071cc: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2071ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2071d0: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x2071d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2071d4: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2071d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2071d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2071d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2071dc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2071dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2071e0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2071e4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2071e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2071e8: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2071e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2071ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2071ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2071f0: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x2071f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2071f4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2071f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2071f8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2071f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2071fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2071fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207200: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x207200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207208: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20720c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x20720cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x207210: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207214: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x207214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207218: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x207218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20721c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20721cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207220: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207224: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x207224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x207228: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20722c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x20722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207230: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x207230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207238: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x207238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20723c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x20723cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x207240: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207244: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x207244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207248: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x207248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20724c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20724cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207250: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207254: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x207254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x207258: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20725c: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x20725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207260: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x207260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207264: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207268: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x207268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20726c: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x20726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_207270:
    // 0x207270: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x207274: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x207274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x207278: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x20727c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x20727cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x4E92A0u));
    // 0x207280: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x207280u;
    { uint32_t bits = FAST_READ32(0x4E92A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207284: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x207284u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x207288: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x207288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20728c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207290: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x207290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x207294: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x207294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207298: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20729c: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x20729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2072a0: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2072a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2072a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2072a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2072a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2072a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2072ac: 0x0  nop
    ctx->pc = 0x2072acu;
    // NOP
    // 0x2072b0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2072b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2072b4: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x2072b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2072b8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2072b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2072bc: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2072c0: 0xc4630044  lwc1        $f3, 0x44($v1)
    ctx->pc = 0x2072c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2072c4: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x2072c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2072c8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2072cc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2072ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2072d0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2072d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2072d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2072d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2072d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2072d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2072dc: 0x0  nop
    ctx->pc = 0x2072dcu;
    // NOP
    // 0x2072e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2072e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2072e4: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x2072e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2072e8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2072e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2072ec: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2072ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2072f0: 0xc443003c  lwc1        $f3, 0x3C($v0)
    ctx->pc = 0x2072f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2072f4: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x2072f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2072f8: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2072fc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2072fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207300: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x207300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207304: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x207304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20730c: 0x0  nop
    ctx->pc = 0x20730cu;
    // NOP
    // 0x207310: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207310u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x207314: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x207314u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x207318: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x207318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x20731c: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x207320: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207324: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x207324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x207328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20732c: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x20732Cu;
    SET_GPR_U32(ctx, 31, 0x207334u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x20732Cu, 0x207334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207334u;
label_207334:
    // 0x207334: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207338: 0xc4430044  lwc1        $f3, 0x44($v0)
    ctx->pc = 0x207338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20733c: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x20733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207340: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207344: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x207344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207348: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x207348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20734c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20734cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207354: 0x0  nop
    ctx->pc = 0x207354u;
    // NOP
    // 0x207358: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207358u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20735c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20735cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x207360: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x207360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x207364: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207368: 0xc443003c  lwc1        $f3, 0x3C($v0)
    ctx->pc = 0x207368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20736c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x20736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207370: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207374: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x207374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207378: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x207378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20737c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20737cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207384: 0x0  nop
    ctx->pc = 0x207384u;
    // NOP
    // 0x207388: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207388u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20738c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20738cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x207390: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x207390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x207394: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x207394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207398: 0xc4630040  lwc1        $f3, 0x40($v1)
    ctx->pc = 0x207398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20739c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x20739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2073a0: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2073a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2073a4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2073a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2073a8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2073a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2073ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2073acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2073b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2073b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2073b4: 0x0  nop
    ctx->pc = 0x2073b4u;
    // NOP
    // 0x2073b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2073b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2073bc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2073bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2073c0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2073c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2073c4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2073c8: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2073c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2073cc: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2073CCu;
    SET_GPR_U32(ctx, 31, 0x2073D4u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2073CCu, 0x2073D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073D4u;
label_2073d4:
    // 0x2073d4: 0xc7ac0218  lwc1        $f12, 0x218($sp)
    ctx->pc = 0x2073d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2073d8: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2073D8u;
    SET_GPR_U32(ctx, 31, 0x2073E0u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2073D8u, 0x2073E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073E0u;
label_2073e0:
    // 0x2073e0: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2073e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2073e4: 0xc7ac0218  lwc1        $f12, 0x218($sp)
    ctx->pc = 0x2073e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2073e8: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2073E8u;
    SET_GPR_U32(ctx, 31, 0x2073F0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2073E8u, 0x2073F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073F0u;
label_2073f0:
    // 0x2073f0: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2073f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x2073f4: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x2073f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2073f8: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x2073f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2073fc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2073fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207400: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x207400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x207404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20740c: 0x0  nop
    ctx->pc = 0x20740cu;
    // NOP
    // 0x207410: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x207410u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x207414: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x207414u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x207418: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x207418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x20741c: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x20741cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x207420: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x207420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x207424: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x207424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207428: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x207428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20742c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x20742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207430: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x207430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207434: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x207434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207438: 0x0  nop
    ctx->pc = 0x207438u;
    // NOP
    // 0x20743c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x20743cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x207440: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x207440u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x207444: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x207444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207448: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x207448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x20744c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x20744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207450: 0xc7a301e8  lwc1        $f3, 0x1E8($sp)
    ctx->pc = 0x207450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x207454: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x207454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x207458: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x207458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20745c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x20745cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x207460: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x207460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207464: 0x0  nop
    ctx->pc = 0x207464u;
    // NOP
    // 0x207468: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x207468u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x20746c: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x20746cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x207470: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x207470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x207474: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x207474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x207478: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x207478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20747c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20747cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207480: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x207480u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207484: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x207484u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x207488: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x207488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20748c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20748cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207490: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x207490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207494: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x207494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207498: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x207498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20749c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20749cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2074a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2074a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2074a4: 0x27bd0240  addiu       $sp, $sp, 0x240
    ctx->pc = 0x2074a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2074a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2074A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2074B0u;
}
