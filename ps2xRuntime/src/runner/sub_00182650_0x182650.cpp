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

// Function: sub_00182650
// Address: 0x182650 - 0x182690
void sub_00182650_0x182650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182650_0x182650");
#endif

    switch (ctx->pc) {
        case 0x182674u: goto label_182674;
        default: break;
    }

    ctx->pc = 0x182650u;

    // 0x182650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18265c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18265cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x182660: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182664: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182668: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x182668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18266c: 0xc05629c  jal         func_158A70
    ctx->pc = 0x18266Cu;
    SET_GPR_U32(ctx, 31, 0x182674u);
    ctx->pc = 0x158A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A70u, 0x18266Cu, 0x182674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182674u;
label_182674:
    // 0x182674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182678: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18267c: 0x3e00008  jr          $ra
    ctx->pc = 0x18267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182684u;
    // 0x182684: 0x0  nop
    ctx->pc = 0x182684u;
    // NOP
    // 0x182688: 0x0  nop
    ctx->pc = 0x182688u;
    // NOP
    // 0x18268c: 0x0  nop
    ctx->pc = 0x18268cu;
    // NOP
    ctx->pc = 0x182690u;
}
