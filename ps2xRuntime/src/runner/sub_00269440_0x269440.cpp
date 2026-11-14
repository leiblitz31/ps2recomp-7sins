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

// Function: sub_00269440
// Address: 0x269440 - 0x2694c0
void sub_00269440_0x269440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269440_0x269440");
#endif

    switch (ctx->pc) {
        case 0x269464u: goto label_269464;
        case 0x2694a8u: goto label_2694a8;
        default: break;
    }

    ctx->pc = 0x269440u;

    // 0x269440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x269448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26944c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x269450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269458: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x269458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26945c: 0xc09a238  jal         func_2688E0
    ctx->pc = 0x26945Cu;
    SET_GPR_U32(ctx, 31, 0x269464u);
    ctx->pc = 0x2688E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2688E0u, 0x26945Cu, 0x269464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269464u;
label_269464:
    // 0x269464: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x269464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269468: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x269468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26946c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269470: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x269470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x269474: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x269474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x269478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26947c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26947cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269480: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x269480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x269484: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x269484u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x269488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269488u;
    {
        const bool branch_taken_0x269488 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x269488) {
            ctx->pc = 0x269498u;
            goto label_269498;
        }
    }
    ctx->pc = 0x269490u;
    // 0x269490: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x269490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x269494: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x269494u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_269498:
    // 0x269498: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26949c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26949cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2694a0: 0xc09abec  jal         func_26AFB0
    ctx->pc = 0x2694A0u;
    SET_GPR_U32(ctx, 31, 0x2694A8u);
    ctx->pc = 0x26AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AFB0u, 0x2694A0u, 0x2694A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694A8u;
label_2694a8:
    // 0x2694a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2694a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2694ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2694acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2694b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2694B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2694B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2694B8u;
    // 0x2694b8: 0x0  nop
    ctx->pc = 0x2694b8u;
    // NOP
    // 0x2694bc: 0x0  nop
    ctx->pc = 0x2694bcu;
    // NOP
    ctx->pc = 0x2694c0u;
}
