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

// Function: sub_00329520
// Address: 0x329520 - 0x329558
void sub_00329520_0x329520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329520_0x329520");
#endif

    switch (ctx->pc) {
        case 0x329540u: goto label_329540;
        default: break;
    }

    ctx->pc = 0x329520u;

    // 0x329520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329524: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x329524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x329528: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x329528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32952c: 0x8c432320  lw          $v1, 0x2320($v0)
    ctx->pc = 0x32952cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2320u));
    // 0x329530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329538: 0xc0ca556  jal         func_329558
    ctx->pc = 0x329538u;
    SET_GPR_U32(ctx, 31, 0x329540u);
    ctx->pc = 0x32953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329538u;
    // 0x32953c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329558u, 0x329538u, 0x329540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329540u;
label_329540:
    // 0x329540: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x329544: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x329544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32954c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329550: 0x3e00008  jr          $ra
    ctx->pc = 0x329550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329550u;
        // 0x329554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329558u;
}
