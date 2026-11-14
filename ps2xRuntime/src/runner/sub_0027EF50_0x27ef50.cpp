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

// Function: sub_0027EF50
// Address: 0x27ef50 - 0x27efa0
void sub_0027EF50_0x27ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EF50_0x27ef50");
#endif

    switch (ctx->pc) {
        case 0x27ef88u: goto label_27ef88;
        default: break;
    }

    ctx->pc = 0x27ef50u;

    // 0x27ef50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ef54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ef58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27ef5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27ef60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27ef68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27ef70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef74: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x27ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27ef78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ef7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27ef7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef80: 0xc09fbe8  jal         func_27EFA0
    ctx->pc = 0x27EF80u;
    SET_GPR_U32(ctx, 31, 0x27EF88u);
    ctx->pc = 0x27EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFA0u, 0x27EF80u, 0x27EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF88u;
label_27ef88:
    // 0x27ef88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ef90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x27EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EF9Cu;
    // 0x27ef9c: 0x0  nop
    ctx->pc = 0x27ef9cu;
    // NOP
    ctx->pc = 0x27efa0u;
}
