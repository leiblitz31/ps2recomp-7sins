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

// Function: sub_0046C340
// Address: 0x46c340 - 0x46c3d0
void sub_0046C340_0x46c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C340_0x46c340");
#endif

    switch (ctx->pc) {
        case 0x46c360u: goto label_46c360;
        case 0x46c378u: goto label_46c378;
        case 0x46c390u: goto label_46c390;
        case 0x46c3a8u: goto label_46c3a8;
        default: break;
    }

    ctx->pc = 0x46c340u;

    // 0x46c340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c34c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c350: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c354: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c358: 0xc11b0f4  jal         func_46C3D0
    ctx->pc = 0x46C358u;
    SET_GPR_U32(ctx, 31, 0x46C360u);
    ctx->pc = 0x46C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C3D0u, 0x46C358u, 0x46C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C360u;
label_46c360:
    // 0x46c360: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c364: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c368: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x46c368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x46c36c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x46c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46c370: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46C370u;
    SET_GPR_U32(ctx, 31, 0x46C378u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46C370u, 0x46C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C378u;
label_46c378:
    // 0x46c378: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c37c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c380: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x46c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x46c384: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x46c384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46c388: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46C388u;
    SET_GPR_U32(ctx, 31, 0x46C390u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46C388u, 0x46C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C390u;
label_46c390:
    // 0x46c390: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c394: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c398: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x46c398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x46c39c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x46c39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46c3a0: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46C3A0u;
    SET_GPR_U32(ctx, 31, 0x46C3A8u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46C3A0u, 0x46C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C3A8u;
label_46c3a8:
    // 0x46c3a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c3ac: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x46c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x46c3b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c3b4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x46c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x46c3b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c3c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x46C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C3CCu;
    // 0x46c3cc: 0x0  nop
    ctx->pc = 0x46c3ccu;
    // NOP
    ctx->pc = 0x46c3d0u;
}
