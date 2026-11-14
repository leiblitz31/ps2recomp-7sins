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

// Function: sub_00216830
// Address: 0x216830 - 0x216870
void sub_00216830_0x216830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216830_0x216830");
#endif

    switch (ctx->pc) {
        case 0x216848u: goto label_216848;
        case 0x216858u: goto label_216858;
        default: break;
    }

    ctx->pc = 0x216830u;

    // 0x216830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216838: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x216838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21683c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x21683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x216840: 0xc085a5c  jal         func_216970
    ctx->pc = 0x216840u;
    SET_GPR_U32(ctx, 31, 0x216848u);
    ctx->pc = 0x216970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216970u, 0x216840u, 0x216848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216848u;
label_216848:
    // 0x216848: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21684c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21684cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216850: 0xc085a1c  jal         func_216870
    ctx->pc = 0x216850u;
    SET_GPR_U32(ctx, 31, 0x216858u);
    ctx->pc = 0x216870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216870u, 0x216850u, 0x216858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216858u;
label_216858:
    // 0x216858: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x216858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21685c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216860: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x216860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216864: 0x3e00008  jr          $ra
    ctx->pc = 0x216864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21686Cu;
    // 0x21686c: 0x0  nop
    ctx->pc = 0x21686cu;
    // NOP
    ctx->pc = 0x216870u;
}
