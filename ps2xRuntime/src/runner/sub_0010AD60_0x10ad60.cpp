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

// Function: sub_0010AD60
// Address: 0x10ad60 - 0x10ada0
void sub_0010AD60_0x10ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AD60_0x10ad60");
#endif

    switch (ctx->pc) {
        case 0x10ad7cu: goto label_10ad7c;
        default: break;
    }

    ctx->pc = 0x10ad60u;

    // 0x10ad60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ad64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ad68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ad6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ad70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ad74: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x10AD74u;
    SET_GPR_U32(ctx, 31, 0x10AD7Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x10AD74u, 0x10AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD7Cu;
label_10ad7c:
    // 0x10ad7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ad80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10ad84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ad88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ad8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10ad8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10ad90: 0x3e00008  jr          $ra
    ctx->pc = 0x10AD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AD98u;
    // 0x10ad98: 0x0  nop
    ctx->pc = 0x10ad98u;
    // NOP
    // 0x10ad9c: 0x0  nop
    ctx->pc = 0x10ad9cu;
    // NOP
    ctx->pc = 0x10ada0u;
}
