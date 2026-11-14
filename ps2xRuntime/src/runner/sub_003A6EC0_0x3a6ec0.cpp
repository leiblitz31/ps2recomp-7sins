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

// Function: sub_003A6EC0
// Address: 0x3a6ec0 - 0x3a6f58
void sub_003A6EC0_0x3a6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6EC0_0x3a6ec0");
#endif

    switch (ctx->pc) {
        case 0x3a6f28u: goto label_3a6f28;
        default: break;
    }

    ctx->pc = 0x3a6ec0u;

    // 0x3a6ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ed0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3a6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3a6ed4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3a6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3a6ed8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A6ED8u;
    {
        const bool branch_taken_0x3a6ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6ED8u;
        // 0x3a6edc: 0x8f82bd7c  lw          $v0, -0x4284($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ed8) {
            ctx->pc = 0x3A6F3Cu;
            goto label_3a6f3c;
        }
    }
    ctx->pc = 0x3A6EE0u;
    // 0x3a6ee0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3a6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3a6ee4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a6ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a6ee8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A6EE8u;
    {
        const bool branch_taken_0x3a6ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6EE8u;
        // 0x3a6eec: 0x8f82bd7c  lw          $v0, -0x4284($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ee8) {
            ctx->pc = 0x3A6F3Cu;
            goto label_3a6f3c;
        }
    }
    ctx->pc = 0x3A6EF0u;
    // 0x3a6ef0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a6ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ef4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x3a6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a6ef8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a6efc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6EFCu;
    {
        const bool branch_taken_0x3a6efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6efc) {
            ctx->pc = 0x3A6F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6EFCu;
            // 0x3a6f00: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6F1Cu;
            goto label_3a6f1c;
        }
    }
    ctx->pc = 0x3A6F04u;
    // 0x3a6f04: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3a6f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a6f08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6f0c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6F0Cu;
    {
        const bool branch_taken_0x3a6f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a6f0c) {
            ctx->pc = 0x3A6F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6F0Cu;
            // 0x3a6f10: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6F1Cu;
            goto label_3a6f1c;
        }
    }
    ctx->pc = 0x3A6F14u;
    // 0x3a6f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6F14u;
    {
        const bool branch_taken_0x3a6f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F14u;
        // 0x3a6f18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f14) {
            ctx->pc = 0x3A6F28u;
            goto label_3a6f28;
        }
    }
    ctx->pc = 0x3A6F1Cu;
label_3a6f1c:
    // 0x3a6f1c: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x3a6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3a6f20: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A6F20u;
    SET_GPR_U32(ctx, 31, 0x3A6F28u);
    ctx->pc = 0x3A6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F20u;
    // 0x3a6f24: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A6F20u, 0x3A6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F28u;
label_3a6f28:
    // 0x3a6f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6f2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6F2Cu;
    {
        const bool branch_taken_0x3a6f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F2Cu;
        // 0x3a6f30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f2c) {
            ctx->pc = 0x3A6F48u;
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A6F34u;
    // 0x3a6f34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6F34u;
    {
        const bool branch_taken_0x3a6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F34u;
        // 0x3a6f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f34) {
            ctx->pc = 0x3A6F48u;
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A6F3Cu;
label_3a6f3c:
    // 0x3a6f3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a6f40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a6f44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f48:
    // 0x3a6f48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6f50: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F50u;
        // 0x3a6f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6F58u;
}
