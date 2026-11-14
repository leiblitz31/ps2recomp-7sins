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

// Function: sub_002542E0
// Address: 0x2542e0 - 0x254340
void sub_002542E0_0x2542e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002542E0_0x2542e0");
#endif

    switch (ctx->pc) {
        case 0x25430cu: goto label_25430c;
        case 0x25432cu: goto label_25432c;
        default: break;
    }

    ctx->pc = 0x2542e0u;

    // 0x2542e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2542e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2542e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2542e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2542e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2542e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2542ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2542ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2542f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2542f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2542f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2542F4u;
    {
        const bool branch_taken_0x2542f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2542f4) {
            ctx->pc = 0x25432Cu;
            goto label_25432c;
        }
    }
    ctx->pc = 0x2542FCu;
    // 0x2542fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2542fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254300: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x254300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254304: 0xc0950d0  jal         func_254340
    ctx->pc = 0x254304u;
    SET_GPR_U32(ctx, 31, 0x25430Cu);
    ctx->pc = 0x254340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254340u, 0x254304u, 0x25430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25430Cu;
label_25430c:
    // 0x25430c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25430cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254310: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x254310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x254314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x254314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x254318: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254318u;
    {
        const bool branch_taken_0x254318 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x254318) {
            ctx->pc = 0x25432Cu;
            goto label_25432c;
        }
    }
    ctx->pc = 0x254320u;
    // 0x254320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254324: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x254324u;
    SET_GPR_U32(ctx, 31, 0x25432Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x254324u, 0x25432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25432Cu;
label_25432c:
    // 0x25432c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254334: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254338: 0x3e00008  jr          $ra
    ctx->pc = 0x254338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254340u;
}
