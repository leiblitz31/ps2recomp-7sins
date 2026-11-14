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

// Function: sub_0010CF30
// Address: 0x10cf30 - 0x10cf70
void sub_0010CF30_0x10cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF30_0x10cf30");
#endif

    switch (ctx->pc) {
        case 0x10cf4cu: goto label_10cf4c;
        default: break;
    }

    ctx->pc = 0x10cf30u;

    // 0x10cf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cf34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cf38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10cf3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cf44: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x10CF44u;
    SET_GPR_U32(ctx, 31, 0x10CF4Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x10CF44u, 0x10CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF4Cu;
label_10cf4c:
    // 0x10cf4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10cf54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10cf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10cf60: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF68u;
    // 0x10cf68: 0x0  nop
    ctx->pc = 0x10cf68u;
    // NOP
    // 0x10cf6c: 0x0  nop
    ctx->pc = 0x10cf6cu;
    // NOP
    ctx->pc = 0x10cf70u;
}
