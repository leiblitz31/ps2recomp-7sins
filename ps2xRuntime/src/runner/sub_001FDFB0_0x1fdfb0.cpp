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

// Function: sub_001FDFB0
// Address: 0x1fdfb0 - 0x1fe050
void sub_001FDFB0_0x1fdfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDFB0_0x1fdfb0");
#endif

    switch (ctx->pc) {
        case 0x1fdfd4u: goto label_1fdfd4;
        case 0x1fdfe8u: goto label_1fdfe8;
        case 0x1fe004u: goto label_1fe004;
        default: break;
    }

    ctx->pc = 0x1fdfb0u;

    // 0x1fdfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fdfb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fdfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fdfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdfbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1fdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1fdfc0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdfc4: 0x8c42bfac  lw          $v0, -0x4054($v0)
    ctx->pc = 0x1fdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fdfc8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1fdfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fdfcc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1FDFCCu;
    SET_GPR_U32(ctx, 31, 0x1FDFD4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1FDFCCu, 0x1FDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFD4u;
label_1fdfd4:
    // 0x1fdfd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdfd8: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x1fdfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x1fdfdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfe0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FDFE0u;
    {
        const bool branch_taken_0x1fdfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfe0) {
            ctx->pc = 0x1FE01Cu;
            goto label_1fe01c;
        }
    }
    ctx->pc = 0x1FDFE8u;
label_1fdfe8:
    // 0x1fdfe8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdfec: 0x8c43bfb0  lw          $v1, -0x4050($v0)
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fdff0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fdff4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdff8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fdffc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1FDFFCu;
    SET_GPR_U32(ctx, 31, 0x1FE004u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1FDFFCu, 0x1FE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE004u;
label_1fe004:
    // 0x1fe004: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fe004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe008: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fe008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fe00c: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fe010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe014: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fe014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fe018: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fe01c:
    // 0x1fe01c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fe01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fe020: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fe020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fe024: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fe024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe028: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FE028u;
    {
        const bool branch_taken_0x1fe028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe028) {
            ctx->pc = 0x1FDFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdfe8;
        }
    }
    ctx->pc = 0x1FE030u;
    // 0x1fe030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe038: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fe038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fe03c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE044u;
    // 0x1fe044: 0x0  nop
    ctx->pc = 0x1fe044u;
    // NOP
    // 0x1fe048: 0x0  nop
    ctx->pc = 0x1fe048u;
    // NOP
    // 0x1fe04c: 0x0  nop
    ctx->pc = 0x1fe04cu;
    // NOP
    ctx->pc = 0x1fe050u;
}
