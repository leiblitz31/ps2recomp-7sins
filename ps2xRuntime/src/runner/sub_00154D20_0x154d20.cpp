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

// Function: sub_00154D20
// Address: 0x154d20 - 0x154d60
void sub_00154D20_0x154d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154D20_0x154d20");
#endif

    switch (ctx->pc) {
        case 0x154d3cu: goto label_154d3c;
        default: break;
    }

    ctx->pc = 0x154d20u;

    // 0x154d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x154d2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x154d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154d30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154d34: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x154D34u;
    SET_GPR_U32(ctx, 31, 0x154D3Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x154D34u, 0x154D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D3Cu;
label_154d3c:
    // 0x154d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x154d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154d40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x154d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x154d44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x154d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154d4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154d50: 0x3e00008  jr          $ra
    ctx->pc = 0x154D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154D58u;
    // 0x154d58: 0x0  nop
    ctx->pc = 0x154d58u;
    // NOP
    // 0x154d5c: 0x0  nop
    ctx->pc = 0x154d5cu;
    // NOP
    ctx->pc = 0x154d60u;
}
