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

// Function: sub_0023CB80
// Address: 0x23cb80 - 0x23cbe0
void sub_0023CB80_0x23cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CB80_0x23cb80");
#endif

    switch (ctx->pc) {
        case 0x23cbb4u: goto label_23cbb4;
        case 0x23cbc0u: goto label_23cbc0;
        default: break;
    }

    ctx->pc = 0x23cb80u;

    // 0x23cb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23cb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23cb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23cb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23cb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23cb90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23cb94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cb98: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x23cb9c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23cba0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cba4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x23cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23cba8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cbac: 0xc04cbfc  jal         func_132FF0
    ctx->pc = 0x23CBACu;
    SET_GPR_U32(ctx, 31, 0x23CBB4u);
    ctx->pc = 0x132FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FF0u, 0x23CBACu, 0x23CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBB4u;
label_23cbb4:
    // 0x23cbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbb8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23CBB8u;
    SET_GPR_U32(ctx, 31, 0x23CBC0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23CBB8u, 0x23CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBC0u;
label_23cbc0:
    // 0x23cbc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cbc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23cbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23cbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cbcc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23cbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x23CBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CBD8u;
    // 0x23cbd8: 0x0  nop
    ctx->pc = 0x23cbd8u;
    // NOP
    // 0x23cbdc: 0x0  nop
    ctx->pc = 0x23cbdcu;
    // NOP
    ctx->pc = 0x23cbe0u;
}
