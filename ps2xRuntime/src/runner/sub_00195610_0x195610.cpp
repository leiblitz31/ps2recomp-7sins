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

// Function: sub_00195610
// Address: 0x195610 - 0x195660
void sub_00195610_0x195610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195610_0x195610");
#endif

    switch (ctx->pc) {
        case 0x195634u: goto label_195634;
        default: break;
    }

    ctx->pc = 0x195610u;

    // 0x195610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19561c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195620: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195624: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195628: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x195628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19562c: 0xc065598  jal         func_195660
    ctx->pc = 0x19562Cu;
    SET_GPR_U32(ctx, 31, 0x195634u);
    ctx->pc = 0x195660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195660u, 0x19562Cu, 0x195634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195634u;
label_195634:
    // 0x195634: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19563c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19563cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x195640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19564c: 0x3e00008  jr          $ra
    ctx->pc = 0x19564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195654u;
    // 0x195654: 0x0  nop
    ctx->pc = 0x195654u;
    // NOP
    // 0x195658: 0x0  nop
    ctx->pc = 0x195658u;
    // NOP
    // 0x19565c: 0x0  nop
    ctx->pc = 0x19565cu;
    // NOP
    ctx->pc = 0x195660u;
}
