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

// Function: sub_0017BAE0
// Address: 0x17bae0 - 0x17bb20
void sub_0017BAE0_0x17bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BAE0_0x17bae0");
#endif

    switch (ctx->pc) {
        case 0x17baf8u: goto label_17baf8;
        case 0x17bb08u: goto label_17bb08;
        default: break;
    }

    ctx->pc = 0x17bae0u;

    // 0x17bae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bae8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17baec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x17baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17baf0: 0xc05ef08  jal         func_17BC20
    ctx->pc = 0x17BAF0u;
    SET_GPR_U32(ctx, 31, 0x17BAF8u);
    ctx->pc = 0x17BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC20u, 0x17BAF0u, 0x17BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAF8u;
label_17baf8:
    // 0x17baf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb00: 0xc05eec8  jal         func_17BB20
    ctx->pc = 0x17BB00u;
    SET_GPR_U32(ctx, 31, 0x17BB08u);
    ctx->pc = 0x17BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB20u, 0x17BB00u, 0x17BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB08u;
label_17bb08:
    // 0x17bb08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bb0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bb14: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB1Cu;
    // 0x17bb1c: 0x0  nop
    ctx->pc = 0x17bb1cu;
    // NOP
    ctx->pc = 0x17bb20u;
}
