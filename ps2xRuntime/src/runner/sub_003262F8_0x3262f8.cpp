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

// Function: sub_003262F8
// Address: 0x3262f8 - 0x326340
void sub_003262F8_0x3262f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003262F8_0x3262f8");
#endif

    switch (ctx->pc) {
        case 0x326310u: goto label_326310;
        default: break;
    }

    ctx->pc = 0x3262f8u;

    // 0x3262f8: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3262f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x3262fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3262fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326304: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326308: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32630c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x32630cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_326310:
    // 0x326310: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326314: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x326314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326318: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x326318u;
    {
        const bool branch_taken_0x326318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x326318) {
            ctx->pc = 0x326338u;
            goto label_326338;
        }
    }
    ctx->pc = 0x326320u;
    // 0x326320: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x326320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x326324: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x326324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326328: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x326328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32632c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32632Cu;
    {
        const bool branch_taken_0x32632c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32632c) {
            ctx->pc = 0x326330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32632Cu;
            // 0x326330: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326310;
        }
    }
    ctx->pc = 0x326334u;
    // 0x326334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326338:
    // 0x326338: 0x3e00008  jr          $ra
    ctx->pc = 0x326338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326338u;
        // 0x32633c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326340u;
}
