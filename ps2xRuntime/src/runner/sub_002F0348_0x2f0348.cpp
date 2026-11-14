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

// Function: sub_002F0348
// Address: 0x2f0348 - 0x2f0380
void sub_002F0348_0x2f0348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0348_0x2f0348");
#endif

    ctx->pc = 0x2f0348u;

    // 0x2f0348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f034c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f0350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0354: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x2f0354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0358: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x2f0358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x2f035c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F035Cu;
    {
        const bool branch_taken_0x2f035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F035Cu;
        // 0x2f0360: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f035c) {
            ctx->pc = 0x2F0370u;
            goto label_2f0370;
        }
    }
    ctx->pc = 0x2F0364u;
    // 0x2f0364: 0x80baea4  j           func_2EBA90
    ctx->pc = 0x2F0364u;
    ctx->pc = 0x2F0368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0364u;
    // 0x2f0368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA90u;
    sub_002EBA90_0x2eba90(rdram, ctx, runtime); return;
    ctx->pc = 0x2F036Cu;
    // 0x2f036c: 0x0  nop
    ctx->pc = 0x2f036cu;
    // NOP
label_2f0370:
    // 0x2f0370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0374: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0374u;
        // 0x2f0378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F037Cu;
    // 0x2f037c: 0x0  nop
    ctx->pc = 0x2f037cu;
    // NOP
    ctx->pc = 0x2f0380u;
}
