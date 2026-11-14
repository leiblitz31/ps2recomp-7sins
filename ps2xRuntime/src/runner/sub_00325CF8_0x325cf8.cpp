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

// Function: sub_00325CF8
// Address: 0x325cf8 - 0x325e60
void sub_00325CF8_0x325cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325CF8_0x325cf8");
#endif

    switch (ctx->pc) {
        case 0x325d28u: goto label_325d28;
        case 0x325d8cu: goto label_325d8c;
        case 0x325d9cu: goto label_325d9c;
        case 0x325dacu: goto label_325dac;
        case 0x325e04u: goto label_325e04;
        case 0x325e14u: goto label_325e14;
        case 0x325e24u: goto label_325e24;
        case 0x325e34u: goto label_325e34;
        default: break;
    }

    ctx->pc = 0x325cf8u;

    // 0x325cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325cfc: 0x8f83a63c  lw          $v1, -0x59C4($gp)
    ctx->pc = 0x325cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944316)));
    // 0x325d00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x325d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325d10: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x325d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x325d14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x325d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x325d18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x325D18u;
    {
        const bool branch_taken_0x325d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D18u;
        // 0x325d1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d18) {
            ctx->pc = 0x325D40u;
            goto label_325d40;
        }
    }
    ctx->pc = 0x325D20u;
    // 0x325d20: 0xc0c9bde  jal         func_326F78
    ctx->pc = 0x325D20u;
    SET_GPR_U32(ctx, 31, 0x325D28u);
    ctx->pc = 0x326F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F78u, 0x325D20u, 0x325D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D28u;
label_325d28:
    // 0x325d28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325D28u;
    {
        const bool branch_taken_0x325d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D28u;
        // 0x325d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d28) {
            ctx->pc = 0x325D38u;
            goto label_325d38;
        }
    }
    ctx->pc = 0x325D30u;
    // 0x325d30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x325D30u;
    {
        const bool branch_taken_0x325d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D30u;
        // 0x325d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d30) {
            ctx->pc = 0x325D40u;
            goto label_325d40;
        }
    }
    ctx->pc = 0x325D38u;
label_325d38:
    // 0x325d38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x325d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x325d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x325d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325d40:
    // 0x325d40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x325d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x325D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D4Cu;
        // 0x325d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D54u;
    // 0x325d54: 0x0  nop
    ctx->pc = 0x325d54u;
    // NOP
    // 0x325d58: 0x8f82a63c  lw          $v0, -0x59C4($gp)
    ctx->pc = 0x325d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944316)));
    // 0x325d5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325d60: 0x3e00008  jr          $ra
    ctx->pc = 0x325D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D60u;
        // 0x325d64: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D68u;
    // 0x325d68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325d6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x325d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d78: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x325d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x325d7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x325d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325d84: 0xc0c9688  jal         func_325A20
    ctx->pc = 0x325D84u;
    SET_GPR_U32(ctx, 31, 0x325D8Cu);
    ctx->pc = 0x325D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D84u;
    // 0x325d88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x325A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A20u, 0x325D84u, 0x325D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D8Cu;
label_325d8c:
    // 0x325d8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x325D8Cu;
    {
        const bool branch_taken_0x325d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D8Cu;
        // 0x325d90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d8c) {
            ctx->pc = 0x325DB8u;
            goto label_325db8;
        }
    }
    ctx->pc = 0x325D94u;
    // 0x325d94: 0xc0c97b8  jal         func_325EE0
    ctx->pc = 0x325D94u;
    SET_GPR_U32(ctx, 31, 0x325D9Cu);
    ctx->pc = 0x325D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D94u;
    // 0x325d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325EE0u, 0x325D94u, 0x325D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D9Cu;
label_325d9c:
    // 0x325d9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325D9Cu;
    {
        const bool branch_taken_0x325d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D9Cu;
        // 0x325da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d9c) {
            ctx->pc = 0x325DB8u;
            goto label_325db8;
        }
    }
    ctx->pc = 0x325DA4u;
    // 0x325da4: 0xc0c97cc  jal         func_325F30
    ctx->pc = 0x325DA4u;
    SET_GPR_U32(ctx, 31, 0x325DACu);
    ctx->pc = 0x325DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DA4u;
    // 0x325da8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x325F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F30u, 0x325DA4u, 0x325DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325DACu;
label_325dac:
    // 0x325dac: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x325dacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x325db0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x325DB0u;
    {
        const bool branch_taken_0x325db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DB0u;
        // 0x325db4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325db0) {
            ctx->pc = 0x325DBCu;
            goto label_325dbc;
        }
    }
    ctx->pc = 0x325DB8u;
label_325db8:
    // 0x325db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325dbc:
    // 0x325dbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x325dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325dc8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x325dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x325dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x325DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DCCu;
        // 0x325dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DD4u;
    // 0x325dd4: 0x0  nop
    ctx->pc = 0x325dd4u;
    // NOP
    // 0x325dd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325ddc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x325ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x325de0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x325de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x325de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325de8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x325de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x325dec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x325decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325df0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x325df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x325df4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x325df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325dfc: 0xc0c982c  jal         func_3260B0
    ctx->pc = 0x325DFCu;
    SET_GPR_U32(ctx, 31, 0x325E04u);
    ctx->pc = 0x325E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DFCu;
    // 0x325e00: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260B0u, 0x325DFCu, 0x325E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E04u;
label_325e04:
    // 0x325e04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x325E04u;
    {
        const bool branch_taken_0x325e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E04u;
        // 0x325e08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e04) {
            ctx->pc = 0x325E40u;
            goto label_325e40;
        }
    }
    ctx->pc = 0x325E0Cu;
    // 0x325e0c: 0xc0c9856  jal         func_326158
    ctx->pc = 0x325E0Cu;
    SET_GPR_U32(ctx, 31, 0x325E14u);
    ctx->pc = 0x325E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E0Cu;
    // 0x325e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326158u, 0x325E0Cu, 0x325E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E14u;
label_325e14:
    // 0x325e14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x325E14u;
    {
        const bool branch_taken_0x325e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E14u;
        // 0x325e18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e14) {
            ctx->pc = 0x325E40u;
            goto label_325e40;
        }
    }
    ctx->pc = 0x325E1Cu;
    // 0x325e1c: 0xc0c986a  jal         func_3261A8
    ctx->pc = 0x325E1Cu;
    SET_GPR_U32(ctx, 31, 0x325E24u);
    ctx->pc = 0x325E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E1Cu;
    // 0x325e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3261A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3261A8u, 0x325E1Cu, 0x325E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E24u;
label_325e24:
    // 0x325e24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325E24u;
    {
        const bool branch_taken_0x325e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E24u;
        // 0x325e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e24) {
            ctx->pc = 0x325E40u;
            goto label_325e40;
        }
    }
    ctx->pc = 0x325E2Cu;
    // 0x325e2c: 0xc0c9886  jal         func_326218
    ctx->pc = 0x325E2Cu;
    SET_GPR_U32(ctx, 31, 0x325E34u);
    ctx->pc = 0x325E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E2Cu;
    // 0x325e30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x326218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326218u, 0x325E2Cu, 0x325E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E34u;
label_325e34:
    // 0x325e34: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x325e34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x325e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x325E38u;
    {
        const bool branch_taken_0x325e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E38u;
        // 0x325e3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e38) {
            ctx->pc = 0x325E44u;
            goto label_325e44;
        }
    }
    ctx->pc = 0x325E40u;
label_325e40:
    // 0x325e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325e44:
    // 0x325e44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x325e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x325e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325e4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x325e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325e54: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x325e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x325e58: 0x3e00008  jr          $ra
    ctx->pc = 0x325E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E58u;
        // 0x325e5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325E60u;
}
