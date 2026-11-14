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

// Function: sub_0028AAF0
// Address: 0x28aaf0 - 0x28ab30
void sub_0028AAF0_0x28aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AAF0_0x28aaf0");
#endif

    switch (ctx->pc) {
        case 0x28ab14u: goto label_28ab14;
        default: break;
    }

    ctx->pc = 0x28aaf0u;

    // 0x28aaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28aaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aaf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28aafc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28ab00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ab04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ab08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ab0c: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x28AB0Cu;
    SET_GPR_U32(ctx, 31, 0x28AB14u);
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x28AB0Cu, 0x28AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB14u;
label_28ab14:
    // 0x28ab14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ab18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB24u;
    // 0x28ab24: 0x0  nop
    ctx->pc = 0x28ab24u;
    // NOP
    // 0x28ab28: 0x0  nop
    ctx->pc = 0x28ab28u;
    // NOP
    // 0x28ab2c: 0x0  nop
    ctx->pc = 0x28ab2cu;
    // NOP
    ctx->pc = 0x28ab30u;
}
