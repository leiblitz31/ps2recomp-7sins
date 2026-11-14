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

// Function: sub_002D8490
// Address: 0x2d8490 - 0x2d85a0
void sub_002D8490_0x2d8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8490_0x2d8490");
#endif

    switch (ctx->pc) {
        case 0x2d84b8u: goto label_2d84b8;
        case 0x2d84c4u: goto label_2d84c4;
        case 0x2d84fcu: goto label_2d84fc;
        case 0x2d8518u: goto label_2d8518;
        case 0x2d8530u: goto label_2d8530;
        case 0x2d853cu: goto label_2d853c;
        case 0x2d8554u: goto label_2d8554;
        case 0x2d8574u: goto label_2d8574;
        default: break;
    }

    ctx->pc = 0x2d8490u;

    // 0x2d8490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d8494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d849c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d84a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d84a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d84a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d84ac: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d84acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d84b0: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D84B0u;
    SET_GPR_U32(ctx, 31, 0x2D84B8u);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D84B0u, 0x2D84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D84B8u;
label_2d84b8:
    // 0x2d84b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d84b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84bc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D84BCu;
    {
        const bool branch_taken_0x2d84bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d84bc) {
            ctx->pc = 0x2D8564u;
            goto label_2d8564;
        }
    }
    ctx->pc = 0x2D84C4u;
label_2d84c4:
    // 0x2d84c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d84c8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d84cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d84d0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D84D0u;
    {
        const bool branch_taken_0x2d84d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d84d0) {
            ctx->pc = 0x2D8560u;
            goto label_2d8560;
        }
    }
    ctx->pc = 0x2D84D8u;
    // 0x2d84d8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d84dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d84e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d84e4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2d84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2d84e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D84E8u;
    {
        const bool branch_taken_0x2d84e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d84e8) {
            ctx->pc = 0x2D8518u;
            goto label_2d8518;
        }
    }
    ctx->pc = 0x2D84F0u;
    // 0x2d84f0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2d84f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2d84f4: 0xc050ed8  jal         func_143B60
    ctx->pc = 0x2D84F4u;
    SET_GPR_U32(ctx, 31, 0x2D84FCu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2D84F4u, 0x2D84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D84FCu;
label_2d84fc:
    // 0x2d84fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d84fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8504: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d8504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d8508: 0x24a5e380  addiu       $a1, $a1, -0x1C80
    ctx->pc = 0x2d8508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960000));
    // 0x2d850c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d850cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8510: 0xc041b24  jal         func_106C90
    ctx->pc = 0x2D8510u;
    SET_GPR_U32(ctx, 31, 0x2D8518u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x2D8510u, 0x2D8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8518u;
label_2d8518:
    // 0x2d8518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d851c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D851Cu;
    {
        const bool branch_taken_0x2d851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d851c) {
            ctx->pc = 0x2D8540u;
            goto label_2d8540;
        }
    }
    ctx->pc = 0x2D8524u;
    // 0x2d8524: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8528: 0xc0b4340  jal         func_2D0D00
    ctx->pc = 0x2D8528u;
    SET_GPR_U32(ctx, 31, 0x2D8530u);
    ctx->pc = 0x2D0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D00u, 0x2D8528u, 0x2D8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8530u;
label_2d8530:
    // 0x2d8530: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8534: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D8534u;
    SET_GPR_U32(ctx, 31, 0x2D853Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D8534u, 0x2D853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D853Cu;
label_2d853c:
    // 0x2d853c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d853cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d8540:
    // 0x2d8540: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8544: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d8548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d854c: 0xc0b6168  jal         func_2D85A0
    ctx->pc = 0x2D854Cu;
    SET_GPR_U32(ctx, 31, 0x2D8554u);
    ctx->pc = 0x2D85A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85A0u, 0x2D854Cu, 0x2D8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8554u;
label_2d8554:
    // 0x2d8554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8558: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8558u;
    {
        const bool branch_taken_0x2d8558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8558) {
            ctx->pc = 0x2D8580u;
            goto label_2d8580;
        }
    }
    ctx->pc = 0x2D8560u;
label_2d8560:
    // 0x2d8560: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d8564:
    // 0x2d8564: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8568: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d8568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d856c: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D856Cu;
    SET_GPR_U32(ctx, 31, 0x2D8574u);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D856Cu, 0x2D8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8574u;
label_2d8574:
    // 0x2d8574: 0x1602ffd3  bne         $s0, $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2D8574u;
    {
        const bool branch_taken_0x2d8574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8574) {
            ctx->pc = 0x2D84C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d84c4;
        }
    }
    ctx->pc = 0x2D857Cu;
    // 0x2d857c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d857cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8580:
    // 0x2d8580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d858c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d8590: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8598u;
    // 0x2d8598: 0x0  nop
    ctx->pc = 0x2d8598u;
    // NOP
    // 0x2d859c: 0x0  nop
    ctx->pc = 0x2d859cu;
    // NOP
    ctx->pc = 0x2d85a0u;
}
