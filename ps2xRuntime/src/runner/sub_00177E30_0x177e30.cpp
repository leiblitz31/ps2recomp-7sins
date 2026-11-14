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

// Function: sub_00177E30
// Address: 0x177e30 - 0x177e70
void sub_00177E30_0x177e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E30_0x177e30");
#endif

    switch (ctx->pc) {
        case 0x177e60u: goto label_177e60;
        default: break;
    }

    ctx->pc = 0x177e30u;

    // 0x177e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x177e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177e38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177e3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x177e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x177e40: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x177e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x177e44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177e48: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x177e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177e4c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x177e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177e50: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x177e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x177e54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x177e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e58: 0xc05df9c  jal         func_177E70
    ctx->pc = 0x177E58u;
    SET_GPR_U32(ctx, 31, 0x177E60u);
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x177E58u, 0x177E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E60u;
label_177e60:
    // 0x177e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x177e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177e68: 0x3e00008  jr          $ra
    ctx->pc = 0x177E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E70u;
}
