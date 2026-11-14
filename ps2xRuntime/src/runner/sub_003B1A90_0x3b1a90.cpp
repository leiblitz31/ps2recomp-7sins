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

// Function: sub_003B1A90
// Address: 0x3b1a90 - 0x3b1b10
void sub_003B1A90_0x3b1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1A90_0x3b1a90");
#endif

    switch (ctx->pc) {
        case 0x3b1ac8u: goto label_3b1ac8;
        case 0x3b1adcu: goto label_3b1adc;
        default: break;
    }

    ctx->pc = 0x3b1a90u;

    // 0x3b1a90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b1a94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b1a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3b1a98: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3b1a9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b1a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1aa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b1aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b1aa4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3b1aa8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1AA8u;
    {
        const bool branch_taken_0x3b1aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AA8u;
        // 0x3b1aac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1aa8) {
            ctx->pc = 0x3B1AB8u;
            goto label_3b1ab8;
        }
    }
    ctx->pc = 0x3B1AB0u;
    // 0x3b1ab0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B1AB0u;
    {
        const bool branch_taken_0x3b1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AB0u;
        // 0x3b1ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ab0) {
            ctx->pc = 0x3B1AF4u;
            goto label_3b1af4;
        }
    }
    ctx->pc = 0x3B1AB8u;
label_3b1ab8:
    // 0x3b1ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1abc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3b1abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1ac0: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x3b1ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b1ac4: 0x0  nop
    ctx->pc = 0x3b1ac4u;
    // NOP
label_3b1ac8:
    // 0x3b1ac8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b1acc: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1ACCu;
    {
        const bool branch_taken_0x3b1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1ACCu;
        // 0x3b1ad0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1acc) {
            ctx->pc = 0x3B1ADCu;
            goto label_3b1adc;
        }
    }
    ctx->pc = 0x3B1AD4u;
    // 0x3b1ad4: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B1AD4u;
    SET_GPR_U32(ctx, 31, 0x3B1ADCu);
    ctx->pc = 0x3B1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1AD4u;
    // 0x3b1ad8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1AD4u, 0x3B1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1ADCu;
label_3b1adc:
    // 0x3b1adc: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x3b1adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b1ae0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x3b1ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b1ae4: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x3b1ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b1ae8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B1AE8u;
    {
        const bool branch_taken_0x3b1ae8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE8u;
        // 0x3b1aec: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ae8) {
            ctx->pc = 0x3B1AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1ac8;
        }
    }
    ctx->pc = 0x3B1AF0u;
    // 0x3b1af0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b1af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1af4:
    // 0x3b1af4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b1af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b1af8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b1af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b1afc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b1afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1b00: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b1b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B08u;
        // 0x3b1b0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1B10u;
}
