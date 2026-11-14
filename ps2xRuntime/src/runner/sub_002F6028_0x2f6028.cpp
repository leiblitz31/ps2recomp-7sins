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

// Function: sub_002F6028
// Address: 0x2f6028 - 0x2f6128
void sub_002F6028_0x2f6028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6028_0x2f6028");
#endif

    switch (ctx->pc) {
        case 0x2f6058u: goto label_2f6058;
        case 0x2f6090u: goto label_2f6090;
        case 0x2f6094u: goto label_2f6094;
        case 0x2f609cu: goto label_2f609c;
        case 0x2f60f0u: goto label_2f60f0;
        default: break;
    }

    ctx->pc = 0x2f6028u;

    // 0x2f6028: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x2f6028u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f602c: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x2f602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2f6030: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6030u;
    {
        const bool branch_taken_0x2f6030 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6030u;
        // 0x2f6034: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6030) {
            ctx->pc = 0x2F6048u;
            goto label_2f6048;
        }
    }
    ctx->pc = 0x2F6038u;
    // 0x2f6038: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x2f6038u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f603c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f6040: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6040u;
    {
        const bool branch_taken_0x2f6040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6040u;
        // 0x2f6044: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6040) {
            ctx->pc = 0x2F604Cu;
            goto label_2f604c;
        }
    }
    ctx->pc = 0x2F6048u;
label_2f6048:
    // 0x2f6048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f604c:
    // 0x2f604c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2f604cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6050: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x2f6050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x2f6054: 0x0  nop
    ctx->pc = 0x2f6054u;
    // NOP
label_2f6058:
    // 0x2f6058: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f6058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f605c: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x2f605cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f6060: 0x0  nop
    ctx->pc = 0x2f6060u;
    // NOP
    // 0x2f6064: 0x0  nop
    ctx->pc = 0x2f6064u;
    // NOP
    // 0x2f6068: 0x0  nop
    ctx->pc = 0x2f6068u;
    // NOP
    // 0x2f606c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F606Cu;
    {
        const bool branch_taken_0x2f606c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2F6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F606Cu;
        // 0x2f6070: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f606c) {
            ctx->pc = 0x2F6058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6058;
        }
    }
    ctx->pc = 0x2F6074u;
    // 0x2f6074: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F6074u;
    {
        const bool branch_taken_0x2f6074 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6074u;
        // 0x2f6078: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6074) {
            ctx->pc = 0x2F6120u;
            goto label_2f6120;
        }
    }
    ctx->pc = 0x2F607Cu;
    // 0x2f607c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6080: 0x240a002d  addiu       $t2, $zero, 0x2D
    ctx->pc = 0x2f6080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f6084: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x2f6084u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2f6088: 0x2409005d  addiu       $t1, $zero, 0x5D
    ctx->pc = 0x2f6088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2f608c: 0x0  nop
    ctx->pc = 0x2f608cu;
    // NOP
label_2f6090:
    // 0x2f6090: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2f6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2f6094:
    // 0x2f6094: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x2f6094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f6098: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x2f6098u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2f609c:
    // 0x2f609c: 0x10ea000c  beq         $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x2F609Cu;
    {
        const bool branch_taken_0x2f609c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x2F60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F609Cu;
        // 0x2f60a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f609c) {
            ctx->pc = 0x2F60D0u;
            goto label_2f60d0;
        }
    }
    ctx->pc = 0x2F60A4u;
    // 0x2f60a4: 0x28e2002e  slti        $v0, $a3, 0x2E
    ctx->pc = 0x2f60a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2f60a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F60A8u;
    {
        const bool branch_taken_0x2f60a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f60a8) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F60B0u;
    // 0x2f60b0: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F60B0u;
    {
        const bool branch_taken_0x2f60b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60B0u;
        // 0x2f60b4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60b0) {
            ctx->pc = 0x2F6120u;
            goto label_2f6120;
        }
    }
    ctx->pc = 0x2F60B8u;
    // 0x2f60b8: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2F60B8u;
    {
        const bool branch_taken_0x2f60b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60B8u;
        // 0x2f60bc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60b8) {
            ctx->pc = 0x2F6090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F60C0u;
label_2f60c0:
    // 0x2f60c0: 0x10e90017  beq         $a3, $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F60C0u;
    {
        const bool branch_taken_0x2f60c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2F60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60C0u;
        // 0x2f60c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60c0) {
            ctx->pc = 0x2F6120u;
            goto label_2f6120;
        }
    }
    ctx->pc = 0x2F60C8u;
    // 0x2f60c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F60C8u;
    {
        const bool branch_taken_0x2f60c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60C8u;
        // 0x2f60cc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60c8) {
            ctx->pc = 0x2F6118u;
            goto label_2f6118;
        }
    }
    ctx->pc = 0x2F60D0u;
label_2f60d0:
    // 0x2f60d0: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x2f60d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f60d4: 0x50e9ffee  beql        $a3, $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F60D4u;
    {
        const bool branch_taken_0x2f60d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2f60d4) {
            ctx->pc = 0x2F60D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F60D4u;
            // 0x2f60d8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F60DCu;
    // 0x2f60dc: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2f60dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2f60e0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F60E0u;
    {
        const bool branch_taken_0x2f60e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f60e0) {
            ctx->pc = 0x2F60E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F60E0u;
            // 0x2f60e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60F0u;
            goto label_2f60f0;
        }
    }
    ctx->pc = 0x2F60E8u;
    // 0x2f60e8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F60E8u;
    {
        const bool branch_taken_0x2f60e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60E8u;
        // 0x2f60ec: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60e8) {
            ctx->pc = 0x2F6090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F60F0u;
label_2f60f0:
    // 0x2f60f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f60f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f60f4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2f60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f60f8: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x2f60f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f60fc: 0x0  nop
    ctx->pc = 0x2f60fcu;
    // NOP
    // 0x2f6100: 0x0  nop
    ctx->pc = 0x2f6100u;
    // NOP
    // 0x2f6104: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F6104u;
    {
        const bool branch_taken_0x2f6104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6104u;
        // 0x2f6108: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6104) {
            ctx->pc = 0x2F60F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f60f0;
        }
    }
    ctx->pc = 0x2F610Cu;
    // 0x2f610c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F610Cu;
    {
        const bool branch_taken_0x2f610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F610Cu;
        // 0x2f6110: 0x80a70000  lb          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f610c) {
            ctx->pc = 0x2F609Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f609c;
        }
    }
    ctx->pc = 0x2F6114u;
    // 0x2f6114: 0x0  nop
    ctx->pc = 0x2f6114u;
    // NOP
label_2f6118:
    // 0x2f6118: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x2F6118u;
    {
        const bool branch_taken_0x2f6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6118u;
        // 0x2f611c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6118) {
            ctx->pc = 0x2F6094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6094;
        }
    }
    ctx->pc = 0x2F6120u;
label_2f6120:
    // 0x2f6120: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6128u;
}
