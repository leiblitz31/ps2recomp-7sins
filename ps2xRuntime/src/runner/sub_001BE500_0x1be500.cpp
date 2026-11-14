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

// Function: sub_001BE500
// Address: 0x1be500 - 0x1be560
void sub_001BE500_0x1be500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE500_0x1be500");
#endif

    switch (ctx->pc) {
        case 0x1be52cu: goto label_1be52c;
        case 0x1be54cu: goto label_1be54c;
        default: break;
    }

    ctx->pc = 0x1be500u;

    // 0x1be500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be50c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1be50cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1be510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be514: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE514u;
    {
        const bool branch_taken_0x1be514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be514) {
            ctx->pc = 0x1BE54Cu;
            goto label_1be54c;
        }
    }
    ctx->pc = 0x1BE51Cu;
    // 0x1be51c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be524: 0xc06fa54  jal         func_1BE950
    ctx->pc = 0x1BE524u;
    SET_GPR_U32(ctx, 31, 0x1BE52Cu);
    ctx->pc = 0x1BE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE950u, 0x1BE524u, 0x1BE52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE52Cu;
label_1be52c:
    // 0x1be52c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1be52cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be530: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1be530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1be534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1be534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1be538: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE538u;
    {
        const bool branch_taken_0x1be538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1be538) {
            ctx->pc = 0x1BE54Cu;
            goto label_1be54c;
        }
    }
    ctx->pc = 0x1BE540u;
    // 0x1be540: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be544: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BE544u;
    SET_GPR_U32(ctx, 31, 0x1BE54Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BE544u, 0x1BE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE54Cu;
label_1be54c:
    // 0x1be54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be554: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be558: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE560u;
}
