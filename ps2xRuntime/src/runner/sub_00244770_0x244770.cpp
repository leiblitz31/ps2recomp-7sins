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

// Function: sub_00244770
// Address: 0x244770 - 0x2447b0
void sub_00244770_0x244770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244770_0x244770");
#endif

    switch (ctx->pc) {
        case 0x24478cu: goto label_24478c;
        default: break;
    }

    ctx->pc = 0x244770u;

    // 0x244770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x244770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x244774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x244778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24477c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24477cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x244780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x244780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244784: 0xc084ed8  jal         func_213B60
    ctx->pc = 0x244784u;
    SET_GPR_U32(ctx, 31, 0x24478Cu);
    ctx->pc = 0x213B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B60u, 0x244784u, 0x24478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24478Cu;
label_24478c:
    // 0x24478c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24478cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24479c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24479cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2447a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2447A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2447A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2447A8u;
    // 0x2447a8: 0x0  nop
    ctx->pc = 0x2447a8u;
    // NOP
    // 0x2447ac: 0x0  nop
    ctx->pc = 0x2447acu;
    // NOP
    ctx->pc = 0x2447b0u;
}
