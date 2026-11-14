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

// Function: sub_00256F60
// Address: 0x256f60 - 0x256f90
void sub_00256F60_0x256f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256F60_0x256f60");
#endif

    switch (ctx->pc) {
        case 0x256f78u: goto label_256f78;
        default: break;
    }

    ctx->pc = 0x256f60u;

    // 0x256f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x256f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x256f6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x256f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f70: 0xc095be4  jal         func_256F90
    ctx->pc = 0x256F70u;
    SET_GPR_U32(ctx, 31, 0x256F78u);
    ctx->pc = 0x256F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F90u, 0x256F70u, 0x256F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F78u;
label_256f78:
    // 0x256f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256f7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x256f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256f80: 0x3e00008  jr          $ra
    ctx->pc = 0x256F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256F88u;
    // 0x256f88: 0x0  nop
    ctx->pc = 0x256f88u;
    // NOP
    // 0x256f8c: 0x0  nop
    ctx->pc = 0x256f8cu;
    // NOP
    ctx->pc = 0x256f90u;
}
