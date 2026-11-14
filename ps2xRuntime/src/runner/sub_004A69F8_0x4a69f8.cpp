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

// Function: sub_004A69F8
// Address: 0x4a69f8 - 0x4a6a70
void sub_004A69F8_0x4a69f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A69F8_0x4a69f8");
#endif

    switch (ctx->pc) {
        case 0x4a6a28u: goto label_4a6a28;
        case 0x4a6a34u: goto label_4a6a34;
        default: break;
    }

    ctx->pc = 0x4a69f8u;

    // 0x4a69f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a69f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a69fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a69fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a6a00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a6a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a6a04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a6a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a6a08: 0x24b30020  addiu       $s3, $a1, 0x20
    ctx->pc = 0x4a6a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4a6a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6a10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a6a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a6a14: 0x8cb00020  lw          $s0, 0x20($a1)
    ctx->pc = 0x4a6a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4a6a18: 0x1213000d  beq         $s0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x4A6A18u;
    {
        const bool branch_taken_0x4a6a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x4A6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A18u;
        // 0x4a6a1c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a18) {
            ctx->pc = 0x4A6A50u;
            goto label_4a6a50;
        }
    }
    ctx->pc = 0x4A6A20u;
    // 0x4a6a20: 0x8e04ffc0  lw          $a0, -0x40($s0)
    ctx->pc = 0x4a6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967232)));
    // 0x4a6a24: 0x0  nop
    ctx->pc = 0x4a6a24u;
    // NOP
label_4a6a28:
    // 0x4a6a28: 0x2611ffc0  addiu       $s1, $s0, -0x40
    ctx->pc = 0x4a6a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x4a6a2c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A6A2Cu;
    SET_GPR_U32(ctx, 31, 0x4A6A34u);
    ctx->pc = 0x4A6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6A2Cu;
    // 0x4a6a30: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A6A2Cu, 0x4A6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6A34u;
label_4a6a34:
    // 0x4a6a34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A6A34u;
    {
        const bool branch_taken_0x4a6a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6a34) {
            ctx->pc = 0x4A6A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6A34u;
            // 0x4a6a38: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6A48u;
            goto label_4a6a48;
        }
    }
    ctx->pc = 0x4A6A3Cu;
    // 0x4a6a3c: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x4a6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x4a6a40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A6A40u;
    {
        const bool branch_taken_0x4a6a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A40u;
        // 0x4a6a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a40) {
            ctx->pc = 0x4A6A54u;
            goto label_4a6a54;
        }
    }
    ctx->pc = 0x4A6A48u;
label_4a6a48:
    // 0x4a6a48: 0x5613fff7  bnel        $s0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A6A48u;
    {
        const bool branch_taken_0x4a6a48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x4a6a48) {
            ctx->pc = 0x4A6A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6A48u;
            // 0x4a6a4c: 0x8e04ffc0  lw          $a0, -0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6a28;
        }
    }
    ctx->pc = 0x4A6A50u;
label_4a6a50:
    // 0x4a6a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a6a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a54:
    // 0x4a6a54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a6a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a6a58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a6a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a6a5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a6a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6a60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a6a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6a68: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A68u;
        // 0x4a6a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6A70u;
}
