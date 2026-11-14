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

// Function: sub_0014B6A0
// Address: 0x14b6a0 - 0x14b6f0
void sub_0014B6A0_0x14b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6A0_0x14b6a0");
#endif

    switch (ctx->pc) {
        case 0x14b6c4u: goto label_14b6c4;
        case 0x14b6d4u: goto label_14b6d4;
        default: break;
    }

    ctx->pc = 0x14b6a0u;

    // 0x14b6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b6a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14b6ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14b6b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14b6b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b6b8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b6bc: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x14B6BCu;
    SET_GPR_U32(ctx, 31, 0x14B6C4u);
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x14B6BCu, 0x14B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6C4u;
label_14b6c4:
    // 0x14b6c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6cc: 0xc046fec  jal         func_11BFB0
    ctx->pc = 0x14B6CCu;
    SET_GPR_U32(ctx, 31, 0x14B6D4u);
    ctx->pc = 0x11BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFB0u, 0x14B6CCu, 0x14B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6D4u;
label_14b6d4:
    // 0x14b6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b6d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14b6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6E4u;
    // 0x14b6e4: 0x0  nop
    ctx->pc = 0x14b6e4u;
    // NOP
    // 0x14b6e8: 0x0  nop
    ctx->pc = 0x14b6e8u;
    // NOP
    // 0x14b6ec: 0x0  nop
    ctx->pc = 0x14b6ecu;
    // NOP
    ctx->pc = 0x14b6f0u;
}
