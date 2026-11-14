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

// Function: sub_0028AF20
// Address: 0x28af20 - 0x28af70
void sub_0028AF20_0x28af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AF20_0x28af20");
#endif

    switch (ctx->pc) {
        case 0x28af44u: goto label_28af44;
        default: break;
    }

    ctx->pc = 0x28af20u;

    // 0x28af20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28af24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28af28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28af28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28af2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28af30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28af30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28af34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28af34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28af38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28af38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28af3c: 0xc0a2bdc  jal         func_28AF70
    ctx->pc = 0x28AF3Cu;
    SET_GPR_U32(ctx, 31, 0x28AF44u);
    ctx->pc = 0x28AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF70u, 0x28AF3Cu, 0x28AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF44u;
label_28af44:
    // 0x28af44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28af44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28af48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28af4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28af50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28af54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28af54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28af58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AF64u;
    // 0x28af64: 0x0  nop
    ctx->pc = 0x28af64u;
    // NOP
    // 0x28af68: 0x0  nop
    ctx->pc = 0x28af68u;
    // NOP
    // 0x28af6c: 0x0  nop
    ctx->pc = 0x28af6cu;
    // NOP
    ctx->pc = 0x28af70u;
}
