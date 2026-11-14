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

// Function: sub_0041E720
// Address: 0x41e720 - 0x41e7a8
void sub_0041E720_0x41e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E720_0x41e720");
#endif

    switch (ctx->pc) {
        case 0x41e748u: goto label_41e748;
        case 0x41e768u: goto label_41e768;
        case 0x41e780u: goto label_41e780;
        default: break;
    }

    ctx->pc = 0x41e720u;

label_41e720:
    // 0x41e720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41e724: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41e728: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41e72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e730: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41e730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41e734: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x41e734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e738: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x41E738u;
    {
        const bool branch_taken_0x41e738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E738u;
        // 0x41e73c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e738) {
            ctx->pc = 0x41E78Cu;
            goto label_41e78c;
        }
    }
    ctx->pc = 0x41E740u;
    // 0x41e740: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x41e740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x41e744: 0x0  nop
    ctx->pc = 0x41e744u;
    // NOP
label_41e748:
    // 0x41e748: 0x2428825  or          $s1, $s2, $v0
    ctx->pc = 0x41e748u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x41e74c: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x41e74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x41e750: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x41E750u;
    {
        const bool branch_taken_0x41e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E750u;
        // 0x41e754: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e750) {
            ctx->pc = 0x41E774u;
            goto label_41e774;
        }
    }
    ctx->pc = 0x41E758u;
    // 0x41e758: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x41e758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41e75c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x41e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x41e760: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x41E760u;
    SET_GPR_U32(ctx, 31, 0x41E768u);
    ctx->pc = 0x41E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E760u;
    // 0x41e764: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x41E760u, 0x41E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E768u;
label_41e768:
    // 0x41e768: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x41e768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x41e76c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x41e76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x41e770: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x41e770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_41e774:
    // 0x41e774: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x41e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x41e778: 0xc1079c8  jal         func_41E720
    ctx->pc = 0x41E778u;
    SET_GPR_U32(ctx, 31, 0x41E780u);
    ctx->pc = 0x41E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E778u;
    // 0x41e77c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E720u;
    goto label_41e720;
    ctx->pc = 0x41E780u;
label_41e780:
    // 0x41e780: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x41e780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x41e784: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x41E784u;
    {
        const bool branch_taken_0x41e784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e784) {
            ctx->pc = 0x41E788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E784u;
            // 0x41e788: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e748;
        }
    }
    ctx->pc = 0x41E78Cu;
label_41e78c:
    // 0x41e78c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41e78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41e790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e794: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41e794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x41E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E79Cu;
        // 0x41e7a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E7A4u;
    // 0x41e7a4: 0x0  nop
    ctx->pc = 0x41e7a4u;
    // NOP
    ctx->pc = 0x41e7a8u;
}
