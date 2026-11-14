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

// Function: sub_004A9B28
// Address: 0x4a9b28 - 0x4a9cc0
void sub_004A9B28_0x4a9b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B28_0x4a9b28");
#endif

    switch (ctx->pc) {
        case 0x4a9b80u: goto label_4a9b80;
        case 0x4a9b98u: goto label_4a9b98;
        case 0x4a9bacu: goto label_4a9bac;
        case 0x4a9c14u: goto label_4a9c14;
        case 0x4a9c58u: goto label_4a9c58;
        default: break;
    }

    ctx->pc = 0x4a9b28u;

    // 0x4a9b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a9b2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a9b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a9b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a9b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a9b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9b3c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a9b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a9b44: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4A9B44u;
    {
        const bool branch_taken_0x4a9b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9b44) {
            ctx->pc = 0x4A9C0Cu;
            goto label_4a9c0c;
        }
    }
    ctx->pc = 0x4A9B4Cu;
    // 0x4a9b4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a9b50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4a9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a9b54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a9b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a9b58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a9b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a9b5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a9b60: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4a9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4a9b64: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4a9b64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a9b68: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A9B68u;
    {
        const bool branch_taken_0x4a9b68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B68u;
        // 0x4a9b6c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b68) {
            ctx->pc = 0x4A9BB0u;
            goto label_4a9bb0;
        }
    }
    ctx->pc = 0x4A9B70u;
    // 0x4a9b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a9b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9b78: 0xc126464  jal         func_499190
    ctx->pc = 0x4A9B78u;
    SET_GPR_U32(ctx, 31, 0x4A9B80u);
    ctx->pc = 0x4A9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9B78u;
    // 0x4a9b7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499190u, 0x4A9B78u, 0x4A9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9B80u;
label_4a9b80:
    // 0x4a9b80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9B80u;
    {
        const bool branch_taken_0x4a9b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B80u;
        // 0x4a9b84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b80) {
            ctx->pc = 0x4A9B98u;
            goto label_4a9b98;
        }
    }
    ctx->pc = 0x4A9B88u;
    // 0x4a9b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a9b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9b90: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4A9B90u;
    SET_GPR_U32(ctx, 31, 0x4A9B98u);
    ctx->pc = 0x4A9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9B90u;
    // 0x4a9b94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4A9B90u, 0x4A9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9B98u;
label_4a9b98:
    // 0x4a9b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4a9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4a9ba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a9ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9ba4: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4A9BA4u;
    SET_GPR_U32(ctx, 31, 0x4A9BACu);
    ctx->pc = 0x4A9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9BA4u;
    // 0x4a9ba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4A9BA4u, 0x4A9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9BACu;
label_4a9bac:
    // 0x4a9bac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4a9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4a9bb0:
    // 0x4a9bb0: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4a9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4a9bb4: 0x2782c1f8  addiu       $v0, $gp, -0x3E08
    ctx->pc = 0x4a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951416));
    // 0x4a9bb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4a9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4a9bbc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a9bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9bc0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a9bc4: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x4a9bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x4a9bc8: 0x8f82b880  lw          $v0, -0x4780($gp)
    ctx->pc = 0x4a9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
    // 0x4a9bcc: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4a9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4a9bd0: 0x8f84b884  lw          $a0, -0x477C($gp)
    ctx->pc = 0x4a9bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x4a9bd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a9bd8: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x4a9bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x4a9bdc: 0xaf90c1f8  sw          $s0, -0x3E08($gp)
    ctx->pc = 0x4a9bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951416), GPR_U32(ctx, 16));
    // 0x4a9be0: 0xaf82b880  sw          $v0, -0x4780($gp)
    ctx->pc = 0x4a9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948992), GPR_U32(ctx, 2));
    // 0x4a9be4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4a9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a9be8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a9bec: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x4a9becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4a9bf0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4a9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a9bf4: 0xaf84b884  sw          $a0, -0x477C($gp)
    ctx->pc = 0x4a9bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 4));
    // 0x4a9bf8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a9bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a9bfc: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x4a9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x4a9c00: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4a9c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4a9c04: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4a9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4a9c08: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4a9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4a9c0c:
    // 0x4a9c0c: 0xc12a730  jal         func_4A9CC0
    ctx->pc = 0x4A9C0Cu;
    SET_GPR_U32(ctx, 31, 0x4A9C14u);
    ctx->pc = 0x4A9C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9C0Cu;
    // 0x4a9c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9CC0u, 0x4A9C0Cu, 0x4A9C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9C14u;
label_4a9c14:
    // 0x4a9c14: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a9c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9c1c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4a9c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4a9c20: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4a9c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4a9c24: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x4a9c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a9c28: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4a9c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4a9c2c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4a9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x4a9c30: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x4a9c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x4a9c34: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4a9c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4a9c38: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x4a9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4a9c3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a9c40: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A9C40u;
    {
        const bool branch_taken_0x4a9c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C40u;
        // 0x4a9c44: 0x8f84b878  lw          $a0, -0x4788($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c40) {
            ctx->pc = 0x4A9C8Cu;
            goto label_4a9c8c;
        }
    }
    ctx->pc = 0x4A9C48u;
    // 0x4a9c48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a9c4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a9c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9c50: 0xc126464  jal         func_499190
    ctx->pc = 0x4A9C50u;
    SET_GPR_U32(ctx, 31, 0x4A9C58u);
    ctx->pc = 0x4A9C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9C50u;
    // 0x4a9c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499190u, 0x4A9C50u, 0x4A9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9C58u;
label_4a9c58:
    // 0x4a9c58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a9c5c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4A9C5Cu;
    {
        const bool branch_taken_0x4a9c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a9c5c) {
            ctx->pc = 0x4A9C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9C5Cu;
            // 0x4a9c60: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9C90u;
            goto label_4a9c90;
        }
    }
    ctx->pc = 0x4A9C64u;
    // 0x4a9c64: 0x8f84b878  lw          $a0, -0x4788($gp)
    ctx->pc = 0x4a9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x4a9c68: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a9c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a9c6c: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4a9c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4a9c70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9c74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9c7c: 0x54850004  bnel        $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9C7Cu;
    {
        const bool branch_taken_0x4a9c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4a9c7c) {
            ctx->pc = 0x4A9C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9C7Cu;
            // 0x4a9c80: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9C90u;
            goto label_4a9c90;
        }
    }
    ctx->pc = 0x4A9C84u;
    // 0x4a9c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9c88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4a9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4a9c8c:
    // 0x4a9c8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a9c90:
    // 0x4a9c90: 0x8f83b884  lw          $v1, -0x477C($gp)
    ctx->pc = 0x4a9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x4a9c94: 0x8f84b880  lw          $a0, -0x4780($gp)
    ctx->pc = 0x4a9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
    // 0x4a9c98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9c9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a9c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a9ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a9ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9cac: 0xaf83b884  sw          $v1, -0x477C($gp)
    ctx->pc = 0x4a9cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 3));
    // 0x4a9cb0: 0xaf84b880  sw          $a0, -0x4780($gp)
    ctx->pc = 0x4a9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948992), GPR_U32(ctx, 4));
    // 0x4a9cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CB4u;
        // 0x4a9cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9CBCu;
    // 0x4a9cbc: 0x0  nop
    ctx->pc = 0x4a9cbcu;
    // NOP
    ctx->pc = 0x4a9cc0u;
}
