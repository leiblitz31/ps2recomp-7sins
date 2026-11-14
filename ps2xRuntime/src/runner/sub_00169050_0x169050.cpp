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

// Function: sub_00169050
// Address: 0x169050 - 0x169090
void sub_00169050_0x169050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169050_0x169050");
#endif

    switch (ctx->pc) {
        case 0x169074u: goto label_169074;
        default: break;
    }

    ctx->pc = 0x169050u;

    // 0x169050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x169058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16905c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x169060: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169064: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x169064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16906c: 0xc05a424  jal         func_169090
    ctx->pc = 0x16906Cu;
    SET_GPR_U32(ctx, 31, 0x169074u);
    ctx->pc = 0x169090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169090u, 0x16906Cu, 0x169074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169074u;
label_169074:
    // 0x169074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169078: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x169078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16907c: 0x3e00008  jr          $ra
    ctx->pc = 0x16907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169084u;
    // 0x169084: 0x0  nop
    ctx->pc = 0x169084u;
    // NOP
    // 0x169088: 0x0  nop
    ctx->pc = 0x169088u;
    // NOP
    // 0x16908c: 0x0  nop
    ctx->pc = 0x16908cu;
    // NOP
    ctx->pc = 0x169090u;
}
