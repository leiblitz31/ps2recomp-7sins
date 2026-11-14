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

// Function: sub_00265D50
// Address: 0x265d50 - 0x265da0
void sub_00265D50_0x265d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265D50_0x265d50");
#endif

    switch (ctx->pc) {
        case 0x265d74u: goto label_265d74;
        default: break;
    }

    ctx->pc = 0x265d50u;

    // 0x265d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265d5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x265d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x265d60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x265d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x265d64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x265d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265d6c: 0xc099768  jal         func_265DA0
    ctx->pc = 0x265D6Cu;
    SET_GPR_U32(ctx, 31, 0x265D74u);
    ctx->pc = 0x265DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DA0u, 0x265D6Cu, 0x265D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D74u;
label_265d74:
    // 0x265d74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x265d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265d78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x265d80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265d88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x265d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x265d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x265D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265D94u;
    // 0x265d94: 0x0  nop
    ctx->pc = 0x265d94u;
    // NOP
    // 0x265d98: 0x0  nop
    ctx->pc = 0x265d98u;
    // NOP
    // 0x265d9c: 0x0  nop
    ctx->pc = 0x265d9cu;
    // NOP
    ctx->pc = 0x265da0u;
}
