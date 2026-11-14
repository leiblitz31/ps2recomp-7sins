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

// Function: sub_0039E1E8
// Address: 0x39e1e8 - 0x39e238
void sub_0039E1E8_0x39e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E1E8_0x39e1e8");
#endif

    ctx->pc = 0x39e1e8u;

    // 0x39e1e8: 0x84870004  lh          $a3, 0x4($a0)
    ctx->pc = 0x39e1e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39e1ec: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x39e1ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x39e1f0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x39e1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x39e1f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E1F4u;
    {
        const bool branch_taken_0x39e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1F4u;
        // 0x39e1f8: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e1f4) {
            ctx->pc = 0x39E204u;
            goto label_39e204;
        }
    }
    ctx->pc = 0x39E1FCu;
    // 0x39e1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x39E1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E1FCu;
        // 0x39e200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E204u;
label_39e204:
    // 0x39e204: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E204u;
    {
        const bool branch_taken_0x39e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e204) {
            ctx->pc = 0x39E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E204u;
            // 0x39e208: 0x94840006  lhu         $a0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E214u;
            goto label_39e214;
        }
    }
    ctx->pc = 0x39E20Cu;
    // 0x39e20c: 0x3e00008  jr          $ra
    ctx->pc = 0x39E20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E20Cu;
        // 0x39e210: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E214u;
label_39e214:
    // 0x39e214: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x39e214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x39e218: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x39e218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x39e21c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E21Cu;
    {
        const bool branch_taken_0x39e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E21Cu;
        // 0x39e220: 0x83182b  sltu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e21c) {
            ctx->pc = 0x39E230u;
            goto label_39e230;
        }
    }
    ctx->pc = 0x39E224u;
    // 0x39e224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39e228: 0x3e00008  jr          $ra
    ctx->pc = 0x39E228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E228u;
        // 0x39e22c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E230u;
label_39e230:
    // 0x39e230: 0x3e00008  jr          $ra
    ctx->pc = 0x39E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E230u;
        // 0x39e234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E238u;
}
