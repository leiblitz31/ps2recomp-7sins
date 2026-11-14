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

// Function: sub_00480920
// Address: 0x480920 - 0x480970
void sub_00480920_0x480920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480920_0x480920");
#endif

    switch (ctx->pc) {
        case 0x480954u: goto label_480954;
        case 0x480960u: goto label_480960;
        default: break;
    }

    ctx->pc = 0x480920u;

    // 0x480920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x480924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x480928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48092c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x480930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x480930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480934: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x480934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x480938: 0xaf82b51c  sw          $v0, -0x4AE4($gp)
    ctx->pc = 0x480938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948124), GPR_U32(ctx, 2));
    // 0x48093c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480940: 0xaf82c0b8  sw          $v0, -0x3F48($gp)
    ctx->pc = 0x480940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951096), GPR_U32(ctx, 2));
    // 0x480944: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x480944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x480948: 0x248407d0  addiu       $a0, $a0, 0x7D0
    ctx->pc = 0x480948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
    // 0x48094c: 0xc0f4dd6  jal         func_3D3758
    ctx->pc = 0x48094Cu;
    SET_GPR_U32(ctx, 31, 0x480954u);
    ctx->pc = 0x3D3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3758u, 0x48094Cu, 0x480954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480954u;
label_480954:
    // 0x480954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x480954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480958: 0xc0f4c4e  jal         func_3D3138
    ctx->pc = 0x480958u;
    SET_GPR_U32(ctx, 31, 0x480960u);
    ctx->pc = 0x3D3138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3138u, 0x480958u, 0x480960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480960u;
label_480960:
    // 0x480960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480964: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x480964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x480968: 0x3e00008  jr          $ra
    ctx->pc = 0x480968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480970u;
}
