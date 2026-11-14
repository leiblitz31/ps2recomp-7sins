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

// Function: sub_00222390
// Address: 0x222390 - 0x2223c0
void sub_00222390_0x222390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222390_0x222390");
#endif

    switch (ctx->pc) {
        case 0x2223a8u: goto label_2223a8;
        default: break;
    }

    ctx->pc = 0x222390u;

    // 0x222390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22239c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2223a0: 0xc088968  jal         func_2225A0
    ctx->pc = 0x2223A0u;
    SET_GPR_U32(ctx, 31, 0x2223A8u);
    ctx->pc = 0x2225A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225A0u, 0x2223A0u, 0x2223A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223A8u;
label_2223a8:
    // 0x2223a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2223a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2223ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2223acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2223b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2223b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2223b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2223B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2223B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2223BCu;
    // 0x2223bc: 0x0  nop
    ctx->pc = 0x2223bcu;
    // NOP
    ctx->pc = 0x2223c0u;
}
