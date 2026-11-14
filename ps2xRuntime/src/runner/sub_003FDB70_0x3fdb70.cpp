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

// Function: sub_003FDB70
// Address: 0x3fdb70 - 0x3fdd80
void sub_003FDB70_0x3fdb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDB70_0x3fdb70");
#endif

    switch (ctx->pc) {
        case 0x3fdba4u: goto label_3fdba4;
        case 0x3fdbbcu: goto label_3fdbbc;
        case 0x3fdbd0u: goto label_3fdbd0;
        case 0x3fdbe0u: goto label_3fdbe0;
        case 0x3fdbfcu: goto label_3fdbfc;
        case 0x3fdc10u: goto label_3fdc10;
        case 0x3fdc20u: goto label_3fdc20;
        case 0x3fdcc8u: goto label_3fdcc8;
        case 0x3fdd24u: goto label_3fdd24;
        case 0x3fdd38u: goto label_3fdd38;
        case 0x3fdd54u: goto label_3fdd54;
        case 0x3fdd6cu: goto label_3fdd6c;
        default: break;
    }

    ctx->pc = 0x3fdb70u;

    // 0x3fdb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fdb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3fdb74: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x3fdb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x3fdb78: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x3fdb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x3fdb7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3fdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3fdb80: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3fdb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3fdb84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3fdb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdb88: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3fdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3fdb8c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3fdb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdb90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fdb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3fdb94: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3fdb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdb98: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x3fdb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x3fdb9c: 0xc0f8b78  jal         func_3E2DE0
    ctx->pc = 0x3FDB9Cu;
    SET_GPR_U32(ctx, 31, 0x3FDBA4u);
    ctx->pc = 0x3FDBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDB9Cu;
    // 0x3fdba0: 0xafaa0018  sw          $t2, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DE0u, 0x3FDB9Cu, 0x3FDBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDBA4u;
label_3fdba4:
    // 0x3fdba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FDBA4u;
    {
        const bool branch_taken_0x3fdba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBA4u;
        // 0x3fdba8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdba4) {
            ctx->pc = 0x3FDBB4u;
            goto label_3fdbb4;
        }
    }
    ctx->pc = 0x3FDBACu;
    // 0x3fdbac: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3FDBACu;
    {
        const bool branch_taken_0x3fdbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBACu;
        // 0x3fdbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdbac) {
            ctx->pc = 0x3FDD70u;
            goto label_3fdd70;
        }
    }
    ctx->pc = 0x3FDBB4u;
label_3fdbb4:
    // 0x3fdbb4: 0xc0bc204  jal         func_2F0810
    ctx->pc = 0x3FDBB4u;
    SET_GPR_U32(ctx, 31, 0x3FDBBCu);
    ctx->pc = 0x3FDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDBB4u;
    // 0x3fdbb8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0810u, 0x3FDBB4u, 0x3FDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDBBCu;
label_3fdbbc:
    // 0x3fdbbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FDBBCu;
    {
        const bool branch_taken_0x3fdbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBBCu;
        // 0x3fdbc0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdbbc) {
            ctx->pc = 0x3FDBE8u;
            goto label_3fdbe8;
        }
    }
    ctx->pc = 0x3FDBC4u;
    // 0x3fdbc4: 0x8c450158  lw          $a1, 0x158($v0)
    ctx->pc = 0x3fdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x3fdbc8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FDBC8u;
    SET_GPR_U32(ctx, 31, 0x3FDBD0u);
    ctx->pc = 0x3FDBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDBC8u;
    // 0x3fdbcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FDBC8u, 0x3FDBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDBD0u;
label_3fdbd0:
    // 0x3fdbd0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3fdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3fdbd4: 0xac600158  sw          $zero, 0x158($v1)
    ctx->pc = 0x3fdbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    // 0x3fdbd8: 0xc0f8b70  jal         func_3E2DC0
    ctx->pc = 0x3FDBD8u;
    SET_GPR_U32(ctx, 31, 0x3FDBE0u);
    ctx->pc = 0x3FDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDBD8u;
    // 0x3fdbdc: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DC0u, 0x3FDBD8u, 0x3FDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDBE0u;
label_3fdbe0:
    // 0x3fdbe0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3FDBE0u;
    {
        const bool branch_taken_0x3fdbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBE0u;
        // 0x3fdbe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdbe0) {
            ctx->pc = 0x3FDD70u;
            goto label_3fdd70;
        }
    }
    ctx->pc = 0x3FDBE8u;
label_3fdbe8:
    // 0x3fdbe8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3fdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fdbec: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3fdbecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3fdbf0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3fdbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3fdbf4: 0xc0f8adc  jal         func_3E2B70
    ctx->pc = 0x3FDBF4u;
    SET_GPR_U32(ctx, 31, 0x3FDBFCu);
    ctx->pc = 0x3FDBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDBF4u;
    // 0x3fdbf8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B70u, 0x3FDBF4u, 0x3FDBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDBFCu;
label_3fdbfc:
    // 0x3fdbfc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3fdbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3fdc00: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3fdc00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3fdc04: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3fdc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3fdc08: 0xc0f86ec  jal         func_3E1BB0
    ctx->pc = 0x3FDC08u;
    SET_GPR_U32(ctx, 31, 0x3FDC10u);
    ctx->pc = 0x3FDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDC08u;
    // 0x3fdc0c: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BB0u, 0x3FDC08u, 0x3FDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDC10u;
label_3fdc10:
    // 0x3fdc10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3fdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3fdc14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3fdc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdc18: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x3fdc18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x3fdc1c: 0x2445e0a0  addiu       $a1, $v0, -0x1F60
    ctx->pc = 0x3fdc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
label_3fdc20:
    // 0x3fdc20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3fdc20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fdc24: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3fdc24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fdc28: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FDC28u;
    {
        const bool branch_taken_0x3fdc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC28u;
        // 0x3fdc2c: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc28) {
            ctx->pc = 0x3FDC3Cu;
            goto label_3fdc3c;
        }
    }
    ctx->pc = 0x3FDC30u;
    // 0x3fdc30: 0xdce20100  ld          $v0, 0x100($a3)
    ctx->pc = 0x3fdc30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x3fdc34: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3fdc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3fdc38: 0xfce20100  sd          $v0, 0x100($a3)
    ctx->pc = 0x3fdc38u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 256), GPR_U64(ctx, 2));
label_3fdc3c:
    // 0x3fdc3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fdc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fdc40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3FDC40u;
    {
        const bool branch_taken_0x3fdc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC40u;
        // 0x3fdc44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc40) {
            ctx->pc = 0x3FDC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fdc20;
        }
    }
    ctx->pc = 0x3FDC48u;
    // 0x3fdc48: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3fdc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3fdc4c: 0xdc620100  ld          $v0, 0x100($v1)
    ctx->pc = 0x3fdc4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x3fdc50: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3fdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3fdc54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fdc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3fdc58: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3FDC58u;
    {
        const bool branch_taken_0x3fdc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC58u;
        // 0x3fdc5c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc58) {
            ctx->pc = 0x3FDD24u;
            goto label_3fdd24;
        }
    }
    ctx->pc = 0x3FDC60u;
    // 0x3fdc60: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FDC60u;
    {
        const bool branch_taken_0x3fdc60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC60u;
        // 0x3fdc64: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc60) {
            ctx->pc = 0x3FDCB8u;
            goto label_3fdcb8;
        }
    }
    ctx->pc = 0x3FDC68u;
    // 0x3fdc68: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x3fdc68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fdc6c: 0x8062e0a0  lb          $v0, -0x1F60($v1)
    ctx->pc = 0x3fdc6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959264)));
    // 0x3fdc70: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FDC70u;
    {
        const bool branch_taken_0x3fdc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC70u;
        // 0x3fdc74: 0x2465e0a0  addiu       $a1, $v1, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc70) {
            ctx->pc = 0x3FDCB8u;
            goto label_3fdcb8;
        }
    }
    ctx->pc = 0x3FDC78u;
    // 0x3fdc78: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3fdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3fdc7c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FDC7Cu;
    {
        const bool branch_taken_0x3fdc7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC7Cu;
        // 0x3fdc80: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc7c) {
            ctx->pc = 0x3FDC9Cu;
            goto label_3fdc9c;
        }
    }
    ctx->pc = 0x3FDC84u;
    // 0x3fdc84: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3fdc84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdc88: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x3fdc88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fdc8c: 0x80e20002  lb          $v0, 0x2($a3)
    ctx->pc = 0x3fdc8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3fdc90: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3FDC90u;
    {
        const bool branch_taken_0x3fdc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC90u;
        // 0x3fdc94: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc90) {
            ctx->pc = 0x3FDCBCu;
            goto label_3fdcbc;
        }
    }
    ctx->pc = 0x3FDC98u;
    // 0x3fdc98: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3fdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3fdc9c:
    // 0x3fdc9c: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3FDC9Cu;
    {
        const bool branch_taken_0x3fdc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC9Cu;
        // 0x3fdca0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc9c) {
            ctx->pc = 0x3FDCCCu;
            goto label_3fdccc;
        }
    }
    ctx->pc = 0x3FDCA4u;
    // 0x3fdca4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3fdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdca8: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x3fdca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3fdcac: 0x28420039  slti        $v0, $v0, 0x39
    ctx->pc = 0x3fdcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3fdcb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FDCB0u;
    {
        const bool branch_taken_0x3fdcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCB0u;
        // 0x3fdcb4: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdcb0) {
            ctx->pc = 0x3FDCD0u;
            goto label_3fdcd0;
        }
    }
    ctx->pc = 0x3FDCB8u;
label_3fdcb8:
    // 0x3fdcb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fdcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fdcbc:
    // 0x3fdcbc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3fdcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3fdcc0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FDCC0u;
    SET_GPR_U32(ctx, 31, 0x3FDCC8u);
    ctx->pc = 0x3FDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDCC0u;
    // 0x3fdcc4: 0x24a5fa78  addiu       $a1, $a1, -0x588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FDCC0u, 0x3FDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDCC8u;
label_3fdcc8:
    // 0x3fdcc8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3fdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3fdccc:
    // 0x3fdccc: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3fdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_3fdcd0:
    // 0x3fdcd0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3fdcd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fdcd4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FDCD4u;
    {
        const bool branch_taken_0x3fdcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCD4u;
        // 0x3fdcd8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdcd4) {
            ctx->pc = 0x3FDD28u;
            goto label_3fdd28;
        }
    }
    ctx->pc = 0x3FDCDCu;
    // 0x3fdcdc: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x3fdcdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fdce0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3fdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3fdce4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FDCE4u;
    {
        const bool branch_taken_0x3fdce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCE4u;
        // 0x3fdce8: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdce4) {
            ctx->pc = 0x3FDD2Cu;
            goto label_3fdd2c;
        }
    }
    ctx->pc = 0x3FDCECu;
    // 0x3fdcec: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x3fdcecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fdcf0: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x3fdcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x3fdcf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FDCF4u;
    {
        const bool branch_taken_0x3fdcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCF4u;
        // 0x3fdcf8: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdcf4) {
            ctx->pc = 0x3FDD0Cu;
            goto label_3fdd0c;
        }
    }
    ctx->pc = 0x3FDCFCu;
    // 0x3fdcfc: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x3fdcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3fdd00: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FDD00u;
    {
        const bool branch_taken_0x3fdd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD00u;
        // 0x3fdd04: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdd00) {
            ctx->pc = 0x3FDD2Cu;
            goto label_3fdd2c;
        }
    }
    ctx->pc = 0x3FDD08u;
    // 0x3fdd08: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3fdd08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3fdd0c:
    // 0x3fdd0c: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x3fdd0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3fdd10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FDD10u;
    {
        const bool branch_taken_0x3fdd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD10u;
        // 0x3fdd14: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdd10) {
            ctx->pc = 0x3FDD28u;
            goto label_3fdd28;
        }
    }
    ctx->pc = 0x3FDD18u;
    // 0x3fdd18: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fdd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fdd1c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FDD1Cu;
    SET_GPR_U32(ctx, 31, 0x3FDD24u);
    ctx->pc = 0x3FDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDD1Cu;
    // 0x3fdd20: 0x24a5fab0  addiu       $a1, $a1, -0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FDD1Cu, 0x3FDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDD24u;
label_3fdd24:
    // 0x3fdd24: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3fdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3fdd28:
    // 0x3fdd28: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3fdd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3fdd2c:
    // 0x3fdd2c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x3fdd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fdd30: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FDD30u;
    SET_GPR_U32(ctx, 31, 0x3FDD38u);
    ctx->pc = 0x3FDD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDD30u;
    // 0x3fdd34: 0xac82015c  sw          $v0, 0x15C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FDD30u, 0x3FDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDD38u;
label_3fdd38:
    // 0x3fdd38: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3fdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3fdd3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fdd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fdd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3fdd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd48: 0xac620158  sw          $v0, 0x158($v1)
    ctx->pc = 0x3fdd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 2));
    // 0x3fdd4c: 0xc0ff4a2  jal         func_3FD288
    ctx->pc = 0x3FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x3FDD54u);
    ctx->pc = 0x3FDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDD4Cu;
    // 0x3fdd50: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD288u, 0x3FDD4Cu, 0x3FDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDD54u;
label_3fdd54:
    // 0x3fdd54: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3fdd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3fdd58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fdd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdd60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3fdd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd64: 0xc0ff882  jal         func_3FE208
    ctx->pc = 0x3FDD64u;
    SET_GPR_U32(ctx, 31, 0x3FDD6Cu);
    ctx->pc = 0x3FDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDD64u;
    // 0x3fdd68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE208u, 0x3FDD64u, 0x3FDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDD6Cu;
label_3fdd6c:
    // 0x3fdd6c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x3fdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3fdd70:
    // 0x3fdd70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fdd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fdd74: 0x3e00008  jr          $ra
    ctx->pc = 0x3FDD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD74u;
        // 0x3fdd78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FDD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FDD7Cu;
    // 0x3fdd7c: 0x0  nop
    ctx->pc = 0x3fdd7cu;
    // NOP
    ctx->pc = 0x3fdd80u;
}
