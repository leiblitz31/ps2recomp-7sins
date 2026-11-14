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

// Function: sub_00459D50
// Address: 0x459d50 - 0x459da0
void sub_00459D50_0x459d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459D50_0x459d50");
#endif

    switch (ctx->pc) {
        case 0x459d8cu: goto label_459d8c;
        default: break;
    }

    ctx->pc = 0x459d50u;

    // 0x459d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x459d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x459d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x459d5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x459d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x459d60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459d64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x459D64u;
    {
        const bool branch_taken_0x459d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459d64) {
            ctx->pc = 0x459D78u;
            goto label_459d78;
        }
    }
    ctx->pc = 0x459D6Cu;
    // 0x459d6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x459d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459d70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x459D70u;
    {
        const bool branch_taken_0x459d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x459d70) {
            ctx->pc = 0x459D90u;
            goto label_459d90;
        }
    }
    ctx->pc = 0x459D78u;
label_459d78:
    // 0x459d78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459d7c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x459d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x459d80: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x459d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x459d84: 0xc116768  jal         func_459DA0
    ctx->pc = 0x459D84u;
    SET_GPR_U32(ctx, 31, 0x459D8Cu);
    ctx->pc = 0x459DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459DA0u, 0x459D84u, 0x459D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459D8Cu;
label_459d8c:
    // 0x459d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459d90:
    // 0x459d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459d94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x459d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x459d98: 0x3e00008  jr          $ra
    ctx->pc = 0x459D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459DA0u;
}
