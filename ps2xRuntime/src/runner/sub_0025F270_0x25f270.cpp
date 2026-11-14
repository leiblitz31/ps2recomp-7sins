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

// Function: sub_0025F270
// Address: 0x25f270 - 0x25f2e0
void sub_0025F270_0x25f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F270_0x25f270");
#endif

    switch (ctx->pc) {
        case 0x25f28cu: goto label_25f28c;
        case 0x25f2b4u: goto label_25f2b4;
        case 0x25f2ccu: goto label_25f2cc;
        default: break;
    }

    ctx->pc = 0x25f270u;

    // 0x25f270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f27c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f280: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x25f280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x25f284: 0xc091174  jal         func_2445D0
    ctx->pc = 0x25F284u;
    SET_GPR_U32(ctx, 31, 0x25F28Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x25F284u, 0x25F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F28Cu;
label_25f28c:
    // 0x25f28c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25f290: 0x24635990  addiu       $v1, $v1, 0x5990
    ctx->pc = 0x25f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22928));
    // 0x25f294: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25f298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25f29c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2a0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x25f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x25f2a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2a8: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x25f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x25f2ac: 0xc078de8  jal         func_1E37A0
    ctx->pc = 0x25F2ACu;
    SET_GPR_U32(ctx, 31, 0x25F2B4u);
    ctx->pc = 0x1E37A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E37A0u, 0x25F2ACu, 0x25F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2B4u;
label_25f2b4:
    // 0x25f2b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2b8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x25f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x25f2bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2c0: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25f2c4: 0xc097d40  jal         func_25F500
    ctx->pc = 0x25F2C4u;
    SET_GPR_U32(ctx, 31, 0x25F2CCu);
    ctx->pc = 0x25F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F500u, 0x25F2C4u, 0x25F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2CCu;
label_25f2cc:
    // 0x25f2cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f2d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25f2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25f2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F2E0u;
}
