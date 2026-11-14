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

// Function: sub_0046EEA0
// Address: 0x46eea0 - 0x46eed0
void sub_0046EEA0_0x46eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EEA0_0x46eea0");
#endif

    switch (ctx->pc) {
        case 0x46eeb8u: goto label_46eeb8;
        default: break;
    }

    ctx->pc = 0x46eea0u;

    // 0x46eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46eea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46eea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46eeac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46eeb0: 0xc11a5f4  jal         func_4697D0
    ctx->pc = 0x46EEB0u;
    SET_GPR_U32(ctx, 31, 0x46EEB8u);
    ctx->pc = 0x4697D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4697D0u, 0x46EEB0u, 0x46EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EEB8u;
label_46eeb8:
    // 0x46eeb8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x46eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x46eebc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x46eebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x46eec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46eec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46eec4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46eec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46eec8: 0x3e00008  jr          $ra
    ctx->pc = 0x46EEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46EED0u;
}
