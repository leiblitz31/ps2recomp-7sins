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

// Function: sub_002347E0
// Address: 0x2347e0 - 0x234860
void sub_002347E0_0x2347e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002347E0_0x2347e0");
#endif

    switch (ctx->pc) {
        case 0x234810u: goto label_234810;
        case 0x234824u: goto label_234824;
        case 0x234844u: goto label_234844;
        default: break;
    }

    ctx->pc = 0x2347e0u;

    // 0x2347e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2347e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2347e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2347e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2347e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2347e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2347ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2347ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2347f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2347f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2347f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2347F4u;
    {
        const bool branch_taken_0x2347f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347f4) {
            ctx->pc = 0x234844u;
            goto label_234844;
        }
    }
    ctx->pc = 0x2347FCu;
    // 0x2347fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2347fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234800: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x234804: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234808: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x234808u;
    SET_GPR_U32(ctx, 31, 0x234810u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x234808u, 0x234810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234810u;
label_234810:
    // 0x234810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234814: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x234814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234818: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23481c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x23481Cu;
    SET_GPR_U32(ctx, 31, 0x234824u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x23481Cu, 0x234824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234824u;
label_234824:
    // 0x234824: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x234824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234828: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23482c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23482cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234830: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234830u;
    {
        const bool branch_taken_0x234830 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x234830) {
            ctx->pc = 0x234844u;
            goto label_234844;
        }
    }
    ctx->pc = 0x234838u;
    // 0x234838: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23483c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23483Cu;
    SET_GPR_U32(ctx, 31, 0x234844u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23483Cu, 0x234844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234844u;
label_234844:
    // 0x234844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23484c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23484cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234850: 0x3e00008  jr          $ra
    ctx->pc = 0x234850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234858u;
    // 0x234858: 0x0  nop
    ctx->pc = 0x234858u;
    // NOP
    // 0x23485c: 0x0  nop
    ctx->pc = 0x23485cu;
    // NOP
    ctx->pc = 0x234860u;
}
