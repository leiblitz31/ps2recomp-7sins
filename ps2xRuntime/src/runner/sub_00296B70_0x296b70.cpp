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

// Function: sub_00296B70
// Address: 0x296b70 - 0x296ba0
void sub_00296B70_0x296b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296B70_0x296b70");
#endif

    switch (ctx->pc) {
        case 0x296b88u: goto label_296b88;
        default: break;
    }

    ctx->pc = 0x296b70u;

    // 0x296b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x296b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x296b7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x296b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296b80: 0xc05611c  jal         func_158470
    ctx->pc = 0x296B80u;
    SET_GPR_U32(ctx, 31, 0x296B88u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x296B80u, 0x296B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B88u;
label_296b88:
    // 0x296b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296b8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x296b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296b90: 0x3e00008  jr          $ra
    ctx->pc = 0x296B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296B98u;
    // 0x296b98: 0x0  nop
    ctx->pc = 0x296b98u;
    // NOP
    // 0x296b9c: 0x0  nop
    ctx->pc = 0x296b9cu;
    // NOP
    ctx->pc = 0x296ba0u;
}
