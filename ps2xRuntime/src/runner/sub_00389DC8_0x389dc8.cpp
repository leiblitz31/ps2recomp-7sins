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

// Function: sub_00389DC8
// Address: 0x389dc8 - 0x389eb8
void sub_00389DC8_0x389dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389DC8_0x389dc8");
#endif

    switch (ctx->pc) {
        case 0x389dc8u: goto label_389dc8;
        case 0x389dccu: goto label_389dcc;
        case 0x389dd0u: goto label_389dd0;
        case 0x389dd4u: goto label_389dd4;
        case 0x389dd8u: goto label_389dd8;
        case 0x389ddcu: goto label_389ddc;
        case 0x389de0u: goto label_389de0;
        case 0x389de4u: goto label_389de4;
        case 0x389de8u: goto label_389de8;
        case 0x389decu: goto label_389dec;
        case 0x389df0u: goto label_389df0;
        case 0x389df4u: goto label_389df4;
        case 0x389df8u: goto label_389df8;
        case 0x389dfcu: goto label_389dfc;
        case 0x389e00u: goto label_389e00;
        case 0x389e04u: goto label_389e04;
        case 0x389e08u: goto label_389e08;
        case 0x389e0cu: goto label_389e0c;
        case 0x389e10u: goto label_389e10;
        case 0x389e14u: goto label_389e14;
        case 0x389e18u: goto label_389e18;
        case 0x389e1cu: goto label_389e1c;
        case 0x389e20u: goto label_389e20;
        case 0x389e24u: goto label_389e24;
        case 0x389e28u: goto label_389e28;
        case 0x389e2cu: goto label_389e2c;
        case 0x389e30u: goto label_389e30;
        case 0x389e34u: goto label_389e34;
        case 0x389e38u: goto label_389e38;
        case 0x389e3cu: goto label_389e3c;
        case 0x389e40u: goto label_389e40;
        case 0x389e44u: goto label_389e44;
        case 0x389e48u: goto label_389e48;
        case 0x389e4cu: goto label_389e4c;
        case 0x389e50u: goto label_389e50;
        case 0x389e54u: goto label_389e54;
        case 0x389e58u: goto label_389e58;
        case 0x389e5cu: goto label_389e5c;
        case 0x389e60u: goto label_389e60;
        case 0x389e64u: goto label_389e64;
        case 0x389e68u: goto label_389e68;
        case 0x389e6cu: goto label_389e6c;
        case 0x389e70u: goto label_389e70;
        case 0x389e74u: goto label_389e74;
        case 0x389e78u: goto label_389e78;
        case 0x389e7cu: goto label_389e7c;
        case 0x389e80u: goto label_389e80;
        case 0x389e84u: goto label_389e84;
        case 0x389e88u: goto label_389e88;
        case 0x389e8cu: goto label_389e8c;
        case 0x389e90u: goto label_389e90;
        case 0x389e94u: goto label_389e94;
        case 0x389e98u: goto label_389e98;
        case 0x389e9cu: goto label_389e9c;
        case 0x389ea0u: goto label_389ea0;
        case 0x389ea4u: goto label_389ea4;
        case 0x389ea8u: goto label_389ea8;
        case 0x389eacu: goto label_389eac;
        case 0x389eb0u: goto label_389eb0;
        case 0x389eb4u: goto label_389eb4;
        default: break;
    }

    ctx->pc = 0x389dc8u;

label_389dc8:
    // 0x389dc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x389dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_389dcc:
    // 0x389dcc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x389dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_389dd0:
    // 0x389dd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x389dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_389dd4:
    // 0x389dd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x389dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_389dd8:
    // 0x389dd8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x389dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_389ddc:
    // 0x389ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_389de0:
    // 0x389de0: 0xc0e2744  jal         func_389D10
label_389de4:
    if (ctx->pc == 0x389DE4u) {
        ctx->pc = 0x389DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DE0u;
        // 0x389de4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389DE8u;
        goto label_389de8;
    }
    ctx->pc = 0x389DE0u;
    SET_GPR_U32(ctx, 31, 0x389DE8u);
    ctx->pc = 0x389DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DE0u;
    // 0x389de4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x389DE0u, 0x389DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DE8u;
label_389de8:
    // 0x389de8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_389dec:
    if (ctx->pc == 0x389DECu) {
        ctx->pc = 0x389DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DE8u;
        // 0x389dec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389DF0u;
        goto label_389df0;
    }
    ctx->pc = 0x389DE8u;
    {
        const bool branch_taken_0x389de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DE8u;
        // 0x389dec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389de8) {
            ctx->pc = 0x389E94u;
            goto label_389e94;
        }
    }
    ctx->pc = 0x389DF0u;
label_389df0:
    // 0x389df0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x389df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_389df4:
    // 0x389df4: 0xc10686e  jal         func_41A1B8
label_389df8:
    if (ctx->pc == 0x389DF8u) {
        ctx->pc = 0x389DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DF4u;
        // 0x389df8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389DFCu;
        goto label_389dfc;
    }
    ctx->pc = 0x389DF4u;
    SET_GPR_U32(ctx, 31, 0x389DFCu);
    ctx->pc = 0x389DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DF4u;
    // 0x389df8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A1B8u, 0x389DF4u, 0x389DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DFCu;
label_389dfc:
    // 0x389dfc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x389dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_389e00:
    // 0x389e00: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_389e04:
    if (ctx->pc == 0x389E04u) {
        ctx->pc = 0x389E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E00u;
        // 0x389e04: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E08u;
        goto label_389e08;
    }
    ctx->pc = 0x389E00u;
    {
        const bool branch_taken_0x389e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E00u;
        // 0x389e04: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e00) {
            ctx->pc = 0x389E8Cu;
            goto label_389e8c;
        }
    }
    ctx->pc = 0x389E08u;
label_389e08:
    // 0x389e08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x389e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_389e0c:
    // 0x389e0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389e10:
    // 0x389e10: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x389e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_389e14:
    // 0x389e14: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x389e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_389e18:
    // 0x389e18: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x389e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_389e1c:
    // 0x389e1c: 0x2493a6f0  addiu       $s3, $a0, -0x5910
    ctx->pc = 0x389e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944496));
label_389e20:
    // 0x389e20: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x389e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_389e24:
    // 0x389e24: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_389e28:
    if (ctx->pc == 0x389E28u) {
        ctx->pc = 0x389E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E24u;
        // 0x389e28: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E2Cu;
        goto label_389e2c;
    }
    ctx->pc = 0x389E24u;
    {
        const bool branch_taken_0x389e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x389E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E24u;
        // 0x389e28: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e24) {
            ctx->pc = 0x389E4Cu;
            goto label_389e4c;
        }
    }
    ctx->pc = 0x389E2Cu;
label_389e2c:
    // 0x389e2c: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x389e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_389e30:
    // 0x389e30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x389e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_389e34:
    // 0x389e34: 0x260f809  jalr        $s3
label_389e38:
    if (ctx->pc == 0x389E38u) {
        ctx->pc = 0x389E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E34u;
        // 0x389e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E3Cu;
        goto label_389e3c;
    }
    ctx->pc = 0x389E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x389E3Cu);
        ctx->pc = 0x389E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E34u;
        // 0x389e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389E34u, 0x389E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389E3Cu;
label_389e3c:
    // 0x389e3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_389e40:
    if (ctx->pc == 0x389E40u) {
        ctx->pc = 0x389E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E3Cu;
        // 0x389e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E44u;
        goto label_389e44;
    }
    ctx->pc = 0x389E3Cu;
    {
        const bool branch_taken_0x389e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E3Cu;
        // 0x389e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e3c) {
            ctx->pc = 0x389E4Cu;
            goto label_389e4c;
        }
    }
    ctx->pc = 0x389E44u;
label_389e44:
    // 0x389e44: 0x1451fffa  bne         $v0, $s1, . + 4 + (-0x6 << 2)
label_389e48:
    if (ctx->pc == 0x389E48u) {
        ctx->pc = 0x389E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E44u;
        // 0x389e48: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E4Cu;
        goto label_389e4c;
    }
    ctx->pc = 0x389E44u;
    {
        const bool branch_taken_0x389e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x389E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E44u;
        // 0x389e48: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e44) {
            ctx->pc = 0x389E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389e30;
        }
    }
    ctx->pc = 0x389E4Cu;
label_389e4c:
    // 0x389e4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x389e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_389e50:
    // 0x389e50: 0xc106880  jal         func_41A200
label_389e54:
    if (ctx->pc == 0x389E54u) {
        ctx->pc = 0x389E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E50u;
        // 0x389e54: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E58u;
        goto label_389e58;
    }
    ctx->pc = 0x389E50u;
    SET_GPR_U32(ctx, 31, 0x389E58u);
    ctx->pc = 0x389E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389E50u;
    // 0x389e54: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A200u, 0x389E50u, 0x389E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389E58u;
label_389e58:
    // 0x389e58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x389e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_389e5c:
    // 0x389e5c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_389e60:
    if (ctx->pc == 0x389E60u) {
        ctx->pc = 0x389E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E5Cu;
        // 0x389e60: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E64u;
        goto label_389e64;
    }
    ctx->pc = 0x389E5Cu;
    {
        const bool branch_taken_0x389e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E5Cu;
        // 0x389e60: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e5c) {
            ctx->pc = 0x389E88u;
            goto label_389e88;
        }
    }
    ctx->pc = 0x389E64u;
label_389e64:
    // 0x389e64: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x389e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_389e68:
    // 0x389e68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x389e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_389e6c:
    // 0x389e6c: 0x2484adb8  addiu       $a0, $a0, -0x5248
    ctx->pc = 0x389e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
label_389e70:
    // 0x389e70: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x389e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_389e74:
    // 0x389e74: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x389e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_389e78:
    // 0x389e78: 0xc104cbe  jal         func_4132F8
label_389e7c:
    if (ctx->pc == 0x389E7Cu) {
        ctx->pc = 0x389E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E78u;
        // 0x389e7c: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E80u;
        goto label_389e80;
    }
    ctx->pc = 0x389E78u;
    SET_GPR_U32(ctx, 31, 0x389E80u);
    ctx->pc = 0x389E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389E78u;
    // 0x389e7c: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4132F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4132F8u, 0x389E78u, 0x389E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389E80u;
label_389e80:
    // 0x389e80: 0x10000005  b           . + 4 + (0x5 << 2)
label_389e84:
    if (ctx->pc == 0x389E84u) {
        ctx->pc = 0x389E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E80u;
        // 0x389e84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E88u;
        goto label_389e88;
    }
    ctx->pc = 0x389E80u;
    {
        const bool branch_taken_0x389e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E80u;
        // 0x389e84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e80) {
            ctx->pc = 0x389E98u;
            goto label_389e98;
        }
    }
    ctx->pc = 0x389E88u;
label_389e88:
    // 0x389e88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x389e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_389e8c:
    // 0x389e8c: 0xc0e20da  jal         func_388368
label_389e90:
    if (ctx->pc == 0x389E90u) {
        ctx->pc = 0x389E94u;
        goto label_389e94;
    }
    ctx->pc = 0x389E8Cu;
    SET_GPR_U32(ctx, 31, 0x389E94u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x389E8Cu, 0x389E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389E94u;
label_389e94:
    // 0x389e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389e98:
    // 0x389e98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x389e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_389e9c:
    // 0x389e9c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x389e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_389ea0:
    // 0x389ea0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x389ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389ea4:
    // 0x389ea4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x389ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389ea8:
    // 0x389ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_389eac:
    // 0x389eac: 0x3e00008  jr          $ra
label_389eb0:
    if (ctx->pc == 0x389EB0u) {
        ctx->pc = 0x389EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EACu;
        // 0x389eb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EB4u;
        goto label_389eb4;
    }
    ctx->pc = 0x389EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EACu;
        // 0x389eb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389EB4u;
label_389eb4:
    // 0x389eb4: 0x0  nop
    ctx->pc = 0x389eb4u;
    // NOP
    ctx->pc = 0x389eb8u;
}
