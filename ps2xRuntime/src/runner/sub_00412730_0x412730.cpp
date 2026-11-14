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

// Function: sub_00412730
// Address: 0x412730 - 0x412788
void sub_00412730_0x412730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412730_0x412730");
#endif

    switch (ctx->pc) {
        case 0x412764u: goto label_412764;
        default: break;
    }

    ctx->pc = 0x412730u;

    // 0x412730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x412730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x412734: 0x8f83bdd8  lw          $v1, -0x4228($gp)
    ctx->pc = 0x412734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950360)));
    // 0x412738: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x412738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41273c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x412740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x412744: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x412744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x412748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x412748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41274c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x412750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x412750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x412754: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x412754u;
    {
        const bool branch_taken_0x412754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x412754) {
            ctx->pc = 0x412764u;
            goto label_412764;
        }
    }
    ctx->pc = 0x41275Cu;
    // 0x41275c: 0xc104284  jal         func_410A10
    ctx->pc = 0x41275Cu;
    SET_GPR_U32(ctx, 31, 0x412764u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41275Cu, 0x412764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412764u;
label_412764:
    // 0x412764: 0x8f83bddc  lw          $v1, -0x4224($gp)
    ctx->pc = 0x412764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950364)));
    // 0x412768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x412768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41276c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x412770: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x412770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x412774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x412778: 0xaf83bddc  sw          $v1, -0x4224($gp)
    ctx->pc = 0x412778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950364), GPR_U32(ctx, 3));
    // 0x41277c: 0x3e00008  jr          $ra
    ctx->pc = 0x41277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41277Cu;
        // 0x412780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41277Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412784u;
    // 0x412784: 0x0  nop
    ctx->pc = 0x412784u;
    // NOP
    ctx->pc = 0x412788u;
}
