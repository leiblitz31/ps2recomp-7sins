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

// Function: sub_001118B0
// Address: 0x1118b0 - 0x111900
void sub_001118B0_0x1118b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001118B0_0x1118b0");
#endif

    switch (ctx->pc) {
        case 0x1118d4u: goto label_1118d4;
        case 0x1118e4u: goto label_1118e4;
        default: break;
    }

    ctx->pc = 0x1118b0u;

    // 0x1118b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1118b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1118b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1118b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1118b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1118b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1118bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1118bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1118c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1118c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1118c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1118c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1118c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1118c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1118cc: 0xc044640  jal         func_111900
    ctx->pc = 0x1118CCu;
    SET_GPR_U32(ctx, 31, 0x1118D4u);
    ctx->pc = 0x111900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111900u, 0x1118CCu, 0x1118D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118D4u;
label_1118d4:
    // 0x1118d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1118d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1118d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1118d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1118dc: 0xc043980  jal         func_10E600
    ctx->pc = 0x1118DCu;
    SET_GPR_U32(ctx, 31, 0x1118E4u);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x1118DCu, 0x1118E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118E4u;
label_1118e4:
    // 0x1118e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1118e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1118e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1118e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1118ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1118ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1118ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1118F4u;
    // 0x1118f4: 0x0  nop
    ctx->pc = 0x1118f4u;
    // NOP
    // 0x1118f8: 0x0  nop
    ctx->pc = 0x1118f8u;
    // NOP
    // 0x1118fc: 0x0  nop
    ctx->pc = 0x1118fcu;
    // NOP
    ctx->pc = 0x111900u;
}
