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

// Function: sub_00278F30
// Address: 0x278f30 - 0x278f70
void sub_00278F30_0x278f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278F30_0x278f30");
#endif

    switch (ctx->pc) {
        case 0x278f48u: goto label_278f48;
        case 0x278f58u: goto label_278f58;
        default: break;
    }

    ctx->pc = 0x278f30u;

    // 0x278f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278f38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x278f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x278f3c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x278f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x278f40: 0xc09e41c  jal         func_279070
    ctx->pc = 0x278F40u;
    SET_GPR_U32(ctx, 31, 0x278F48u);
    ctx->pc = 0x279070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279070u, 0x278F40u, 0x278F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F48u;
label_278f48:
    // 0x278f48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x278f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x278f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f50: 0xc09e3dc  jal         func_278F70
    ctx->pc = 0x278F50u;
    SET_GPR_U32(ctx, 31, 0x278F58u);
    ctx->pc = 0x278F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278F70u, 0x278F50u, 0x278F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F58u;
label_278f58:
    // 0x278f58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278f64: 0x3e00008  jr          $ra
    ctx->pc = 0x278F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278F6Cu;
    // 0x278f6c: 0x0  nop
    ctx->pc = 0x278f6cu;
    // NOP
    ctx->pc = 0x278f70u;
}
