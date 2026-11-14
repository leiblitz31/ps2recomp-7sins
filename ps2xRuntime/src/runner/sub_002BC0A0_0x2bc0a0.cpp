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

// Function: sub_002BC0A0
// Address: 0x2bc0a0 - 0x2bc0f0
void sub_002BC0A0_0x2bc0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC0A0_0x2bc0a0");
#endif

    switch (ctx->pc) {
        case 0x2bc0d8u: goto label_2bc0d8;
        default: break;
    }

    ctx->pc = 0x2bc0a0u;

    // 0x2bc0a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bc0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bc0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc0a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bc0ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bc0b0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x2bc0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bc0b4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2bc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2bc0b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc0bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc0c0: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x2bc0c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc0c4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc0c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bc0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bc0ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0d0: 0xc0af078  jal         func_2BC1E0
    ctx->pc = 0x2BC0D0u;
    SET_GPR_U32(ctx, 31, 0x2BC0D8u);
    ctx->pc = 0x2BC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC1E0u, 0x2BC0D0u, 0x2BC0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0D8u;
label_2bc0d8:
    // 0x2bc0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc0dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bc0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC0E8u;
    // 0x2bc0e8: 0x0  nop
    ctx->pc = 0x2bc0e8u;
    // NOP
    // 0x2bc0ec: 0x0  nop
    ctx->pc = 0x2bc0ecu;
    // NOP
    ctx->pc = 0x2bc0f0u;
}
