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

// Function: sub_00190360
// Address: 0x190360 - 0x1903d0
void sub_00190360_0x190360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190360_0x190360");
#endif

    switch (ctx->pc) {
        case 0x190394u: goto label_190394;
        case 0x1903b4u: goto label_1903b4;
        default: break;
    }

    ctx->pc = 0x190360u;

    // 0x190360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19036c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19036cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x190370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190374: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x190374u;
    {
        const bool branch_taken_0x190374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190374) {
            ctx->pc = 0x1903B4u;
            goto label_1903b4;
        }
    }
    ctx->pc = 0x19037Cu;
    // 0x19037c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190380: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190384: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x190384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19038c: 0xc064300  jal         func_190C00
    ctx->pc = 0x19038Cu;
    SET_GPR_U32(ctx, 31, 0x190394u);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x19038Cu, 0x190394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190394u;
label_190394:
    // 0x190394: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190398: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x190398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19039c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19039cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1903a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1903A0u;
    {
        const bool branch_taken_0x1903a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1903a0) {
            ctx->pc = 0x1903B4u;
            goto label_1903b4;
        }
    }
    ctx->pc = 0x1903A8u;
    // 0x1903a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1903ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1903ACu;
    SET_GPR_U32(ctx, 31, 0x1903B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1903ACu, 0x1903B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1903B4u;
label_1903b4:
    // 0x1903b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1903b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1903b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1903bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1903bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1903c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1903C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1903C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1903C8u;
    // 0x1903c8: 0x0  nop
    ctx->pc = 0x1903c8u;
    // NOP
    // 0x1903cc: 0x0  nop
    ctx->pc = 0x1903ccu;
    // NOP
    ctx->pc = 0x1903d0u;
}
