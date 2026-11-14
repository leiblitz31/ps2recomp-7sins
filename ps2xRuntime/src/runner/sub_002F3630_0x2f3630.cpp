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

// Function: sub_002F3630
// Address: 0x2f3630 - 0x2f3680
void sub_002F3630_0x2f3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3630_0x2f3630");
#endif

    switch (ctx->pc) {
        case 0x2f3640u: goto label_2f3640;
        default: break;
    }

    ctx->pc = 0x2f3630u;

    // 0x2f3630: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2f3630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3634: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f3634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3638: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3638u;
    {
        const bool branch_taken_0x2f3638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3638u;
        // 0x2f363c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3638) {
            ctx->pc = 0x2F3674u;
            goto label_2f3674;
        }
    }
    ctx->pc = 0x2F3640u;
label_2f3640:
    // 0x2f3640: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2f3640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f3644: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f3644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f3648: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f3648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f364c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3650: 0x90638f81  lbu         $v1, -0x707F($v1)
    ctx->pc = 0x2f3650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294938497)));
    // 0x2f3654: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2f3654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f3658: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3658u;
    {
        const bool branch_taken_0x2f3658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3658u;
        // 0x2f365c: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3658) {
            ctx->pc = 0x2F3664u;
            goto label_2f3664;
        }
    }
    ctx->pc = 0x2F3660u;
    // 0x2f3660: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2f3660u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f3664:
    // 0x2f3664: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f3664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f3668: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f3668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f366c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F366Cu;
    {
        const bool branch_taken_0x2f366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F366Cu;
        // 0x2f3670: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f366c) {
            ctx->pc = 0x2F3640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3640;
        }
    }
    ctx->pc = 0x2F3674u;
label_2f3674:
    // 0x2f3674: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3674u;
        // 0x2f3678: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F367Cu;
    // 0x2f367c: 0x0  nop
    ctx->pc = 0x2f367cu;
    // NOP
    ctx->pc = 0x2f3680u;
}
