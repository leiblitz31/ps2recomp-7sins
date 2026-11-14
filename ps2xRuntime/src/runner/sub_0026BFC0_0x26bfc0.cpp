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

// Function: sub_0026BFC0
// Address: 0x26bfc0 - 0x26c040
void sub_0026BFC0_0x26bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BFC0_0x26bfc0");
#endif

    switch (ctx->pc) {
        case 0x26bfe8u: goto label_26bfe8;
        case 0x26bff8u: goto label_26bff8;
        default: break;
    }

    ctx->pc = 0x26bfc0u;

    // 0x26bfc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26bfc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26bfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bfd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26bfd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26bfd8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x26bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x26bfdc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bfe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26BFE0u;
    {
        const bool branch_taken_0x26bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfe0) {
            ctx->pc = 0x26C00Cu;
            goto label_26c00c;
        }
    }
    ctx->pc = 0x26BFE8u;
label_26bfe8:
    // 0x26bfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bff0: 0xc09b010  jal         func_26C040
    ctx->pc = 0x26BFF0u;
    SET_GPR_U32(ctx, 31, 0x26BFF8u);
    ctx->pc = 0x26C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C040u, 0x26BFF0u, 0x26BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFF8u;
label_26bff8:
    // 0x26bff8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bffc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x26bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x26c000: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x26c000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x26c004: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x26c004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x26c008: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x26c008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c00c:
    // 0x26c00c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c010: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c014: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26C014u;
    {
        const bool branch_taken_0x26c014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c014) {
            ctx->pc = 0x26BFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bfe8;
        }
    }
    ctx->pc = 0x26C01Cu;
    // 0x26c01c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26c01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c02c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26c02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26c030: 0x3e00008  jr          $ra
    ctx->pc = 0x26C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C038u;
    // 0x26c038: 0x0  nop
    ctx->pc = 0x26c038u;
    // NOP
    // 0x26c03c: 0x0  nop
    ctx->pc = 0x26c03cu;
    // NOP
    ctx->pc = 0x26c040u;
}
