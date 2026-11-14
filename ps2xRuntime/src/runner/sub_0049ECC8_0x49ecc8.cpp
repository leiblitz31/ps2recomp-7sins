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

// Function: sub_0049ECC8
// Address: 0x49ecc8 - 0x49ed68
void sub_0049ECC8_0x49ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ECC8_0x49ecc8");
#endif

    switch (ctx->pc) {
        case 0x49ecf8u: goto label_49ecf8;
        case 0x49ed20u: goto label_49ed20;
        case 0x49ed38u: goto label_49ed38;
        default: break;
    }

    ctx->pc = 0x49ecc8u;

    // 0x49ecc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49eccc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49ecccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ecd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49ecd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ecd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x49ecd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ecdc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x49ecdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ece0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49ECE0u;
    {
        const bool branch_taken_0x49ece0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ECE0u;
        // 0x49ece4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ece0) {
            ctx->pc = 0x49ED08u;
            goto label_49ed08;
        }
    }
    ctx->pc = 0x49ECE8u;
    // 0x49ece8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x49ECE8u;
    {
        const bool branch_taken_0x49ece8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ece8) {
            ctx->pc = 0x49ED08u;
            goto label_49ed08;
        }
    }
    ctx->pc = 0x49ECF0u;
    // 0x49ecf0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49ecf4: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x49ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49ecf8:
    // 0x49ecf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49ECF8u;
    {
        const bool branch_taken_0x49ecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ecf8) {
            ctx->pc = 0x49ED08u;
            goto label_49ed08;
        }
    }
    ctx->pc = 0x49ED00u;
    // 0x49ed00: 0x14e0fffd  bnez        $a3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x49ED00u;
    {
        const bool branch_taken_0x49ed00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ed00) {
            ctx->pc = 0x49ECF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ecf8;
        }
    }
    ctx->pc = 0x49ED08u;
label_49ed08:
    // 0x49ed08: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x49ED08u;
    {
        const bool branch_taken_0x49ed08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ed08) {
            ctx->pc = 0x49ED30u;
            goto label_49ed30;
        }
    }
    ctx->pc = 0x49ED10u;
    // 0x49ed10: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x49ED10u;
    {
        const bool branch_taken_0x49ed10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ed10) {
            ctx->pc = 0x49ED30u;
            goto label_49ed30;
        }
    }
    ctx->pc = 0x49ED18u;
    // 0x49ed18: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x49ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x49ed1c: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x49ed1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49ed20:
    // 0x49ed20: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x49ED20u;
    {
        const bool branch_taken_0x49ed20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ed20) {
            ctx->pc = 0x49ED30u;
            goto label_49ed30;
        }
    }
    ctx->pc = 0x49ED28u;
    // 0x49ed28: 0x14e0fffd  bnez        $a3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x49ED28u;
    {
        const bool branch_taken_0x49ed28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ed28) {
            ctx->pc = 0x49ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ed20;
        }
    }
    ctx->pc = 0x49ED30u;
label_49ed30:
    // 0x49ed30: 0xc1277d8  jal         func_49DF60
    ctx->pc = 0x49ED30u;
    SET_GPR_U32(ctx, 31, 0x49ED38u);
    ctx->pc = 0x49ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ED30u;
    // 0x49ed34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DF60u, 0x49ED30u, 0x49ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ED38u;
label_49ed38:
    // 0x49ed38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49ed38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed3c: 0x50e00005  beql        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49ED3Cu;
    {
        const bool branch_taken_0x49ed3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ed3c) {
            ctx->pc = 0x49ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49ED3Cu;
            // 0x49ed40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49ED54u;
            goto label_49ed54;
        }
    }
    ctx->pc = 0x49ED44u;
    // 0x49ed44: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x49ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x49ed48: 0xacf00018  sw          $s0, 0x18($a3)
    ctx->pc = 0x49ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
    // 0x49ed4c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x49ed4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x49ed50: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x49ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_49ed54:
    // 0x49ed54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49ed54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ed58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ed58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ed5c: 0x3e00008  jr          $ra
    ctx->pc = 0x49ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED5Cu;
        // 0x49ed60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ED5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ED64u;
    // 0x49ed64: 0x0  nop
    ctx->pc = 0x49ed64u;
    // NOP
    ctx->pc = 0x49ed68u;
}
