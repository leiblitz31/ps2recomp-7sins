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

// Function: sub_00478C60
// Address: 0x478c60 - 0x478ca0
void sub_00478C60_0x478c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478C60_0x478c60");
#endif

    switch (ctx->pc) {
        case 0x478c8cu: goto label_478c8c;
        default: break;
    }

    ctx->pc = 0x478c60u;

    // 0x478c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x478c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x478c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x478c6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x478c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x478c70: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x478c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x478c74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x478c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478c78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x478c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x478c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478c80: 0x83a70030  lb          $a3, 0x30($sp)
    ctx->pc = 0x478c80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478c84: 0xc11e3d8  jal         func_478F60
    ctx->pc = 0x478C84u;
    SET_GPR_U32(ctx, 31, 0x478C8Cu);
    ctx->pc = 0x478F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478F60u, 0x478C84u, 0x478C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478C8Cu;
label_478c8c:
    // 0x478c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478c90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x478c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478c94: 0x3e00008  jr          $ra
    ctx->pc = 0x478C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478C9Cu;
    // 0x478c9c: 0x0  nop
    ctx->pc = 0x478c9cu;
    // NOP
    ctx->pc = 0x478ca0u;
}
