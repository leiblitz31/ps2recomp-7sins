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

// Function: sub_002EEC10
// Address: 0x2eec10 - 0x2eece0
void sub_002EEC10_0x2eec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEC10_0x2eec10");
#endif

    ctx->pc = 0x2eec10u;

    // 0x2eec10: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x2eec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x2eec14: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2eec14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2eec18: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2eec18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2eec1c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x2eec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x2eec20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2eec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eec24: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2eec24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2eec28: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEC28u;
    {
        const bool branch_taken_0x2eec28 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2EEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC28u;
        // 0x2eec2c: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec28) {
            ctx->pc = 0x2EEC50u;
            goto label_2eec50;
        }
    }
    ctx->pc = 0x2EEC30u;
    // 0x2eec30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2eec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2eec34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eec38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2eec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eec3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eec40: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2eec40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2eec44: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2eec44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2eec48: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2EEC48u;
    {
        const bool branch_taken_0x2eec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC48u;
        // 0x2eec4c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec48) {
            ctx->pc = 0x2EECD4u;
            goto label_2eecd4;
        }
    }
    ctx->pc = 0x2EEC50u;
label_2eec50:
    // 0x2eec50: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x2eec50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2eec54: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2eec54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2eec58: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EEC58u;
    {
        const bool branch_taken_0x2eec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec58) {
            ctx->pc = 0x2EEC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEC58u;
            // 0x2eec5c: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC90u;
            goto label_2eec90;
        }
    }
    ctx->pc = 0x2EEC60u;
    // 0x2eec60: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2eec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2eec64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eec64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eec68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eec68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eec6c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2eec6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eec70: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2eec70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2eec74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eec74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eec78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2eec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eec7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eec80: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2eec80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2eec84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EEC84u;
    {
        const bool branch_taken_0x2eec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC84u;
        // 0x2eec88: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec84) {
            ctx->pc = 0x2EECD4u;
            goto label_2eecd4;
        }
    }
    ctx->pc = 0x2EEC8Cu;
    // 0x2eec8c: 0x0  nop
    ctx->pc = 0x2eec8cu;
    // NOP
label_2eec90:
    // 0x2eec90: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eec90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eec94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eec98: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x2eec98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2eec9c: 0x43027  nor         $a2, $zero, $a0
    ctx->pc = 0x2eec9cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2eeca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EECA0u;
    {
        const bool branch_taken_0x2eeca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECA0u;
        // 0x2eeca4: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeca0) {
            ctx->pc = 0x2EECB8u;
            goto label_2eecb8;
        }
    }
    ctx->pc = 0x2EECA8u;
    // 0x2eeca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eeca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eecac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EECACu;
    {
        const bool branch_taken_0x2eecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECACu;
        // 0x2eecb0: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecac) {
            ctx->pc = 0x2EECBCu;
            goto label_2eecbc;
        }
    }
    ctx->pc = 0x2EECB4u;
    // 0x2eecb4: 0x0  nop
    ctx->pc = 0x2eecb4u;
    // NOP
label_2eecb8:
    // 0x2eecb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eecbc:
    // 0x2eecbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eecc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2eecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eecc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eecc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eeccc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2eecccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2eecd0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2eecd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2eecd4:
    // 0x2eecd4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2eecd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EECD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EECE0u;
}
