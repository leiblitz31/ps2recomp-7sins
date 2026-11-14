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

// Function: sub_00256A30
// Address: 0x256a30 - 0x256a80
void sub_00256A30_0x256a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256A30_0x256a30");
#endif

    switch (ctx->pc) {
        case 0x256a58u: goto label_256a58;
        case 0x256a6cu: goto label_256a6c;
        default: break;
    }

    ctx->pc = 0x256a30u;

    // 0x256a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x256a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x256a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256a38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x256a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x256a3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x256a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x256a40: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x256a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x256a44: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x256a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x256a48: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x256a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256a4c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x256a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256a50: 0xc095d58  jal         func_257560
    ctx->pc = 0x256A50u;
    SET_GPR_U32(ctx, 31, 0x256A58u);
    ctx->pc = 0x257560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257560u, 0x256A50u, 0x256A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A58u;
label_256a58:
    // 0x256a58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x256a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a5c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x256a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x256a60: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x256a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x256a64: 0xc095aa0  jal         func_256A80
    ctx->pc = 0x256A64u;
    SET_GPR_U32(ctx, 31, 0x256A6Cu);
    ctx->pc = 0x256A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A80u, 0x256A64u, 0x256A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A6Cu;
label_256a6c:
    // 0x256a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256a70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x256a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256a74: 0x3e00008  jr          $ra
    ctx->pc = 0x256A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A7Cu;
    // 0x256a7c: 0x0  nop
    ctx->pc = 0x256a7cu;
    // NOP
    ctx->pc = 0x256a80u;
}
