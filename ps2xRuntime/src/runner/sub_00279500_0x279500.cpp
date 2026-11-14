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

// Function: sub_00279500
// Address: 0x279500 - 0x279570
void sub_00279500_0x279500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279500_0x279500");
#endif

    switch (ctx->pc) {
        case 0x279528u: goto label_279528;
        case 0x279538u: goto label_279538;
        case 0x279558u: goto label_279558;
        default: break;
    }

    ctx->pc = 0x279500u;

    // 0x279500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27950c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27950cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x279510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279514: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x279514u;
    {
        const bool branch_taken_0x279514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279514) {
            ctx->pc = 0x279558u;
            goto label_279558;
        }
    }
    ctx->pc = 0x27951Cu;
    // 0x27951c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279520: 0xc09e578  jal         func_2795E0
    ctx->pc = 0x279520u;
    SET_GPR_U32(ctx, 31, 0x279528u);
    ctx->pc = 0x2795E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795E0u, 0x279520u, 0x279528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279528u;
label_279528:
    // 0x279528: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27952c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279530: 0xc09e55c  jal         func_279570
    ctx->pc = 0x279530u;
    SET_GPR_U32(ctx, 31, 0x279538u);
    ctx->pc = 0x279570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279570u, 0x279530u, 0x279538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279538u;
label_279538:
    // 0x279538: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x279538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27953c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x279540: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x279540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x279544: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279544u;
    {
        const bool branch_taken_0x279544 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x279544) {
            ctx->pc = 0x279558u;
            goto label_279558;
        }
    }
    ctx->pc = 0x27954Cu;
    // 0x27954c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279550: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x279550u;
    SET_GPR_U32(ctx, 31, 0x279558u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x279550u, 0x279558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279558u;
label_279558:
    // 0x279558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27955c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279564: 0x3e00008  jr          $ra
    ctx->pc = 0x279564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27956Cu;
    // 0x27956c: 0x0  nop
    ctx->pc = 0x27956cu;
    // NOP
    ctx->pc = 0x279570u;
}
