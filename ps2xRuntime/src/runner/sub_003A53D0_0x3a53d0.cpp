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

// Function: sub_003A53D0
// Address: 0x3a53d0 - 0x3a5500
void sub_003A53D0_0x3a53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A53D0_0x3a53d0");
#endif

    switch (ctx->pc) {
        case 0x3a5420u: goto label_3a5420;
        case 0x3a544cu: goto label_3a544c;
        case 0x3a54b4u: goto label_3a54b4;
        default: break;
    }

    ctx->pc = 0x3a53d0u;

    // 0x3a53d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a53d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a53d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a53d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a53dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a53dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a53e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a53e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a53e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a53ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a53ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a53f4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A53F4u;
    {
        const bool branch_taken_0x3a53f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53F4u;
        // 0x3a53f8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53f4) {
            ctx->pc = 0x3A543Cu;
            goto label_3a543c;
        }
    }
    ctx->pc = 0x3A53FCu;
    // 0x3a53fc: 0x1a000038  blez        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A53FCu;
    {
        const bool branch_taken_0x3a53fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3A5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53FCu;
        // 0x3a5400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53fc) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A5404u;
    // 0x3a5404: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x3a5404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a5408: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3A5408u;
    {
        const bool branch_taken_0x3a5408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5408u;
        // 0x3a540c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5408) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A5410u;
    // 0x3a5410: 0x5a600034  blezl       $s3, . + 4 + (0x34 << 2)
    ctx->pc = 0x3A5410u;
    {
        const bool branch_taken_0x3a5410 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x3a5410) {
            ctx->pc = 0x3A5414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5410u;
            // 0x3a5414: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A54E4u;
            goto label_3a54e4;
        }
    }
    ctx->pc = 0x3A5418u;
    // 0x3a5418: 0xc112582  jal         func_449608
    ctx->pc = 0x3A5418u;
    SET_GPR_U32(ctx, 31, 0x3A5420u);
    ctx->pc = 0x3A541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5418u;
    // 0x3a541c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A5418u, 0x3A5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5420u;
label_3a5420:
    // 0x3a5420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a5420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5424: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5424u;
    {
        const bool branch_taken_0x3a5424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5424) {
            ctx->pc = 0x3A5428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5424u;
            // 0x3a5428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5444u;
            goto label_3a5444;
        }
    }
    ctx->pc = 0x3A542Cu;
    // 0x3a542c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x3a542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x3a5430: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x3a5430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x3a5434: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A5434u;
    {
        const bool branch_taken_0x3a5434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5434u;
        // 0x3a5438: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5434) {
            ctx->pc = 0x3A54BCu;
            goto label_3a54bc;
        }
    }
    ctx->pc = 0x3A543Cu;
label_3a543c:
    // 0x3a543c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3A543Cu;
    {
        const bool branch_taken_0x3a543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A543Cu;
        // 0x3a5440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a543c) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A5444u;
label_3a5444:
    // 0x3a5444: 0xc112584  jal         func_449610
    ctx->pc = 0x3A5444u;
    SET_GPR_U32(ctx, 31, 0x3A544Cu);
    ctx->pc = 0x3A5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5444u;
    // 0x3a5448: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449610u, 0x3A5444u, 0x3A544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A544Cu;
label_3a544c:
    // 0x3a544c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5450: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A5450u;
    {
        const bool branch_taken_0x3a5450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5450u;
        // 0x3a5454: 0x24030114  addiu       $v1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5450) {
            ctx->pc = 0x3A54A0u;
            goto label_3a54a0;
        }
    }
    ctx->pc = 0x3A5458u;
    // 0x3a5458: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a5458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3a545c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3a545cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3a5460: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3a5460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3a5464: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3a5464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3a5468: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a5468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3a546c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3a546cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3a5470: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3a5470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3a5474: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a5474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3a5478: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3a5478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3a547c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3a547cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3a5480: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3a5480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3a5484: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a5488: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x3a5488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x3a548c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5490: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x3a5490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x3a5494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5494u;
    {
        const bool branch_taken_0x3a5494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5494u;
        // 0x3a5498: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5494) {
            ctx->pc = 0x3A54A4u;
            goto label_3a54a4;
        }
    }
    ctx->pc = 0x3A549Cu;
    // 0x3a549c: 0x0  nop
    ctx->pc = 0x3a549cu;
    // NOP
label_3a54a0:
    // 0x3a54a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a54a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a54a4:
    // 0x3a54a4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A54A4u;
    {
        const bool branch_taken_0x3a54a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54A4u;
        // 0x3a54a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54a4) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A54ACu;
    // 0x3a54ac: 0xc112582  jal         func_449608
    ctx->pc = 0x3A54ACu;
    SET_GPR_U32(ctx, 31, 0x3A54B4u);
    ctx->pc = 0x3A54B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A54ACu;
    // 0x3a54b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A54ACu, 0x3A54B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A54B4u;
label_3a54b4:
    // 0x3a54b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a54b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54b8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x3a54b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_3a54bc:
    // 0x3a54bc: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x3a54bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a54c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3a54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a54c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a54c8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x3a54c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a54cc: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x3a54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x3a54d0: 0xacb00038  sw          $s0, 0x38($a1)
    ctx->pc = 0x3a54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 16));
    // 0x3a54d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a54d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54d8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x3a54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x3a54dc: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3a54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_3a54e0:
    // 0x3a54e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a54e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a54e4:
    // 0x3a54e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a54e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a54e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a54e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a54ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a54ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a54f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a54f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a54f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A54F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54F4u;
        // 0x3a54f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A54F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A54FCu;
    // 0x3a54fc: 0x0  nop
    ctx->pc = 0x3a54fcu;
    // NOP
    ctx->pc = 0x3a5500u;
}
