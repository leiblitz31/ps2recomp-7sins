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

// Function: sub_001A7750
// Address: 0x1a7750 - 0x1a77b0
void sub_001A7750_0x1a7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7750_0x1a7750");
#endif

    switch (ctx->pc) {
        case 0x1a776cu: goto label_1a776c;
        case 0x1a777cu: goto label_1a777c;
        case 0x1a7790u: goto label_1a7790;
        default: break;
    }

    ctx->pc = 0x1a7750u;

    // 0x1a7750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a775c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a775cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a7760: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7764: 0xc069d98  jal         func_1A7660
    ctx->pc = 0x1A7764u;
    SET_GPR_U32(ctx, 31, 0x1A776Cu);
    ctx->pc = 0x1A7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7660u, 0x1A7764u, 0x1A776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A776Cu;
label_1a776c:
    // 0x1a776c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a776cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7770: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a7770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7774: 0xc069e3c  jal         func_1A78F0
    ctx->pc = 0x1A7774u;
    SET_GPR_U32(ctx, 31, 0x1A777Cu);
    ctx->pc = 0x1A78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78F0u, 0x1A7774u, 0x1A777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A777Cu;
label_1a777c:
    // 0x1a777c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7784: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a7784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7788: 0xc069dec  jal         func_1A77B0
    ctx->pc = 0x1A7788u;
    SET_GPR_U32(ctx, 31, 0x1A7790u);
    ctx->pc = 0x1A77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77B0u, 0x1A7788u, 0x1A7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7790u;
label_1a7790:
    // 0x1a7790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a779c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A77A4u;
    // 0x1a77a4: 0x0  nop
    ctx->pc = 0x1a77a4u;
    // NOP
    // 0x1a77a8: 0x0  nop
    ctx->pc = 0x1a77a8u;
    // NOP
    // 0x1a77ac: 0x0  nop
    ctx->pc = 0x1a77acu;
    // NOP
    ctx->pc = 0x1a77b0u;
}
