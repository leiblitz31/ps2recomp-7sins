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

// Function: sub_00390398
// Address: 0x390398 - 0x390408
void sub_00390398_0x390398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390398_0x390398");
#endif

    ctx->pc = 0x390398u;

    // 0x390398: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x390398u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39039c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3903a0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3903A0u;
    {
        const bool branch_taken_0x3903a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3903A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903A0u;
        // 0x3903a4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3903a0) {
            ctx->pc = 0x3903C0u;
            goto label_3903c0;
        }
    }
    ctx->pc = 0x3903A8u;
    // 0x3903a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3903a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3903ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3903acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3903b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3903b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3903b4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3903B4u;
    {
        const bool branch_taken_0x3903b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3903b4) {
            ctx->pc = 0x3903B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3903B4u;
            // 0x3903b8: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3903E0u;
            goto label_3903e0;
        }
    }
    ctx->pc = 0x3903BCu;
    // 0x3903bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3903bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3903c0:
    // 0x3903c0: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3903C0u;
    {
        const bool branch_taken_0x3903c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3903c0) {
            ctx->pc = 0x3903C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3903C0u;
            // 0x3903c4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3903ECu;
            goto label_3903ec;
        }
    }
    ctx->pc = 0x3903C8u;
    // 0x3903c8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3903c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3903cc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3903ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3903d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3903d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3903d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3903D4u;
    {
        const bool branch_taken_0x3903d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3903d4) {
            ctx->pc = 0x3903D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3903D4u;
            // 0x3903d8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3903ECu;
            goto label_3903ec;
        }
    }
    ctx->pc = 0x3903DCu;
    // 0x3903dc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3903dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3903e0:
    // 0x3903e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3903e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3903e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3903E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3903E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903E4u;
        // 0x3903e8: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3903E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3903ECu;
label_3903ec:
    // 0x3903ec: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3903ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3903f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3903f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3903f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3903f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3903f8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3903f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3903fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3903FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903FCu;
        // 0x390400: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3903FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390404u;
    // 0x390404: 0x0  nop
    ctx->pc = 0x390404u;
    // NOP
    ctx->pc = 0x390408u;
}
