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

// Function: sub_0025F2E0
// Address: 0x25f2e0 - 0x25f340
void sub_0025F2E0_0x25f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F2E0_0x25f2e0");
#endif

    switch (ctx->pc) {
        case 0x25f30cu: goto label_25f30c;
        case 0x25f32cu: goto label_25f32c;
        default: break;
    }

    ctx->pc = 0x25f2e0u;

    // 0x25f2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f2e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f2ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25f2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25f2f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25F2F4u;
    {
        const bool branch_taken_0x25f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f2f4) {
            ctx->pc = 0x25F32Cu;
            goto label_25f32c;
        }
    }
    ctx->pc = 0x25F2FCu;
    // 0x25f2fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f304: 0xc097cd0  jal         func_25F340
    ctx->pc = 0x25F304u;
    SET_GPR_U32(ctx, 31, 0x25F30Cu);
    ctx->pc = 0x25F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F340u, 0x25F304u, 0x25F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F30Cu;
label_25f30c:
    // 0x25f30c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25f30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f310: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25f310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25f314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25f314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25f318: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F318u;
    {
        const bool branch_taken_0x25f318 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f318) {
            ctx->pc = 0x25F32Cu;
            goto label_25f32c;
        }
    }
    ctx->pc = 0x25F320u;
    // 0x25f320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f324: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25F324u;
    SET_GPR_U32(ctx, 31, 0x25F32Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25F324u, 0x25F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F32Cu;
label_25f32c:
    // 0x25f32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f334: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f338: 0x3e00008  jr          $ra
    ctx->pc = 0x25F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F340u;
}
