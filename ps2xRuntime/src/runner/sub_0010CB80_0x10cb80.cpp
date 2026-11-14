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

// Function: sub_0010CB80
// Address: 0x10cb80 - 0x10cc30
void sub_0010CB80_0x10cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CB80_0x10cb80");
#endif

    switch (ctx->pc) {
        case 0x10cbbcu: goto label_10cbbc;
        case 0x10cbe4u: goto label_10cbe4;
        default: break;
    }

    ctx->pc = 0x10cb80u;

    // 0x10cb80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10cb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10cb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10cb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10cb90: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x10cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10cb94: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x10cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x10cb98: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x10cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x10cb9c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x10cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x10cba0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cba4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10cba8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cbac: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x10cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cbb0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x10cbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x10cbb4: 0xc044fec  jal         func_113FB0
    ctx->pc = 0x10CBB4u;
    SET_GPR_U32(ctx, 31, 0x10CBBCu);
    ctx->pc = 0x113FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FB0u, 0x10CBB4u, 0x10CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBBCu;
label_10cbbc:
    // 0x10cbbc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x10cbbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10cbc0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x10cbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x10cbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cbc8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CBC8u;
    {
        const bool branch_taken_0x10cbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10cbc8) {
            ctx->pc = 0x10CBE4u;
            goto label_10cbe4;
        }
    }
    ctx->pc = 0x10CBD0u;
    // 0x10cbd0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cbd4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cbd8: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x10cbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x10cbdc: 0xc04330c  jal         func_10CC30
    ctx->pc = 0x10CBDCu;
    SET_GPR_U32(ctx, 31, 0x10CBE4u);
    ctx->pc = 0x10CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC30u, 0x10CBDCu, 0x10CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBE4u;
label_10cbe4:
    // 0x10cbe4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CBE4u;
    {
        const bool branch_taken_0x10cbe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cbe4) {
            ctx->pc = 0x10CC00u;
            goto label_10cc00;
        }
    }
    ctx->pc = 0x10CBECu;
    // 0x10cbec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cbf0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x10cbf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10cbf4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x10cbf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x10cbf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CBF8u;
    {
        const bool branch_taken_0x10cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cbf8) {
            ctx->pc = 0x10CC04u;
            goto label_10cc04;
        }
    }
    ctx->pc = 0x10CC00u;
label_10cc00:
    // 0x10cc00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10cc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cc04:
    // 0x10cc04: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x10cc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10cc08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10cc08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10cc0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cc10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10cc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10cc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cc18: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10cc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10cc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC24u;
    // 0x10cc24: 0x0  nop
    ctx->pc = 0x10cc24u;
    // NOP
    // 0x10cc28: 0x0  nop
    ctx->pc = 0x10cc28u;
    // NOP
    // 0x10cc2c: 0x0  nop
    ctx->pc = 0x10cc2cu;
    // NOP
    ctx->pc = 0x10cc30u;
}
