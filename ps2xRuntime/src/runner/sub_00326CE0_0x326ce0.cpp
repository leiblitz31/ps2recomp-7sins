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

// Function: sub_00326CE0
// Address: 0x326ce0 - 0x326d38
void sub_00326CE0_0x326ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326CE0_0x326ce0");
#endif

    ctx->pc = 0x326ce0u;

    // 0x326ce0: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326ce4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x326ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326ce8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326cec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x326cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326cf0: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x326cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x326cf4: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x326CF4u;
    {
        const bool branch_taken_0x326cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x326cf4) {
            ctx->pc = 0x326CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326CF4u;
            // 0x326cf8: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D1Cu;
            goto label_326d1c;
        }
    }
    ctx->pc = 0x326CFCu;
    // 0x326cfc: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x326cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x326d00: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x326d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x326d04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x326d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x326d08: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x326d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x326d0c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x326d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x326d10: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x326d10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x326d14: 0x3e00008  jr          $ra
    ctx->pc = 0x326D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D14u;
        // 0x326d18: 0xfca30068  sd          $v1, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326D1Cu;
label_326d1c:
    // 0x326d1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x326d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x326d20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x326d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x326d24: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x326d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x326d28: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x326d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x326d2c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x326d2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x326d30: 0x3e00008  jr          $ra
    ctx->pc = 0x326D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D30u;
        // 0x326d34: 0xfca30028  sd          $v1, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326D38u;
}
