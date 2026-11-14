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

// Function: sub_003E2EB8
// Address: 0x3e2eb8 - 0x3e3178
void sub_003E2EB8_0x3e2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2EB8_0x3e2eb8");
#endif

    switch (ctx->pc) {
        case 0x3e2eecu: goto label_3e2eec;
        case 0x3e2f04u: goto label_3e2f04;
        case 0x3e2f18u: goto label_3e2f18;
        case 0x3e2f28u: goto label_3e2f28;
        case 0x3e2f44u: goto label_3e2f44;
        case 0x3e2f58u: goto label_3e2f58;
        case 0x3e2f68u: goto label_3e2f68;
        case 0x3e3010u: goto label_3e3010;
        case 0x3e306cu: goto label_3e306c;
        case 0x3e3080u: goto label_3e3080;
        case 0x3e30bcu: goto label_3e30bc;
        case 0x3e3110u: goto label_3e3110;
        case 0x3e3128u: goto label_3e3128;
        case 0x3e313cu: goto label_3e313c;
        case 0x3e3164u: goto label_3e3164;
        default: break;
    }

    ctx->pc = 0x3e2eb8u;

    // 0x3e2eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e2eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e2ebc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x3e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x3e2ec0: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x3e2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x3e2ec4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3e2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3e2ec8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3e2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3e2ecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2ed0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3e2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3e2ed4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3e2ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e2edc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3e2edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ee0: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x3e2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x3e2ee4: 0xc0f8b78  jal         func_3E2DE0
    ctx->pc = 0x3E2EE4u;
    SET_GPR_U32(ctx, 31, 0x3E2EECu);
    ctx->pc = 0x3E2EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2EE4u;
    // 0x3e2ee8: 0xafaa0018  sw          $t2, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DE0u, 0x3E2EE4u, 0x3E2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2EECu;
label_3e2eec:
    // 0x3e2eec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2EECu;
    {
        const bool branch_taken_0x3e2eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EECu;
        // 0x3e2ef0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2eec) {
            ctx->pc = 0x3E2EFCu;
            goto label_3e2efc;
        }
    }
    ctx->pc = 0x3E2EF4u;
    // 0x3e2ef4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3E2EF4u;
    {
        const bool branch_taken_0x3e2ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EF4u;
        // 0x3e2ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ef4) {
            ctx->pc = 0x3E3168u;
            goto label_3e3168;
        }
    }
    ctx->pc = 0x3E2EFCu;
label_3e2efc:
    // 0x3e2efc: 0xc0bc204  jal         func_2F0810
    ctx->pc = 0x3E2EFCu;
    SET_GPR_U32(ctx, 31, 0x3E2F04u);
    ctx->pc = 0x3E2F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2EFCu;
    // 0x3e2f00: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0810u, 0x3E2EFCu, 0x3E2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F04u;
label_3e2f04:
    // 0x3e2f04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2F04u;
    {
        const bool branch_taken_0x3e2f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F04u;
        // 0x3e2f08: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f04) {
            ctx->pc = 0x3E2F30u;
            goto label_3e2f30;
        }
    }
    ctx->pc = 0x3E2F0Cu;
    // 0x3e2f0c: 0x8c450158  lw          $a1, 0x158($v0)
    ctx->pc = 0x3e2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x3e2f10: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E2F10u;
    SET_GPR_U32(ctx, 31, 0x3E2F18u);
    ctx->pc = 0x3E2F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F10u;
    // 0x3e2f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E2F10u, 0x3E2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F18u;
label_3e2f18:
    // 0x3e2f18: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3e2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e2f1c: 0xac600158  sw          $zero, 0x158($v1)
    ctx->pc = 0x3e2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    // 0x3e2f20: 0xc0f8b70  jal         func_3E2DC0
    ctx->pc = 0x3E2F20u;
    SET_GPR_U32(ctx, 31, 0x3E2F28u);
    ctx->pc = 0x3E2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F20u;
    // 0x3e2f24: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DC0u, 0x3E2F20u, 0x3E2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F28u;
label_3e2f28:
    // 0x3e2f28: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x3E2F28u;
    {
        const bool branch_taken_0x3e2f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F28u;
        // 0x3e2f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f28) {
            ctx->pc = 0x3E3168u;
            goto label_3e3168;
        }
    }
    ctx->pc = 0x3E2F30u;
label_3e2f30:
    // 0x3e2f30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3e2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2f34: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3e2f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3e2f38: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3e2f38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e2f3c: 0xc0f8adc  jal         func_3E2B70
    ctx->pc = 0x3E2F3Cu;
    SET_GPR_U32(ctx, 31, 0x3E2F44u);
    ctx->pc = 0x3E2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F3Cu;
    // 0x3e2f40: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B70u, 0x3E2F3Cu, 0x3E2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F44u;
label_3e2f44:
    // 0x3e2f44: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3e2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3e2f48: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3e2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2f4c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e2f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e2f50: 0xc0f86ec  jal         func_3E1BB0
    ctx->pc = 0x3E2F50u;
    SET_GPR_U32(ctx, 31, 0x3E2F58u);
    ctx->pc = 0x3E2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F50u;
    // 0x3e2f54: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BB0u, 0x3E2F50u, 0x3E2F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F58u;
label_3e2f58:
    // 0x3e2f58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e2f5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3e2f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2f60: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x3e2f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x3e2f64: 0x2445e0a0  addiu       $a1, $v0, -0x1F60
    ctx->pc = 0x3e2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
label_3e2f68:
    // 0x3e2f68: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3e2f68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e2f6c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3e2f6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e2f70: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2F70u;
    {
        const bool branch_taken_0x3e2f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F70u;
        // 0x3e2f74: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f70) {
            ctx->pc = 0x3E2F84u;
            goto label_3e2f84;
        }
    }
    ctx->pc = 0x3E2F78u;
    // 0x3e2f78: 0xdce20100  ld          $v0, 0x100($a3)
    ctx->pc = 0x3e2f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x3e2f7c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3e2f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3e2f80: 0xfce20100  sd          $v0, 0x100($a3)
    ctx->pc = 0x3e2f80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 256), GPR_U64(ctx, 2));
label_3e2f84:
    // 0x3e2f84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e2f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e2f88: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3E2F88u;
    {
        const bool branch_taken_0x3e2f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F88u;
        // 0x3e2f8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f88) {
            ctx->pc = 0x3E2F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2f68;
        }
    }
    ctx->pc = 0x3E2F90u;
    // 0x3e2f90: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3e2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e2f94: 0xdc620100  ld          $v0, 0x100($v1)
    ctx->pc = 0x3e2f94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x3e2f98: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3e2f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e2f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e2fa0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3E2FA0u;
    {
        const bool branch_taken_0x3e2fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FA0u;
        // 0x3e2fa4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fa0) {
            ctx->pc = 0x3E306Cu;
            goto label_3e306c;
        }
    }
    ctx->pc = 0x3E2FA8u;
    // 0x3e2fa8: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E2FA8u;
    {
        const bool branch_taken_0x3e2fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FA8u;
        // 0x3e2fac: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fa8) {
            ctx->pc = 0x3E3000u;
            goto label_3e3000;
        }
    }
    ctx->pc = 0x3E2FB0u;
    // 0x3e2fb0: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x3e2fb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e2fb4: 0x8062e0a0  lb          $v0, -0x1F60($v1)
    ctx->pc = 0x3e2fb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959264)));
    // 0x3e2fb8: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E2FB8u;
    {
        const bool branch_taken_0x3e2fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FB8u;
        // 0x3e2fbc: 0x2465e0a0  addiu       $a1, $v1, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fb8) {
            ctx->pc = 0x3E3000u;
            goto label_3e3000;
        }
    }
    ctx->pc = 0x3E2FC0u;
    // 0x3e2fc0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3e2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3e2fc4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2FC4u;
    {
        const bool branch_taken_0x3e2fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FC4u;
        // 0x3e2fc8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fc4) {
            ctx->pc = 0x3E2FE4u;
            goto label_3e2fe4;
        }
    }
    ctx->pc = 0x3E2FCCu;
    // 0x3e2fcc: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x3e2fccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3e2fd0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3e2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2fd4: 0x80a20002  lb          $v0, 0x2($a1)
    ctx->pc = 0x3e2fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3e2fd8: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2FD8u;
    {
        const bool branch_taken_0x3e2fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FD8u;
        // 0x3e2fdc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fd8) {
            ctx->pc = 0x3E3004u;
            goto label_3e3004;
        }
    }
    ctx->pc = 0x3E2FE0u;
    // 0x3e2fe0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3e2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3e2fe4:
    // 0x3e2fe4: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E2FE4u;
    {
        const bool branch_taken_0x3e2fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FE4u;
        // 0x3e2fe8: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fe4) {
            ctx->pc = 0x3E3014u;
            goto label_3e3014;
        }
    }
    ctx->pc = 0x3E2FECu;
    // 0x3e2fec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3e2fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2ff0: 0x80c20002  lb          $v0, 0x2($a2)
    ctx->pc = 0x3e2ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3e2ff4: 0x28420039  slti        $v0, $v0, 0x39
    ctx->pc = 0x3e2ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3e2ff8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2FF8u;
    {
        const bool branch_taken_0x3e2ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FF8u;
        // 0x3e2ffc: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ff8) {
            ctx->pc = 0x3E3018u;
            goto label_3e3018;
        }
    }
    ctx->pc = 0x3E3000u;
label_3e3000:
    // 0x3e3000: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e3004:
    // 0x3e3004: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e3004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e3008: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3008u;
    SET_GPR_U32(ctx, 31, 0x3E3010u);
    ctx->pc = 0x3E300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3008u;
    // 0x3e300c: 0x24a5e370  addiu       $a1, $a1, -0x1C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3008u, 0x3E3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3010u;
label_3e3010:
    // 0x3e3010: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3e3010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3e3014:
    // 0x3e3014: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3e3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_3e3018:
    // 0x3e3018: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x3e3018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e301c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E301Cu;
    {
        const bool branch_taken_0x3e301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E301Cu;
        // 0x3e3020: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e301c) {
            ctx->pc = 0x3E3070u;
            goto label_3e3070;
        }
    }
    ctx->pc = 0x3E3024u;
    // 0x3e3024: 0x80e30002  lb          $v1, 0x2($a3)
    ctx->pc = 0x3e3024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3e3028: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3e3028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3e302c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E302Cu;
    {
        const bool branch_taken_0x3e302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E302Cu;
        // 0x3e3030: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e302c) {
            ctx->pc = 0x3E3074u;
            goto label_3e3074;
        }
    }
    ctx->pc = 0x3E3034u;
    // 0x3e3034: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x3e3034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3e3038: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x3e3038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x3e303c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E303Cu;
    {
        const bool branch_taken_0x3e303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e303c) {
            ctx->pc = 0x3E3040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E303Cu;
            // 0x3e3040: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E3044u;
    // 0x3e3044: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x3e3044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3e3048: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E3048u;
    {
        const bool branch_taken_0x3e3048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3048u;
        // 0x3e304c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3048) {
            ctx->pc = 0x3E3074u;
            goto label_3e3074;
        }
    }
    ctx->pc = 0x3E3050u;
    // 0x3e3050: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3e3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3e3054:
    // 0x3e3054: 0x80620005  lb          $v0, 0x5($v1)
    ctx->pc = 0x3e3054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x3e3058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3058u;
    {
        const bool branch_taken_0x3e3058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3058u;
        // 0x3e305c: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3058) {
            ctx->pc = 0x3E3070u;
            goto label_3e3070;
        }
    }
    ctx->pc = 0x3E3060u;
    // 0x3e3060: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e3064: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3064u;
    SET_GPR_U32(ctx, 31, 0x3E306Cu);
    ctx->pc = 0x3E3068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3064u;
    // 0x3e3068: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3064u, 0x3E306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E306Cu;
label_3e306c:
    // 0x3e306c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e306cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e3070:
    // 0x3e3070: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3e3070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3e3074:
    // 0x3e3074: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x3e3074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3e3078: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3E3078u;
    SET_GPR_U32(ctx, 31, 0x3E3080u);
    ctx->pc = 0x3E307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3078u;
    // 0x3e307c: 0xac82015c  sw          $v0, 0x15C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E3078u, 0x3E3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3080u;
label_3e3080:
    // 0x3e3080: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e3084: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3e3084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3e3088: 0x246316a8  addiu       $v1, $v1, 0x16A8
    ctx->pc = 0x3e3088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5800));
    // 0x3e308c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3e308cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3e3090: 0xac830138  sw          $v1, 0x138($a0)
    ctx->pc = 0x3e3090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 3));
    // 0x3e3094: 0x24c61758  addiu       $a2, $a2, 0x1758
    ctx->pc = 0x3e3094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5976));
    // 0x3e3098: 0xac840140  sw          $a0, 0x140($a0)
    ctx->pc = 0x3e3098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 4));
    // 0x3e309c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3e309cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3e30a0: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x3e30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x3e30a4: 0x24a59c68  addiu       $a1, $a1, -0x6398
    ctx->pc = 0x3e30a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941800));
    // 0x3e30a8: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x3e30a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e30ac: 0xace6013c  sw          $a2, 0x13C($a3)
    ctx->pc = 0x3e30acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 6));
    // 0x3e30b0: 0x24e40110  addiu       $a0, $a3, 0x110
    ctx->pc = 0x3e30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x3e30b4: 0xc0f73f2  jal         func_3DCFC8
    ctx->pc = 0x3E30B4u;
    SET_GPR_U32(ctx, 31, 0x3E30BCu);
    ctx->pc = 0x3E30B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E30B4u;
    // 0x3e30b8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCFC8u, 0x3E30B4u, 0x3E30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E30BCu;
label_3e30bc:
    // 0x3e30bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e30bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e30c0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3e30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3e30c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E30C4u;
    {
        const bool branch_taken_0x3e30c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30C4u;
        // 0x3e30c8: 0x2862fffd  slti        $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30c4) {
            ctx->pc = 0x3E3100u;
            goto label_3e3100;
        }
    }
    ctx->pc = 0x3E30CCu;
    // 0x3e30cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E30CCu;
    {
        const bool branch_taken_0x3e30cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30CCu;
        // 0x3e30d0: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30cc) {
            ctx->pc = 0x3E30E4u;
            goto label_3e30e4;
        }
    }
    ctx->pc = 0x3E30D4u;
    // 0x3e30d4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E30D4u;
    {
        const bool branch_taken_0x3e30d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30D4u;
        // 0x3e30d8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30d4) {
            ctx->pc = 0x3E3118u;
            goto label_3e3118;
        }
    }
    ctx->pc = 0x3E30DCu;
    // 0x3e30dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E30DCu;
    {
        const bool branch_taken_0x3e30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30DCu;
        // 0x3e30e0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30dc) {
            ctx->pc = 0x3E3134u;
            goto label_3e3134;
        }
    }
    ctx->pc = 0x3E30E4u;
label_3e30e4:
    // 0x3e30e4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3e30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3e30e8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E30E8u;
    {
        const bool branch_taken_0x3e30e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30E8u;
        // 0x3e30ec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30e8) {
            ctx->pc = 0x3E3104u;
            goto label_3e3104;
        }
    }
    ctx->pc = 0x3E30F0u;
    // 0x3e30f0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3E30F0u;
    {
        const bool branch_taken_0x3e30f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30F0u;
        // 0x3e30f4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30f0) {
            ctx->pc = 0x3E3130u;
            goto label_3e3130;
        }
    }
    ctx->pc = 0x3E30F8u;
    // 0x3e30f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E30F8u;
    {
        const bool branch_taken_0x3e30f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30F8u;
        // 0x3e30fc: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30f8) {
            ctx->pc = 0x3E3140u;
            goto label_3e3140;
        }
    }
    ctx->pc = 0x3E3100u;
label_3e3100:
    // 0x3e3100: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e3104:
    // 0x3e3104: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e3104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e3108: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3108u;
    SET_GPR_U32(ctx, 31, 0x3E3110u);
    ctx->pc = 0x3E310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3108u;
    // 0x3e310c: 0x24a5e3f0  addiu       $a1, $a1, -0x1C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3108u, 0x3E3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3110u;
label_3e3110:
    // 0x3e3110: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E3110u;
    {
        const bool branch_taken_0x3e3110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3110u;
        // 0x3e3114: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3110) {
            ctx->pc = 0x3E3140u;
            goto label_3e3140;
        }
    }
    ctx->pc = 0x3E3118u;
label_3e3118:
    // 0x3e3118: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e311c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e3120: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3120u;
    SET_GPR_U32(ctx, 31, 0x3E3128u);
    ctx->pc = 0x3E3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3120u;
    // 0x3e3124: 0x24a5e408  addiu       $a1, $a1, -0x1BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3120u, 0x3E3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3128u;
label_3e3128:
    // 0x3e3128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3128u;
    {
        const bool branch_taken_0x3e3128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3128u;
        // 0x3e312c: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3128) {
            ctx->pc = 0x3E3140u;
            goto label_3e3140;
        }
    }
    ctx->pc = 0x3E3130u;
label_3e3130:
    // 0x3e3130: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e3130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e3134:
    // 0x3e3134: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3134u;
    SET_GPR_U32(ctx, 31, 0x3E313Cu);
    ctx->pc = 0x3E3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3134u;
    // 0x3e3138: 0x24a5e420  addiu       $a1, $a1, -0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3134u, 0x3E313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E313Cu;
label_3e313c:
    // 0x3e313c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3e313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e3140:
    // 0x3e3140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3148: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x3e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x3e314c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3150: 0x8c83015c  lw          $v1, 0x15C($a0)
    ctx->pc = 0x3e3150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x3e3154: 0xac820120  sw          $v0, 0x120($a0)
    ctx->pc = 0x3e3154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 2));
    // 0x3e3158: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x3e3158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3e315c: 0xc0f94c4  jal         func_3E5310
    ctx->pc = 0x3E315Cu;
    SET_GPR_U32(ctx, 31, 0x3E3164u);
    ctx->pc = 0x3E3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E315Cu;
    // 0x3e3160: 0xace30124  sw          $v1, 0x124($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5310u, 0x3E315Cu, 0x3E3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3164u;
label_3e3164:
    // 0x3e3164: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x3e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e3168:
    // 0x3e3168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e3168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e316c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E316Cu;
        // 0x3e3170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E316Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3174u;
    // 0x3e3174: 0x0  nop
    ctx->pc = 0x3e3174u;
    // NOP
    ctx->pc = 0x3e3178u;
}
