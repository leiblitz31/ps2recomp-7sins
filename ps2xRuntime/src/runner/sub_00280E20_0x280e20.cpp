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

// Function: sub_00280E20
// Address: 0x280e20 - 0x280e70
void sub_00280E20_0x280e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E20_0x280e20");
#endif

    switch (ctx->pc) {
        case 0x280e44u: goto label_280e44;
        case 0x280e54u: goto label_280e54;
        default: break;
    }

    ctx->pc = 0x280e20u;

    // 0x280e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x280e2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x280e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x280e30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x280e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x280e34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280e38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x280e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280e3c: 0xc0a039c  jal         func_280E70
    ctx->pc = 0x280E3Cu;
    SET_GPR_U32(ctx, 31, 0x280E44u);
    ctx->pc = 0x280E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E70u, 0x280E3Cu, 0x280E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E44u;
label_280e44:
    // 0x280e44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280e48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e4c: 0xc0a036c  jal         func_280DB0
    ctx->pc = 0x280E4Cu;
    SET_GPR_U32(ctx, 31, 0x280E54u);
    ctx->pc = 0x280DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280DB0u, 0x280E4Cu, 0x280E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E54u;
label_280e54:
    // 0x280e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x280e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x280E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280E64u;
    // 0x280e64: 0x0  nop
    ctx->pc = 0x280e64u;
    // NOP
    // 0x280e68: 0x0  nop
    ctx->pc = 0x280e68u;
    // NOP
    // 0x280e6c: 0x0  nop
    ctx->pc = 0x280e6cu;
    // NOP
    ctx->pc = 0x280e70u;
}
