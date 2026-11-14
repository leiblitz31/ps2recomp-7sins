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

// Function: sub_00131640
// Address: 0x131640 - 0x131680
void sub_00131640_0x131640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131640_0x131640");
#endif

    switch (ctx->pc) {
        case 0x13165cu: goto label_13165c;
        default: break;
    }

    ctx->pc = 0x131640u;

    // 0x131640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x131648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13164c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13164cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x131650: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x131650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131654: 0xc04c5a0  jal         func_131680
    ctx->pc = 0x131654u;
    SET_GPR_U32(ctx, 31, 0x13165Cu);
    ctx->pc = 0x131680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131680u, 0x131654u, 0x13165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13165Cu;
label_13165c:
    // 0x13165c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13166c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13166cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131670: 0x3e00008  jr          $ra
    ctx->pc = 0x131670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131678u;
    // 0x131678: 0x0  nop
    ctx->pc = 0x131678u;
    // NOP
    // 0x13167c: 0x0  nop
    ctx->pc = 0x13167cu;
    // NOP
    ctx->pc = 0x131680u;
}
