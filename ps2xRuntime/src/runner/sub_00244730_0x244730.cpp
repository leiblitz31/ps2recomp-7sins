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

// Function: sub_00244730
// Address: 0x244730 - 0x244770
void sub_00244730_0x244730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244730_0x244730");
#endif

    switch (ctx->pc) {
        case 0x24474cu: goto label_24474c;
        default: break;
    }

    ctx->pc = 0x244730u;

    // 0x244730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x244738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24473c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x244740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x244740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244744: 0xc084ed8  jal         func_213B60
    ctx->pc = 0x244744u;
    SET_GPR_U32(ctx, 31, 0x24474Cu);
    ctx->pc = 0x213B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B60u, 0x244744u, 0x24474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24474Cu;
label_24474c:
    // 0x24474c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24474cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24475c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24475cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x244760: 0x3e00008  jr          $ra
    ctx->pc = 0x244760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244768u;
    // 0x244768: 0x0  nop
    ctx->pc = 0x244768u;
    // NOP
    // 0x24476c: 0x0  nop
    ctx->pc = 0x24476cu;
    // NOP
    ctx->pc = 0x244770u;
}
