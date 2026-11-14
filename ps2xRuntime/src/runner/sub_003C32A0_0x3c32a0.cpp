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

// Function: sub_003C32A0
// Address: 0x3c32a0 - 0x3c32f8
void sub_003C32A0_0x3c32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C32A0_0x3c32a0");
#endif

    switch (ctx->pc) {
        case 0x3c32a0u: goto label_3c32a0;
        case 0x3c32a4u: goto label_3c32a4;
        case 0x3c32a8u: goto label_3c32a8;
        case 0x3c32acu: goto label_3c32ac;
        case 0x3c32b0u: goto label_3c32b0;
        case 0x3c32b4u: goto label_3c32b4;
        case 0x3c32b8u: goto label_3c32b8;
        case 0x3c32bcu: goto label_3c32bc;
        case 0x3c32c0u: goto label_3c32c0;
        case 0x3c32c4u: goto label_3c32c4;
        case 0x3c32c8u: goto label_3c32c8;
        case 0x3c32ccu: goto label_3c32cc;
        case 0x3c32d0u: goto label_3c32d0;
        case 0x3c32d4u: goto label_3c32d4;
        case 0x3c32d8u: goto label_3c32d8;
        case 0x3c32dcu: goto label_3c32dc;
        case 0x3c32e0u: goto label_3c32e0;
        case 0x3c32e4u: goto label_3c32e4;
        case 0x3c32e8u: goto label_3c32e8;
        case 0x3c32ecu: goto label_3c32ec;
        case 0x3c32f0u: goto label_3c32f0;
        case 0x3c32f4u: goto label_3c32f4;
        default: break;
    }

    ctx->pc = 0x3c32a0u;

label_3c32a0:
    // 0x3c32a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c32a4:
    // 0x3c32a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c32a8:
    // 0x3c32a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c32ac:
    // 0x3c32ac: 0x2444dff0  addiu       $a0, $v0, -0x2010
    ctx->pc = 0x3c32acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
label_3c32b0:
    // 0x3c32b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3c32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3c32b4:
    // 0x3c32b4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3c32b8:
    if (ctx->pc == 0x3C32B8u) {
        ctx->pc = 0x3C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32B4u;
        // 0x3c32b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32BCu;
        goto label_3c32bc;
    }
    ctx->pc = 0x3C32B4u;
    {
        const bool branch_taken_0x3c32b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32B4u;
        // 0x3c32b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32b4) {
            ctx->pc = 0x3C32E8u;
            goto label_3c32e8;
        }
    }
    ctx->pc = 0x3C32BCu;
label_3c32bc:
    // 0x3c32bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3c32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3c32c0:
    // 0x3c32c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c32c4:
    // 0x3c32c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3c32c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c32c8:
    // 0x3c32c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c32cc:
    if (ctx->pc == 0x3C32CCu) {
        ctx->pc = 0x3C32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32C8u;
        // 0x3c32cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32D0u;
        goto label_3c32d0;
    }
    ctx->pc = 0x3C32C8u;
    {
        const bool branch_taken_0x3c32c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32C8u;
        // 0x3c32cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32c8) {
            ctx->pc = 0x3C32E8u;
            goto label_3c32e8;
        }
    }
    ctx->pc = 0x3C32D0u;
label_3c32d0:
    // 0x3c32d0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3c32d4:
    // 0x3c32d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3c32d8:
    if (ctx->pc == 0x3C32D8u) {
        ctx->pc = 0x3C32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32D4u;
        // 0x3c32d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32DCu;
        goto label_3c32dc;
    }
    ctx->pc = 0x3C32D4u;
    {
        const bool branch_taken_0x3c32d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c32d4) {
            ctx->pc = 0x3C32D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C32D4u;
            // 0x3c32d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C32E8u;
            goto label_3c32e8;
        }
    }
    ctx->pc = 0x3C32DCu;
label_3c32dc:
    // 0x3c32dc: 0x40f809  jalr        $v0
label_3c32e0:
    if (ctx->pc == 0x3C32E0u) {
        ctx->pc = 0x3C32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32DCu;
        // 0x3c32e0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32E4u;
        goto label_3c32e4;
    }
    ctx->pc = 0x3C32DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C32E4u);
        ctx->pc = 0x3C32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32DCu;
        // 0x3c32e0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C32DCu, 0x3C32E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C32E4u;
label_3c32e4:
    // 0x3c32e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c32e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c32e8:
    // 0x3c32e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c32e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c32ec:
    // 0x3c32ec: 0x3e00008  jr          $ra
label_3c32f0:
    if (ctx->pc == 0x3C32F0u) {
        ctx->pc = 0x3C32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32ECu;
        // 0x3c32f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32F4u;
        goto label_3c32f4;
    }
    ctx->pc = 0x3C32ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32ECu;
        // 0x3c32f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C32ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C32F4u;
label_3c32f4:
    // 0x3c32f4: 0x0  nop
    ctx->pc = 0x3c32f4u;
    // NOP
    ctx->pc = 0x3c32f8u;
}
