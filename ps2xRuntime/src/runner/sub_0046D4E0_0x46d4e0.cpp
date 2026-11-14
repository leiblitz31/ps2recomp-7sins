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

// Function: sub_0046D4E0
// Address: 0x46d4e0 - 0x46d540
void sub_0046D4E0_0x46d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D4E0_0x46d4e0");
#endif

    switch (ctx->pc) {
        case 0x46d4fcu: goto label_46d4fc;
        case 0x46d50cu: goto label_46d50c;
        case 0x46d520u: goto label_46d520;
        default: break;
    }

    ctx->pc = 0x46d4e0u;

    // 0x46d4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46d4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46d4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d4ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46d4f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d4f4: 0xc11a5dc  jal         func_469770
    ctx->pc = 0x46D4F4u;
    SET_GPR_U32(ctx, 31, 0x46D4FCu);
    ctx->pc = 0x469770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469770u, 0x46D4F4u, 0x46D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D4FCu;
label_46d4fc:
    // 0x46d4fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46d4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d500: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d504: 0xc11a7b8  jal         func_469EE0
    ctx->pc = 0x46D504u;
    SET_GPR_U32(ctx, 31, 0x46D50Cu);
    ctx->pc = 0x469EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469EE0u, 0x46D504u, 0x46D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D50Cu;
label_46d50c:
    // 0x46d50c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d514: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46d514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d518: 0xc11b550  jal         func_46D540
    ctx->pc = 0x46D518u;
    SET_GPR_U32(ctx, 31, 0x46D520u);
    ctx->pc = 0x46D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D540u, 0x46D518u, 0x46D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D520u;
label_46d520:
    // 0x46d520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46d520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d528: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46d52c: 0x3e00008  jr          $ra
    ctx->pc = 0x46D52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D534u;
    // 0x46d534: 0x0  nop
    ctx->pc = 0x46d534u;
    // NOP
    // 0x46d538: 0x0  nop
    ctx->pc = 0x46d538u;
    // NOP
    // 0x46d53c: 0x0  nop
    ctx->pc = 0x46d53cu;
    // NOP
    ctx->pc = 0x46d540u;
}
