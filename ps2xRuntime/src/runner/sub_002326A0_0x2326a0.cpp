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

// Function: sub_002326A0
// Address: 0x2326a0 - 0x232740
void sub_002326A0_0x2326a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002326A0_0x2326a0");
#endif

    switch (ctx->pc) {
        case 0x2326c8u: goto label_2326c8;
        case 0x2326d4u: goto label_2326d4;
        case 0x23271cu: goto label_23271c;
        default: break;
    }

    ctx->pc = 0x2326a0u;

    // 0x2326a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2326a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2326a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2326a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2326a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2326a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2326ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2326acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2326b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2326b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2326b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2326b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2326b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2326b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2326bc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2326bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2326c0: 0xc08b9f4  jal         func_22E7D0
    ctx->pc = 0x2326C0u;
    SET_GPR_U32(ctx, 31, 0x2326C8u);
    ctx->pc = 0x22E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7D0u, 0x2326C0u, 0x2326C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326C8u;
label_2326c8:
    // 0x2326c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2326c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2326CCu;
    {
        const bool branch_taken_0x2326cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2326cc) {
            ctx->pc = 0x23270Cu;
            goto label_23270c;
        }
    }
    ctx->pc = 0x2326D4u;
label_2326d4:
    // 0x2326d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2326d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326d8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2326d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2326e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2326e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2326E4u;
    {
        const bool branch_taken_0x2326e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2326e4) {
            ctx->pc = 0x2326FCu;
            goto label_2326fc;
        }
    }
    ctx->pc = 0x2326ECu;
    // 0x2326ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2326f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2326f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2326F4u;
    {
        const bool branch_taken_0x2326f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2326f4) {
            ctx->pc = 0x232708u;
            goto label_232708;
        }
    }
    ctx->pc = 0x2326FCu;
label_2326fc:
    // 0x2326fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2326fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x232700u;
    {
        const bool branch_taken_0x232700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232700) {
            ctx->pc = 0x232728u;
            goto label_232728;
        }
    }
    ctx->pc = 0x232708u;
label_232708:
    // 0x232708: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x232708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_23270c:
    // 0x23270c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232710: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x232710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x232714: 0xc08b954  jal         func_22E550
    ctx->pc = 0x232714u;
    SET_GPR_U32(ctx, 31, 0x23271Cu);
    ctx->pc = 0x22E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E550u, 0x232714u, 0x23271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23271Cu;
label_23271c:
    // 0x23271c: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x23271Cu;
    {
        const bool branch_taken_0x23271c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23271c) {
            ctx->pc = 0x2326D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2326d4;
        }
    }
    ctx->pc = 0x232724u;
    // 0x232724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232728:
    // 0x232728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23272c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232734: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x232734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x232738: 0x3e00008  jr          $ra
    ctx->pc = 0x232738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232740u;
}
