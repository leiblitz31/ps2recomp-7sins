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

// Function: sub_001F8910
// Address: 0x1f8910 - 0x1f8950
void sub_001F8910_0x1f8910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8910_0x1f8910");
#endif

    switch (ctx->pc) {
        case 0x1f8928u: goto label_1f8928;
        case 0x1f8940u: goto label_1f8940;
        default: break;
    }

    ctx->pc = 0x1f8910u;

    // 0x1f8910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f8918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f891c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8920: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8920u;
    SET_GPR_U32(ctx, 31, 0x1F8928u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8920u, 0x1F8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8928u;
label_1f8928:
    // 0x1f8928: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f8928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f892c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8930: 0x8c650240  lw          $a1, 0x240($v1)
    ctx->pc = 0x1f8930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 576)));
    // 0x1f8934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8938: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8938u;
    SET_GPR_U32(ctx, 31, 0x1F8940u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8938u, 0x1F8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8940u;
label_1f8940:
    // 0x1f8940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8944: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8948: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8950u;
}
