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

// Function: sub_00218CE0
// Address: 0x218ce0 - 0x218d30
void sub_00218CE0_0x218ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218CE0_0x218ce0");
#endif

    switch (ctx->pc) {
        case 0x218d04u: goto label_218d04;
        case 0x218d14u: goto label_218d14;
        default: break;
    }

    ctx->pc = 0x218ce0u;

    // 0x218ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218cec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218cf0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x218cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x218cf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218cf8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218cfc: 0xc08634c  jal         func_218D30
    ctx->pc = 0x218CFCu;
    SET_GPR_U32(ctx, 31, 0x218D04u);
    ctx->pc = 0x218D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218D30u, 0x218CFCu, 0x218D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D04u;
label_218d04:
    // 0x218d04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d0c: 0xc0861d8  jal         func_218760
    ctx->pc = 0x218D0Cu;
    SET_GPR_U32(ctx, 31, 0x218D14u);
    ctx->pc = 0x218760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218760u, 0x218D0Cu, 0x218D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D14u;
label_218d14:
    // 0x218d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218d18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x218D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218D24u;
    // 0x218d24: 0x0  nop
    ctx->pc = 0x218d24u;
    // NOP
    // 0x218d28: 0x0  nop
    ctx->pc = 0x218d28u;
    // NOP
    // 0x218d2c: 0x0  nop
    ctx->pc = 0x218d2cu;
    // NOP
    ctx->pc = 0x218d30u;
}
