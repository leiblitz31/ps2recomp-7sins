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

// Function: sub_0023EBB0
// Address: 0x23ebb0 - 0x23ebf0
void sub_0023EBB0_0x23ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EBB0_0x23ebb0");
#endif

    switch (ctx->pc) {
        case 0x23ebccu: goto label_23ebcc;
        default: break;
    }

    ctx->pc = 0x23ebb0u;

    // 0x23ebb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ebb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ebb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ebbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ebc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ebc4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x23EBC4u;
    SET_GPR_U32(ctx, 31, 0x23EBCCu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x23EBC4u, 0x23EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBCCu;
label_23ebcc:
    // 0x23ebcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ebd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23ebd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ebd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ebd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ebdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23ebdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ebe0: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EBE8u;
    // 0x23ebe8: 0x0  nop
    ctx->pc = 0x23ebe8u;
    // NOP
    // 0x23ebec: 0x0  nop
    ctx->pc = 0x23ebecu;
    // NOP
    ctx->pc = 0x23ebf0u;
}
