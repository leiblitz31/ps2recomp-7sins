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

// Function: sub_002CAD70
// Address: 0x2cad70 - 0x2cadf0
void sub_002CAD70_0x2cad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD70_0x2cad70");
#endif

    switch (ctx->pc) {
        case 0x2cad98u: goto label_2cad98;
        case 0x2cada8u: goto label_2cada8;
        default: break;
    }

    ctx->pc = 0x2cad70u;

    // 0x2cad70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cad74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cad78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cad7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cad80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2cad80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2cad84: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cad84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2cad88: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2cad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2cad8c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x2cad8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cad90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CAD90u;
    {
        const bool branch_taken_0x2cad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad90) {
            ctx->pc = 0x2CADBCu;
            goto label_2cadbc;
        }
    }
    ctx->pc = 0x2CAD98u;
label_2cad98:
    // 0x2cad98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad9c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2cad9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cada0: 0xc09b010  jal         func_26C040
    ctx->pc = 0x2CADA0u;
    SET_GPR_U32(ctx, 31, 0x2CADA8u);
    ctx->pc = 0x26C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C040u, 0x2CADA0u, 0x2CADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADA8u;
label_2cada8:
    // 0x2cada8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cadac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2cadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2cadb0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2cadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2cadb4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2cadb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2cadb8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2cadb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cadbc:
    // 0x2cadbc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2cadbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cadc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cadc4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CADC4u;
    {
        const bool branch_taken_0x2cadc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cadc4) {
            ctx->pc = 0x2CAD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cad98;
        }
    }
    ctx->pc = 0x2CADCCu;
    // 0x2cadcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cadccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cadd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cadd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cadd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cadd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cadd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caddc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2caddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cade0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CADE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CADE8u;
    // 0x2cade8: 0x0  nop
    ctx->pc = 0x2cade8u;
    // NOP
    // 0x2cadec: 0x0  nop
    ctx->pc = 0x2cadecu;
    // NOP
    ctx->pc = 0x2cadf0u;
}
