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

// Function: sub_00265E60
// Address: 0x265e60 - 0x265eb0
void sub_00265E60_0x265e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265E60_0x265e60");
#endif

    switch (ctx->pc) {
        case 0x265e98u: goto label_265e98;
        default: break;
    }

    ctx->pc = 0x265e60u;

    // 0x265e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265e6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x265e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x265e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x265e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x265e78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x265e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x265e80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e84: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x265e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x265e88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x265e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e90: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x265E90u;
    SET_GPR_U32(ctx, 31, 0x265E98u);
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x265E90u, 0x265E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E98u;
label_265e98:
    // 0x265e98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265ea0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x265EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265EACu;
    // 0x265eac: 0x0  nop
    ctx->pc = 0x265eacu;
    // NOP
    ctx->pc = 0x265eb0u;
}
