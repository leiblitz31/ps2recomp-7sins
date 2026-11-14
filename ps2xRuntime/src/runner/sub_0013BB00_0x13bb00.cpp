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

// Function: sub_0013BB00
// Address: 0x13bb00 - 0x13bba0
void sub_0013BB00_0x13bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BB00_0x13bb00");
#endif

    switch (ctx->pc) {
        case 0x13bb24u: goto label_13bb24;
        case 0x13bb4cu: goto label_13bb4c;
        case 0x13bb5cu: goto label_13bb5c;
        case 0x13bb74u: goto label_13bb74;
        case 0x13bb88u: goto label_13bb88;
        default: break;
    }

    ctx->pc = 0x13bb00u;

    // 0x13bb00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13bb04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13bb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bb0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13bb10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13bb14: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x13bb18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bb1c: 0xc042514  jal         func_109450
    ctx->pc = 0x13BB1Cu;
    SET_GPR_U32(ctx, 31, 0x13BB24u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x13BB1Cu, 0x13BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB24u;
label_13bb24:
    // 0x13bb24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB24u;
    {
        const bool branch_taken_0x13bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb24) {
            ctx->pc = 0x13BB38u;
            goto label_13bb38;
        }
    }
    ctx->pc = 0x13BB2Cu;
    // 0x13bb2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bb30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB30u;
    {
        const bool branch_taken_0x13bb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb30) {
            ctx->pc = 0x13BB40u;
            goto label_13bb40;
        }
    }
    ctx->pc = 0x13BB38u;
label_13bb38:
    // 0x13bb38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13BB38u;
    {
        const bool branch_taken_0x13bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb38) {
            ctx->pc = 0x13BB88u;
            goto label_13bb88;
        }
    }
    ctx->pc = 0x13BB40u;
label_13bb40:
    // 0x13bb40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bb44: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13BB44u;
    SET_GPR_U32(ctx, 31, 0x13BB4Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13BB44u, 0x13BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB4Cu;
label_13bb4c:
    // 0x13bb4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13bb50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb54: 0xc040304  jal         func_100C10
    ctx->pc = 0x13BB54u;
    SET_GPR_U32(ctx, 31, 0x13BB5Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13BB54u, 0x13BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB5Cu;
label_13bb5c:
    // 0x13bb5c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x13bb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bb60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bb64: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13bb68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13bb6c: 0xc04ecac  jal         func_13B2B0
    ctx->pc = 0x13BB6Cu;
    SET_GPR_U32(ctx, 31, 0x13BB74u);
    ctx->pc = 0x13B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B0u, 0x13BB6Cu, 0x13BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB74u;
label_13bb74:
    // 0x13bb74: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13bb78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13bb7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bb80: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13BB80u;
    SET_GPR_U32(ctx, 31, 0x13BB88u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13BB80u, 0x13BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB88u;
label_13bb88:
    // 0x13bb88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13bb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bb8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bb90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13bb94: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB9Cu;
    // 0x13bb9c: 0x0  nop
    ctx->pc = 0x13bb9cu;
    // NOP
    ctx->pc = 0x13bba0u;
}
