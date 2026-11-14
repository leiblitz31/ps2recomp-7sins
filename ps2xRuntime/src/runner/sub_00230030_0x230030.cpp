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

// Function: sub_00230030
// Address: 0x230030 - 0x2300b0
void sub_00230030_0x230030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230030_0x230030");
#endif

    switch (ctx->pc) {
        case 0x230058u: goto label_230058;
        case 0x230068u: goto label_230068;
        default: break;
    }

    ctx->pc = 0x230030u;

    // 0x230030: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x230034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x230040: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x230040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x230044: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x230044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x230048: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x230048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23004c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x23004cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230050: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x230050u;
    {
        const bool branch_taken_0x230050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230050) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x230058u;
label_230058:
    // 0x230058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23005c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23005cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230060: 0xc08c02c  jal         func_2300B0
    ctx->pc = 0x230060u;
    SET_GPR_U32(ctx, 31, 0x230068u);
    ctx->pc = 0x2300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B0u, 0x230060u, 0x230068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230068u;
label_230068:
    // 0x230068: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23006c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x23006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x230070: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x230070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x230074: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x230078: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x230078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23007c:
    // 0x23007c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230080: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230084: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x230084u;
    {
        const bool branch_taken_0x230084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230084) {
            ctx->pc = 0x230058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230058;
        }
    }
    ctx->pc = 0x23008Cu;
    // 0x23008c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23008cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23009c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23009cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2300a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2300A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2300A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2300A8u;
    // 0x2300a8: 0x0  nop
    ctx->pc = 0x2300a8u;
    // NOP
    // 0x2300ac: 0x0  nop
    ctx->pc = 0x2300acu;
    // NOP
    ctx->pc = 0x2300b0u;
}
