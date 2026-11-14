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

// Function: sub_0033E3B8
// Address: 0x33e3b8 - 0x33e5f8
void sub_0033E3B8_0x33e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E3B8_0x33e3b8");
#endif

    switch (ctx->pc) {
        case 0x33e3e4u: goto label_33e3e4;
        case 0x33e404u: goto label_33e404;
        case 0x33e424u: goto label_33e424;
        case 0x33e48cu: goto label_33e48c;
        case 0x33e4acu: goto label_33e4ac;
        case 0x33e4ccu: goto label_33e4cc;
        case 0x33e544u: goto label_33e544;
        case 0x33e564u: goto label_33e564;
        case 0x33e584u: goto label_33e584;
        default: break;
    }

    ctx->pc = 0x33e3b8u;

    // 0x33e3b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33e3bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e3c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33e3c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33e3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e3c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33e3cc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e3d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33e3d4: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e3d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e3dc: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E3DCu;
    SET_GPR_U32(ctx, 31, 0x33E3E4u);
    ctx->pc = 0x33E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E3DCu;
    // 0x33e3e0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E3DCu, 0x33E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E3E4u;
label_33e3e4:
    // 0x33e3e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33e3e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e3e8: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x33E3E8u;
    {
        const bool branch_taken_0x33e3e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3E8u;
        // 0x33e3ec: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e3e8) {
            ctx->pc = 0x33E478u;
            goto label_33e478;
        }
    }
    ctx->pc = 0x33E3F0u;
    // 0x33e3f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e3f4: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x33e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x33e3f8: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e3fc: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33E3FCu;
    SET_GPR_U32(ctx, 31, 0x33E404u);
    ctx->pc = 0x33E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E3FCu;
    // 0x33e400: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33E3FCu, 0x33E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E404u;
label_33e404:
    // 0x33e404: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x33e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33e410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e414: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x33e414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33e418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33e418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e41c: 0xc0d11fa  jal         func_3447E8
    ctx->pc = 0x33E41Cu;
    SET_GPR_U32(ctx, 31, 0x33E424u);
    ctx->pc = 0x33E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E41Cu;
    // 0x33e420: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447E8u, 0x33E41Cu, 0x33E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E424u;
label_33e424:
    // 0x33e424: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e428: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x33e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33e42c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x33e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33e430: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33E430u;
    {
        const bool branch_taken_0x33e430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e430) {
            ctx->pc = 0x33E434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E430u;
            // 0x33e434: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E438u;
            goto label_33e438;
        }
    }
    ctx->pc = 0x33E438u;
label_33e438:
    // 0x33e438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e43c: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x33e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33e440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e448: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x33e448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x33e44c: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x33e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x33e450: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x33e450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x33e454: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x33e454u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x33e458: 0x1812  mflo        $v1
    ctx->pc = 0x33e458u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33e45c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e460: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33e460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33e464: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e468: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33e468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33e46c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x33e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e470: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33e470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33e474: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x33e474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_33e478:
    // 0x33e478: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e47c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e480: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33e480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33e484: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E484u;
    SET_GPR_U32(ctx, 31, 0x33E48Cu);
    ctx->pc = 0x33E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E484u;
    // 0x33e488: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E484u, 0x33E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E48Cu;
label_33e48c:
    // 0x33e48c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33e48cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e490: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x33E490u;
    {
        const bool branch_taken_0x33e490 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E490u;
        // 0x33e494: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e490) {
            ctx->pc = 0x33E530u;
            goto label_33e530;
        }
    }
    ctx->pc = 0x33E498u;
    // 0x33e498: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e49c: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x33e49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x33e4a0: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33e4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33e4a4: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33E4A4u;
    SET_GPR_U32(ctx, 31, 0x33E4ACu);
    ctx->pc = 0x33E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E4A4u;
    // 0x33e4a8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33E4A4u, 0x33E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4ACu;
label_33e4ac:
    // 0x33e4ac: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x33e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e4b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e4b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33e4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e4bc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x33e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33e4c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33e4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e4c4: 0xc0d11fa  jal         func_3447E8
    ctx->pc = 0x33E4C4u;
    SET_GPR_U32(ctx, 31, 0x33E4CCu);
    ctx->pc = 0x33E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E4C4u;
    // 0x33e4c8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447E8u, 0x33E4C4u, 0x33E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4CCu;
label_33e4cc:
    // 0x33e4cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e4d0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x33e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33e4d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x33e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33e4d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33E4D8u;
    {
        const bool branch_taken_0x33e4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e4d8) {
            ctx->pc = 0x33E4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E4D8u;
            // 0x33e4dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E4E0u;
            goto label_33e4e0;
        }
    }
    ctx->pc = 0x33E4E0u;
label_33e4e0:
    // 0x33e4e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e4e4: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x33e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x33e4e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e4ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e4f0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x33e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x33e4f4: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x33e4f8: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x33e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x33e4fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x33e4fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x33e500: 0x1812  mflo        $v1
    ctx->pc = 0x33e500u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33e504: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e508: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x33e508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e50c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e510: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33e510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33e514: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x33e514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e518: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33e518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33e51c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x33e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33e520: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x33e520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x33e524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33e524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e528: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x33e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x33e52c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x33e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_33e530:
    // 0x33e530: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e534: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e538: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33e538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33e53c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E53Cu;
    SET_GPR_U32(ctx, 31, 0x33E544u);
    ctx->pc = 0x33E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E53Cu;
    // 0x33e540: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E53Cu, 0x33E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E544u;
label_33e544:
    // 0x33e544: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33e544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e548: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x33E548u;
    {
        const bool branch_taken_0x33e548 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E548u;
        // 0x33e54c: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e548) {
            ctx->pc = 0x33E5D8u;
            goto label_33e5d8;
        }
    }
    ctx->pc = 0x33E550u;
    // 0x33e550: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e554: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x33e554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x33e558: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33e558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33e55c: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33E55Cu;
    SET_GPR_U32(ctx, 31, 0x33E564u);
    ctx->pc = 0x33E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E55Cu;
    // 0x33e560: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33E55Cu, 0x33E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E564u;
label_33e564:
    // 0x33e564: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x33e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e56c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33e570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e574: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x33e574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33e578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33e578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e57c: 0xc0d11fa  jal         func_3447E8
    ctx->pc = 0x33E57Cu;
    SET_GPR_U32(ctx, 31, 0x33E584u);
    ctx->pc = 0x33E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E57Cu;
    // 0x33e580: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447E8u, 0x33E57Cu, 0x33E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E584u;
label_33e584:
    // 0x33e584: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33e584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e588: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x33e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33e58c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x33e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33e590: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33E590u;
    {
        const bool branch_taken_0x33e590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e590) {
            ctx->pc = 0x33E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E590u;
            // 0x33e594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E598u;
            goto label_33e598;
        }
    }
    ctx->pc = 0x33E598u;
label_33e598:
    // 0x33e598: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33e598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e59c: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x33e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33e5a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e5a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e5a8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x33e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x33e5ac: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x33e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x33e5b0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x33e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x33e5b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x33e5b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x33e5b8: 0x1812  mflo        $v1
    ctx->pc = 0x33e5b8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33e5bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e5c0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x33e5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e5c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e5c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33e5cc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x33e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e5d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33e5d4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x33e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_33e5d8:
    // 0x33e5d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33e5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e5dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33e5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e5e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33e5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e5e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e5e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33e5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x33E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ECu;
        // 0x33e5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E5F4u;
    // 0x33e5f4: 0x0  nop
    ctx->pc = 0x33e5f4u;
    // NOP
    ctx->pc = 0x33e5f8u;
}
