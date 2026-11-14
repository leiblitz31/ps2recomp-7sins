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

// Function: sub_00311F08
// Address: 0x311f08 - 0x311f50
void sub_00311F08_0x311f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311F08_0x311f08");
#endif

    ctx->pc = 0x311f08u;

    // 0x311f08: 0x8f83a570  lw          $v1, -0x5A90($gp)
    ctx->pc = 0x311f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
    // 0x311f0c: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x311f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311f10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311f14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x311F14u;
    {
        const bool branch_taken_0x311f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F14u;
        // 0x311f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f14) {
            ctx->pc = 0x311F48u;
            goto label_311f48;
        }
    }
    ctx->pc = 0x311F1Cu;
    // 0x311f1c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x311f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x311f20: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x311f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x311f24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x311f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x311f28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x311F28u;
    {
        const bool branch_taken_0x311f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F28u;
        // 0x311f2c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f28) {
            ctx->pc = 0x311F48u;
            goto label_311f48;
        }
    }
    ctx->pc = 0x311F30u;
    // 0x311f30: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x311f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x311f34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x311f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x311f38: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x311f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x311f3c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x311f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x311f40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x311f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x311f44: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x311f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_311f48:
    // 0x311f48: 0x3e00008  jr          $ra
    ctx->pc = 0x311F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F48u;
        // 0x311f4c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311F50u;
}
