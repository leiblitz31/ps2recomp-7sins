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

// Function: sub_00254F30
// Address: 0x254f30 - 0x254f70
void sub_00254F30_0x254f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F30_0x254f30");
#endif

    switch (ctx->pc) {
        case 0x254f4cu: goto label_254f4c;
        default: break;
    }

    ctx->pc = 0x254f30u;

    // 0x254f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254f38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254f40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254f44: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x254F44u;
    SET_GPR_U32(ctx, 31, 0x254F4Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x254F44u, 0x254F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F4Cu;
label_254f4c:
    // 0x254f4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x254f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254f50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x254f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x254f54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254f5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254f60: 0x3e00008  jr          $ra
    ctx->pc = 0x254F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F68u;
    // 0x254f68: 0x0  nop
    ctx->pc = 0x254f68u;
    // NOP
    // 0x254f6c: 0x0  nop
    ctx->pc = 0x254f6cu;
    // NOP
    ctx->pc = 0x254f70u;
}
