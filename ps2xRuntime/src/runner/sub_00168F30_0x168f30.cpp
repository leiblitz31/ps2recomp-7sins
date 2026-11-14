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

// Function: sub_00168F30
// Address: 0x168f30 - 0x168f70
void sub_00168F30_0x168f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F30_0x168f30");
#endif

    switch (ctx->pc) {
        case 0x168f58u: goto label_168f58;
        default: break;
    }

    ctx->pc = 0x168f30u;

    // 0x168f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x168f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x168f3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x168f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x168f40: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x168f40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x168f44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168f48: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168f4c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x168f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x168f50: 0xc05a3dc  jal         func_168F70
    ctx->pc = 0x168F50u;
    SET_GPR_U32(ctx, 31, 0x168F58u);
    ctx->pc = 0x168F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F70u, 0x168F50u, 0x168F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F58u;
label_168f58:
    // 0x168f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x168f60: 0x3e00008  jr          $ra
    ctx->pc = 0x168F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168F68u;
    // 0x168f68: 0x0  nop
    ctx->pc = 0x168f68u;
    // NOP
    // 0x168f6c: 0x0  nop
    ctx->pc = 0x168f6cu;
    // NOP
    ctx->pc = 0x168f70u;
}
