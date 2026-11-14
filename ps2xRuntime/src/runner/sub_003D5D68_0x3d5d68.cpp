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

// Function: sub_003D5D68
// Address: 0x3d5d68 - 0x3d5f80
void sub_003D5D68_0x3d5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5D68_0x3d5d68");
#endif

    switch (ctx->pc) {
        case 0x3d5d98u: goto label_3d5d98;
        case 0x3d5dc8u: goto label_3d5dc8;
        case 0x3d5e04u: goto label_3d5e04;
        case 0x3d5e0cu: goto label_3d5e0c;
        case 0x3d5e28u: goto label_3d5e28;
        case 0x3d5e3cu: goto label_3d5e3c;
        case 0x3d5e4cu: goto label_3d5e4c;
        case 0x3d5e5cu: goto label_3d5e5c;
        case 0x3d5e64u: goto label_3d5e64;
        case 0x3d5e70u: goto label_3d5e70;
        case 0x3d5e80u: goto label_3d5e80;
        case 0x3d5e88u: goto label_3d5e88;
        case 0x3d5e9cu: goto label_3d5e9c;
        case 0x3d5eacu: goto label_3d5eac;
        case 0x3d5eb4u: goto label_3d5eb4;
        case 0x3d5ec4u: goto label_3d5ec4;
        case 0x3d5ee0u: goto label_3d5ee0;
        case 0x3d5ee8u: goto label_3d5ee8;
        case 0x3d5ef0u: goto label_3d5ef0;
        case 0x3d5f00u: goto label_3d5f00;
        case 0x3d5f0cu: goto label_3d5f0c;
        case 0x3d5f28u: goto label_3d5f28;
        case 0x3d5f30u: goto label_3d5f30;
        case 0x3d5f4cu: goto label_3d5f4c;
        case 0x3d5f58u: goto label_3d5f58;
        default: break;
    }

    ctx->pc = 0x3d5d68u;

    // 0x3d5d68: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3d5d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x3d5d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d5d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5d70: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x3d5d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x3d5d74: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x3d5d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3d5d78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d5d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5d7c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x3d5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x3d5d80: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x3d5d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x3d5d84: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x3d5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x3d5d88: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x3d5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x3d5d8c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3d5d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x3d5d90: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3D5D90u;
    SET_GPR_U32(ctx, 31, 0x3D5D98u);
    ctx->pc = 0x3D5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D90u;
    // 0x3d5d94: 0x27a70114  addiu       $a3, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3D5D90u, 0x3D5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D98u;
label_3d5d98:
    // 0x3d5d98: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3D5D98u;
    {
        const bool branch_taken_0x3d5d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D98u;
        // 0x3d5d9c: 0x8fa30114  lw          $v1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5d98) {
            ctx->pc = 0x3D5F58u;
            goto label_3d5f58;
        }
    }
    ctx->pc = 0x3D5DA0u;
    // 0x3d5da0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x3d5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x3d5da4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x3d5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x3d5da8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d5dac: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x3d5dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x3d5db0: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x3D5DB0u;
    {
        const bool branch_taken_0x3d5db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DB0u;
        // 0x3d5db4: 0x8fa60110  lw          $a2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5db0) {
            ctx->pc = 0x3D5F38u;
            goto label_3d5f38;
        }
    }
    ctx->pc = 0x3D5DB8u;
    // 0x3d5db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d5db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5dbc: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x3d5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x3d5dc0: 0xc10480a  jal         func_412028
    ctx->pc = 0x3D5DC0u;
    SET_GPR_U32(ctx, 31, 0x3D5DC8u);
    ctx->pc = 0x3D5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5DC0u;
    // 0x3d5dc4: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3D5DC0u, 0x3D5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5DC8u;
label_3d5dc8:
    // 0x3d5dc8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3d5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3d5dcc: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x3D5DCCu;
    {
        const bool branch_taken_0x3d5dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DCCu;
        // 0x3d5dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5dcc) {
            ctx->pc = 0x3D5F5Cu;
            goto label_3d5f5c;
        }
    }
    ctx->pc = 0x3D5DD4u;
    // 0x3d5dd4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3d5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3d5dd8: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x3d5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3d5ddc: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x3d5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x3d5de0: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x3d5de0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3d5de4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3d5de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3d5de8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5DE8u;
    {
        const bool branch_taken_0x3d5de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DE8u;
        // 0x3d5dec: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5de8) {
            ctx->pc = 0x3D5DFCu;
            goto label_3d5dfc;
        }
    }
    ctx->pc = 0x3D5DF0u;
    // 0x3d5df0: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x3d5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3d5df4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3d5df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3d5df8: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x3d5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_3d5dfc:
    // 0x3d5dfc: 0xc1080e4  jal         func_420390
    ctx->pc = 0x3D5DFCu;
    SET_GPR_U32(ctx, 31, 0x3D5E04u);
    ctx->pc = 0x3D5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5DFCu;
    // 0x3d5e00: 0x97b0011a  lhu         $s0, 0x11A($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 282)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420390u, 0x3D5DFCu, 0x3D5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E04u;
label_3d5e04:
    // 0x3d5e04: 0xc1080f2  jal         func_4203C8
    ctx->pc = 0x3D5E04u;
    SET_GPR_U32(ctx, 31, 0x3D5E0Cu);
    ctx->pc = 0x3D5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E04u;
    // 0x3d5e08: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203C8u, 0x3D5E04u, 0x3D5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E0Cu;
label_3d5e0c:
    // 0x3d5e0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d5e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e10: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x3d5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x3d5e14: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x3d5e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3d5e18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D5E18u;
    {
        const bool branch_taken_0x3d5e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5e18) {
            ctx->pc = 0x3D5E54u;
            goto label_3d5e54;
        }
    }
    ctx->pc = 0x3D5E20u;
    // 0x3d5e20: 0xc1080dc  jal         func_420370
    ctx->pc = 0x3D5E20u;
    SET_GPR_U32(ctx, 31, 0x3D5E28u);
    ctx->pc = 0x3D5E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E20u;
    // 0x3d5e24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x3D5E20u, 0x3D5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E28u;
label_3d5e28:
    // 0x3d5e28: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3d5e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3d5e2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D5E2Cu;
    {
        const bool branch_taken_0x3d5e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5e2c) {
            ctx->pc = 0x3D5E44u;
            goto label_3d5e44;
        }
    }
    ctx->pc = 0x3D5E34u;
    // 0x3d5e34: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5E34u;
    SET_GPR_U32(ctx, 31, 0x3D5E3Cu);
    ctx->pc = 0x3D5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E34u;
    // 0x3d5e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5E34u, 0x3D5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E3Cu;
label_3d5e3c:
    // 0x3d5e3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D5E3Cu;
    {
        const bool branch_taken_0x3d5e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E3Cu;
        // 0x3d5e40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e3c) {
            ctx->pc = 0x3D5E68u;
            goto label_3d5e68;
        }
    }
    ctx->pc = 0x3D5E44u;
label_3d5e44:
    // 0x3d5e44: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5E44u;
    SET_GPR_U32(ctx, 31, 0x3D5E4Cu);
    ctx->pc = 0x3D5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E44u;
    // 0x3d5e48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5E44u, 0x3D5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E4Cu;
label_3d5e4c:
    // 0x3d5e4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D5E4Cu;
    {
        const bool branch_taken_0x3d5e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E4Cu;
        // 0x3d5e50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e4c) {
            ctx->pc = 0x3D5E68u;
            goto label_3d5e68;
        }
    }
    ctx->pc = 0x3D5E54u;
label_3d5e54:
    // 0x3d5e54: 0xc1080dc  jal         func_420370
    ctx->pc = 0x3D5E54u;
    SET_GPR_U32(ctx, 31, 0x3D5E5Cu);
    ctx->pc = 0x3D5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E54u;
    // 0x3d5e58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x3D5E54u, 0x3D5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E5Cu;
label_3d5e5c:
    // 0x3d5e5c: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5E5Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E64u);
    ctx->pc = 0x3D5E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E5Cu;
    // 0x3d5e60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5E5Cu, 0x3D5E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E64u;
label_3d5e64:
    // 0x3d5e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d5e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d5e68:
    // 0x3d5e68: 0xc10521e  jal         func_414878
    ctx->pc = 0x3D5E68u;
    SET_GPR_U32(ctx, 31, 0x3D5E70u);
    ctx->pc = 0x3D5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E68u;
    // 0x3d5e6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x3D5E68u, 0x3D5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E70u;
label_3d5e70:
    // 0x3d5e70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5E70u;
    {
        const bool branch_taken_0x3d5e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E70u;
        // 0x3d5e74: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e70) {
            ctx->pc = 0x3D5E90u;
            goto label_3d5e90;
        }
    }
    ctx->pc = 0x3D5E78u;
    // 0x3d5e78: 0xc1080dc  jal         func_420370
    ctx->pc = 0x3D5E78u;
    SET_GPR_U32(ctx, 31, 0x3D5E80u);
    ctx->pc = 0x3D5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E78u;
    // 0x3d5e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x3D5E78u, 0x3D5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E80u;
label_3d5e80:
    // 0x3d5e80: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5E80u;
    SET_GPR_U32(ctx, 31, 0x3D5E88u);
    ctx->pc = 0x3D5E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E80u;
    // 0x3d5e84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5E80u, 0x3D5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E88u;
label_3d5e88:
    // 0x3d5e88: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3D5E88u;
    {
        const bool branch_taken_0x3d5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E88u;
        // 0x3d5e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5e88) {
            ctx->pc = 0x3D5F5Cu;
            goto label_3d5f5c;
        }
    }
    ctx->pc = 0x3D5E90u;
label_3d5e90:
    // 0x3d5e90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d5e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e94: 0xc10521e  jal         func_414878
    ctx->pc = 0x3D5E94u;
    SET_GPR_U32(ctx, 31, 0x3D5E9Cu);
    ctx->pc = 0x3D5E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E94u;
    // 0x3d5e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x3D5E94u, 0x3D5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E9Cu;
label_3d5e9c:
    // 0x3d5e9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5E9Cu;
    {
        const bool branch_taken_0x3d5e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5e9c) {
            ctx->pc = 0x3D5EBCu;
            goto label_3d5ebc;
        }
    }
    ctx->pc = 0x3D5EA4u;
    // 0x3d5ea4: 0xc1080dc  jal         func_420370
    ctx->pc = 0x3D5EA4u;
    SET_GPR_U32(ctx, 31, 0x3D5EACu);
    ctx->pc = 0x3D5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EA4u;
    // 0x3d5ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x3D5EA4u, 0x3D5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EACu;
label_3d5eac:
    // 0x3d5eac: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5EACu;
    SET_GPR_U32(ctx, 31, 0x3D5EB4u);
    ctx->pc = 0x3D5EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EACu;
    // 0x3d5eb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5EACu, 0x3D5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EB4u;
label_3d5eb4:
    // 0x3d5eb4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3D5EB4u;
    {
        const bool branch_taken_0x3d5eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EB4u;
        // 0x3d5eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5eb4) {
            ctx->pc = 0x3D5F5Cu;
            goto label_3d5f5c;
        }
    }
    ctx->pc = 0x3D5EBCu;
label_3d5ebc:
    // 0x3d5ebc: 0xc10820a  jal         func_420828
    ctx->pc = 0x3D5EBCu;
    SET_GPR_U32(ctx, 31, 0x3D5EC4u);
    ctx->pc = 0x3D5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EBCu;
    // 0x3d5ec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x3D5EBCu, 0x3D5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EC4u;
label_3d5ec4:
    // 0x3d5ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5ec8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D5EC8u;
    {
        const bool branch_taken_0x3d5ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EC8u;
        // 0x3d5ecc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ec8) {
            ctx->pc = 0x3D5EF8u;
            goto label_3d5ef8;
        }
    }
    ctx->pc = 0x3D5ED0u;
    // 0x3d5ed0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3d5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x3d5ed4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5ed8: 0xc104ac2  jal         func_412B08
    ctx->pc = 0x3D5ED8u;
    SET_GPR_U32(ctx, 31, 0x3D5EE0u);
    ctx->pc = 0x3D5EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5ED8u;
    // 0x3d5edc: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412B08u, 0x3D5ED8u, 0x3D5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EE0u;
label_3d5ee0:
    // 0x3d5ee0: 0xc1080dc  jal         func_420370
    ctx->pc = 0x3D5EE0u;
    SET_GPR_U32(ctx, 31, 0x3D5EE8u);
    ctx->pc = 0x3D5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EE0u;
    // 0x3d5ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x3D5EE0u, 0x3D5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EE8u;
label_3d5ee8:
    // 0x3d5ee8: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5EE8u;
    SET_GPR_U32(ctx, 31, 0x3D5EF0u);
    ctx->pc = 0x3D5EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EE8u;
    // 0x3d5eec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5EE8u, 0x3D5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5EF0u;
label_3d5ef0:
    // 0x3d5ef0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3D5EF0u;
    {
        const bool branch_taken_0x3d5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5EF0u;
        // 0x3d5ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ef0) {
            ctx->pc = 0x3D5F5Cu;
            goto label_3d5f5c;
        }
    }
    ctx->pc = 0x3D5EF8u;
label_3d5ef8:
    // 0x3d5ef8: 0xc10815c  jal         func_420570
    ctx->pc = 0x3D5EF8u;
    SET_GPR_U32(ctx, 31, 0x3D5F00u);
    ctx->pc = 0x3D5EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5EF8u;
    // 0x3d5efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x3D5EF8u, 0x3D5F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F00u;
label_3d5f00:
    // 0x3d5f00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d5f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5f04: 0xc108184  jal         func_420610
    ctx->pc = 0x3D5F04u;
    SET_GPR_U32(ctx, 31, 0x3D5F0Cu);
    ctx->pc = 0x3D5F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F04u;
    // 0x3d5f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x3D5F04u, 0x3D5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F0Cu;
label_3d5f0c:
    // 0x3d5f0c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3d5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3d5f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5f14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D5F14u;
    {
        const bool branch_taken_0x3d5f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F14u;
        // 0x3d5f18: 0x97a20118  lhu         $v0, 0x118($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5f14) {
            ctx->pc = 0x3D5F20u;
            goto label_3d5f20;
        }
    }
    ctx->pc = 0x3D5F1Cu;
    // 0x3d5f1c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3d5f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_3d5f20:
    // 0x3d5f20: 0xc1080dc  jal         func_420370
    ctx->pc = 0x3D5F20u;
    SET_GPR_U32(ctx, 31, 0x3D5F28u);
    ctx->pc = 0x3D5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F20u;
    // 0x3d5f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x3D5F20u, 0x3D5F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F28u;
label_3d5f28:
    // 0x3d5f28: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x3D5F28u;
    SET_GPR_U32(ctx, 31, 0x3D5F30u);
    ctx->pc = 0x3D5F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F28u;
    // 0x3d5f2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x3D5F28u, 0x3D5F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F30u;
label_3d5f30:
    // 0x3d5f30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D5F30u;
    {
        const bool branch_taken_0x3d5f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F30u;
        // 0x3d5f34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5f30) {
            ctx->pc = 0x3D5F5Cu;
            goto label_3d5f5c;
        }
    }
    ctx->pc = 0x3D5F38u;
label_3d5f38:
    // 0x3d5f38: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x3d5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x3d5f3c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3d5f40: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3d5f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x3d5f44: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3D5F44u;
    SET_GPR_U32(ctx, 31, 0x3D5F4Cu);
    ctx->pc = 0x3D5F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F44u;
    // 0x3d5f48: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D5F44u, 0x3D5F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F4Cu;
label_3d5f4c:
    // 0x3d5f4c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x3d5f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x3d5f50: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3D5F50u;
    SET_GPR_U32(ctx, 31, 0x3D5F58u);
    ctx->pc = 0x3D5F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F50u;
    // 0x3d5f54: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D5F50u, 0x3D5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F58u;
label_3d5f58:
    // 0x3d5f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d5f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f5c:
    // 0x3d5f5c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x3d5f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3d5f60: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x3d5f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3d5f64: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x3d5f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3d5f68: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x3d5f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3d5f6c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x3d5f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3d5f70: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3d5f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3d5f74: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5F74u;
        // 0x3d5f78: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5F7Cu;
    // 0x3d5f7c: 0x0  nop
    ctx->pc = 0x3d5f7cu;
    // NOP
    ctx->pc = 0x3d5f80u;
}
