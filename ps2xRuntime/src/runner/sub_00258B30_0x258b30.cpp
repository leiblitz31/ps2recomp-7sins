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

// Function: sub_00258B30
// Address: 0x258b30 - 0x258b70
void sub_00258B30_0x258b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258B30_0x258b30");
#endif

    switch (ctx->pc) {
        case 0x258b54u: goto label_258b54;
        default: break;
    }

    ctx->pc = 0x258b30u;

    // 0x258b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258b40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258b44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x258b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258b48: 0x27869ee8  addiu       $a2, $gp, -0x6118
    ctx->pc = 0x258b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942440));
    // 0x258b4c: 0xc0962dc  jal         func_258B70
    ctx->pc = 0x258B4Cu;
    SET_GPR_U32(ctx, 31, 0x258B54u);
    ctx->pc = 0x258B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B70u, 0x258B4Cu, 0x258B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B54u;
label_258b54:
    // 0x258b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258b58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x258B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B64u;
    // 0x258b64: 0x0  nop
    ctx->pc = 0x258b64u;
    // NOP
    // 0x258b68: 0x0  nop
    ctx->pc = 0x258b68u;
    // NOP
    // 0x258b6c: 0x0  nop
    ctx->pc = 0x258b6cu;
    // NOP
    ctx->pc = 0x258b70u;
}
