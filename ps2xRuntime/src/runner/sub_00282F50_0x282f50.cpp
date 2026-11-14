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

// Function: sub_00282F50
// Address: 0x282f50 - 0x282f90
void sub_00282F50_0x282f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282F50_0x282f50");
#endif

    switch (ctx->pc) {
        case 0x282f68u: goto label_282f68;
        case 0x282f78u: goto label_282f78;
        default: break;
    }

    ctx->pc = 0x282f50u;

    // 0x282f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282f58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x282f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x282f5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282f60: 0xc0a0be4  jal         func_282F90
    ctx->pc = 0x282F60u;
    SET_GPR_U32(ctx, 31, 0x282F68u);
    ctx->pc = 0x282F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282F90u, 0x282F60u, 0x282F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F68u;
label_282f68:
    // 0x282f68: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x282f6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f70: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x282F70u;
    SET_GPR_U32(ctx, 31, 0x282F78u);
    ctx->pc = 0x283190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283190u, 0x282F70u, 0x282F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F78u;
label_282f78:
    // 0x282f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282f7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282f80: 0x3e00008  jr          $ra
    ctx->pc = 0x282F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282F88u;
    // 0x282f88: 0x0  nop
    ctx->pc = 0x282f88u;
    // NOP
    // 0x282f8c: 0x0  nop
    ctx->pc = 0x282f8cu;
    // NOP
    ctx->pc = 0x282f90u;
}
