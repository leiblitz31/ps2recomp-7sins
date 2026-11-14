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

// Function: sub_0011AAC0
// Address: 0x11aac0 - 0x11ab10
void sub_0011AAC0_0x11aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AAC0_0x11aac0");
#endif

    switch (ctx->pc) {
        case 0x11aaf0u: goto label_11aaf0;
        default: break;
    }

    ctx->pc = 0x11aac0u;

    // 0x11aac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11aacc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11aad0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aad4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aad8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x11aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x11aadc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aae0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x11aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11aae4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aae8: 0xc052594  jal         func_149650
    ctx->pc = 0x11AAE8u;
    SET_GPR_U32(ctx, 31, 0x11AAF0u);
    ctx->pc = 0x149650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149650u, 0x11AAE8u, 0x11AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAF0u;
label_11aaf0:
    // 0x11aaf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aaf4: 0xaf83baa8  sw          $v1, -0x4558($gp)
    ctx->pc = 0x11aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949544), GPR_U32(ctx, 3));
    // 0x11aaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aafc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11aafcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB08u;
    // 0x11ab08: 0x0  nop
    ctx->pc = 0x11ab08u;
    // NOP
    // 0x11ab0c: 0x0  nop
    ctx->pc = 0x11ab0cu;
    // NOP
    ctx->pc = 0x11ab10u;
}
