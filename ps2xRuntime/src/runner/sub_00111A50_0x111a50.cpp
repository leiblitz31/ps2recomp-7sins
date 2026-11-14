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

// Function: sub_00111A50
// Address: 0x111a50 - 0x111a90
void sub_00111A50_0x111a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111A50_0x111a50");
#endif

    switch (ctx->pc) {
        case 0x111a68u: goto label_111a68;
        case 0x111a78u: goto label_111a78;
        default: break;
    }

    ctx->pc = 0x111a50u;

    // 0x111a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111a58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x111a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x111a5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x111a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111a60: 0xc0446ac  jal         func_111AB0
    ctx->pc = 0x111A60u;
    SET_GPR_U32(ctx, 31, 0x111A68u);
    ctx->pc = 0x111AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AB0u, 0x111A60u, 0x111A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A68u;
label_111a68:
    // 0x111a68: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x111a6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a70: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x111A70u;
    SET_GPR_U32(ctx, 31, 0x111A78u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x111A70u, 0x111A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A78u;
label_111a78:
    // 0x111a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111a80: 0x3e00008  jr          $ra
    ctx->pc = 0x111A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111A88u;
    // 0x111a88: 0x0  nop
    ctx->pc = 0x111a88u;
    // NOP
    // 0x111a8c: 0x0  nop
    ctx->pc = 0x111a8cu;
    // NOP
    ctx->pc = 0x111a90u;
}
