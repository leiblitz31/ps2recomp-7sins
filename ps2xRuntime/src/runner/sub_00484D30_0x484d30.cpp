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

// Function: sub_00484D30
// Address: 0x484d30 - 0x484d70
void sub_00484D30_0x484d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484D30_0x484d30");
#endif

    switch (ctx->pc) {
        case 0x484d58u: goto label_484d58;
        default: break;
    }

    ctx->pc = 0x484d30u;

    // 0x484d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x484d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x484d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x484d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x484d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x484d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x484d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x484d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x484d40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x484d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x484d44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x484d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484d48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x484d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x484d4c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x484d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x484d50: 0xc120e60  jal         func_483980
    ctx->pc = 0x484D50u;
    SET_GPR_U32(ctx, 31, 0x484D58u);
    ctx->pc = 0x483980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483980u, 0x484D50u, 0x484D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D58u;
label_484d58:
    // 0x484d58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x484d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484d60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x484d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x484d64: 0x3e00008  jr          $ra
    ctx->pc = 0x484D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484D6Cu;
    // 0x484d6c: 0x0  nop
    ctx->pc = 0x484d6cu;
    // NOP
    ctx->pc = 0x484d70u;
}
