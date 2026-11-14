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

// Function: sub_002CF800
// Address: 0x2cf800 - 0x2cf840
void sub_002CF800_0x2cf800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF800_0x2cf800");
#endif

    switch (ctx->pc) {
        case 0x2cf818u: goto label_2cf818;
        case 0x2cf828u: goto label_2cf828;
        default: break;
    }

    ctx->pc = 0x2cf800u;

    // 0x2cf800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf80c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf810: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2CF810u;
    SET_GPR_U32(ctx, 31, 0x2CF818u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2CF810u, 0x2CF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF818u;
label_2cf818:
    // 0x2cf818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf81c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cf81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2cf820: 0xc0b3e74  jal         func_2CF9D0
    ctx->pc = 0x2CF820u;
    SET_GPR_U32(ctx, 31, 0x2CF828u);
    ctx->pc = 0x2CF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF9D0u, 0x2CF820u, 0x2CF828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF828u;
label_2cf828:
    // 0x2cf828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf830: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cf830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cf834: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF83Cu;
    // 0x2cf83c: 0x0  nop
    ctx->pc = 0x2cf83cu;
    // NOP
    ctx->pc = 0x2cf840u;
}
