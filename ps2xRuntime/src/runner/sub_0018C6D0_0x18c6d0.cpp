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

// Function: sub_0018C6D0
// Address: 0x18c6d0 - 0x18c720
void sub_0018C6D0_0x18c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C6D0_0x18c6d0");
#endif

    switch (ctx->pc) {
        case 0x18c6f4u: goto label_18c6f4;
        default: break;
    }

    ctx->pc = 0x18c6d0u;

    // 0x18c6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18c6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c6dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c6e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x18c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x18c6e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c6e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c6ec: 0xc0631c8  jal         func_18C720
    ctx->pc = 0x18C6ECu;
    SET_GPR_U32(ctx, 31, 0x18C6F4u);
    ctx->pc = 0x18C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C720u, 0x18C6ECu, 0x18C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6F4u;
label_18c6f4:
    // 0x18c6f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c6f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c6fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c708: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C714u;
    // 0x18c714: 0x0  nop
    ctx->pc = 0x18c714u;
    // NOP
    // 0x18c718: 0x0  nop
    ctx->pc = 0x18c718u;
    // NOP
    // 0x18c71c: 0x0  nop
    ctx->pc = 0x18c71cu;
    // NOP
    ctx->pc = 0x18c720u;
}
