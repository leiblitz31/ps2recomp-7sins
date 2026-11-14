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

// Function: sub_00477210
// Address: 0x477210 - 0x477290
void sub_00477210_0x477210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477210_0x477210");
#endif

    switch (ctx->pc) {
        case 0x477244u: goto label_477244;
        case 0x477254u: goto label_477254;
        case 0x477274u: goto label_477274;
        default: break;
    }

    ctx->pc = 0x477210u;

    // 0x477210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x477210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x477214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x477218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47721c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x47721cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x477220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477224: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x477224u;
    {
        const bool branch_taken_0x477224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477224) {
            ctx->pc = 0x477274u;
            goto label_477274;
        }
    }
    ctx->pc = 0x47722Cu;
    // 0x47722c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477234: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x477234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x477238: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x477238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47723c: 0xc11dca4  jal         func_477290
    ctx->pc = 0x47723Cu;
    SET_GPR_U32(ctx, 31, 0x477244u);
    ctx->pc = 0x477290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477290u, 0x47723Cu, 0x477244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477244u;
label_477244:
    // 0x477244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x477248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47724c: 0xc11dbf8  jal         func_476FE0
    ctx->pc = 0x47724Cu;
    SET_GPR_U32(ctx, 31, 0x477254u);
    ctx->pc = 0x476FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476FE0u, 0x47724Cu, 0x477254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477254u;
label_477254:
    // 0x477254: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x477254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477258: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x477258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x47725c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47725cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x477260: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x477260u;
    {
        const bool branch_taken_0x477260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x477260) {
            ctx->pc = 0x477274u;
            goto label_477274;
        }
    }
    ctx->pc = 0x477268u;
    // 0x477268: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47726c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x47726Cu;
    SET_GPR_U32(ctx, 31, 0x477274u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x47726Cu, 0x477274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477274u;
label_477274:
    // 0x477274: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x477278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47727c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47727cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x477280: 0x3e00008  jr          $ra
    ctx->pc = 0x477280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477288u;
    // 0x477288: 0x0  nop
    ctx->pc = 0x477288u;
    // NOP
    // 0x47728c: 0x0  nop
    ctx->pc = 0x47728cu;
    // NOP
    ctx->pc = 0x477290u;
}
