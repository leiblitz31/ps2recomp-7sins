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

// Function: sub_0014B570
// Address: 0x14b570 - 0x14b5b0
void sub_0014B570_0x14b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B570_0x14b570");
#endif

    switch (ctx->pc) {
        case 0x14b590u: goto label_14b590;
        case 0x14b5a0u: goto label_14b5a0;
        default: break;
    }

    ctx->pc = 0x14b570u;

    // 0x14b570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b578: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14b578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14b57c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14b580: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b584: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b588: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x14B588u;
    SET_GPR_U32(ctx, 31, 0x14B590u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x14B588u, 0x14B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B590u;
label_14b590:
    // 0x14b590: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b598: 0xc052d6c  jal         func_14B5B0
    ctx->pc = 0x14B598u;
    SET_GPR_U32(ctx, 31, 0x14B5A0u);
    ctx->pc = 0x14B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B5B0u, 0x14B598u, 0x14B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5A0u;
label_14b5a0:
    // 0x14b5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b5a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14b5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B5B0u;
}
