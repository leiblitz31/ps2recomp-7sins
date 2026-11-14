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

// Function: sub_00166BE0
// Address: 0x166be0 - 0x166c30
void sub_00166BE0_0x166be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166BE0_0x166be0");
#endif

    switch (ctx->pc) {
        case 0x166c18u: goto label_166c18;
        default: break;
    }

    ctx->pc = 0x166be0u;

    // 0x166be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x166be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x166bec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x166becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x166bf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x166bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x166bf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bfc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x166bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x166c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c04: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x166c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x166c08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c10: 0xc059b0c  jal         func_166C30
    ctx->pc = 0x166C10u;
    SET_GPR_U32(ctx, 31, 0x166C18u);
    ctx->pc = 0x166C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C30u, 0x166C10u, 0x166C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C18u;
label_166c18:
    // 0x166c18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x166c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x166c24: 0x3e00008  jr          $ra
    ctx->pc = 0x166C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166C2Cu;
    // 0x166c2c: 0x0  nop
    ctx->pc = 0x166c2cu;
    // NOP
    ctx->pc = 0x166c30u;
}
