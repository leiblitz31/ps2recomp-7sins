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

// Function: sub_0046A390
// Address: 0x46a390 - 0x46a410
void sub_0046A390_0x46a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A390_0x46a390");
#endif

    switch (ctx->pc) {
        case 0x46a3c0u: goto label_46a3c0;
        case 0x46a3d0u: goto label_46a3d0;
        case 0x46a3f0u: goto label_46a3f0;
        default: break;
    }

    ctx->pc = 0x46a390u;

    // 0x46a390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a39c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46a39cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46a3a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a3a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x46A3A4u;
    {
        const bool branch_taken_0x46a3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a3a4) {
            ctx->pc = 0x46A3F0u;
            goto label_46a3f0;
        }
    }
    ctx->pc = 0x46A3ACu;
    // 0x46a3ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a3b0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x46a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46a3b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a3b8: 0xc11aef4  jal         func_46BBD0
    ctx->pc = 0x46A3B8u;
    SET_GPR_U32(ctx, 31, 0x46A3C0u);
    ctx->pc = 0x46BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BBD0u, 0x46A3B8u, 0x46A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A3C0u;
label_46a3c0:
    // 0x46a3c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a3c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a3c8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A3C8u;
    SET_GPR_U32(ctx, 31, 0x46A3D0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A3C8u, 0x46A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A3D0u;
label_46a3d0:
    // 0x46a3d0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46a3d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a3d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46a3d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46a3d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46a3dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A3DCu;
    {
        const bool branch_taken_0x46a3dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46a3dc) {
            ctx->pc = 0x46A3F0u;
            goto label_46a3f0;
        }
    }
    ctx->pc = 0x46A3E4u;
    // 0x46a3e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a3e8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46A3E8u;
    SET_GPR_U32(ctx, 31, 0x46A3F0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46A3E8u, 0x46A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A3F0u;
label_46a3f0:
    // 0x46a3f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a3f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x46A3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A404u;
    // 0x46a404: 0x0  nop
    ctx->pc = 0x46a404u;
    // NOP
    // 0x46a408: 0x0  nop
    ctx->pc = 0x46a408u;
    // NOP
    // 0x46a40c: 0x0  nop
    ctx->pc = 0x46a40cu;
    // NOP
    ctx->pc = 0x46a410u;
}
