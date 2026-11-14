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

// Function: sub_001E2A90
// Address: 0x1e2a90 - 0x1e2b40
void sub_001E2A90_0x1e2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2A90_0x1e2a90");
#endif

    switch (ctx->pc) {
        case 0x1e2abcu: goto label_1e2abc;
        case 0x1e2ac8u: goto label_1e2ac8;
        case 0x1e2ad8u: goto label_1e2ad8;
        case 0x1e2ae8u: goto label_1e2ae8;
        case 0x1e2af8u: goto label_1e2af8;
        case 0x1e2b04u: goto label_1e2b04;
        case 0x1e2b10u: goto label_1e2b10;
        case 0x1e2b2cu: goto label_1e2b2c;
        default: break;
    }

    ctx->pc = 0x1e2a90u;

    // 0x1e2a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e2a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2a9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e2aa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e2aa4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e2aa8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e2aac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e2aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2ab0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2ab4: 0xc078af0  jal         func_1E2BC0
    ctx->pc = 0x1E2AB4u;
    SET_GPR_U32(ctx, 31, 0x1E2ABCu);
    ctx->pc = 0x1E2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2BC0u, 0x1E2AB4u, 0x1E2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2ABCu;
label_1e2abc:
    // 0x1e2abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ac0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E2AC0u;
    {
        const bool branch_taken_0x1e2ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ac0) {
            ctx->pc = 0x1E2B14u;
            goto label_1e2b14;
        }
    }
    ctx->pc = 0x1E2AC8u;
label_1e2ac8:
    // 0x1e2ac8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2acc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e2accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2ad0: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E2AD0u;
    SET_GPR_U32(ctx, 31, 0x1E2AD8u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E2AD0u, 0x1E2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2AD8u;
label_1e2ad8:
    // 0x1e2ad8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2adc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e2adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2ae0: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E2AE0u;
    SET_GPR_U32(ctx, 31, 0x1E2AE8u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E2AE0u, 0x1E2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2AE8u;
label_1e2ae8:
    // 0x1e2ae8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2aec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2af0: 0xc078ad0  jal         func_1E2B40
    ctx->pc = 0x1E2AF0u;
    SET_GPR_U32(ctx, 31, 0x1E2AF8u);
    ctx->pc = 0x1E2B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B40u, 0x1E2AF0u, 0x1E2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2AF8u;
label_1e2af8:
    // 0x1e2af8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2afc: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x1E2AFCu;
    SET_GPR_U32(ctx, 31, 0x1E2B04u);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x1E2AFCu, 0x1E2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B04u;
label_1e2b04:
    // 0x1e2b04: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2b08: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x1E2B08u;
    SET_GPR_U32(ctx, 31, 0x1E2B10u);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x1E2B08u, 0x1E2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B10u;
label_1e2b10:
    // 0x1e2b10: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e2b14:
    // 0x1e2b14: 0x1e00ffec  bgtz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E2B14u;
    {
        const bool branch_taken_0x1e2b14 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e2b14) {
            ctx->pc = 0x1E2AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2ac8;
        }
    }
    ctx->pc = 0x1E2B1Cu;
    // 0x1e2b1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2b20: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e2b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2b24: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2B24u;
    SET_GPR_U32(ctx, 31, 0x1E2B2Cu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2B24u, 0x1E2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B2Cu;
label_1e2b2c:
    // 0x1e2b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2b34: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e2b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2B40u;
}
