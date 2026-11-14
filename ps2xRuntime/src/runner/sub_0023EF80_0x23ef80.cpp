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

// Function: sub_0023EF80
// Address: 0x23ef80 - 0x23efd0
void sub_0023EF80_0x23ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EF80_0x23ef80");
#endif

    switch (ctx->pc) {
        case 0x23efa4u: goto label_23efa4;
        default: break;
    }

    ctx->pc = 0x23ef80u;

    // 0x23ef80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23ef84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ef88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ef88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ef8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23ef90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23ef94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ef98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ef9c: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23EF9Cu;
    SET_GPR_U32(ctx, 31, 0x23EFA4u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23EF9Cu, 0x23EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFA4u;
label_23efa4:
    // 0x23efa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23efa8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23efa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23efac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23efb0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x23efb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x23efb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23efb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23efb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23efbc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23efbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x23EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EFC8u;
    // 0x23efc8: 0x0  nop
    ctx->pc = 0x23efc8u;
    // NOP
    // 0x23efcc: 0x0  nop
    ctx->pc = 0x23efccu;
    // NOP
    ctx->pc = 0x23efd0u;
}
