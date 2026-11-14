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

// Function: sub_0036FE48
// Address: 0x36fe48 - 0x3705c0
void sub_0036FE48_0x36fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FE48_0x36fe48");
#endif

    switch (ctx->pc) {
        case 0x36fed0u: goto label_36fed0;
        case 0x36ffe0u: goto label_36ffe0;
        case 0x370118u: goto label_370118;
        case 0x370248u: goto label_370248;
        case 0x370378u: goto label_370378;
        case 0x3704c8u: goto label_3704c8;
        default: break;
    }

    ctx->pc = 0x36fe48u;

    // 0x36fe48: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36fe48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36fe4c: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x36fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36fe50: 0x18a00041  blez        $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x36FE50u;
    {
        const bool branch_taken_0x36fe50 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE50u;
        // 0x36fe54: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe50) {
            ctx->pc = 0x36FF58u;
            goto label_36ff58;
        }
    }
    ctx->pc = 0x36FE58u;
    // 0x36fe58: 0x51023  negu        $v0, $a1
    ctx->pc = 0x36fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x36fe5c: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x36fe5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36fe60: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x36FE60u;
    {
        const bool branch_taken_0x36fe60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE60u;
        // 0x36fe64: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe60) {
            ctx->pc = 0x36FED0u;
            goto label_36fed0;
        }
    }
    ctx->pc = 0x36FE68u;
    // 0x36fe68: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x36fe68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36fe6c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36FE6Cu;
    {
        const bool branch_taken_0x36fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE6Cu;
        // 0x36fe70: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe6c) {
            ctx->pc = 0x36FEC4u;
            goto label_36fec4;
        }
    }
    ctx->pc = 0x36FE74u;
    // 0x36fe74: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x36FE74u;
    {
        const bool branch_taken_0x36fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fe74) {
            ctx->pc = 0x36FE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FE74u;
            // 0x36fe78: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FEA4u;
            goto label_36fea4;
        }
    }
    ctx->pc = 0x36FE7Cu;
    // 0x36fe7c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x36fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x36fe80: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36fe84: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36fe88: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x36fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x36fe8c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36fe90: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x36fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x36fe94: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36fe98: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x36fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x36fe9c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36fea0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_36fea4:
    // 0x36fea4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36fea8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36feac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36feacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36feb0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36feb4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36feb8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36febc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36febcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fec0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fec4:
    // 0x36fec4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fec8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x36FEC8u;
    {
        const bool branch_taken_0x36fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEC8u;
        // 0x36fecc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fec8) {
            ctx->pc = 0x36FF38u;
            goto label_36ff38;
        }
    }
    ctx->pc = 0x36FED0u;
label_36fed0:
    // 0x36fed0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fed4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x36fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x36fed8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36fedc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fee0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36fee4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fee8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36feec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36feecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fef0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36fef4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36fef8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36fefc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff04: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff0c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff10: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff14: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff18: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff1c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff20: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff24: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff28: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff2c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff30: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff34: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_36ff38:
    // 0x36ff38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff3c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff44: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff48: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36ff4c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x36ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x36ff50: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x36FF50u;
    {
        const bool branch_taken_0x36ff50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF50u;
        // 0x36ff54: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff50) {
            ctx->pc = 0x36FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fed0;
        }
    }
    ctx->pc = 0x36FF58u;
label_36ff58:
    // 0x36ff58: 0x3e00008  jr          $ra
    ctx->pc = 0x36FF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FF60u;
    // 0x36ff60: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36ff60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ff64: 0x8cc80040  lw          $t0, 0x40($a2)
    ctx->pc = 0x36ff64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x36ff68: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x36ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x36ff6c: 0x18a00048  blez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x36FF6Cu;
    {
        const bool branch_taken_0x36ff6c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF6Cu;
        // 0x36ff70: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff6c) {
            ctx->pc = 0x370090u;
            goto label_370090;
        }
    }
    ctx->pc = 0x36FF74u;
    // 0x36ff74: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x36ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x36ff78: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x36ff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36ff7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36FF7Cu;
    {
        const bool branch_taken_0x36ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF7Cu;
        // 0x36ff80: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff7c) {
            ctx->pc = 0x36FFE0u;
            goto label_36ffe0;
        }
    }
    ctx->pc = 0x36FF84u;
    // 0x36ff84: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x36ff84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36ff88: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36ff8c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ff90: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ff90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ff94: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x36ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ff98: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ff98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ff9c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ffa0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ffa4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ffa8: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x36ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ffac: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ffacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ffb0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ffb4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ffb8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ffb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ffbc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ffc0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ffc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ffc4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ffc8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x36ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ffcc: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36ffd0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36ffd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ffd4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x36ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ffd8: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x36FFD8u;
    {
        const bool branch_taken_0x36ffd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFD8u;
        // 0x36ffdc: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ffd8) {
            ctx->pc = 0x370090u;
            goto label_370090;
        }
    }
    ctx->pc = 0x36FFE0u;
label_36ffe0:
    // 0x36ffe0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x36ffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x36ffe4: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x36ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x36ffe8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x36ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ffec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36ffecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36fff0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x36fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fff4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36fff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36fff8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36fffc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370000: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370004: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x370004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370008: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x37000c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x37000cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370010: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370014: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370018: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37001c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37001cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370020: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370024: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370028: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37002c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x37002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370030: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x370030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x370034: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370038: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37003c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x37003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370040: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370044: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x370044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370048: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x37004c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x37004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370050: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370054: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370058: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x370058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37005c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37005cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370060: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370064: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370068: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37006c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x37006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370070: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370074: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370078: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37007c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370080: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370084: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370088: 0x14a0ffd5  bnez        $a1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x370088u;
    {
        const bool branch_taken_0x370088 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370088u;
        // 0x37008c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370088) {
            ctx->pc = 0x36FFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ffe0;
        }
    }
    ctx->pc = 0x370090u;
label_370090:
    // 0x370090: 0x3e00008  jr          $ra
    ctx->pc = 0x370090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370098u;
    // 0x370098: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x370098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37009c: 0x8cc80048  lw          $t0, 0x48($a2)
    ctx->pc = 0x37009cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x3700a0: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x3700a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x3700a4: 0x18a00048  blez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3700A4u;
    {
        const bool branch_taken_0x3700a4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3700A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700A4u;
        // 0x3700a8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3700a4) {
            ctx->pc = 0x3701C8u;
            goto label_3701c8;
        }
    }
    ctx->pc = 0x3700ACu;
    // 0x3700ac: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x3700acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3700b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3700b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3700b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3700B4u;
    {
        const bool branch_taken_0x3700b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3700B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700B4u;
        // 0x3700b8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3700b4) {
            ctx->pc = 0x370118u;
            goto label_370118;
        }
    }
    ctx->pc = 0x3700BCu;
    // 0x3700bc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3700bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3700c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3700c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3700c4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3700c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3700c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3700c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3700cc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3700ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3700d0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3700d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3700d4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3700d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3700d8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3700d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3700dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3700dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3700e0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x3700e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3700e4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3700e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3700e8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3700e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3700ec: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x3700ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3700f0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3700f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3700f4: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3700f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3700f8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3700f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3700fc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3700fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370100: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x370100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370104: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x370104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370108: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x370108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37010c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x37010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370110: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x370110u;
    {
        const bool branch_taken_0x370110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370110u;
        // 0x370114: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370110) {
            ctx->pc = 0x3701C8u;
            goto label_3701c8;
        }
    }
    ctx->pc = 0x370118u;
label_370118:
    // 0x370118: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x370118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x37011c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x370120: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370124: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370128: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37012c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37012cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370130: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370134: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370138: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37013c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x37013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370140: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370144: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370148: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x370148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37014c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370150: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x370150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370154: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370158: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37015c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x37015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370160: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370164: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x370164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370168: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x370168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x37016c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37016cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370170: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370174: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370178: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37017c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x37017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370180: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370184: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370188: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37018c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37018cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370190: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x370190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370194: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370198: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37019c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x37019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3701a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3701a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3701a4: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3701a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3701a8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3701a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3701ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3701acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3701b0: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x3701b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3701b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3701b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3701b8: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x3701b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3701bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3701bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3701c0: 0x14a0ffd5  bnez        $a1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3701C0u;
    {
        const bool branch_taken_0x3701c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3701C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701C0u;
        // 0x3701c4: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701c0) {
            ctx->pc = 0x370118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370118;
        }
    }
    ctx->pc = 0x3701C8u;
label_3701c8:
    // 0x3701c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3701C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3701C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3701D0u;
    // 0x3701d0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3701d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3701d4: 0x24c90090  addiu       $t1, $a2, 0x90
    ctx->pc = 0x3701d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x3701d8: 0x24c80098  addiu       $t0, $a2, 0x98
    ctx->pc = 0x3701d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
    // 0x3701dc: 0x18a00044  blez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3701DCu;
    {
        const bool branch_taken_0x3701dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3701E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701DCu;
        // 0x3701e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701dc) {
            ctx->pc = 0x3702F0u;
            goto label_3702f0;
        }
    }
    ctx->pc = 0x3701E4u;
    // 0x3701e4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3701e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3701e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3701E8u;
    {
        const bool branch_taken_0x3701e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3701ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701E8u;
        // 0x3701ec: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701e8) {
            ctx->pc = 0x370248u;
            goto label_370248;
        }
    }
    ctx->pc = 0x3701F0u;
    // 0x3701f0: 0xc4c10090  lwc1        $f1, 0x90($a2)
    ctx->pc = 0x3701f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3701f4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3701f8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3701f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3701fc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3701fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370200: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x370200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370204: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x370204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370208: 0xc4c00098  lwc1        $f0, 0x98($a2)
    ctx->pc = 0x370208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37020c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x37020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370210: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x370210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370214: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x370214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370218: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x370218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x37021c: 0xc4c00098  lwc1        $f0, 0x98($a2)
    ctx->pc = 0x37021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370220: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x370220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370224: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x370224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370228: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x370228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37022c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x37022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370230: 0xc4c10090  lwc1        $f1, 0x90($a2)
    ctx->pc = 0x370230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370234: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x370234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370238: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x370238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37023c: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x37023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370240: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x370240u;
    {
        const bool branch_taken_0x370240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370240u;
        // 0x370244: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370240) {
            ctx->pc = 0x3702F0u;
            goto label_3702f0;
        }
    }
    ctx->pc = 0x370248u;
label_370248:
    // 0x370248: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x370248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37024c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x370250: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x370250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370254: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x370254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370258: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x370258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x37025c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x37025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370260: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x370260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370264: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370268: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x370268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37026c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37026cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370270: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370274: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x370274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370278: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37027c: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x37027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370280: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370284: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370288: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x370288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37028c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370290: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x370290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370294: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370298: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37029c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x37029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3702a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3702a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3702a4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3702a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3702a8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3702a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3702ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3702acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3702b0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3702b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3702b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3702b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3702b8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3702b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3702bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3702bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3702c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3702c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3702c4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3702c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3702c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3702c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3702cc: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3702ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3702d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3702d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3702d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3702d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3702d8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3702d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3702dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3702dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3702e0: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3702e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3702e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3702e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3702e8: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3702E8u;
    {
        const bool branch_taken_0x3702e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3702ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3702E8u;
        // 0x3702ec: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3702e8) {
            ctx->pc = 0x370248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370248;
        }
    }
    ctx->pc = 0x3702F0u;
label_3702f0:
    // 0x3702f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3702F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3702F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3702F8u;
    // 0x3702f8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3702f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3702fc: 0x24cb0090  addiu       $t3, $a2, 0x90
    ctx->pc = 0x3702fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x370300: 0x24ca0098  addiu       $t2, $a2, 0x98
    ctx->pc = 0x370300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
    // 0x370304: 0x24c900a0  addiu       $t1, $a2, 0xA0
    ctx->pc = 0x370304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x370308: 0x24c800a8  addiu       $t0, $a2, 0xA8
    ctx->pc = 0x370308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
    // 0x37030c: 0x18a00044  blez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x37030Cu;
    {
        const bool branch_taken_0x37030c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x370310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37030Cu;
        // 0x370310: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37030c) {
            ctx->pc = 0x370420u;
            goto label_370420;
        }
    }
    ctx->pc = 0x370314u;
    // 0x370314: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x370314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370318: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x370318u;
    {
        const bool branch_taken_0x370318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370318u;
        // 0x37031c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370318) {
            ctx->pc = 0x370378u;
            goto label_370378;
        }
    }
    ctx->pc = 0x370320u;
    // 0x370320: 0xc4c10090  lwc1        $f1, 0x90($a2)
    ctx->pc = 0x370320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370324: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x370324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x370328: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x370328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37032c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x37032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370330: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x370330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370334: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x370334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370338: 0xc4c00098  lwc1        $f0, 0x98($a2)
    ctx->pc = 0x370338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37033c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x37033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370340: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x370340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370344: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x370344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370348: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x370348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x37034c: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x37034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370350: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x370350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370354: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x370354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370358: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x370358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37035c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x37035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370360: 0xc4c100a8  lwc1        $f1, 0xA8($a2)
    ctx->pc = 0x370360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370364: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x370364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x370368: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x370368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37036c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x37036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370370: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x370370u;
    {
        const bool branch_taken_0x370370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370370u;
        // 0x370374: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370370) {
            ctx->pc = 0x370420u;
            goto label_370420;
        }
    }
    ctx->pc = 0x370378u;
label_370378:
    // 0x370378: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x370378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37037c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x370380: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x370380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370384: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x370384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370388: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x370388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x37038c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x37038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370390: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x370390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370394: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370398: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x370398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37039c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37039cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3703a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3703a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3703a4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3703a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3703a8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3703a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3703ac: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3703acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3703b0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3703b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3703b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3703b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3703b8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3703b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3703bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3703bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3703c0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3703c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3703c4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3703c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3703c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3703c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3703cc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x3703ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3703d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3703d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3703d4: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x3703d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3703d8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3703d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3703dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3703dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3703e0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3703e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3703e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3703e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3703e8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x3703e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3703ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3703ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3703f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3703f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3703f4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3703f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3703f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3703f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3703fc: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3703fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370400: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370404: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x370404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x370408: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x370408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37040c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370410: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x370410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370414: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370418: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x370418u;
    {
        const bool branch_taken_0x370418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370418u;
        // 0x37041c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370418) {
            ctx->pc = 0x370378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370378;
        }
    }
    ctx->pc = 0x370420u;
label_370420:
    // 0x370420: 0x3e00008  jr          $ra
    ctx->pc = 0x370420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370428u;
    // 0x370428: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x370428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37042c: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x37042cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x370430: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x370430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x370434: 0x18a00060  blez        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x370434u;
    {
        const bool branch_taken_0x370434 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x370438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370434u;
        // 0x370438: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370434) {
            ctx->pc = 0x3705B8u;
            goto label_3705b8;
        }
    }
    ctx->pc = 0x37043Cu;
    // 0x37043c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x37043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370440: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x370440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370444: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x370444u;
    {
        const bool branch_taken_0x370444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370444u;
        // 0x370448: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370444) {
            ctx->pc = 0x3704C8u;
            goto label_3704c8;
        }
    }
    ctx->pc = 0x37044Cu;
    // 0x37044c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x37044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370450: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x370450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x370454: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x370454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x370458: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x370458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37045c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x37045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370460: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x370460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370464: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x370464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370468: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x370468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x37046c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x37046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x370470: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x370470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370474: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x370474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370478: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x370478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37047c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x37047cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370480: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x370480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370484: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x370484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x370488: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x370488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x37048c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x37048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370490: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x370490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370494: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x370494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370498: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x370498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37049c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x37049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704a0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3704a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3704a4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3704a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3704a8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3704a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3704ac: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x3704acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3704b0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3704b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3704b4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3704b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704b8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3704b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3704bc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3704bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3704c0: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3704C0u;
    {
        const bool branch_taken_0x3704c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3704C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704C0u;
        // 0x3704c4: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704c0) {
            ctx->pc = 0x3705B8u;
            goto label_3705b8;
        }
    }
    ctx->pc = 0x3704C8u;
label_3704c8:
    // 0x3704c8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3704c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3704cc: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3704ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3704d0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3704d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3704d4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3704d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704d8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3704d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3704dc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3704dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3704e0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3704e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3704e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3704e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3704e8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3704e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3704ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3704f0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3704f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3704f4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3704f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3704f8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3704f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704fc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3704fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x370500: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x370500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x370504: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370508: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37050c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x37050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370510: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370514: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370518: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x370518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x37051c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x37051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x370520: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370524: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370528: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37052c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37052cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370530: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370534: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x370534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x370538: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x370538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x37053c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x37053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x370540: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370544: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370548: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37054c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37054cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370550: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370554: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x370554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x370558: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x370558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x37055c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x37055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370560: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370564: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370568: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x37056c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x37056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370570: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x370570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x370574: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x370574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x370578: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37057c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37057cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370580: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370584: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x370584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370588: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37058c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x37058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x370590: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x370590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x370594: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370598: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x370598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37059c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x37059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3705a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3705a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3705a4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3705a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3705a8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x3705a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x3705ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3705acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3705b0: 0x14a0ffc5  bnez        $a1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3705B0u;
    {
        const bool branch_taken_0x3705b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3705B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705B0u;
        // 0x3705b4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3705b0) {
            ctx->pc = 0x3704C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3704c8;
        }
    }
    ctx->pc = 0x3705B8u;
label_3705b8:
    // 0x3705b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3705B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3705B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3705C0u;
}
