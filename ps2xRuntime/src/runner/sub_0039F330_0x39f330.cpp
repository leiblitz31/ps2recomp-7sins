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

// Function: sub_0039F330
// Address: 0x39f330 - 0x39fb80
void sub_0039F330_0x39f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F330_0x39f330");
#endif

    switch (ctx->pc) {
        case 0x39f3e8u: goto label_39f3e8;
        case 0x39f4d0u: goto label_39f4d0;
        case 0x39f678u: goto label_39f678;
        default: break;
    }

    ctx->pc = 0x39f330u;

    // 0x39f330: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x39f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x39f334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39f334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f338: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x39f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x39f33c: 0x7042cb89  pcpyld      $t9, $v0, $v0
    ctx->pc = 0x39f33cu;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x39f340: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x39f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x39f344: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x39f344u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f348: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x39f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x39f34c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x39f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x39f350: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x39f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x39f354: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x39f354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x39f358: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x39f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x39f35c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x39f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x39f360: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x39f360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x39f364: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x39f364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x39f368: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39f368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39f36c: 0x8fc50030  lw          $a1, 0x30($fp)
    ctx->pc = 0x39f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x39f370: 0x907200b6  lbu         $s2, 0xB6($v1)
    ctx->pc = 0x39f370u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 182)));
    // 0x39f374: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x39f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f378: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x39f378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x39f37c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x39f37cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x39f380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39f384: 0x8dc50020  lw          $a1, 0x20($t6)
    ctx->pc = 0x39f384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x39f388: 0x8dc4000c  lw          $a0, 0xC($t6)
    ctx->pc = 0x39f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x39f38c: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x39f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x39f390: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x39f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x39f394: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39f394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x39f398: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39F398u;
    {
        const bool branch_taken_0x39f398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F398u;
        // 0x39f39c: 0x8dc90008  lw          $t1, 0x8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f398) {
            ctx->pc = 0x39F3C4u;
            goto label_39f3c4;
        }
    }
    ctx->pc = 0x39F3A0u;
    // 0x39f3a0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x39f3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f3a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x39f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39f3a8: 0x800013  mtlo        $a0
    ctx->pc = 0x39f3a8u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x39f3ac: 0x90e700b9  lbu         $a3, 0xB9($a3)
    ctx->pc = 0x39f3acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 185)));
    // 0x39f3b0: 0x70e20000  madd        $zero, $a3, $v0
    ctx->pc = 0x39f3b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x39f3b4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x39f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x39f3b8: 0x1812  mflo        $v1
    ctx->pc = 0x39f3b8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39f3bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39F3BCu;
    {
        const bool branch_taken_0x39f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3BCu;
        // 0x39f3c0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f3bc) {
            ctx->pc = 0x39F3D4u;
            goto label_39f3d4;
        }
    }
    ctx->pc = 0x39F3C4u;
label_39f3c4:
    // 0x39f3c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f3c8: 0x90a501f1  lbu         $a1, 0x1F1($a1)
    ctx->pc = 0x39f3c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 497)));
    // 0x39f3cc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x39f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x39f3d0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x39f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_39f3d4:
    // 0x39f3d4: 0x8dc6001c  lw          $a2, 0x1C($t6)
    ctx->pc = 0x39f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x39f3d8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x39f3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39f3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3e0: 0x18c001a8  blez        $a2, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x39F3E0u;
    {
        const bool branch_taken_0x39f3e0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x39F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3E0u;
        // 0x39f3e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f3e0) {
            ctx->pc = 0x39FA84u;
            goto label_39fa84;
        }
    }
    ctx->pc = 0x39F3E8u;
label_39f3e8:
    // 0x39f3e8: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x39f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39f3ec: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x39f3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39f3f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F3F0u;
    {
        const bool branch_taken_0x39f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f3f0) {
            ctx->pc = 0x39F3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F3F0u;
            // 0x39f3f4: 0x8dc20018  lw          $v0, 0x18($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F400u;
            goto label_39f400;
        }
    }
    ctx->pc = 0x39F3F8u;
    // 0x39f3f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39F3F8u;
    {
        const bool branch_taken_0x39f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3F8u;
        // 0x39f3fc: 0x8dcb0018  lw          $t3, 0x18($t6) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f3f8) {
            ctx->pc = 0x39F40Cu;
            goto label_39f40c;
        }
    }
    ctx->pc = 0x39F400u;
label_39f400:
    // 0x39f400: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x39f400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f404: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x39f404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f408: 0xe25823  subu        $t3, $a3, $v0
    ctx->pc = 0x39f408u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_39f40c:
    // 0x39f40c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39f410: 0x283001b  divu        $zero, $s4, $v1
    ctx->pc = 0x39f410u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
    // 0x39f414: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39F414u;
    {
        const bool branch_taken_0x39f414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f414) {
            ctx->pc = 0x39F418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F414u;
            // 0x39f418: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F41Cu;
            goto label_39f41c;
        }
    }
    ctx->pc = 0x39F41Cu;
label_39f41c:
    // 0x39f41c: 0x1010  mfhi        $v0
    ctx->pc = 0x39f41cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x39f420: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x39F420u;
    {
        const bool branch_taken_0x39f420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f420) {
            ctx->pc = 0x39F424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F420u;
            // 0x39f424: 0x8fc20024  lw          $v0, 0x24($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F48Cu;
            goto label_39f48c;
        }
    }
    ctx->pc = 0x39F428u;
    // 0x39f428: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x39f428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x39f42c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39f430: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39f430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x39f434: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x39f434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x39f438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x39f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x39f43c: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x39f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x39f440: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x39f440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x39f444: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39f448: 0x14180b  movn        $v1, $zero, $s4
    ctx->pc = 0x39f448u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x39f44c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x39f450: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39f450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f454: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x39f454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f458: 0x90a400b4  lbu         $a0, 0xB4($a1)
    ctx->pc = 0x39f458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x39f45c: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x39f45cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x39f460: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x39F460u;
    {
        const bool branch_taken_0x39f460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f460) {
            ctx->pc = 0x39F464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F460u;
            // 0x39f464: 0x7e650000  sq          $a1, 0x0($s3) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F480u;
            goto label_39f480;
        }
    }
    ctx->pc = 0x39F468u;
    // 0x39f468: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39F468u;
    {
        const bool branch_taken_0x39f468 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f468) {
            ctx->pc = 0x39F46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F468u;
            // 0x39f46c: 0x7e650000  sq          $a1, 0x0($s3) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F480u;
            goto label_39f480;
        }
    }
    ctx->pc = 0x39F470u;
    // 0x39f470: 0xfe670000  sd          $a3, 0x0($s3)
    ctx->pc = 0x39f470u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 7));
    // 0x39f474: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x39f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F478u;
    {
        const bool branch_taken_0x39f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F478u;
        // 0x39f47c: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f478) {
            ctx->pc = 0x39F488u;
            goto label_39f488;
        }
    }
    ctx->pc = 0x39F480u;
label_39f480:
    // 0x39f480: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x39f480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f484: 0x26690010  addiu       $t1, $s3, 0x10
    ctx->pc = 0x39f484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_39f488:
    // 0x39f488: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x39f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_39f48c:
    // 0x39f48c: 0x26870001  addiu       $a3, $s4, 0x1
    ctx->pc = 0x39f48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39f490: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x39f490u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f494: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x39f494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x39f498: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x39f498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x39f49c: 0x18600070  blez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x39F49Cu;
    {
        const bool branch_taken_0x39f49c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F49Cu;
        // 0x39f4a0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f49c) {
            ctx->pc = 0x39F660u;
            goto label_39f660;
        }
    }
    ctx->pc = 0x39F4A4u;
    // 0x39f4a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x39f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x39f4a8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x39f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x39f4ac: 0x8fb70000  lw          $s7, 0x0($sp)
    ctx->pc = 0x39f4acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f4b0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x39f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x39f4b4: 0x3c11ff00  lui         $s1, 0xFF00
    ctx->pc = 0x39f4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65280 << 16));
    // 0x39f4b8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x39f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x39f4bc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x39f4bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f4c0: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x39f4c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x39f4c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39f4c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f4c8: 0x25d8009c  addiu       $t8, $t6, 0x9C
    ctx->pc = 0x39f4c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 156));
    // 0x39f4cc: 0x26ef0020  addiu       $t7, $s7, 0x20
    ctx->pc = 0x39f4ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_39f4d0:
    // 0x39f4d0: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x39f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x39f4d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39f4d8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x39F4D8u;
    {
        const bool branch_taken_0x39f4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4D8u;
        // 0x39f4dc: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4d8) {
            ctx->pc = 0x39F648u;
            goto label_39f648;
        }
    }
    ctx->pc = 0x39F4E0u;
    // 0x39f4e0: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x39F4E0u;
    {
        const bool branch_taken_0x39f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f4e0) {
            ctx->pc = 0x39F4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F4E0u;
            // 0x39f4e4: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F64Cu;
            goto label_39f64c;
        }
    }
    ctx->pc = 0x39F4E8u;
    // 0x39f4e8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x39f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x39f4ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39f4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x39f4f0: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x39f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x39f4f4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x39F4F4u;
    {
        const bool branch_taken_0x39f4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4F4u;
        // 0x39f4f8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4f4) {
            ctx->pc = 0x39F564u;
            goto label_39f564;
        }
    }
    ctx->pc = 0x39F4FCu;
    // 0x39f4fc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39F4FCu;
    {
        const bool branch_taken_0x39f4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4FCu;
        // 0x39f500: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4fc) {
            ctx->pc = 0x39F53Cu;
            goto label_39f53c;
        }
    }
    ctx->pc = 0x39F504u;
    // 0x39f504: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x39f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x39f508: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x39F508u;
    {
        const bool branch_taken_0x39f508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F508u;
        // 0x39f50c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f508) {
            ctx->pc = 0x39F55Cu;
            goto label_39f55c;
        }
    }
    ctx->pc = 0x39F510u;
    // 0x39f510: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39F510u;
    {
        const bool branch_taken_0x39f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F510u;
        // 0x39f514: 0x3c076500  lui         $a3, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f510) {
            ctx->pc = 0x39F52Cu;
            goto label_39f52c;
        }
    }
    ctx->pc = 0x39F518u;
    // 0x39f518: 0x3c056000  lui         $a1, 0x6000
    ctx->pc = 0x39f518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24576 << 16));
    // 0x39f51c: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x39F51Cu;
    {
        const bool branch_taken_0x39f51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x39F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F51Cu;
        // 0x39f520: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f51c) {
            ctx->pc = 0x39F554u;
            goto label_39f554;
        }
    }
    ctx->pc = 0x39F524u;
    // 0x39f524: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39F524u;
    {
        const bool branch_taken_0x39f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F524u;
        // 0x39f528: 0x8fc20024  lw          $v0, 0x24($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f524) {
            ctx->pc = 0x39F574u;
            goto label_39f574;
        }
    }
    ctx->pc = 0x39F52Cu;
label_39f52c:
    // 0x39f52c: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x39F52Cu;
    {
        const bool branch_taken_0x39f52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x39F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F52Cu;
        // 0x39f530: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f52c) {
            ctx->pc = 0x39F554u;
            goto label_39f554;
        }
    }
    ctx->pc = 0x39F534u;
    // 0x39f534: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39F534u;
    {
        const bool branch_taken_0x39f534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F534u;
        // 0x39f538: 0x8fc20024  lw          $v0, 0x24($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f534) {
            ctx->pc = 0x39F574u;
            goto label_39f574;
        }
    }
    ctx->pc = 0x39F53Cu;
label_39f53c:
    // 0x39f53c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39F53Cu;
    {
        const bool branch_taken_0x39f53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F53Cu;
        // 0x39f540: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f53c) {
            ctx->pc = 0x39F55Cu;
            goto label_39f55c;
        }
    }
    ctx->pc = 0x39F544u;
    // 0x39f544: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39F544u;
    {
        const bool branch_taken_0x39f544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F544u;
        // 0x39f548: 0x3c176e00  lui         $s7, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f544) {
            ctx->pc = 0x39F56Cu;
            goto label_39f56c;
        }
    }
    ctx->pc = 0x39F54Cu;
    // 0x39f54c: 0x14770008  bne         $v1, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x39F54Cu;
    {
        const bool branch_taken_0x39f54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x39F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F54Cu;
        // 0x39f550: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f54c) {
            ctx->pc = 0x39F570u;
            goto label_39f570;
        }
    }
    ctx->pc = 0x39F554u;
label_39f554:
    // 0x39f554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39F554u;
    {
        const bool branch_taken_0x39f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F554u;
        // 0x39f558: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f554) {
            ctx->pc = 0x39F570u;
            goto label_39f570;
        }
    }
    ctx->pc = 0x39F55Cu;
label_39f55c:
    // 0x39f55c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39F55Cu;
    {
        const bool branch_taken_0x39f55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F55Cu;
        // 0x39f560: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f55c) {
            ctx->pc = 0x39F570u;
            goto label_39f570;
        }
    }
    ctx->pc = 0x39F564u;
label_39f564:
    // 0x39f564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39F564u;
    {
        const bool branch_taken_0x39f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F564u;
        // 0x39f568: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f564) {
            ctx->pc = 0x39F570u;
            goto label_39f570;
        }
    }
    ctx->pc = 0x39F56Cu;
label_39f56c:
    // 0x39f56c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x39f56cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39f570:
    // 0x39f570: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x39f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_39f574:
    // 0x39f574: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39F574u;
    {
        const bool branch_taken_0x39f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F574u;
        // 0x39f578: 0x8f0cfffc  lw          $t4, -0x4($t8) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f574) {
            ctx->pc = 0x39F580u;
            goto label_39f580;
        }
    }
    ctx->pc = 0x39F57Cu;
    // 0x39f57c: 0x8f0c0000  lw          $t4, 0x0($t8)
    ctx->pc = 0x39f57cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_39f580:
    // 0x39f580: 0x16a3018  mult        $a2, $t3, $t2
    ctx->pc = 0x39f580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x39f584: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x39f584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x39f588: 0x8dc50018  lw          $a1, 0x18($t6)
    ctx->pc = 0x39f588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x39f58c: 0x1d51821  addu        $v1, $t6, $s5
    ctx->pc = 0x39f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x39f590: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x39f590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x39f594: 0x906800a6  lbu         $t0, 0xA6($v1)
    ctx->pc = 0x39f594u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x39f598: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x39f598u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x39f59c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x39f59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f5a0: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x39f5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x39f5a4: 0x2417fffc  addiu       $s7, $zero, -0x4
    ctx->pc = 0x39f5a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x39f5a8: 0xf71824  and         $v1, $a3, $s7
    ctx->pc = 0x39f5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 23));
    // 0x39f5ac: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x39f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x39f5b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x39f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x39f5b4: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x39f5b4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x39f5b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39f5bc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x39f5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f5c0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x39f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x39f5c4: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x39f5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x39f5c8: 0x6a001a  div         $zero, $v1, $t2
    ctx->pc = 0x39f5c8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39f5cc: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x39f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x39f5d0: 0xc2900  sll         $a1, $t4, 4
    ctx->pc = 0x39f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x39f5d4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x39f5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x39f5d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39f5dc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x39f5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x39f5e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x39f5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39f5e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x39f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x39f5e8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x39f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x39f5ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x39f5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x39f5f0: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x39f5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x39f5f4: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39F5F4u;
    {
        const bool branch_taken_0x39f5f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f5f4) {
            ctx->pc = 0x39F5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F5F4u;
            // 0x39f5f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F5FCu;
            goto label_39f5fc;
        }
    }
    ctx->pc = 0x39F5FCu;
label_39f5fc:
    // 0x39f5fc: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x39f5fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x39f600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39f604: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x39f604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x39f608: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x39f608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x39f60c: 0xdfb70020  ld          $s7, 0x20($sp)
    ctx->pc = 0x39f60cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f610: 0x1812  mflo        $v1
    ctx->pc = 0x39f610u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39f614: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x39f614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x39f618: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x39f618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x39f61c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x39f61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39f620: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39f624: 0x572025  or          $a0, $v0, $s7
    ctx->pc = 0x39f624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x39f628: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f628u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f62c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39f62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f630: 0x7e650000  sq          $a1, 0x0($s3)
    ctx->pc = 0x39f630u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 5));
    // 0x39f634: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x39f634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x39f638: 0x70472b89  pcpyld      $a1, $v0, $a3
    ctx->pc = 0x39f638u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x39f63c: 0x25330010  addiu       $s3, $t1, 0x10
    ctx->pc = 0x39f63cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x39f640: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39f640u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39f644: 0x26690010  addiu       $t1, $s3, 0x10
    ctx->pc = 0x39f644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_39f648:
    // 0x39f648: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39f648u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_39f64c:
    // 0x39f64c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x39f64cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x39f650: 0x27180018  addiu       $t8, $t8, 0x18
    ctx->pc = 0x39f650u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 24));
    // 0x39f654: 0x1b6102a  slt         $v0, $t5, $s6
    ctx->pc = 0x39f654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x39f658: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x39F658u;
    {
        const bool branch_taken_0x39f658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F658u;
        // 0x39f65c: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f658) {
            ctx->pc = 0x39F4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f4d0;
        }
    }
    ctx->pc = 0x39F660u;
label_39f660:
    // 0x39f660: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x39f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x39f664: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x39f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x39f668: 0x184000f6  blez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x39F668u;
    {
        const bool branch_taken_0x39f668 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F668u;
        // 0x39f66c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f668) {
            ctx->pc = 0x39FA44u;
            goto label_39fa44;
        }
    }
    ctx->pc = 0x39F670u;
    // 0x39f670: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39f670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f674: 0x0  nop
    ctx->pc = 0x39f674u;
    // NOP
label_39f678:
    // 0x39f678: 0xd10c0  sll         $v0, $t5, 3
    ctx->pc = 0x39f678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x39f67c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39f680: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x39f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x39f684: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x39f684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39f688: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x39F688u;
    {
        const bool branch_taken_0x39f688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F688u;
        // 0x39f68c: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f688) {
            ctx->pc = 0x39FA2Cu;
            goto label_39fa2c;
        }
    }
    ctx->pc = 0x39F690u;
    // 0x39f690: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x39F690u;
    {
        const bool branch_taken_0x39f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F690u;
        // 0x39f694: 0x2da2000c  sltiu       $v0, $t5, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f690) {
            ctx->pc = 0x39FA2Cu;
            goto label_39fa2c;
        }
    }
    ctx->pc = 0x39F698u;
    // 0x39f698: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x39F698u;
    {
        const bool branch_taken_0x39f698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F698u;
        // 0x39f69c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f698) {
            ctx->pc = 0x39FA2Cu;
            goto label_39fa2c;
        }
    }
    ctx->pc = 0x39F6A0u;
    // 0x39f6a0: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x39f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x39f6a4: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x39f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x39f6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39f6ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39f6b0: 0x800008  jr          $a0
    ctx->pc = 0x39F6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39F6B8u: goto label_39f6b8;
            case 0x39F730u: goto label_39f730;
            case 0x39F798u: goto label_39f798;
            case 0x39F80Cu: goto label_39f80c;
            case 0x39F874u: goto label_39f874;
            case 0x39F8E0u: goto label_39f8e0;
            case 0x39F958u: goto label_39f958;
            case 0x39F9BCu: goto label_39f9bc;
            case 0x39FA2Cu: goto label_39fa2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39F6B8u;
label_39f6b8:
    // 0x39f6b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F6B8u;
    {
        const bool branch_taken_0x39f6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f6b8) {
            ctx->pc = 0x39F6CCu;
            goto label_39f6cc;
        }
    }
    ctx->pc = 0x39F6C0u;
    // 0x39f6c0: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f6c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f6c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F6C4u;
    {
        const bool branch_taken_0x39f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6C4u;
        // 0x39f6c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6c4) {
            ctx->pc = 0x39F6D4u;
            goto label_39f6d4;
        }
    }
    ctx->pc = 0x39F6CCu;
label_39f6cc:
    // 0x39f6cc: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f6ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f6d0: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f6d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f6d4:
    // 0x39f6d4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x39f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f6d8: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x39f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x39f6dc: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x39f6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f6e0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39f6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39f6e4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x39f6e8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39f6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39f6ec: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x39f6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x39f6f0: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x39f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f6f4: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x39f6f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x39f6f8: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f6fc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x39f6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39f700: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x39f700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x39f704: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x39f704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f708: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x39f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39f70c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39f710: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f714: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39f714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39f718: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x39f718u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x39f71c: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f71cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f720: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39f720u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39f724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39f724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39f728: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x39F728u;
    {
        const bool branch_taken_0x39f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F728u;
        // 0x39f72c: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f728) {
            ctx->pc = 0x39FA24u;
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39F730u;
label_39f730:
    // 0x39f730: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F730u;
    {
        const bool branch_taken_0x39f730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f730) {
            ctx->pc = 0x39F744u;
            goto label_39f744;
        }
    }
    ctx->pc = 0x39F738u;
    // 0x39f738: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f738u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f73c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F73Cu;
    {
        const bool branch_taken_0x39f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F73Cu;
        // 0x39f740: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f73c) {
            ctx->pc = 0x39F74Cu;
            goto label_39f74c;
        }
    }
    ctx->pc = 0x39F744u;
label_39f744:
    // 0x39f744: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f748: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f74c:
    // 0x39f74c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x39f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f750: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x39f750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x39f754: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x39f754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f758: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39f758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39f75c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x39f760: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x39f760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x39f764: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39f764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39f768: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x39f768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x39f76c: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x39f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f770: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f774: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x39f774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39f778: 0x90a200a6  lbu         $v0, 0xA6($a1)
    ctx->pc = 0x39f778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 166)));
    // 0x39f77c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39f780: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39f780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39f784: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39f784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39f788: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f788u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f78c: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39f790: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x39F790u;
    {
        const bool branch_taken_0x39f790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F790u;
        // 0x39f794: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f790) {
            ctx->pc = 0x39FA24u;
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39F798u;
label_39f798:
    // 0x39f798: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F798u;
    {
        const bool branch_taken_0x39f798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f798) {
            ctx->pc = 0x39F7ACu;
            goto label_39f7ac;
        }
    }
    ctx->pc = 0x39F7A0u;
    // 0x39f7a0: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f7a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f7a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F7A4u;
    {
        const bool branch_taken_0x39f7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7A4u;
        // 0x39f7a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7a4) {
            ctx->pc = 0x39F7B4u;
            goto label_39f7b4;
        }
    }
    ctx->pc = 0x39F7ACu;
label_39f7ac:
    // 0x39f7ac: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f7b0: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f7b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f7b4:
    // 0x39f7b4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x39f7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f7b8: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x39f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x39f7bc: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x39f7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f7c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39f7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39f7c4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x39f7c8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39f7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39f7cc: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x39f7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x39f7d0: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x39f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f7d4: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x39f7d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x39f7d8: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f7dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x39f7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39f7e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x39f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x39f7e4: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x39f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f7e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39f7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39f7ec: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f7f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39f7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39f7f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x39f7f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x39f7f8: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f7f8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f7fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39f800: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39f800u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39f804: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x39F804u;
    {
        const bool branch_taken_0x39f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F804u;
        // 0x39f808: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f804) {
            ctx->pc = 0x39FA24u;
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39F80Cu;
label_39f80c:
    // 0x39f80c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F80Cu;
    {
        const bool branch_taken_0x39f80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f80c) {
            ctx->pc = 0x39F820u;
            goto label_39f820;
        }
    }
    ctx->pc = 0x39F814u;
    // 0x39f814: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f814u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F818u;
    {
        const bool branch_taken_0x39f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F818u;
        // 0x39f81c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f818) {
            ctx->pc = 0x39F828u;
            goto label_39f828;
        }
    }
    ctx->pc = 0x39F820u;
label_39f820:
    // 0x39f820: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f824: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f828:
    // 0x39f828: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x39f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f82c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x39f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x39f830: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x39f830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f834: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39f834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39f838: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39f838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x39f83c: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x39f83cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x39f840: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39f840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39f844: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x39f844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x39f848: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x39f848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f84c: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f850: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x39f850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39f854: 0x90a200a6  lbu         $v0, 0xA6($a1)
    ctx->pc = 0x39f854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 166)));
    // 0x39f858: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39f85c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39f85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39f860: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39f860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39f864: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f864u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f868: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39f868u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39f86c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x39F86Cu;
    {
        const bool branch_taken_0x39f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F86Cu;
        // 0x39f870: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f86c) {
            ctx->pc = 0x39FA24u;
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39F874u;
label_39f874:
    // 0x39f874: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F874u;
    {
        const bool branch_taken_0x39f874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f874) {
            ctx->pc = 0x39F888u;
            goto label_39f888;
        }
    }
    ctx->pc = 0x39F87Cu;
    // 0x39f87c: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f87cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f880: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F880u;
    {
        const bool branch_taken_0x39f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F880u;
        // 0x39f884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f880) {
            ctx->pc = 0x39F890u;
            goto label_39f890;
        }
    }
    ctx->pc = 0x39F888u;
label_39f888:
    // 0x39f888: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f88c: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f88cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f890:
    // 0x39f890: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x39f890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f894: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x39f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x39f898: 0x1a61818  mult        $v1, $t5, $a2
    ctx->pc = 0x39f898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39f89c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x39f89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x39f8a0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x39f8a4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39f8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39f8a8: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x39f8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x39f8ac: 0x6e3021  addu        $a2, $v1, $t6
    ctx->pc = 0x39f8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x39f8b0: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x39f8b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x39f8b4: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x39f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f8b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x39f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39f8bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39f8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x39f8c0: 0x25630003  addiu       $v1, $t3, 0x3
    ctx->pc = 0x39f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x39f8c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39f8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39f8c8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39f8c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x39f8cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x39f8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x39f8d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39f8d4: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f8d4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f8d8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x39F8D8u;
    {
        const bool branch_taken_0x39f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8D8u;
        // 0x39f8dc: 0x7d250000  sq          $a1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8d8) {
            ctx->pc = 0x39FA20u;
            goto label_39fa20;
        }
    }
    ctx->pc = 0x39F8E0u;
label_39f8e0:
    // 0x39f8e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F8E0u;
    {
        const bool branch_taken_0x39f8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f8e0) {
            ctx->pc = 0x39F8F4u;
            goto label_39f8f4;
        }
    }
    ctx->pc = 0x39F8E8u;
    // 0x39f8e8: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f8e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f8ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F8ECu;
    {
        const bool branch_taken_0x39f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8ECu;
        // 0x39f8f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8ec) {
            ctx->pc = 0x39F8FCu;
            goto label_39f8fc;
        }
    }
    ctx->pc = 0x39F8F4u;
label_39f8f4:
    // 0x39f8f4: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f8f8: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f8f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f8fc:
    // 0x39f8fc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x39f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f900: 0x3c036a00  lui         $v1, 0x6A00
    ctx->pc = 0x39f900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27136 << 16));
    // 0x39f904: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x39f904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f908: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39f908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39f90c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x39f910: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39f910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39f914: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x39f914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x39f918: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x39f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f91c: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x39f91cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x39f920: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f924: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x39f924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39f928: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x39f928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x39f92c: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x39f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f930: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x39f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39f934: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39f934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39f938: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39f93c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39f93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39f940: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39f940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x39f944: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f944u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f948: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39f948u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39f94c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39f950: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x39F950u;
    {
        const bool branch_taken_0x39f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F950u;
        // 0x39f954: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f950) {
            ctx->pc = 0x39FA24u;
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39F958u;
label_39f958:
    // 0x39f958: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F958u;
    {
        const bool branch_taken_0x39f958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f958) {
            ctx->pc = 0x39F96Cu;
            goto label_39f96c;
        }
    }
    ctx->pc = 0x39F960u;
    // 0x39f960: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f960u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F964u;
    {
        const bool branch_taken_0x39f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F964u;
        // 0x39f968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f964) {
            ctx->pc = 0x39F974u;
            goto label_39f974;
        }
    }
    ctx->pc = 0x39F96Cu;
label_39f96c:
    // 0x39f96c: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f96cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f970: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f974:
    // 0x39f974: 0x1722818  mult        $a1, $t3, $s2
    ctx->pc = 0x39f974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39f978: 0x3c046800  lui         $a0, 0x6800
    ctx->pc = 0x39f978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
    // 0x39f97c: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f980: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x39f980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x39f984: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x39f984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x39f988: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x39f988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f98c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x39f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x39f990: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x39f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x39f994: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x39f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x39f998: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x39f998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x39f99c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x39f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x39f9a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x39f9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x39f9a4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39f9a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x39f9a8: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x39f9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x39f9ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39f9b0: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39f9b0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39f9b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x39F9B4u;
    {
        const bool branch_taken_0x39f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9B4u;
        // 0x39f9b8: 0x7d250000  sq          $a1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9b4) {
            ctx->pc = 0x39FA20u;
            goto label_39fa20;
        }
    }
    ctx->pc = 0x39F9BCu;
label_39f9bc:
    // 0x39f9bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F9BCu;
    {
        const bool branch_taken_0x39f9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f9bc) {
            ctx->pc = 0x39F9D0u;
            goto label_39f9d0;
        }
    }
    ctx->pc = 0x39F9C4u;
    // 0x39f9c4: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x39f9c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39f9c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F9C8u;
    {
        const bool branch_taken_0x39f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9C8u;
        // 0x39f9cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9c8) {
            ctx->pc = 0x39F9D8u;
            goto label_39f9d8;
        }
    }
    ctx->pc = 0x39F9D0u;
label_39f9d0:
    // 0x39f9d0: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x39f9d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x39f9d4: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x39f9d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_39f9d8:
    // 0x39f9d8: 0x24b1018  mult        $v0, $s2, $t3
    ctx->pc = 0x39f9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f9dc: 0x3c046a00  lui         $a0, 0x6A00
    ctx->pc = 0x39f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27136 << 16));
    // 0x39f9e0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x39f9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x39f9e4: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x39f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f9e8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x39f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x39f9ec: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x39f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x39f9f0: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x39f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39f9f4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x39f9f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x39f9f8: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x39f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x39f9fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39fa00: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x39fa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x39fa04: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x39fa04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x39fa08: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x39fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x39fa0c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x39fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x39fa10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x39fa10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x39fa14: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x39fa14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x39fa18: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x39fa18u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x39fa1c: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
label_39fa20:
    // 0x39fa20: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x39fa20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_39fa24:
    // 0x39fa24: 0x7d390000  sq          $t9, 0x0($t1)
    ctx->pc = 0x39fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 25));
    // 0x39fa28: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x39fa28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_39fa2c:
    // 0x39fa2c: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x39fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x39fa30: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39fa30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39fa34: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x39fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x39fa38: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x39fa38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39fa3c: 0x1440ff0e  bnez        $v0, . + 4 + (-0xF2 << 2)
    ctx->pc = 0x39FA3Cu;
    {
        const bool branch_taken_0x39fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA3Cu;
        // 0x39fa40: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa3c) {
            ctx->pc = 0x39F678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f678;
        }
    }
    ctx->pc = 0x39FA44u;
label_39fa44:
    // 0x39fa44: 0x3403a800  ori         $v1, $zero, 0xA800
    ctx->pc = 0x39fa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x39fa48: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x39fa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x39fa4c: 0x3407b800  ori         $a3, $zero, 0xB800
    ctx->pc = 0x39fa4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x39fa50: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x39fa50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x39fa54: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x39fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x39fa58: 0x74380a  movz        $a3, $v1, $s4
    ctx->pc = 0x39fa58u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x39fa5c: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x39fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x39fa60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39fa60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fa64: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x39fa64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x39fa68: 0x8fb40010  lw          $s4, 0x10($sp)
    ctx->pc = 0x39fa68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fa6c: 0x8dc6001c  lw          $a2, 0x1C($t6)
    ctx->pc = 0x39fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x39fa70: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x39fa70u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x39fa74: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x39fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x39fa78: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x39fa78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39fa7c: 0x1440fe5a  bnez        $v0, . + 4 + (-0x1A6 << 2)
    ctx->pc = 0x39FA7Cu;
    {
        const bool branch_taken_0x39fa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA7Cu;
        // 0x39fa80: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa7c) {
            ctx->pc = 0x39F3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f3e8;
        }
    }
    ctx->pc = 0x39FA84u;
label_39fa84:
    // 0x39fa84: 0x1331023  subu        $v0, $t1, $s3
    ctx->pc = 0x39fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x39fa88: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x39fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x39fa8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39fa8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x39fa90: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x39fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x39fa94: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x39fa94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x39fa98: 0x34841100  ori         $a0, $a0, 0x1100
    ctx->pc = 0x39fa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4352);
    // 0x39fa9c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x39fa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x39faa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39faa4: 0xfd24fff8  sd          $a0, -0x8($t1)
    ctx->pc = 0x39faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294967288), GPR_U64(ctx, 4));
    // 0x39faa8: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x39faa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39faac: 0xfe670000  sd          $a3, 0x0($s3)
    ctx->pc = 0x39faacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 7));
    // 0x39fab0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fab4: 0x906200b4  lbu         $v0, 0xB4($v1)
    ctx->pc = 0x39fab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x39fab8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39FAB8u;
    {
        const bool branch_taken_0x39fab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fab8) {
            ctx->pc = 0x39FABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FAB8u;
            // 0x39fabc: 0xfe600008  sd          $zero, 0x8($s3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FAC0u;
            goto label_39fac0;
        }
    }
    ctx->pc = 0x39FAC0u;
label_39fac0:
    // 0x39fac0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x39fac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39fac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fac8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x39fac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39facc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x39faccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39fad0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x39fad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39fad4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x39fad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39fad8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x39fad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39fadc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x39fadcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39fae0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x39fae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39fae4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x39fae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39fae8: 0x3e00008  jr          $ra
    ctx->pc = 0x39FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAE8u;
        // 0x39faec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FAF0u;
    // 0x39faf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39faf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39faf4: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x39faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x39faf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39fafc: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x39fafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x39fb00: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x39fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x39fb04: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x39fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x39fb08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39fb0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x39fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x39fb10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39FB10u;
    {
        const bool branch_taken_0x39fb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB10u;
        // 0x39fb14: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb10) {
            ctx->pc = 0x39FB28u;
            goto label_39fb28;
        }
    }
    ctx->pc = 0x39FB18u;
    // 0x39fb18: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x39fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x39fb1c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x39fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39fb20: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x39fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39fb24: 0x0  nop
    ctx->pc = 0x39fb24u;
    // NOP
label_39fb28:
    // 0x39fb28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x39fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x39fb2c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FB2Cu;
    {
        const bool branch_taken_0x39fb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39fb2c) {
            ctx->pc = 0x39FB40u;
            goto label_39fb40;
        }
    }
    ctx->pc = 0x39FB34u;
    // 0x39fb34: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x39fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x39fb38: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x39fb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x39fb3c: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x39fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
label_39fb40:
    // 0x39fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x39FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FB48u;
    // 0x39fb48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39fb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fb4c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x39fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x39fb50: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x39fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x39fb54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39fb58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39fb5c: 0xacc40038  sw          $a0, 0x38($a2)
    ctx->pc = 0x39fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 4));
    // 0x39fb60: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x39fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x39fb64: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FB64u;
    {
        const bool branch_taken_0x39fb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39fb64) {
            ctx->pc = 0x39FB78u;
            goto label_39fb78;
        }
    }
    ctx->pc = 0x39FB6Cu;
    // 0x39fb6c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x39fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x39fb70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x39fb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x39fb74: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x39fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
label_39fb78:
    // 0x39fb78: 0x3e00008  jr          $ra
    ctx->pc = 0x39FB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FB80u;
}
