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

// Function: sub_00420E20
// Address: 0x420e20 - 0x420ea8
void sub_00420E20_0x420e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420E20_0x420e20");
#endif

    switch (ctx->pc) {
        case 0x420e5cu: goto label_420e5c;
        case 0x420e70u: goto label_420e70;
        case 0x420e78u: goto label_420e78;
        default: break;
    }

    ctx->pc = 0x420e20u;

    // 0x420e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x420e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x420e24: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x420e28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x420e2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x420e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x420e30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x420e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x420e34: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x420e38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x420e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x420e3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420e44: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x420e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420e48: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x420e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x420e4c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x420E4Cu;
    {
        const bool branch_taken_0x420e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420e4c) {
            ctx->pc = 0x420E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420E4Cu;
            // 0x420e50: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420E64u;
            goto label_420e64;
        }
    }
    ctx->pc = 0x420E54u;
    // 0x420e54: 0xc10828e  jal         func_420A38
    ctx->pc = 0x420E54u;
    SET_GPR_U32(ctx, 31, 0x420E5Cu);
    ctx->pc = 0x420E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420E54u;
    // 0x420e58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A38u, 0x420E54u, 0x420E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420E5Cu;
label_420e5c:
    // 0x420e5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x420E5Cu;
    {
        const bool branch_taken_0x420e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E5Cu;
        // 0x420e60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e5c) {
            ctx->pc = 0x420E94u;
            goto label_420e94;
        }
    }
    ctx->pc = 0x420E64u;
label_420e64:
    // 0x420e64: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x420E64u;
    {
        const bool branch_taken_0x420e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x420E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E64u;
        // 0x420e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e64) {
            ctx->pc = 0x420E90u;
            goto label_420e90;
        }
    }
    ctx->pc = 0x420E6Cu;
    // 0x420e6c: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x420e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_420e70:
    // 0x420e70: 0xc10828e  jal         func_420A38
    ctx->pc = 0x420E70u;
    SET_GPR_U32(ctx, 31, 0x420E78u);
    ctx->pc = 0x420E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420E70u;
    // 0x420e74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A38u, 0x420E70u, 0x420E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420E78u;
label_420e78:
    // 0x420e78: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x420E78u;
    {
        const bool branch_taken_0x420e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420e78) {
            ctx->pc = 0x420E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420E78u;
            // 0x420e7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420E94u;
            goto label_420e94;
        }
    }
    ctx->pc = 0x420E80u;
    // 0x420e80: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x420e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x420e84: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x420E84u;
    {
        const bool branch_taken_0x420e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x420E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E84u;
        // 0x420e88: 0x2604fff0  addiu       $a0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e84) {
            ctx->pc = 0x420E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420e70;
        }
    }
    ctx->pc = 0x420E8Cu;
    // 0x420e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x420e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420e90:
    // 0x420e90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x420e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420e94:
    // 0x420e94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x420e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420e98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x420e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x420EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420EA0u;
        // 0x420ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420EA8u;
}
