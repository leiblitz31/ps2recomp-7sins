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

// Function: sub_00340AD0
// Address: 0x340ad0 - 0x340c30
void sub_00340AD0_0x340ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340AD0_0x340ad0");
#endif

    switch (ctx->pc) {
        case 0x340b08u: goto label_340b08;
        case 0x340b20u: goto label_340b20;
        case 0x340b40u: goto label_340b40;
        case 0x340b60u: goto label_340b60;
        case 0x340b80u: goto label_340b80;
        case 0x340b9cu: goto label_340b9c;
        case 0x340bb8u: goto label_340bb8;
        case 0x340bd8u: goto label_340bd8;
        case 0x340bf4u: goto label_340bf4;
        case 0x340c10u: goto label_340c10;
        default: break;
    }

    ctx->pc = 0x340ad0u;

    // 0x340ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x340ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x340ad4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x340ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x340ad8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x340ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x340adc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x340adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ae0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x340ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x340ae4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x340ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ae8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x340ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x340aec: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x340aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340af0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340af4: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x340af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x340af8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x340af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x340afc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x340afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x340b00: 0xc0d120c  jal         func_344830
    ctx->pc = 0x340B00u;
    SET_GPR_U32(ctx, 31, 0x340B08u);
    ctx->pc = 0x340B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B00u;
    // 0x340b04: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x340B00u, 0x340B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B08u;
label_340b08:
    // 0x340b08: 0x4400041  bltz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x340B08u;
    {
        const bool branch_taken_0x340b08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B08u;
        // 0x340b0c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b08) {
            ctx->pc = 0x340C10u;
            goto label_340c10;
        }
    }
    ctx->pc = 0x340B10u;
    // 0x340b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b18: 0xc103440  jal         func_40D100
    ctx->pc = 0x340B18u;
    SET_GPR_U32(ctx, 31, 0x340B20u);
    ctx->pc = 0x340B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B18u;
    // 0x340b1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340B18u, 0x340B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B20u;
label_340b20:
    // 0x340b20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x340b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340b24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x340b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x340b28: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x340B28u;
    {
        const bool branch_taken_0x340b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x340b28) {
            ctx->pc = 0x340B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340B28u;
            // 0x340b2c: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340B30u;
label_340b30:
    // 0x340b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b38: 0xc103440  jal         func_40D100
    ctx->pc = 0x340B38u;
    SET_GPR_U32(ctx, 31, 0x340B40u);
    ctx->pc = 0x340B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B38u;
    // 0x340b3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340B38u, 0x340B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B40u;
label_340b40:
    // 0x340b40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x340b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x340b44: 0x54520002  bnel        $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x340B44u;
    {
        const bool branch_taken_0x340b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x340b44) {
            ctx->pc = 0x340B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340B44u;
            // 0x340b48: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340B50u;
            goto label_340b50;
        }
    }
    ctx->pc = 0x340B4Cu;
    // 0x340b4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x340b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_340b50:
    // 0x340b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b58: 0xc103440  jal         func_40D100
    ctx->pc = 0x340B58u;
    SET_GPR_U32(ctx, 31, 0x340B60u);
    ctx->pc = 0x340B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B58u;
    // 0x340b5c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340B58u, 0x340B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B60u;
label_340b60:
    // 0x340b60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x340b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340b64: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x340B64u;
    {
        const bool branch_taken_0x340b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B64u;
        // 0x340b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b64) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B6Cu;
    // 0x340b6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x340b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b78: 0xc103440  jal         func_40D100
    ctx->pc = 0x340B78u;
    SET_GPR_U32(ctx, 31, 0x340B80u);
    ctx->pc = 0x340B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B78u;
    // 0x340b7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340B78u, 0x340B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B80u;
label_340b80:
    // 0x340b80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x340b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340b84: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x340b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340b88: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x340b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x340b8c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x340b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340b90: 0x3012  mflo        $a2
    ctx->pc = 0x340b90u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x340b94: 0xc10341a  jal         func_40D068
    ctx->pc = 0x340B94u;
    SET_GPR_U32(ctx, 31, 0x340B9Cu);
    ctx->pc = 0x340B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B94u;
    // 0x340b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x340B94u, 0x340B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B9Cu;
label_340b9c:
    // 0x340b9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340B9Cu;
    {
        const bool branch_taken_0x340b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B9Cu;
        // 0x340ba0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b9c) {
            ctx->pc = 0x340BBCu;
            goto label_340bbc;
        }
    }
    ctx->pc = 0x340BA4u;
label_340ba4:
    // 0x340ba4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x340ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x340ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bb0: 0xc103440  jal         func_40D100
    ctx->pc = 0x340BB0u;
    SET_GPR_U32(ctx, 31, 0x340BB8u);
    ctx->pc = 0x340BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340BB0u;
    // 0x340bb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340BB0u, 0x340BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340BB8u;
label_340bb8:
    // 0x340bb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x340bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_340bbc:
    // 0x340bbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x340BBCu;
    {
        const bool branch_taken_0x340bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BBCu;
        // 0x340bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340bbc) {
            ctx->pc = 0x340BFCu;
            goto label_340bfc;
        }
    }
    ctx->pc = 0x340BC4u;
    // 0x340bc4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x340bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bd0: 0xc103440  jal         func_40D100
    ctx->pc = 0x340BD0u;
    SET_GPR_U32(ctx, 31, 0x340BD8u);
    ctx->pc = 0x340BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340BD0u;
    // 0x340bd4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340BD0u, 0x340BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340BD8u;
label_340bd8:
    // 0x340bd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x340bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340bdc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x340bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340be0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x340be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x340be4: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x340be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340be8: 0x3012  mflo        $a2
    ctx->pc = 0x340be8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x340bec: 0xc10341a  jal         func_40D068
    ctx->pc = 0x340BECu;
    SET_GPR_U32(ctx, 31, 0x340BF4u);
    ctx->pc = 0x340BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340BECu;
    // 0x340bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x340BECu, 0x340BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340BF4u;
label_340bf4:
    // 0x340bf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340BF4u;
    {
        const bool branch_taken_0x340bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BF4u;
        // 0x340bf8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340bf4) {
            ctx->pc = 0x340C14u;
            goto label_340c14;
        }
    }
    ctx->pc = 0x340BFCu;
label_340bfc:
    // 0x340bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x340c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x340c04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c08: 0xc103440  jal         func_40D100
    ctx->pc = 0x340C08u;
    SET_GPR_U32(ctx, 31, 0x340C10u);
    ctx->pc = 0x340C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340C08u;
    // 0x340c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x340C08u, 0x340C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C10u;
label_340c10:
    // 0x340c10: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x340c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_340c14:
    // 0x340c14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x340c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x340c18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x340c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340c1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x340c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340c20: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x340c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340c28: 0x3e00008  jr          $ra
    ctx->pc = 0x340C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C28u;
        // 0x340c2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340C30u;
}
