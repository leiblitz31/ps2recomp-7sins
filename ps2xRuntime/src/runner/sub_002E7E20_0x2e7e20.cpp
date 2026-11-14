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

// Function: sub_002E7E20
// Address: 0x2e7e20 - 0x2e7f50
void sub_002E7E20_0x2e7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7E20_0x2e7e20");
#endif

    switch (ctx->pc) {
        case 0x2e7e4cu: goto label_2e7e4c;
        case 0x2e7e6cu: goto label_2e7e6c;
        case 0x2e7e7cu: goto label_2e7e7c;
        case 0x2e7e90u: goto label_2e7e90;
        case 0x2e7eb0u: goto label_2e7eb0;
        case 0x2e7ef0u: goto label_2e7ef0;
        case 0x2e7f28u: goto label_2e7f28;
        default: break;
    }

    ctx->pc = 0x2e7e20u;

    // 0x2e7e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e7e24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e7e28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7e38: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e7e3c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7e40: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e7e44: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2E7E44u;
    SET_GPR_U32(ctx, 31, 0x2E7E4Cu);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2E7E44u, 0x2E7E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E4Cu;
label_2e7e4c:
    // 0x2e7e4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e7e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e50: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E7E50u;
    {
        const bool branch_taken_0x2e7e50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e50) {
            ctx->pc = 0x2E7EC4u;
            goto label_2e7ec4;
        }
    }
    ctx->pc = 0x2E7E58u;
    // 0x2e7e58: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7e5c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e7e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e7e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e64: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2E7E64u;
    SET_GPR_U32(ctx, 31, 0x2E7E6Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2E7E64u, 0x2E7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E6Cu;
label_2e7e6c:
    // 0x2e7e6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e7e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e7e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7e74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7E74u;
    {
        const bool branch_taken_0x2e7e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e74) {
            ctx->pc = 0x2E7EB8u;
            goto label_2e7eb8;
        }
    }
    ctx->pc = 0x2E7E7Cu;
label_2e7e7c:
    // 0x2e7e7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7e80: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e7e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e88: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2E7E88u;
    SET_GPR_U32(ctx, 31, 0x2E7E90u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2E7E88u, 0x2E7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E90u;
label_2e7e90:
    // 0x2e7e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e9c: 0x2786b6ac  addiu       $a2, $gp, -0x4954
    ctx->pc = 0x2e7e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
    // 0x2e7ea0: 0x2787b6cc  addiu       $a3, $gp, -0x4934
    ctx->pc = 0x2e7ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948556));
    // 0x2e7ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ea8: 0xc11f1cc  jal         func_47C730
    ctx->pc = 0x2E7EA8u;
    SET_GPR_U32(ctx, 31, 0x2E7EB0u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x2E7EA8u, 0x2E7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EB0u;
label_2e7eb0:
    // 0x2e7eb0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e7eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7eb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e7eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e7eb8:
    // 0x2e7eb8: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x2e7eb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2e7ebc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E7EBCu;
    {
        const bool branch_taken_0x2e7ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ebc) {
            ctx->pc = 0x2E7E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7e7c;
        }
    }
    ctx->pc = 0x2E7EC4u;
label_2e7ec4:
    // 0x2e7ec4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e7ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7ec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7ecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7ed8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e7ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7EE4u;
    // 0x2e7ee4: 0x0  nop
    ctx->pc = 0x2e7ee4u;
    // NOP
    // 0x2e7ee8: 0x0  nop
    ctx->pc = 0x2e7ee8u;
    // NOP
    // 0x2e7eec: 0x0  nop
    ctx->pc = 0x2e7eecu;
    // NOP
label_2e7ef0:
    // 0x2e7ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f00: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7F00u;
    {
        const bool branch_taken_0x2e7f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F00u;
        // 0x2e7f04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f00) {
            ctx->pc = 0x2E7F2Cu;
            goto label_2e7f2c;
        }
    }
    ctx->pc = 0x2E7F08u;
    // 0x2e7f08: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2e7f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2e7f0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e7f10: 0x24636a70  addiu       $v1, $v1, 0x6A70
    ctx->pc = 0x2e7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27248));
    // 0x2e7f14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e7f14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e7f18: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7F18u;
    {
        const bool branch_taken_0x2e7f18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F18u;
        // 0x2e7f1c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f18) {
            ctx->pc = 0x2E7F28u;
            goto label_2e7f28;
        }
    }
    ctx->pc = 0x2E7F20u;
    // 0x2e7f20: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E7F20u;
    SET_GPR_U32(ctx, 31, 0x2E7F28u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E7F20u, 0x2E7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F28u;
label_2e7f28:
    // 0x2e7f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e7f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f2c:
    // 0x2e7f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F34u;
        // 0x2e7f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7F3Cu;
    // 0x2e7f3c: 0x0  nop
    ctx->pc = 0x2e7f3cu;
    // NOP
    // 0x2e7f40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e7f44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F44u;
        // 0x2e7f48: 0x24428d28  addiu       $v0, $v0, -0x72D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7F4Cu;
    // 0x2e7f4c: 0x0  nop
    ctx->pc = 0x2e7f4cu;
    // NOP
    ctx->pc = 0x2e7f50u;
}
