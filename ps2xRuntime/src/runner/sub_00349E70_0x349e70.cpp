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

// Function: sub_00349E70
// Address: 0x349e70 - 0x349f48
void sub_00349E70_0x349e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349E70_0x349e70");
#endif

    switch (ctx->pc) {
        case 0x349ea0u: goto label_349ea0;
        case 0x349ee0u: goto label_349ee0;
        case 0x349ee8u: goto label_349ee8;
        default: break;
    }

    ctx->pc = 0x349e70u;

    // 0x349e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x349e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x349e74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x349e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x349e78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x349e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x349e80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x349e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x349e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e88: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x349e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x349e8c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x349e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x349e90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x349e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x349e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x349e98: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x349E98u;
    SET_GPR_U32(ctx, 31, 0x349EA0u);
    ctx->pc = 0x349E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E98u;
    // 0x349e9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x349E98u, 0x349EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EA0u;
label_349ea0:
    // 0x349ea0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x349ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ea4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x349ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x349ea8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x349ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x349eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x349eb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x349eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x349eb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x349eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349eb8: 0x2484c2c8  addiu       $a0, $a0, -0x3D38
    ctx->pc = 0x349eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x349ebc: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x349ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x349ec0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x349ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x349ec4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x349EC4u;
    {
        const bool branch_taken_0x349ec4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x349EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EC4u;
        // 0x349ec8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ec4) {
            ctx->pc = 0x349F18u;
            goto label_349f18;
        }
    }
    ctx->pc = 0x349ECCu;
    // 0x349ecc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ed0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x349ED0u;
    {
        const bool branch_taken_0x349ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349ED0u;
        // 0x349ed4: 0x3c130035  lui         $s3, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ed0) {
            ctx->pc = 0x349EFCu;
            goto label_349efc;
        }
    }
    ctx->pc = 0x349ED8u;
    // 0x349ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349edc: 0x0  nop
    ctx->pc = 0x349edcu;
    // NOP
label_349ee0:
    // 0x349ee0: 0xc0d0884  jal         func_342210
    ctx->pc = 0x349EE0u;
    SET_GPR_U32(ctx, 31, 0x349EE8u);
    ctx->pc = 0x349EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EE0u;
    // 0x349ee4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342210u, 0x349EE0u, 0x349EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EE8u;
label_349ee8:
    // 0x349ee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x349ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x349eec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x349eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ef0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x349ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x349ef4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x349EF4u;
    {
        const bool branch_taken_0x349ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EF4u;
        // 0x349ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ef4) {
            ctx->pc = 0x349EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349ee0;
        }
    }
    ctx->pc = 0x349EFCu;
label_349efc:
    // 0x349efc: 0x26629ce8  addiu       $v0, $s3, -0x6318
    ctx->pc = 0x349efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941928));
    // 0x349f00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x349F00u;
    {
        const bool branch_taken_0x349f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F00u;
        // 0x349f04: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f00) {
            ctx->pc = 0x349F18u;
            goto label_349f18;
        }
    }
    ctx->pc = 0x349F08u;
    // 0x349f08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x349f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x349f0c: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x349f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
    // 0x349f10: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x349f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x349f14: 0x0  nop
    ctx->pc = 0x349f14u;
    // NOP
label_349f18:
    // 0x349f18: 0x2683c2c8  addiu       $v1, $s4, -0x3D38
    ctx->pc = 0x349f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
    // 0x349f1c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x349f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x349f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x349f24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x349f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349f28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x349f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x349f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349f30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x349f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349f38: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x349f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x349f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x349F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F3Cu;
        // 0x349f40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F44u;
    // 0x349f44: 0x0  nop
    ctx->pc = 0x349f44u;
    // NOP
    ctx->pc = 0x349f48u;
}
