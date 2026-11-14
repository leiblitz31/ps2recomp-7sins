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

// Function: sub_004AB280
// Address: 0x4ab280 - 0x4ab340
void sub_004AB280_0x4ab280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB280_0x4ab280");
#endif

    switch (ctx->pc) {
        case 0x4ab294u: goto label_4ab294;
        case 0x4ab2b0u: goto label_4ab2b0;
        case 0x4ab2f8u: goto label_4ab2f8;
        default: break;
    }

    ctx->pc = 0x4ab280u;

    // 0x4ab280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ab280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ab284: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB284u;
    {
        const bool branch_taken_0x4ab284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB284u;
        // 0x4ab288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab284) {
            ctx->pc = 0x4AB29Cu;
            goto label_4ab29c;
        }
    }
    ctx->pc = 0x4AB28Cu;
    // 0x4ab28c: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4AB28Cu;
    {
        const bool branch_taken_0x4ab28c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB28Cu;
        // 0x4ab290: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab28c) {
            ctx->pc = 0x4AB2E0u;
            goto label_4ab2e0;
        }
    }
    ctx->pc = 0x4AB294u;
label_4ab294:
    // 0x4ab294: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB29Cu;
label_4ab29c:
    // 0x4ab29c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ab29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab2a0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x4ab2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x4ab2a4: 0x10a0fffb  beqz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4AB2A4u;
    {
        const bool branch_taken_0x4ab2a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB2A4u;
        // 0x4ab2a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab2a4) {
            ctx->pc = 0x4AB294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab294;
        }
    }
    ctx->pc = 0x4AB2ACu;
    // 0x4ab2ac: 0x0  nop
    ctx->pc = 0x4ab2acu;
    // NOP
label_4ab2b0:
    // 0x4ab2b0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ab2b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab2b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ab2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ab2b8: 0xe5202b  sltu        $a0, $a3, $a1
    ctx->pc = 0x4ab2b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4ab2bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4ab2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4ab2c0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4ab2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4ab2c4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4ab2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4ab2c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ab2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ab2cc: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4ab2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ab2d0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AB2D0u;
    {
        const bool branch_taken_0x4ab2d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB2D0u;
        // 0x4ab2d4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab2d0) {
            ctx->pc = 0x4AB2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab2b0;
        }
    }
    ctx->pc = 0x4AB2D8u;
    // 0x4ab2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB2E0u;
label_4ab2e0:
    // 0x4ab2e0: 0x54882  srl         $t1, $a1, 2
    ctx->pc = 0x4ab2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x4ab2e4: 0x1120ffeb  beqz        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4AB2E4u;
    {
        const bool branch_taken_0x4ab2e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB2E4u;
        // 0x4ab2e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab2e4) {
            ctx->pc = 0x4AB294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab294;
        }
    }
    ctx->pc = 0x4AB2ECu;
    // 0x4ab2ec: 0x3c0b00ff  lui         $t3, 0xFF
    ctx->pc = 0x4ab2ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)255 << 16));
    // 0x4ab2f0: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x4ab2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x4ab2f4: 0x0  nop
    ctx->pc = 0x4ab2f4u;
    // NOP
label_4ab2f8:
    // 0x4ab2f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ab2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ab2fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ab2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ab300: 0xe9302b  sltu        $a2, $a3, $t1
    ctx->pc = 0x4ab300u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4ab304: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x4ab304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4ab308: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x4ab308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x4ab30c: 0x6b2824  and         $a1, $v1, $t3
    ctx->pc = 0x4ab30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x4ab310: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4ab310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4ab314: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ab314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ab318: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x4ab318u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x4ab31c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4ab31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4ab320: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ab320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ab324: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x4ab324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x4ab328: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ab328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ab32c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ab32cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ab330: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x4AB330u;
    {
        const bool branch_taken_0x4ab330 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB330u;
        // 0x4ab334: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab330) {
            ctx->pc = 0x4AB2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab2f8;
        }
    }
    ctx->pc = 0x4AB338u;
    // 0x4ab338: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB340u;
}
