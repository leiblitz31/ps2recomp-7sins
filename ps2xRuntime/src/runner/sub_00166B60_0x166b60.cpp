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

// Function: sub_00166B60
// Address: 0x166b60 - 0x166ba0
void sub_00166B60_0x166b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166B60_0x166b60");
#endif

    switch (ctx->pc) {
        case 0x166b78u: goto label_166b78;
        case 0x166b88u: goto label_166b88;
        default: break;
    }

    ctx->pc = 0x166b60u;

    // 0x166b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166b68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x166b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x166b6c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x166b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x166b70: 0xc059b28  jal         func_166CA0
    ctx->pc = 0x166B70u;
    SET_GPR_U32(ctx, 31, 0x166B78u);
    ctx->pc = 0x166CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166CA0u, 0x166B70u, 0x166B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B78u;
label_166b78:
    // 0x166b78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x166b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b80: 0xc059ae8  jal         func_166BA0
    ctx->pc = 0x166B80u;
    SET_GPR_U32(ctx, 31, 0x166B88u);
    ctx->pc = 0x166BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166BA0u, 0x166B80u, 0x166B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B88u;
label_166b88:
    // 0x166b88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x166b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x166b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x166b94: 0x3e00008  jr          $ra
    ctx->pc = 0x166B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B9Cu;
    // 0x166b9c: 0x0  nop
    ctx->pc = 0x166b9cu;
    // NOP
    ctx->pc = 0x166ba0u;
}
