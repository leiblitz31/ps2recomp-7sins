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

// Function: sub_004809B0
// Address: 0x4809b0 - 0x4809f0
void sub_004809B0_0x4809b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004809B0_0x4809b0");
#endif

    switch (ctx->pc) {
        case 0x4809c0u: goto label_4809c0;
        case 0x4809d8u: goto label_4809d8;
        default: break;
    }

    ctx->pc = 0x4809b0u;

    // 0x4809b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4809b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4809b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4809b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4809b8: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x4809B8u;
    SET_GPR_U32(ctx, 31, 0x4809C0u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x4809B8u, 0x4809C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4809C0u;
label_4809c0:
    // 0x4809c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4809c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4809c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4809c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4809c8: 0x24a509f0  addiu       $a1, $a1, 0x9F0
    ctx->pc = 0x4809c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2544));
    // 0x4809cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4809ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4809d0: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x4809D0u;
    SET_GPR_U32(ctx, 31, 0x4809D8u);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x4809D0u, 0x4809D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4809D8u;
label_4809d8:
    // 0x4809d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4809d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4809dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4809dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4809e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4809E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4809E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4809E8u;
    // 0x4809e8: 0x0  nop
    ctx->pc = 0x4809e8u;
    // NOP
    // 0x4809ec: 0x0  nop
    ctx->pc = 0x4809ecu;
    // NOP
    ctx->pc = 0x4809f0u;
}
