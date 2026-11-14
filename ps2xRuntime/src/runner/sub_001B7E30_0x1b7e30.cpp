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

// Function: sub_001B7E30
// Address: 0x1b7e30 - 0x1b7ec0
void sub_001B7E30_0x1b7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7E30_0x1b7e30");
#endif

    switch (ctx->pc) {
        case 0x1b7e74u: goto label_1b7e74;
        case 0x1b7e94u: goto label_1b7e94;
        default: break;
    }

    ctx->pc = 0x1b7e30u;

    // 0x1b7e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b7e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b7e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7e3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b7e40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b7e44: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b7e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b7e48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7e4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7e50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7e54: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b7e58: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x1b7e58u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1b7e5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7E5Cu;
    {
        const bool branch_taken_0x1b7e5c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b7e5c) {
            ctx->pc = 0x1B7E6Cu;
            goto label_1b7e6c;
        }
    }
    ctx->pc = 0x1B7E64u;
    // 0x1b7e64: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1b7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1b7e68: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x1b7e68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_1b7e6c:
    // 0x1b7e6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7E6Cu;
    {
        const bool branch_taken_0x1b7e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7e6c) {
            ctx->pc = 0x1B7E98u;
            goto label_1b7e98;
        }
    }
    ctx->pc = 0x1B7E74u;
label_1b7e74:
    // 0x1b7e74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7e78: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x1b7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1b7e7c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b7e80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7e84: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x1b7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1b7e88: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b7e8c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B7E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E94u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B7E8Cu, 0x1B7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E94u;
label_1b7e94:
    // 0x1b7e94: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b7e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b7e98:
    // 0x1b7e98: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B7E98u;
    {
        const bool branch_taken_0x1b7e98 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1b7e98) {
            ctx->pc = 0x1B7E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7EA0u;
    // 0x1b7ea0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7eac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b7eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b7eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7EB8u;
    // 0x1b7eb8: 0x0  nop
    ctx->pc = 0x1b7eb8u;
    // NOP
    // 0x1b7ebc: 0x0  nop
    ctx->pc = 0x1b7ebcu;
    // NOP
    ctx->pc = 0x1b7ec0u;
}
