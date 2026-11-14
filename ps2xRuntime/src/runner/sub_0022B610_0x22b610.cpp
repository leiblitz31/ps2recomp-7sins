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

// Function: sub_0022B610
// Address: 0x22b610 - 0x22b640
void sub_0022B610_0x22b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B610_0x22b610");
#endif

    switch (ctx->pc) {
        case 0x22b62cu: goto label_22b62c;
        default: break;
    }

    ctx->pc = 0x22b610u;

    // 0x22b610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22b618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22b61c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b620: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b624: 0xc08a824  jal         func_22A090
    ctx->pc = 0x22B624u;
    SET_GPR_U32(ctx, 31, 0x22B62Cu);
    ctx->pc = 0x22A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A090u, 0x22B624u, 0x22B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B62Cu;
label_22b62c:
    // 0x22b62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22b634: 0x3e00008  jr          $ra
    ctx->pc = 0x22B634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B63Cu;
    // 0x22b63c: 0x0  nop
    ctx->pc = 0x22b63cu;
    // NOP
    ctx->pc = 0x22b640u;
}
