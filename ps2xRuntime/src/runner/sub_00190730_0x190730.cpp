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

// Function: sub_00190730
// Address: 0x190730 - 0x190770
void sub_00190730_0x190730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190730_0x190730");
#endif

    switch (ctx->pc) {
        case 0x19074cu: goto label_19074c;
        default: break;
    }

    ctx->pc = 0x190730u;

    // 0x190730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19073c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190744: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x190744u;
    SET_GPR_U32(ctx, 31, 0x19074Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x190744u, 0x19074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19074Cu;
label_19074c:
    // 0x19074c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190750: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19075c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190760: 0x3e00008  jr          $ra
    ctx->pc = 0x190760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190768u;
    // 0x190768: 0x0  nop
    ctx->pc = 0x190768u;
    // NOP
    // 0x19076c: 0x0  nop
    ctx->pc = 0x19076cu;
    // NOP
    ctx->pc = 0x190770u;
}
