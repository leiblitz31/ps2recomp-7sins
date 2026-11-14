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

// Function: sub_00414EE8
// Address: 0x414ee8 - 0x414f38
void sub_00414EE8_0x414ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414EE8_0x414ee8");
#endif

    ctx->pc = 0x414ee8u;

    // 0x414ee8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x414EE8u;
    {
        const bool branch_taken_0x414ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414EE8u;
        // 0x414eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ee8) {
            ctx->pc = 0x414F28u;
            goto label_414f28;
        }
    }
    ctx->pc = 0x414EF0u;
    // 0x414ef0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x414ef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x414ef4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x414ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x414ef8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x414EF8u;
    {
        const bool branch_taken_0x414ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x414EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414EF8u;
        // 0x414efc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ef8) {
            ctx->pc = 0x414F24u;
            goto label_414f24;
        }
    }
    ctx->pc = 0x414F00u;
    // 0x414f00: 0x24428f81  addiu       $v0, $v0, -0x707F
    ctx->pc = 0x414f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938497));
    // 0x414f04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x414f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x414f08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x414f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x414f0c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x414f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x414f10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x414F10u;
    {
        const bool branch_taken_0x414f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x414F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F10u;
        // 0x414f14: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414f10) {
            ctx->pc = 0x414F28u;
            goto label_414f28;
        }
    }
    ctx->pc = 0x414F18u;
    // 0x414f18: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x414f18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x414f1c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x414F1Cu;
    {
        const bool branch_taken_0x414f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x414f1c) {
            ctx->pc = 0x414F28u;
            goto label_414f28;
        }
    }
    ctx->pc = 0x414F24u;
label_414f24:
    // 0x414f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x414f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414f28:
    // 0x414f28: 0x3e00008  jr          $ra
    ctx->pc = 0x414F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F28u;
        // 0x414f2c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414F30u;
    // 0x414f30: 0x3e00008  jr          $ra
    ctx->pc = 0x414F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F30u;
        // 0x414f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414F38u;
}
