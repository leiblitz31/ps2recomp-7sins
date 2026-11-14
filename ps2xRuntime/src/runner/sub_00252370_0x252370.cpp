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

// Function: sub_00252370
// Address: 0x252370 - 0x2523d0
void sub_00252370_0x252370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252370_0x252370");
#endif

    switch (ctx->pc) {
        case 0x25238cu: goto label_25238c;
        case 0x25239cu: goto label_25239c;
        case 0x2523b0u: goto label_2523b0;
        default: break;
    }

    ctx->pc = 0x252370u;

    // 0x252370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25237c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x252380: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x252380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252384: 0xc04d364  jal         func_134D90
    ctx->pc = 0x252384u;
    SET_GPR_U32(ctx, 31, 0x25238Cu);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x252384u, 0x25238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25238Cu;
label_25238c:
    // 0x25238c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25238cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252390: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x252390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252394: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x252394u;
    SET_GPR_U32(ctx, 31, 0x25239Cu);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x252394u, 0x25239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25239Cu;
label_25239c:
    // 0x25239c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2523a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2523a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2523a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523a8: 0xc09484c  jal         func_252130
    ctx->pc = 0x2523A8u;
    SET_GPR_U32(ctx, 31, 0x2523B0u);
    ctx->pc = 0x252130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252130u, 0x2523A8u, 0x2523B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523B0u;
label_2523b0:
    // 0x2523b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2523b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2523b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2523b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2523b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2523b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2523bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2523BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2523BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2523C4u;
    // 0x2523c4: 0x0  nop
    ctx->pc = 0x2523c4u;
    // NOP
    // 0x2523c8: 0x0  nop
    ctx->pc = 0x2523c8u;
    // NOP
    // 0x2523cc: 0x0  nop
    ctx->pc = 0x2523ccu;
    // NOP
    ctx->pc = 0x2523d0u;
}
