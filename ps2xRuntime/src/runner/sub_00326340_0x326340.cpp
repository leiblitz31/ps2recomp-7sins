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

// Function: sub_00326340
// Address: 0x326340 - 0x326388
void sub_00326340_0x326340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326340_0x326340");
#endif

    switch (ctx->pc) {
        case 0x326358u: goto label_326358;
        default: break;
    }

    ctx->pc = 0x326340u;

    // 0x326340: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326344: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x326344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32634c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x32634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326350: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326354: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x326354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_326358:
    // 0x326358: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32635c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x32635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326360: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x326360u;
    {
        const bool branch_taken_0x326360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x326360) {
            ctx->pc = 0x326380u;
            goto label_326380;
        }
    }
    ctx->pc = 0x326368u;
    // 0x326368: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x326368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32636c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32636cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326370: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x326370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x326374: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x326374u;
    {
        const bool branch_taken_0x326374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x326378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326374u;
        // 0x326378: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326374) {
            ctx->pc = 0x326358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326358;
        }
    }
    ctx->pc = 0x32637Cu;
    // 0x32637c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32637cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326380:
    // 0x326380: 0x3e00008  jr          $ra
    ctx->pc = 0x326380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326380u;
        // 0x326384: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326388u;
}
