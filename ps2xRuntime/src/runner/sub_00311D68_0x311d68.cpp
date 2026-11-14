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

// Function: sub_00311D68
// Address: 0x311d68 - 0x311e30
void sub_00311D68_0x311d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311D68_0x311d68");
#endif

    switch (ctx->pc) {
        case 0x311db0u: goto label_311db0;
        case 0x311de8u: goto label_311de8;
        case 0x311df8u: goto label_311df8;
        case 0x311e10u: goto label_311e10;
        default: break;
    }

    ctx->pc = 0x311d68u;

    // 0x311d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x311d6c: 0x8f82a570  lw          $v0, -0x5A90($gp)
    ctx->pc = 0x311d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
    // 0x311d70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x311d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x311d74: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x311d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x311d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x311d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311d84: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x311d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x311d88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x311d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x311d8c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x311d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x311d90: 0x80d0000b  lb          $s0, 0xB($a2)
    ctx->pc = 0x311d90u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x311d94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x311d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d98: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x311d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x311d9c: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x311d9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x311da0: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x311da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x311da4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x311da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x311da8: 0xc103404  jal         func_40D010
    ctx->pc = 0x311DA8u;
    SET_GPR_U32(ctx, 31, 0x311DB0u);
    ctx->pc = 0x311DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DA8u;
    // 0x311dac: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x311DA8u, 0x311DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DB0u;
label_311db0:
    // 0x311db0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x311DB0u;
    {
        const bool branch_taken_0x311db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DB0u;
        // 0x311db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311db0) {
            ctx->pc = 0x311E18u;
            goto label_311e18;
        }
    }
    ctx->pc = 0x311DB8u;
    // 0x311db8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x311DB8u;
    {
        const bool branch_taken_0x311db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DB8u;
        // 0x311dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311db8) {
            ctx->pc = 0x311E00u;
            goto label_311e00;
        }
    }
    ctx->pc = 0x311DC0u;
    // 0x311dc0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x311dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x311dc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x311dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x311dc8: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x311dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x311dcc: 0x24700003  addiu       $s0, $v1, 0x3
    ctx->pc = 0x311dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x311dd0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x311dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x311dd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x311dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311dd8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x311dd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x311ddc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x311ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x311de0: 0xc103440  jal         func_40D100
    ctx->pc = 0x311DE0u;
    SET_GPR_U32(ctx, 31, 0x311DE8u);
    ctx->pc = 0x311DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DE0u;
    // 0x311de4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x311DE0u, 0x311DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DE8u;
label_311de8:
    // 0x311de8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311df0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x311DF0u;
    SET_GPR_U32(ctx, 31, 0x311DF8u);
    ctx->pc = 0x311DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DF0u;
    // 0x311df4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x311DF0u, 0x311DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DF8u;
label_311df8:
    // 0x311df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x311DF8u;
    {
        const bool branch_taken_0x311df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DF8u;
        // 0x311dfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311df8) {
            ctx->pc = 0x311E14u;
            goto label_311e14;
        }
    }
    ctx->pc = 0x311E00u;
label_311e00:
    // 0x311e00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x311e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x311e04: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x311e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x311e08: 0xc103440  jal         func_40D100
    ctx->pc = 0x311E08u;
    SET_GPR_U32(ctx, 31, 0x311E10u);
    ctx->pc = 0x311E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E08u;
    // 0x311e0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x311E08u, 0x311E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E10u;
label_311e10:
    // 0x311e10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311e14:
    // 0x311e14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x311e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311e18:
    // 0x311e18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x311e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311e1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x311e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311e28: 0x3e00008  jr          $ra
    ctx->pc = 0x311E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E28u;
        // 0x311e2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311E30u;
}
