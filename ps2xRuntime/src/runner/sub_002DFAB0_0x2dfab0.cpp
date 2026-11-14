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

// Function: sub_002DFAB0
// Address: 0x2dfab0 - 0x2dfb10
void sub_002DFAB0_0x2dfab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFAB0_0x2dfab0");
#endif

    switch (ctx->pc) {
        case 0x2dfaccu: goto label_2dfacc;
        case 0x2dfadcu: goto label_2dfadc;
        case 0x2dfaf0u: goto label_2dfaf0;
        default: break;
    }

    ctx->pc = 0x2dfab0u;

    // 0x2dfab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dfab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dfab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dfab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dfab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dfabc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2dfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2dfac0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfac4: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2DFAC4u;
    SET_GPR_U32(ctx, 31, 0x2DFACCu);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2DFAC4u, 0x2DFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFACCu;
label_2dfacc:
    // 0x2dfacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfad0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dfad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfad4: 0xc0b7ef0  jal         func_2DFBC0
    ctx->pc = 0x2DFAD4u;
    SET_GPR_U32(ctx, 31, 0x2DFADCu);
    ctx->pc = 0x2DFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBC0u, 0x2DFAD4u, 0x2DFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFADCu;
label_2dfadc:
    // 0x2dfadc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dfae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfae8: 0xc0b7ec4  jal         func_2DFB10
    ctx->pc = 0x2DFAE8u;
    SET_GPR_U32(ctx, 31, 0x2DFAF0u);
    ctx->pc = 0x2DFB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFB10u, 0x2DFAE8u, 0x2DFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAF0u;
label_2dfaf0:
    // 0x2dfaf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dfaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfaf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfaf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dfaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dfafc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFB04u;
    // 0x2dfb04: 0x0  nop
    ctx->pc = 0x2dfb04u;
    // NOP
    // 0x2dfb08: 0x0  nop
    ctx->pc = 0x2dfb08u;
    // NOP
    // 0x2dfb0c: 0x0  nop
    ctx->pc = 0x2dfb0cu;
    // NOP
    ctx->pc = 0x2dfb10u;
}
