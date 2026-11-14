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

// Function: sub_00487A10
// Address: 0x487a10 - 0x487a70
void sub_00487A10_0x487a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487A10_0x487a10");
#endif

    switch (ctx->pc) {
        case 0x487a38u: goto label_487a38;
        case 0x487a4cu: goto label_487a4c;
        default: break;
    }

    ctx->pc = 0x487a10u;

    // 0x487a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x487a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x487a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x487a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x487a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x487a1c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x487a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x487a20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x487a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x487a24: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x487a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x487a28: 0x2785b5e0  addiu       $a1, $gp, -0x4A20
    ctx->pc = 0x487a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948320));
    // 0x487a2c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x487a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x487a30: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x487A30u;
    SET_GPR_U32(ctx, 31, 0x487A38u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x487A30u, 0x487A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A38u;
label_487a38:
    // 0x487a38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x487a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x487a3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x487a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487a40: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x487a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x487a44: 0xc124fec  jal         func_493FB0
    ctx->pc = 0x487A44u;
    SET_GPR_U32(ctx, 31, 0x487A4Cu);
    ctx->pc = 0x493FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493FB0u, 0x487A44u, 0x487A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A4Cu;
label_487a4c:
    // 0x487a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x487a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487a50: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x487a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x487a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487a5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x487a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x487a60: 0x3e00008  jr          $ra
    ctx->pc = 0x487A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487A68u;
    // 0x487a68: 0x0  nop
    ctx->pc = 0x487a68u;
    // NOP
    // 0x487a6c: 0x0  nop
    ctx->pc = 0x487a6cu;
    // NOP
    ctx->pc = 0x487a70u;
}
