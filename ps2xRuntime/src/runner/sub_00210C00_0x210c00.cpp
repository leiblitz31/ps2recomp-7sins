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

// Function: sub_00210C00
// Address: 0x210c00 - 0x210c40
void sub_00210C00_0x210c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210C00_0x210c00");
#endif

    switch (ctx->pc) {
        case 0x210c1cu: goto label_210c1c;
        default: break;
    }

    ctx->pc = 0x210c00u;

    // 0x210c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210c08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x210c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x210c0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x210c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x210c10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210c14: 0xc084310  jal         func_210C40
    ctx->pc = 0x210C14u;
    SET_GPR_U32(ctx, 31, 0x210C1Cu);
    ctx->pc = 0x210C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C40u, 0x210C14u, 0x210C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C1Cu;
label_210c1c:
    // 0x210c1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210c20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x210c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x210c24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x210c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210c28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x210c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x210c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210c34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x210c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x210c38: 0x3e00008  jr          $ra
    ctx->pc = 0x210C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C40u;
}
