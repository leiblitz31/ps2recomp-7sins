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

// Function: sub_004AB238
// Address: 0x4ab238 - 0x4ab280
void sub_004AB238_0x4ab238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB238_0x4ab238");
#endif

    switch (ctx->pc) {
        case 0x4ab250u: goto label_4ab250;
        default: break;
    }

    ctx->pc = 0x4ab238u;

    // 0x4ab238: 0x54042  srl         $t0, $a1, 1
    ctx->pc = 0x4ab238u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x4ab23c: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x4AB23Cu;
    {
        const bool branch_taken_0x4ab23c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB23Cu;
        // 0x4ab240: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab23c) {
            ctx->pc = 0x4AB274u;
            goto label_4ab274;
        }
    }
    ctx->pc = 0x4AB244u;
    // 0x4ab244: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4ab244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4ab248: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ab248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab24c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ab24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4ab250:
    // 0x4ab250: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4ab250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ab254: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ab254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ab258: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4ab258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab25c: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x4ab25cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4ab260: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4ab260u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ab264: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4ab264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ab268: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4ab268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4ab26c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4AB26Cu;
    {
        const bool branch_taken_0x4ab26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB26Cu;
        // 0x4ab270: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab26c) {
            ctx->pc = 0x4AB250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab250;
        }
    }
    ctx->pc = 0x4AB274u;
label_4ab274:
    // 0x4ab274: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB27Cu;
    // 0x4ab27c: 0x0  nop
    ctx->pc = 0x4ab27cu;
    // NOP
    ctx->pc = 0x4ab280u;
}
