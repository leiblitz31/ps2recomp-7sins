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

// Function: sub_004A5DA8
// Address: 0x4a5da8 - 0x4a5e28
void sub_004A5DA8_0x4a5da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5DA8_0x4a5da8");
#endif

    switch (ctx->pc) {
        case 0x4a5dccu: goto label_4a5dcc;
        default: break;
    }

    ctx->pc = 0x4a5da8u;

    // 0x4a5da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a5da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a5dac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a5db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a5db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a5db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a5db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5dbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a5dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5dc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a5dc4: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5DC4u;
    SET_GPR_U32(ctx, 31, 0x4A5DCCu);
    ctx->pc = 0x4A5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5DC4u;
    // 0x4a5dc8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5DC4u, 0x4A5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5DCCu;
label_4a5dcc:
    // 0x4a5dcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A5DCCu;
    {
        const bool branch_taken_0x4a5dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DCCu;
        // 0x4a5dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5dcc) {
            ctx->pc = 0x4A5E14u;
            goto label_4a5e14;
        }
    }
    ctx->pc = 0x4A5DD4u;
    // 0x4a5dd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5dd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a5ddc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A5DDCu;
    {
        const bool branch_taken_0x4a5ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DDCu;
        // 0x4a5de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ddc) {
            ctx->pc = 0x4A5E14u;
            goto label_4a5e14;
        }
    }
    ctx->pc = 0x4A5DE4u;
    // 0x4a5de4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x4a5de4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a5de8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4a5de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a5dec: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A5DECu;
    {
        const bool branch_taken_0x4a5dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DECu;
        // 0x4a5df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5dec) {
            ctx->pc = 0x4A5E14u;
            goto label_4a5e14;
        }
    }
    ctx->pc = 0x4A5DF4u;
    // 0x4a5df4: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x4a5df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4a5df8: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x4a5df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4a5dfc: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x4a5dfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4a5e00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a5e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a5e04: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4a5e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4a5e08: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5E08u;
    {
        const bool branch_taken_0x4a5e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5E08u;
        // 0x4a5e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e08) {
            ctx->pc = 0x4A5E14u;
            goto label_4a5e14;
        }
    }
    ctx->pc = 0x4A5E10u;
    // 0x4a5e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a5e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5e14:
    // 0x4a5e14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a5e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a5e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5e20: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5E20u;
        // 0x4a5e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5E28u;
}
