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

// Function: sub_001ECB80
// Address: 0x1ecb80 - 0x1ecc20
void sub_001ECB80_0x1ecb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB80_0x1ecb80");
#endif

    switch (ctx->pc) {
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbf0u: goto label_1ecbf0;
        default: break;
    }

    ctx->pc = 0x1ecb80u;

    // 0x1ecb80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ecb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ecb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ecb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecb90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1ecb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1ecb94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ecb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ecb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecb9c: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ecb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ecba0: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1ECBA0u;
    SET_GPR_U32(ctx, 31, 0x1ECBA8u);
    ctx->pc = 0x1EB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB020u, 0x1ECBA0u, 0x1ECBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBA8u;
label_1ecba8:
    // 0x1ecba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ECBACu;
    {
        const bool branch_taken_0x1ecbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbac) {
            ctx->pc = 0x1ECBE0u;
            goto label_1ecbe0;
        }
    }
    ctx->pc = 0x1ECBB4u;
label_1ecbb4:
    // 0x1ecbb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecbb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECBB8u;
    {
        const bool branch_taken_0x1ecbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbb8) {
            ctx->pc = 0x1ECBDCu;
            goto label_1ecbdc;
        }
    }
    ctx->pc = 0x1ECBC0u;
    // 0x1ecbc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecbc4: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1ecbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ecbc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ecbcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecbd0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECBD0u;
    {
        const bool branch_taken_0x1ecbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecbd0) {
            ctx->pc = 0x1ECBDCu;
            goto label_1ecbdc;
        }
    }
    ctx->pc = 0x1ECBD8u;
    // 0x1ecbd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ecbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ecbdc:
    // 0x1ecbdc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ecbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ecbe0:
    // 0x1ecbe0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecbe4: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ecbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ecbe8: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1ECBE8u;
    SET_GPR_U32(ctx, 31, 0x1ECBF0u);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1ECBE8u, 0x1ECBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBF0u;
label_1ecbf0:
    // 0x1ecbf0: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1ECBF0u;
    {
        const bool branch_taken_0x1ecbf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecbf0) {
            ctx->pc = 0x1ECBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecbb4;
        }
    }
    ctx->pc = 0x1ECBF8u;
    // 0x1ecbf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ecbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecc00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecc00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecc08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ecc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ecc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECC14u;
    // 0x1ecc14: 0x0  nop
    ctx->pc = 0x1ecc14u;
    // NOP
    // 0x1ecc18: 0x0  nop
    ctx->pc = 0x1ecc18u;
    // NOP
    // 0x1ecc1c: 0x0  nop
    ctx->pc = 0x1ecc1cu;
    // NOP
    ctx->pc = 0x1ecc20u;
}
