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

// Function: sub_003C1D60
// Address: 0x3c1d60 - 0x3c1e68
void sub_003C1D60_0x3c1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1D60_0x3c1d60");
#endif

    switch (ctx->pc) {
        case 0x3c1d60u: goto label_3c1d60;
        case 0x3c1d64u: goto label_3c1d64;
        case 0x3c1d68u: goto label_3c1d68;
        case 0x3c1d6cu: goto label_3c1d6c;
        case 0x3c1d70u: goto label_3c1d70;
        case 0x3c1d74u: goto label_3c1d74;
        case 0x3c1d78u: goto label_3c1d78;
        case 0x3c1d7cu: goto label_3c1d7c;
        case 0x3c1d80u: goto label_3c1d80;
        case 0x3c1d84u: goto label_3c1d84;
        case 0x3c1d88u: goto label_3c1d88;
        case 0x3c1d8cu: goto label_3c1d8c;
        case 0x3c1d90u: goto label_3c1d90;
        case 0x3c1d94u: goto label_3c1d94;
        case 0x3c1d98u: goto label_3c1d98;
        case 0x3c1d9cu: goto label_3c1d9c;
        case 0x3c1da0u: goto label_3c1da0;
        case 0x3c1da4u: goto label_3c1da4;
        case 0x3c1da8u: goto label_3c1da8;
        case 0x3c1dacu: goto label_3c1dac;
        case 0x3c1db0u: goto label_3c1db0;
        case 0x3c1db4u: goto label_3c1db4;
        case 0x3c1db8u: goto label_3c1db8;
        case 0x3c1dbcu: goto label_3c1dbc;
        case 0x3c1dc0u: goto label_3c1dc0;
        case 0x3c1dc4u: goto label_3c1dc4;
        case 0x3c1dc8u: goto label_3c1dc8;
        case 0x3c1dccu: goto label_3c1dcc;
        case 0x3c1dd0u: goto label_3c1dd0;
        case 0x3c1dd4u: goto label_3c1dd4;
        case 0x3c1dd8u: goto label_3c1dd8;
        case 0x3c1ddcu: goto label_3c1ddc;
        case 0x3c1de0u: goto label_3c1de0;
        case 0x3c1de4u: goto label_3c1de4;
        case 0x3c1de8u: goto label_3c1de8;
        case 0x3c1decu: goto label_3c1dec;
        case 0x3c1df0u: goto label_3c1df0;
        case 0x3c1df4u: goto label_3c1df4;
        case 0x3c1df8u: goto label_3c1df8;
        case 0x3c1dfcu: goto label_3c1dfc;
        case 0x3c1e00u: goto label_3c1e00;
        case 0x3c1e04u: goto label_3c1e04;
        case 0x3c1e08u: goto label_3c1e08;
        case 0x3c1e0cu: goto label_3c1e0c;
        case 0x3c1e10u: goto label_3c1e10;
        case 0x3c1e14u: goto label_3c1e14;
        case 0x3c1e18u: goto label_3c1e18;
        case 0x3c1e1cu: goto label_3c1e1c;
        case 0x3c1e20u: goto label_3c1e20;
        case 0x3c1e24u: goto label_3c1e24;
        case 0x3c1e28u: goto label_3c1e28;
        case 0x3c1e2cu: goto label_3c1e2c;
        case 0x3c1e30u: goto label_3c1e30;
        case 0x3c1e34u: goto label_3c1e34;
        case 0x3c1e38u: goto label_3c1e38;
        case 0x3c1e3cu: goto label_3c1e3c;
        case 0x3c1e40u: goto label_3c1e40;
        case 0x3c1e44u: goto label_3c1e44;
        case 0x3c1e48u: goto label_3c1e48;
        case 0x3c1e4cu: goto label_3c1e4c;
        case 0x3c1e50u: goto label_3c1e50;
        case 0x3c1e54u: goto label_3c1e54;
        case 0x3c1e58u: goto label_3c1e58;
        case 0x3c1e5cu: goto label_3c1e5c;
        case 0x3c1e60u: goto label_3c1e60;
        case 0x3c1e64u: goto label_3c1e64;
        default: break;
    }

    ctx->pc = 0x3c1d60u;

label_3c1d60:
    // 0x3c1d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c1d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c1d64:
    // 0x3c1d64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c1d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c1d68:
    // 0x3c1d68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c1d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c1d6c:
    // 0x3c1d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d70:
    // 0x3c1d70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c1d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c1d74:
    // 0x3c1d74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c1d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d78:
    // 0x3c1d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c1d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c1d7c:
    // 0x3c1d7c: 0x3c120003  lui         $s2, 0x3
    ctx->pc = 0x3c1d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
label_3c1d80:
    // 0x3c1d80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c1d84:
    // 0x3c1d84: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3c1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1d88:
    // 0x3c1d88: 0xc103642  jal         func_40D908
label_3c1d8c:
    if (ctx->pc == 0x3C1D8Cu) {
        ctx->pc = 0x3C1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D88u;
        // 0x3c1d8c: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D90u;
        goto label_3c1d90;
    }
    ctx->pc = 0x3C1D88u;
    SET_GPR_U32(ctx, 31, 0x3C1D90u);
    ctx->pc = 0x3C1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1D88u;
    // 0x3c1d8c: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3C1D88u, 0x3C1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1D90u;
label_3c1d90:
    // 0x3c1d90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3c1d94:
    if (ctx->pc == 0x3C1D94u) {
        ctx->pc = 0x3C1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D90u;
        // 0x3c1d94: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D98u;
        goto label_3c1d98;
    }
    ctx->pc = 0x3C1D90u;
    {
        const bool branch_taken_0x3c1d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D90u;
        // 0x3c1d94: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d90) {
            ctx->pc = 0x3C1DD0u;
            goto label_3c1dd0;
        }
    }
    ctx->pc = 0x3C1D98u;
label_3c1d98:
    // 0x3c1d98: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3c1d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1d9c:
    // 0x3c1d9c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3c1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_3c1da0:
    // 0x3c1da0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1da4:
    // 0x3c1da4: 0xc1036e0  jal         func_40DB80
label_3c1da8:
    if (ctx->pc == 0x3C1DA8u) {
        ctx->pc = 0x3C1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DA4u;
        // 0x3c1da8: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DACu;
        goto label_3c1dac;
    }
    ctx->pc = 0x3C1DA4u;
    SET_GPR_U32(ctx, 31, 0x3C1DACu);
    ctx->pc = 0x3C1DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DA4u;
    // 0x3c1da8: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3C1DA4u, 0x3C1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DACu;
label_3c1dac:
    // 0x3c1dac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c1db0:
    if (ctx->pc == 0x3C1DB0u) {
        ctx->pc = 0x3C1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DACu;
        // 0x3c1db0: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DB4u;
        goto label_3c1db4;
    }
    ctx->pc = 0x3C1DACu;
    {
        const bool branch_taken_0x3c1dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1dac) {
            ctx->pc = 0x3C1DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1DACu;
            // 0x3c1db0: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1DBCu;
            goto label_3c1dbc;
        }
    }
    ctx->pc = 0x3C1DB4u;
label_3c1db4:
    // 0x3c1db4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c1db8:
    if (ctx->pc == 0x3C1DB8u) {
        ctx->pc = 0x3C1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DB4u;
        // 0x3c1db8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DBCu;
        goto label_3c1dbc;
    }
    ctx->pc = 0x3C1DB4u;
    {
        const bool branch_taken_0x3c1db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DB4u;
        // 0x3c1db8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1db4) {
            ctx->pc = 0x3C1DC0u;
            goto label_3c1dc0;
        }
    }
    ctx->pc = 0x3C1DBCu;
label_3c1dbc:
    // 0x3c1dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1dc0:
    // 0x3c1dc0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_3c1dc4:
    if (ctx->pc == 0x3C1DC4u) {
        ctx->pc = 0x3C1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DC0u;
        // 0x3c1dc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DC8u;
        goto label_3c1dc8;
    }
    ctx->pc = 0x3C1DC0u;
    {
        const bool branch_taken_0x3c1dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DC0u;
        // 0x3c1dc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1dc0) {
            ctx->pc = 0x3C1DD4u;
            goto label_3c1dd4;
        }
    }
    ctx->pc = 0x3C1DC8u;
label_3c1dc8:
    // 0x3c1dc8: 0xc103684  jal         func_40DA10
label_3c1dcc:
    if (ctx->pc == 0x3C1DCCu) {
        ctx->pc = 0x3C1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DC8u;
        // 0x3c1dcc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DD0u;
        goto label_3c1dd0;
    }
    ctx->pc = 0x3C1DC8u;
    SET_GPR_U32(ctx, 31, 0x3C1DD0u);
    ctx->pc = 0x3C1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DC8u;
    // 0x3c1dcc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3C1DC8u, 0x3C1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DD0u;
label_3c1dd0:
    // 0x3c1dd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1dd4:
    // 0x3c1dd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c1dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1dd8:
    // 0x3c1dd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c1dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1ddc:
    // 0x3c1ddc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c1ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1de0:
    // 0x3c1de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c1de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1de4:
    // 0x3c1de4: 0x3e00008  jr          $ra
label_3c1de8:
    if (ctx->pc == 0x3C1DE8u) {
        ctx->pc = 0x3C1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DE4u;
        // 0x3c1de8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1DECu;
        goto label_3c1dec;
    }
    ctx->pc = 0x3C1DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DE4u;
        // 0x3c1de8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1DECu;
label_3c1dec:
    // 0x3c1dec: 0x0  nop
    ctx->pc = 0x3c1decu;
    // NOP
label_3c1df0:
    // 0x3c1df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c1df4:
    // 0x3c1df4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c1df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c1df8:
    // 0x3c1df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1dfc:
    // 0x3c1dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e00:
    // 0x3c1e00: 0xc103790  jal         func_40DE40
label_3c1e04:
    if (ctx->pc == 0x3C1E04u) {
        ctx->pc = 0x3C1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E00u;
        // 0x3c1e04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E08u;
        goto label_3c1e08;
    }
    ctx->pc = 0x3C1E00u;
    SET_GPR_U32(ctx, 31, 0x3C1E08u);
    ctx->pc = 0x3C1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E00u;
    // 0x3c1e04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1E00u, 0x3C1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E08u;
label_3c1e08:
    // 0x3c1e08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1e0c:
    // 0x3c1e0c: 0xc10378e  jal         func_40DE38
label_3c1e10:
    if (ctx->pc == 0x3C1E10u) {
        ctx->pc = 0x3C1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E0Cu;
        // 0x3c1e10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E14u;
        goto label_3c1e14;
    }
    ctx->pc = 0x3C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x3C1E14u);
    ctx->pc = 0x3C1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E0Cu;
    // 0x3c1e10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1E0Cu, 0x3C1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E14u;
label_3c1e14:
    // 0x3c1e14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1e18:
    // 0x3c1e18: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1e1c:
    // 0x3c1e1c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_3c1e20:
    if (ctx->pc == 0x3C1E20u) {
        ctx->pc = 0x3C1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E1Cu;
        // 0x3c1e20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E24u;
        goto label_3c1e24;
    }
    ctx->pc = 0x3C1E1Cu;
    {
        const bool branch_taken_0x3c1e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E1Cu;
        // 0x3c1e20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e1c) {
            ctx->pc = 0x3C1E4Cu;
            goto label_3c1e4c;
        }
    }
    ctx->pc = 0x3C1E24u;
label_3c1e24:
    // 0x3c1e24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3c1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1e28:
    // 0x3c1e28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c1e2c:
    // 0x3c1e2c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c1e30:
    // 0x3c1e30: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3c1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3c1e34:
    // 0x3c1e34: 0x40f809  jalr        $v0
label_3c1e38:
    if (ctx->pc == 0x3C1E38u) {
        ctx->pc = 0x3C1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E34u;
        // 0x3c1e38: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E3Cu;
        goto label_3c1e3c;
    }
    ctx->pc = 0x3C1E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1E3Cu);
        ctx->pc = 0x3C1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E34u;
        // 0x3c1e38: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1E34u, 0x3C1E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1E3Cu;
label_3c1e3c:
    // 0x3c1e3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1e40:
    // 0x3c1e40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1e44:
    // 0x3c1e44: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
label_3c1e48:
    if (ctx->pc == 0x3C1E48u) {
        ctx->pc = 0x3C1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E44u;
        // 0x3c1e48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E4Cu;
        goto label_3c1e4c;
    }
    ctx->pc = 0x3C1E44u;
    {
        const bool branch_taken_0x3c1e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1e44) {
            ctx->pc = 0x3C1E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1E44u;
            // 0x3c1e48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1e28;
        }
    }
    ctx->pc = 0x3C1E4Cu;
label_3c1e4c:
    // 0x3c1e4c: 0xc103684  jal         func_40DA10
label_3c1e50:
    if (ctx->pc == 0x3C1E50u) {
        ctx->pc = 0x3C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E4Cu;
        // 0x3c1e50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E54u;
        goto label_3c1e54;
    }
    ctx->pc = 0x3C1E4Cu;
    SET_GPR_U32(ctx, 31, 0x3C1E54u);
    ctx->pc = 0x3C1E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E4Cu;
    // 0x3c1e50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3C1E4Cu, 0x3C1E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E54u;
label_3c1e54:
    // 0x3c1e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c1e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1e58:
    // 0x3c1e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1e5c:
    // 0x3c1e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c1e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1e60:
    // 0x3c1e60: 0x3e00008  jr          $ra
label_3c1e64:
    if (ctx->pc == 0x3C1E64u) {
        ctx->pc = 0x3C1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E60u;
        // 0x3c1e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E68u;
        goto label_fallthrough_0x3c1e60;
    }
    ctx->pc = 0x3C1E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E60u;
        // 0x3c1e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c1e60:
    ctx->pc = 0x3C1E68u;
}
