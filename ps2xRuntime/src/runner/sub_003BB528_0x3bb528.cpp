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

// Function: sub_003BB528
// Address: 0x3bb528 - 0x3bb568
void sub_003BB528_0x3bb528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB528_0x3bb528");
#endif

    switch (ctx->pc) {
        case 0x3bb544u: goto label_3bb544;
        case 0x3bb54cu: goto label_3bb54c;
        default: break;
    }

    ctx->pc = 0x3bb528u;

    // 0x3bb528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bb52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bb530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bb530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bb534: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3bb534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3bb538: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3bb538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3bb53c: 0xc104284  jal         func_410A10
    ctx->pc = 0x3BB53Cu;
    SET_GPR_U32(ctx, 31, 0x3BB544u);
    ctx->pc = 0x3BB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB53Cu;
    // 0x3bb540: 0x8e040534  lw          $a0, 0x534($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3BB53Cu, 0x3BB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB544u;
label_3bb544:
    // 0x3bb544: 0xc104284  jal         func_410A10
    ctx->pc = 0x3BB544u;
    SET_GPR_U32(ctx, 31, 0x3BB54Cu);
    ctx->pc = 0x3BB548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB544u;
    // 0x3bb548: 0x8e040538  lw          $a0, 0x538($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3BB544u, 0x3BB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB54Cu;
label_3bb54c:
    // 0x3bb54c: 0xae000538  sw          $zero, 0x538($s0)
    ctx->pc = 0x3bb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 0));
    // 0x3bb550: 0xae000534  sw          $zero, 0x534($s0)
    ctx->pc = 0x3bb550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1332), GPR_U32(ctx, 0));
    // 0x3bb554: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bb554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb55c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB55Cu;
        // 0x3bb560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB564u;
    // 0x3bb564: 0x0  nop
    ctx->pc = 0x3bb564u;
    // NOP
    ctx->pc = 0x3bb568u;
}
