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

// Function: sub_00137A90
// Address: 0x137a90 - 0x137b10
void sub_00137A90_0x137a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137A90_0x137a90");
#endif

    switch (ctx->pc) {
        case 0x137ab8u: goto label_137ab8;
        case 0x137ac8u: goto label_137ac8;
        default: break;
    }

    ctx->pc = 0x137a90u;

    // 0x137a90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x137a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137aa0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x137aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x137aa4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x137aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x137aa8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x137aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x137aac: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x137aacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137ab0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x137AB0u;
    {
        const bool branch_taken_0x137ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ab0) {
            ctx->pc = 0x137ADCu;
            goto label_137adc;
        }
    }
    ctx->pc = 0x137AB8u;
label_137ab8:
    // 0x137ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137abc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137ac0: 0xc04dec4  jal         func_137B10
    ctx->pc = 0x137AC0u;
    SET_GPR_U32(ctx, 31, 0x137AC8u);
    ctx->pc = 0x137B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137B10u, 0x137AC0u, 0x137AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AC8u;
label_137ac8:
    // 0x137ac8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x137ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137acc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x137accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x137ad0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x137ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x137ad4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x137ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x137ad8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x137ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137adc:
    // 0x137adc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x137adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137ae0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137ae4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x137AE4u;
    {
        const bool branch_taken_0x137ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137ae4) {
            ctx->pc = 0x137AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ab8;
        }
    }
    ctx->pc = 0x137AECu;
    // 0x137aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x137aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137afc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137b00: 0x3e00008  jr          $ra
    ctx->pc = 0x137B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137B08u;
    // 0x137b08: 0x0  nop
    ctx->pc = 0x137b08u;
    // NOP
    // 0x137b0c: 0x0  nop
    ctx->pc = 0x137b0cu;
    // NOP
    ctx->pc = 0x137b10u;
}
