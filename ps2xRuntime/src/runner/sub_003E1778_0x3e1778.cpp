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

// Function: sub_003E1778
// Address: 0x3e1778 - 0x3e17b0
void sub_003E1778_0x3e1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1778_0x3e1778");
#endif

    switch (ctx->pc) {
        case 0x3e1798u: goto label_3e1798;
        default: break;
    }

    ctx->pc = 0x3e1778u;

    // 0x3e1778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e177c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e177cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1780: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e1784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e178c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1790: 0xc0f82be  jal         func_3E0AF8
    ctx->pc = 0x3E1790u;
    SET_GPR_U32(ctx, 31, 0x3E1798u);
    ctx->pc = 0x3E1794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1790u;
    // 0x3e1794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0AF8u, 0x3E1790u, 0x3E1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1798u;
label_3e1798:
    // 0x3e1798: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x3e1798u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x3e179c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e179cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e17a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e17a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e17a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E17A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E17A4u;
        // 0x3e17a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E17A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E17ACu;
    // 0x3e17ac: 0x0  nop
    ctx->pc = 0x3e17acu;
    // NOP
    ctx->pc = 0x3e17b0u;
}
