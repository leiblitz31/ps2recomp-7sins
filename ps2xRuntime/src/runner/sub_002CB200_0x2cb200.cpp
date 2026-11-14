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

// Function: sub_002CB200
// Address: 0x2cb200 - 0x2cb240
void sub_002CB200_0x2cb200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB200_0x2cb200");
#endif

    switch (ctx->pc) {
        case 0x2cb218u: goto label_2cb218;
        case 0x2cb228u: goto label_2cb228;
        default: break;
    }

    ctx->pc = 0x2cb200u;

    // 0x2cb200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb208: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cb208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cb20c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2cb20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2cb210: 0xc0b2cd0  jal         func_2CB340
    ctx->pc = 0x2CB210u;
    SET_GPR_U32(ctx, 31, 0x2CB218u);
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x2CB210u, 0x2CB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB218u;
label_2cb218:
    // 0x2cb218: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb21c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cb21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb220: 0xc0b2c90  jal         func_2CB240
    ctx->pc = 0x2CB220u;
    SET_GPR_U32(ctx, 31, 0x2CB228u);
    ctx->pc = 0x2CB240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB240u, 0x2CB220u, 0x2CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB228u;
label_2cb228:
    // 0x2cb228: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cb228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb234: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB23Cu;
    // 0x2cb23c: 0x0  nop
    ctx->pc = 0x2cb23cu;
    // NOP
    ctx->pc = 0x2cb240u;
}
