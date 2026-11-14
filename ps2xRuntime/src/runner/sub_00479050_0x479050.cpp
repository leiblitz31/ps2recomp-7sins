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

// Function: sub_00479050
// Address: 0x479050 - 0x4790a0
void sub_00479050_0x479050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479050_0x479050");
#endif

    switch (ctx->pc) {
        case 0x479084u: goto label_479084;
        default: break;
    }

    ctx->pc = 0x479050u;

    // 0x479050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x479050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x479054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x479058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47905c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x479060: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x479060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x479064: 0xa3a70040  sb          $a3, 0x40($sp)
    ctx->pc = 0x479064u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 7));
    // 0x479068: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x479068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47906c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x47906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479070: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x479070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x479074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479078: 0x83a80040  lb          $t0, 0x40($sp)
    ctx->pc = 0x479078u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47907c: 0xc11e550  jal         func_479540
    ctx->pc = 0x47907Cu;
    SET_GPR_U32(ctx, 31, 0x479084u);
    ctx->pc = 0x479540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479540u, 0x47907Cu, 0x479084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479084u;
label_479084:
    // 0x479084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479088: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x479088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47908c: 0x3e00008  jr          $ra
    ctx->pc = 0x47908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479094u;
    // 0x479094: 0x0  nop
    ctx->pc = 0x479094u;
    // NOP
    // 0x479098: 0x0  nop
    ctx->pc = 0x479098u;
    // NOP
    // 0x47909c: 0x0  nop
    ctx->pc = 0x47909cu;
    // NOP
    ctx->pc = 0x4790a0u;
}
