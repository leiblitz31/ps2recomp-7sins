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

// Function: sub_0010E630
// Address: 0x10e630 - 0x10e670
void sub_0010E630_0x10e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E630_0x10e630");
#endif

    switch (ctx->pc) {
        case 0x10e64cu: goto label_10e64c;
        default: break;
    }

    ctx->pc = 0x10e630u;

    // 0x10e630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e63c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e640: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10e640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e644: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x10E644u;
    SET_GPR_U32(ctx, 31, 0x10E64Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x10E644u, 0x10E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E64Cu;
label_10e64c:
    // 0x10e64c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e650: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10e650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10e654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e65c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e660: 0x3e00008  jr          $ra
    ctx->pc = 0x10E660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E668u;
    // 0x10e668: 0x0  nop
    ctx->pc = 0x10e668u;
    // NOP
    // 0x10e66c: 0x0  nop
    ctx->pc = 0x10e66cu;
    // NOP
    ctx->pc = 0x10e670u;
}
