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

// Function: sub_004A9FC0
// Address: 0x4a9fc0 - 0x4aa160
void sub_004A9FC0_0x4a9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9FC0_0x4a9fc0");
#endif

    switch (ctx->pc) {
        case 0x4aa038u: goto label_4aa038;
        case 0x4aa050u: goto label_4aa050;
        case 0x4aa064u: goto label_4aa064;
        case 0x4aa0d0u: goto label_4aa0d0;
        case 0x4aa0ecu: goto label_4aa0ec;
        case 0x4aa12cu: goto label_4aa12c;
        case 0x4aa150u: goto label_4aa150;
        default: break;
    }

    ctx->pc = 0x4a9fc0u;

    // 0x4a9fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a9fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9fc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a9fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a9fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a9fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9fd4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A9FD4u;
    {
        const bool branch_taken_0x4a9fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FD4u;
        // 0x4a9fd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9fd4) {
            ctx->pc = 0x4A9FF4u;
            goto label_4a9ff4;
        }
    }
    ctx->pc = 0x4A9FDCu;
    // 0x4a9fdc: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x4A9FDCu;
    {
        const bool branch_taken_0x4a9fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FDCu;
        // 0x4a9fe0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9fdc) {
            ctx->pc = 0x4AA0C8u;
            goto label_4aa0c8;
        }
    }
    ctx->pc = 0x4A9FE4u;
    // 0x4a9fe4: 0x50a2003c  beql        $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4A9FE4u;
    {
        const bool branch_taken_0x4a9fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a9fe4) {
            ctx->pc = 0x4A9FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9FE4u;
            // 0x4a9fe8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA0D8u;
            goto label_4aa0d8;
        }
    }
    ctx->pc = 0x4A9FECu;
    // 0x4a9fec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x4A9FECu;
    {
        const bool branch_taken_0x4a9fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FECu;
        // 0x4a9ff0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9fec) {
            ctx->pc = 0x4AA0F0u;
            goto label_4aa0f0;
        }
    }
    ctx->pc = 0x4A9FF4u;
label_4a9ff4:
    // 0x4a9ff4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a9ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a9ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a9ffc: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x4A9FFCu;
    {
        const bool branch_taken_0x4a9ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9ffc) {
            ctx->pc = 0x4AA000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9FFCu;
            // 0x4aa000: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA0F0u;
            goto label_4aa0f0;
        }
    }
    ctx->pc = 0x4AA004u;
    // 0x4aa004: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4aa004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa008: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4aa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aa00c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4aa00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4aa010: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4aa010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa014: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4aa014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aa018: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4aa018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4aa01c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4aa01cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4aa020: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AA020u;
    {
        const bool branch_taken_0x4aa020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA020u;
        // 0x4aa024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa020) {
            ctx->pc = 0x4AA068u;
            goto label_4aa068;
        }
    }
    ctx->pc = 0x4AA028u;
    // 0x4aa028: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4aa028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4aa02c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4aa02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4aa030: 0xc126464  jal         func_499190
    ctx->pc = 0x4AA030u;
    SET_GPR_U32(ctx, 31, 0x4AA038u);
    ctx->pc = 0x4AA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA030u;
    // 0x4aa034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499190u, 0x4AA030u, 0x4AA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA038u;
label_4aa038:
    // 0x4aa038: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA038u;
    {
        const bool branch_taken_0x4aa038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA038u;
        // 0x4aa03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa038) {
            ctx->pc = 0x4AA050u;
            goto label_4aa050;
        }
    }
    ctx->pc = 0x4AA040u;
    // 0x4aa040: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4aa040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4aa044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4aa044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa048: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4AA048u;
    SET_GPR_U32(ctx, 31, 0x4AA050u);
    ctx->pc = 0x4AA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA048u;
    // 0x4aa04c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4AA048u, 0x4AA050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA050u;
label_4aa050:
    // 0x4aa050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aa050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa054: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4aa054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4aa058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4aa058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa05c: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4AA05Cu;
    SET_GPR_U32(ctx, 31, 0x4AA064u);
    ctx->pc = 0x4AA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA05Cu;
    // 0x4aa060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4AA05Cu, 0x4AA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA064u;
label_4aa064:
    // 0x4aa064: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4aa064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4aa068:
    // 0x4aa068: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4aa068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4aa06c: 0x2782c1f8  addiu       $v0, $gp, -0x3E08
    ctx->pc = 0x4aa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951416));
    // 0x4aa070: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4aa070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4aa074: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4aa074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa078: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4aa078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4aa07c: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x4aa07cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x4aa080: 0x8f82b880  lw          $v0, -0x4780($gp)
    ctx->pc = 0x4aa080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
    // 0x4aa084: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4aa084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4aa088: 0x8f84b884  lw          $a0, -0x477C($gp)
    ctx->pc = 0x4aa088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x4aa08c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4aa08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4aa090: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x4aa090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x4aa094: 0xaf90c1f8  sw          $s0, -0x3E08($gp)
    ctx->pc = 0x4aa094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951416), GPR_U32(ctx, 16));
    // 0x4aa098: 0xaf82b880  sw          $v0, -0x4780($gp)
    ctx->pc = 0x4aa098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948992), GPR_U32(ctx, 2));
    // 0x4aa09c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4aa09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aa0a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4aa0a4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x4aa0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4aa0a8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4aa0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4aa0ac: 0xaf84b884  sw          $a0, -0x477C($gp)
    ctx->pc = 0x4aa0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 4));
    // 0x4aa0b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4aa0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4aa0b4: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x4aa0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x4aa0b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4aa0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4aa0bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4aa0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4aa0c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4AA0C0u;
    {
        const bool branch_taken_0x4aa0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA0C0u;
        // 0x4aa0c4: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa0c0) {
            ctx->pc = 0x4AA0ECu;
            goto label_4aa0ec;
        }
    }
    ctx->pc = 0x4AA0C8u;
label_4aa0c8:
    // 0x4aa0c8: 0xc12a6ca  jal         func_4A9B28
    ctx->pc = 0x4AA0C8u;
    SET_GPR_U32(ctx, 31, 0x4AA0D0u);
    ctx->pc = 0x4AA0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA0C8u;
    // 0x4aa0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B28u, 0x4AA0C8u, 0x4AA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA0D0u;
label_4aa0d0:
    // 0x4aa0d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AA0D0u;
    {
        const bool branch_taken_0x4aa0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA0D0u;
        // 0x4aa0d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa0d0) {
            ctx->pc = 0x4AA0F0u;
            goto label_4aa0f0;
        }
    }
    ctx->pc = 0x4AA0D8u;
label_4aa0d8:
    // 0x4aa0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4aa0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4aa0dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA0DCu;
    {
        const bool branch_taken_0x4aa0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa0dc) {
            ctx->pc = 0x4AA0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA0DCu;
            // 0x4aa0e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA0F0u;
            goto label_4aa0f0;
        }
    }
    ctx->pc = 0x4AA0E4u;
    // 0x4aa0e4: 0xc12a730  jal         func_4A9CC0
    ctx->pc = 0x4AA0E4u;
    SET_GPR_U32(ctx, 31, 0x4AA0ECu);
    ctx->pc = 0x4AA0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA0E4u;
    // 0x4aa0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9CC0u, 0x4AA0E4u, 0x4AA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA0ECu;
label_4aa0ec:
    // 0x4aa0ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4aa0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aa0f0:
    // 0x4aa0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aa0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA0F8u;
        // 0x4aa0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA100u;
    // 0x4aa100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aa100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aa104: 0x2784c200  addiu       $a0, $gp, -0x3E00
    ctx->pc = 0x4aa104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951424));
    // 0x4aa108: 0x2782c1f8  addiu       $v0, $gp, -0x3E08
    ctx->pc = 0x4aa108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951416));
    // 0x4aa10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4aa10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa114: 0xaf83b870  sw          $v1, -0x4790($gp)
    ctx->pc = 0x4aa114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 3));
    // 0x4aa118: 0xaf84c204  sw          $a0, -0x3DFC($gp)
    ctx->pc = 0x4aa118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951428), GPR_U32(ctx, 4));
    // 0x4aa11c: 0xaf84c200  sw          $a0, -0x3E00($gp)
    ctx->pc = 0x4aa11cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951424), GPR_U32(ctx, 4));
    // 0x4aa120: 0xaf82c1fc  sw          $v0, -0x3E04($gp)
    ctx->pc = 0x4aa120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951420), GPR_U32(ctx, 2));
    // 0x4aa124: 0xc12b14e  jal         func_4AC538
    ctx->pc = 0x4AA124u;
    SET_GPR_U32(ctx, 31, 0x4AA12Cu);
    ctx->pc = 0x4AA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA124u;
    // 0x4aa128: 0xaf82c1f8  sw          $v0, -0x3E08($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC538u, 0x4AA124u, 0x4AA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA12Cu;
label_4aa12c:
    // 0x4aa12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aa130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa134: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA134u;
        // 0x4aa138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA13Cu;
    // 0x4aa13c: 0x0  nop
    ctx->pc = 0x4aa13cu;
    // NOP
    // 0x4aa140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aa140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aa144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa148: 0xc12b13e  jal         func_4AC4F8
    ctx->pc = 0x4AA148u;
    SET_GPR_U32(ctx, 31, 0x4AA150u);
    ctx->pc = 0x4AC4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC4F8u, 0x4AA148u, 0x4AA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA150u;
label_4aa150:
    // 0x4aa150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa154: 0xaf80b870  sw          $zero, -0x4790($gp)
    ctx->pc = 0x4aa154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 0));
    // 0x4aa158: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA158u;
        // 0x4aa15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA160u;
}
