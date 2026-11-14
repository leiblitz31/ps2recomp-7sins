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

// Function: sub_00248030
// Address: 0x248030 - 0x248080
void sub_00248030_0x248030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248030_0x248030");
#endif

    switch (ctx->pc) {
        case 0x248054u: goto label_248054;
        default: break;
    }

    ctx->pc = 0x248030u;

    // 0x248030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x248038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24803c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24803cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x248040: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x248040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x248044: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248048: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x248048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24804c: 0xc092020  jal         func_248080
    ctx->pc = 0x24804Cu;
    SET_GPR_U32(ctx, 31, 0x248054u);
    ctx->pc = 0x248080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248080u, 0x24804Cu, 0x248054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248054u;
label_248054:
    // 0x248054: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x248054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248058: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24805c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24805cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x248060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248068: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x248068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24806c: 0x3e00008  jr          $ra
    ctx->pc = 0x24806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248074u;
    // 0x248074: 0x0  nop
    ctx->pc = 0x248074u;
    // NOP
    // 0x248078: 0x0  nop
    ctx->pc = 0x248078u;
    // NOP
    // 0x24807c: 0x0  nop
    ctx->pc = 0x24807cu;
    // NOP
    ctx->pc = 0x248080u;
}
