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

// Function: sub_00222490
// Address: 0x222490 - 0x222500
void sub_00222490_0x222490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222490_0x222490");
#endif

    switch (ctx->pc) {
        case 0x2224c4u: goto label_2224c4;
        case 0x2224e4u: goto label_2224e4;
        default: break;
    }

    ctx->pc = 0x222490u;

    // 0x222490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22249c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22249cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2224a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2224a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2224A4u;
    {
        const bool branch_taken_0x2224a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2224a4) {
            ctx->pc = 0x2224E4u;
            goto label_2224e4;
        }
    }
    ctx->pc = 0x2224ACu;
    // 0x2224ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2224b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2224b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2224b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2224b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2224b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224bc: 0xc0894fc  jal         func_2253F0
    ctx->pc = 0x2224BCu;
    SET_GPR_U32(ctx, 31, 0x2224C4u);
    ctx->pc = 0x2253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253F0u, 0x2224BCu, 0x2224C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224C4u;
label_2224c4:
    // 0x2224c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2224c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2224c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2224c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2224cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2224ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2224d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2224D0u;
    {
        const bool branch_taken_0x2224d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2224d0) {
            ctx->pc = 0x2224E4u;
            goto label_2224e4;
        }
    }
    ctx->pc = 0x2224D8u;
    // 0x2224d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2224d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2224dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2224DCu;
    SET_GPR_U32(ctx, 31, 0x2224E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2224DCu, 0x2224E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224E4u;
label_2224e4:
    // 0x2224e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2224e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2224e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2224e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2224ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2224f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2224F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2224F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2224F8u;
    // 0x2224f8: 0x0  nop
    ctx->pc = 0x2224f8u;
    // NOP
    // 0x2224fc: 0x0  nop
    ctx->pc = 0x2224fcu;
    // NOP
    ctx->pc = 0x222500u;
}
