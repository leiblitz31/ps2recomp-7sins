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

// Function: sub_003C3D98
// Address: 0x3c3d98 - 0x3c3e88
void sub_003C3D98_0x3c3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3D98_0x3c3d98");
#endif

    switch (ctx->pc) {
        case 0x3c3de8u: goto label_3c3de8;
        case 0x3c3df4u: goto label_3c3df4;
        case 0x3c3e64u: goto label_3c3e64;
        default: break;
    }

    ctx->pc = 0x3c3d98u;

    // 0x3c3d98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c3d9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3da0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c3da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c3da4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c3da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c3da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3dac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c3dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c3db0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3c3db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3db4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c3db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c3db8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c3db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c3dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c3dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c3dc0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3c3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3c3dc4: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3C3DC4u;
    {
        const bool branch_taken_0x3c3dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DC4u;
        // 0x3c3dc8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3dc4) {
            ctx->pc = 0x3C3E64u;
            goto label_3c3e64;
        }
    }
    ctx->pc = 0x3C3DCCu;
    // 0x3c3dcc: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3c3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3c3dd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c3dd4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C3DD4u;
    {
        const bool branch_taken_0x3c3dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DD4u;
        // 0x3c3dd8: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3dd4) {
            ctx->pc = 0x3C3E48u;
            goto label_3c3e48;
        }
    }
    ctx->pc = 0x3C3DDCu;
    // 0x3c3ddc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x3c3ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3de0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c3de4: 0x0  nop
    ctx->pc = 0x3c3de4u;
    // NOP
label_3c3de8:
    // 0x3c3de8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3dec: 0xc0c0e98  jal         func_303A60
    ctx->pc = 0x3C3DECu;
    SET_GPR_U32(ctx, 31, 0x3C3DF4u);
    ctx->pc = 0x3C3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3DECu;
    // 0x3c3df0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303A60u, 0x3C3DECu, 0x3C3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3DF4u;
label_3c3df4:
    // 0x3c3df4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3df8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3DF8u;
    {
        const bool branch_taken_0x3c3df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DF8u;
        // 0x3c3dfc: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3df8) {
            ctx->pc = 0x3C3E08u;
            goto label_3c3e08;
        }
    }
    ctx->pc = 0x3C3E00u;
    // 0x3c3e00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C3E00u;
    {
        const bool branch_taken_0x3c3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E00u;
        // 0x3c3e04: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e00) {
            ctx->pc = 0x3C3E30u;
            goto label_3c3e30;
        }
    }
    ctx->pc = 0x3C3E08u;
label_3c3e08:
    // 0x3c3e08: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3c3e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3e0c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3c3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3c3e10: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3E10u;
    {
        const bool branch_taken_0x3c3e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3C3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E10u;
        // 0x3c3e14: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e10) {
            ctx->pc = 0x3C3E30u;
            goto label_3c3e30;
        }
    }
    ctx->pc = 0x3C3E18u;
    // 0x3c3e18: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3c3e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c3e1c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3c3e1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c3e20: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3c3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3c3e24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c3e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c3e28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c3e28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c3e2c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x3c3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_3c3e30:
    // 0x3c3e30: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3E30u;
    {
        const bool branch_taken_0x3c3e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3e30) {
            ctx->pc = 0x3C3E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3E30u;
            // 0x3c3e34: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3E50u;
            goto label_3c3e50;
        }
    }
    ctx->pc = 0x3C3E38u;
    // 0x3c3e38: 0x5233ffeb  beql        $s1, $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3C3E38u;
    {
        const bool branch_taken_0x3c3e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x3c3e38) {
            ctx->pc = 0x3C3E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3E38u;
            // 0x3c3e3c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3de8;
        }
    }
    ctx->pc = 0x3C3E40u;
    // 0x3c3e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3E40u;
    {
        const bool branch_taken_0x3c3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E40u;
        // 0x3c3e44: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e40) {
            ctx->pc = 0x3C3E50u;
            goto label_3c3e50;
        }
    }
    ctx->pc = 0x3C3E48u;
label_3c3e48:
    // 0x3c3e48: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x3c3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x3c3e4c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3c3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3c3e50:
    // 0x3c3e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3e54: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3E54u;
    {
        const bool branch_taken_0x3c3e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E54u;
        // 0x3c3e58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e54) {
            ctx->pc = 0x3C3E68u;
            goto label_3c3e68;
        }
    }
    ctx->pc = 0x3C3E5Cu;
    // 0x3c3e5c: 0xc0f0930  jal         func_3C24C0
    ctx->pc = 0x3C3E5Cu;
    SET_GPR_U32(ctx, 31, 0x3C3E64u);
    ctx->pc = 0x3C3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E5Cu;
    // 0x3c3e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C3E5Cu, 0x3C3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E64u;
label_3c3e64:
    // 0x3c3e64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c3e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3e68:
    // 0x3c3e68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c3e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c3e6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c3e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c3e70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c3e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c3e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c3e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c3e78: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c3e78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c3e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3e80: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E80u;
        // 0x3c3e84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3E88u;
}
