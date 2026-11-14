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

// Function: sub_0048E760
// Address: 0x48e760 - 0x48e7b0
void sub_0048E760_0x48e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E760_0x48e760");
#endif

    switch (ctx->pc) {
        case 0x48e784u: goto label_48e784;
        case 0x48e798u: goto label_48e798;
        default: break;
    }

    ctx->pc = 0x48e760u;

    // 0x48e760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48e764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e76c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e770: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x48e770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x48e774: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e778: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48e778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e77c: 0xc1239ec  jal         func_48E7B0
    ctx->pc = 0x48E77Cu;
    SET_GPR_U32(ctx, 31, 0x48E784u);
    ctx->pc = 0x48E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E7B0u, 0x48E77Cu, 0x48E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E784u;
label_48e784:
    // 0x48e784: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48e788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e78c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x48e78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e790: 0xc123900  jal         func_48E400
    ctx->pc = 0x48E790u;
    SET_GPR_U32(ctx, 31, 0x48E798u);
    ctx->pc = 0x48E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E400u, 0x48E790u, 0x48E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E798u;
label_48e798:
    // 0x48e798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e79c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48e79cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48e7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x48E7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E7A8u;
    // 0x48e7a8: 0x0  nop
    ctx->pc = 0x48e7a8u;
    // NOP
    // 0x48e7ac: 0x0  nop
    ctx->pc = 0x48e7acu;
    // NOP
    ctx->pc = 0x48e7b0u;
}
