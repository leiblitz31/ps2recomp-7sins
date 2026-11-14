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

// Function: sub_00233060
// Address: 0x233060 - 0x2330a0
void sub_00233060_0x233060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233060_0x233060");
#endif

    switch (ctx->pc) {
        case 0x23307cu: goto label_23307c;
        default: break;
    }

    ctx->pc = 0x233060u;

    // 0x233060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x233068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23306c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23306cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x233070: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x233070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233074: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x233074u;
    SET_GPR_U32(ctx, 31, 0x23307Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x233074u, 0x23307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23307Cu;
label_23307c:
    // 0x23307c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23307cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x233080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x233080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23308c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23308cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x233090: 0x3e00008  jr          $ra
    ctx->pc = 0x233090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233098u;
    // 0x233098: 0x0  nop
    ctx->pc = 0x233098u;
    // NOP
    // 0x23309c: 0x0  nop
    ctx->pc = 0x23309cu;
    // NOP
    ctx->pc = 0x2330a0u;
}
