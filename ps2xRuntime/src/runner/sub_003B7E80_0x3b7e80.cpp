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

// Function: sub_003B7E80
// Address: 0x3b7e80 - 0x3b7fd8
void sub_003B7E80_0x3b7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7E80_0x3b7e80");
#endif

    switch (ctx->pc) {
        case 0x3b7ea0u: goto label_3b7ea0;
        case 0x3b7eb8u: goto label_3b7eb8;
        case 0x3b7ec0u: goto label_3b7ec0;
        case 0x3b7ed0u: goto label_3b7ed0;
        case 0x3b7f50u: goto label_3b7f50;
        case 0x3b7fa0u: goto label_3b7fa0;
        default: break;
    }

    ctx->pc = 0x3b7e80u;

    // 0x3b7e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b7e84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3b7e88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b7e8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b7e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7e90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b7e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b7e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7e98: 0xc0ed254  jal         func_3B4950
    ctx->pc = 0x3B7E98u;
    SET_GPR_U32(ctx, 31, 0x3B7EA0u);
    ctx->pc = 0x3B7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E98u;
    // 0x3b7e9c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4950u, 0x3B7E98u, 0x3B7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7EA0u;
label_3b7ea0:
    // 0x3b7ea0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B7EA0u;
    {
        const bool branch_taken_0x3b7ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EA0u;
        // 0x3b7ea4: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ea0) {
            ctx->pc = 0x3B7EC8u;
            goto label_3b7ec8;
        }
    }
    ctx->pc = 0x3B7EA8u;
    // 0x3b7ea8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b7ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7eac: 0x24a57e80  addiu       $a1, $a1, 0x7E80
    ctx->pc = 0x3b7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
    // 0x3b7eb0: 0xc0ede40  jal         func_3B7900
    ctx->pc = 0x3B7EB0u;
    SET_GPR_U32(ctx, 31, 0x3B7EB8u);
    ctx->pc = 0x3B7EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7EB0u;
    // 0x3b7eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7900u, 0x3B7EB0u, 0x3B7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7EB8u;
label_3b7eb8:
    // 0x3b7eb8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3B7EB8u;
    {
        const bool branch_taken_0x3b7eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EB8u;
        // 0x3b7ebc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7eb8) {
            ctx->pc = 0x3B7FC0u;
            goto label_3b7fc0;
        }
    }
    ctx->pc = 0x3B7EC0u;
label_3b7ec0:
    // 0x3b7ec0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3B7EC0u;
    {
        const bool branch_taken_0x3b7ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EC0u;
        // 0x3b7ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ec0) {
            ctx->pc = 0x3B7F90u;
            goto label_3b7f90;
        }
    }
    ctx->pc = 0x3B7EC8u;
label_3b7ec8:
    // 0x3b7ec8: 0xc0ed258  jal         func_3B4960
    ctx->pc = 0x3B7EC8u;
    SET_GPR_U32(ctx, 31, 0x3B7ED0u);
    ctx->pc = 0x3B7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7EC8u;
    // 0x3b7ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4960u, 0x3B7EC8u, 0x3B7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7ED0u;
label_3b7ed0:
    // 0x3b7ed0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3B7ED0u;
    {
        const bool branch_taken_0x3b7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7ED0u;
        // 0x3b7ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ed0) {
            ctx->pc = 0x3B7FBCu;
            goto label_3b7fbc;
        }
    }
    ctx->pc = 0x3B7ED8u;
    // 0x3b7ed8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b7edc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3B7EDCu;
    {
        const bool branch_taken_0x3b7edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EDCu;
        // 0x3b7ee0: 0x8e5000b0  lw          $s0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7edc) {
            ctx->pc = 0x3B7F8Cu;
            goto label_3b7f8c;
        }
    }
    ctx->pc = 0x3B7EE4u;
    // 0x3b7ee4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3b7ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b7ee8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b7ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7eec: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x3b7eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x3b7ef0: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B7EF0u;
    {
        const bool branch_taken_0x3b7ef0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3B7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EF0u;
        // 0x3b7ef4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ef0) {
            ctx->pc = 0x3B7F38u;
            goto label_3b7f38;
        }
    }
    ctx->pc = 0x3B7EF8u;
    // 0x3b7ef8: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B7EF8u;
    {
        const bool branch_taken_0x3b7ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7ef8) {
            ctx->pc = 0x3B7EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7EF8u;
            // 0x3b7efc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7F54u;
            goto label_3b7f54;
        }
    }
    ctx->pc = 0x3B7F00u;
    // 0x3b7f00: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3b7f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b7f04: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3B7F04u;
    {
        const bool branch_taken_0x3b7f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7f04) {
            ctx->pc = 0x3B7F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7F04u;
            // 0x3b7f08: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7F3Cu;
            goto label_3b7f3c;
        }
    }
    ctx->pc = 0x3B7F0Cu;
    // 0x3b7f0c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3b7f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b7f10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7F10u;
    {
        const bool branch_taken_0x3b7f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7f10) {
            ctx->pc = 0x3B7F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7F10u;
            // 0x3b7f14: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7F2Cu;
            goto label_3b7f2c;
        }
    }
    ctx->pc = 0x3B7F18u;
    // 0x3b7f18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3b7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b7f1c: 0x1050ffe8  beq         $v0, $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3B7F1Cu;
    {
        const bool branch_taken_0x3b7f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F1Cu;
        // 0x3b7f20: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f1c) {
            ctx->pc = 0x3B7EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ec0;
        }
    }
    ctx->pc = 0x3B7F24u;
    // 0x3b7f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b7f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7f2c:
    // 0x3b7f2c: 0x1050ffe4  beq         $v0, $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3B7F2Cu;
    {
        const bool branch_taken_0x3b7f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F2Cu;
        // 0x3b7f30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f2c) {
            ctx->pc = 0x3B7EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ec0;
        }
    }
    ctx->pc = 0x3B7F34u;
    // 0x3b7f34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b7f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3b7f38:
    // 0x3b7f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7f3c:
    // 0x3b7f3c: 0x1050ffe0  beq         $v0, $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3B7F3Cu;
    {
        const bool branch_taken_0x3b7f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F3Cu;
        // 0x3b7f40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f3c) {
            ctx->pc = 0x3B7EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ec0;
        }
    }
    ctx->pc = 0x3B7F44u;
    // 0x3b7f44: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3b7f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b7f48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B7F48u;
    {
        const bool branch_taken_0x3b7f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F48u;
        // 0x3b7f4c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f48) {
            ctx->pc = 0x3B7F8Cu;
            goto label_3b7f8c;
        }
    }
    ctx->pc = 0x3B7F50u;
label_3b7f50:
    // 0x3b7f50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7f54:
    // 0x3b7f54: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B7F54u;
    {
        const bool branch_taken_0x3b7f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F54u;
        // 0x3b7f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f54) {
            ctx->pc = 0x3B7F90u;
            goto label_3b7f90;
        }
    }
    ctx->pc = 0x3B7F5Cu;
    // 0x3b7f5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b7f60: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B7F60u;
    {
        const bool branch_taken_0x3b7f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F60u;
        // 0x3b7f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f60) {
            ctx->pc = 0x3B7F90u;
            goto label_3b7f90;
        }
    }
    ctx->pc = 0x3B7F68u;
    // 0x3b7f68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b7f6c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B7F6Cu;
    {
        const bool branch_taken_0x3b7f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F6Cu;
        // 0x3b7f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f6c) {
            ctx->pc = 0x3B7F90u;
            goto label_3b7f90;
        }
    }
    ctx->pc = 0x3B7F74u;
    // 0x3b7f74: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b7f78: 0x1050ffd1  beq         $v0, $s0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3B7F78u;
    {
        const bool branch_taken_0x3b7f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F78u;
        // 0x3b7f7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f78) {
            ctx->pc = 0x3B7EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ec0;
        }
    }
    ctx->pc = 0x3B7F80u;
    // 0x3b7f80: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3b7f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b7f84: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3B7F84u;
    {
        const bool branch_taken_0x3b7f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F84u;
        // 0x3b7f88: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f84) {
            ctx->pc = 0x3B7F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7f50;
        }
    }
    ctx->pc = 0x3B7F8Cu;
label_3b7f8c:
    // 0x3b7f8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b7f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7f90:
    // 0x3b7f90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B7F90u;
    {
        const bool branch_taken_0x3b7f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F90u;
        // 0x3b7f94: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f90) {
            ctx->pc = 0x3B7FC0u;
            goto label_3b7fc0;
        }
    }
    ctx->pc = 0x3B7F98u;
    // 0x3b7f98: 0xc0ee58e  jal         func_3B9638
    ctx->pc = 0x3B7F98u;
    SET_GPR_U32(ctx, 31, 0x3B7FA0u);
    ctx->pc = 0x3B7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F98u;
    // 0x3b7f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9638u, 0x3B7F98u, 0x3B7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7FA0u;
label_3b7fa0:
    // 0x3b7fa0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b7fa4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b7fa8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3b7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b7fac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b7facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b7fb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b7fb4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3b7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3b7fb8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3b7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3b7fbc:
    // 0x3b7fbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b7fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7fc0:
    // 0x3b7fc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b7fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7fc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b7fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7fc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b7fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FD0u;
        // 0x3b7fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7FD8u;
}
