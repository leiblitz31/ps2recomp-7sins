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

// Function: sub_00109960
// Address: 0x109960 - 0x1099a0
void sub_00109960_0x109960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109960_0x109960");
#endif

    switch (ctx->pc) {
        case 0x109978u: goto label_109978;
        case 0x109988u: goto label_109988;
        default: break;
    }

    ctx->pc = 0x109960u;

    // 0x109960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109968: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x109968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10996c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109970: 0xc042668  jal         func_1099A0
    ctx->pc = 0x109970u;
    SET_GPR_U32(ctx, 31, 0x109978u);
    ctx->pc = 0x1099A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1099A0u, 0x109970u, 0x109978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109978u;
label_109978:
    // 0x109978: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x109978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10997c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10997cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109980: 0xc0426fc  jal         func_109BF0
    ctx->pc = 0x109980u;
    SET_GPR_U32(ctx, 31, 0x109988u);
    ctx->pc = 0x109BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BF0u, 0x109980u, 0x109988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109988u;
label_109988:
    // 0x109988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10998c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10998cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x109990: 0x3e00008  jr          $ra
    ctx->pc = 0x109990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109998u;
    // 0x109998: 0x0  nop
    ctx->pc = 0x109998u;
    // NOP
    // 0x10999c: 0x0  nop
    ctx->pc = 0x10999cu;
    // NOP
    ctx->pc = 0x1099a0u;
}
