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

// Function: sub_00156770
// Address: 0x156770 - 0x1567b0
void sub_00156770_0x156770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156770_0x156770");
#endif

    switch (ctx->pc) {
        case 0x15678cu: goto label_15678c;
        default: break;
    }

    ctx->pc = 0x156770u;

    // 0x156770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15677c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x156780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156784: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x156784u;
    SET_GPR_U32(ctx, 31, 0x15678Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x156784u, 0x15678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15678Cu;
label_15678c:
    // 0x15678c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15678cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15679c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15679cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1567a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1567A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1567A8u;
    // 0x1567a8: 0x0  nop
    ctx->pc = 0x1567a8u;
    // NOP
    // 0x1567ac: 0x0  nop
    ctx->pc = 0x1567acu;
    // NOP
    ctx->pc = 0x1567b0u;
}
