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

// Function: sub_00248FB0
// Address: 0x248fb0 - 0x249030
void sub_00248FB0_0x248fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248FB0_0x248fb0");
#endif

    switch (ctx->pc) {
        case 0x248fe4u: goto label_248fe4;
        case 0x248ff4u: goto label_248ff4;
        case 0x249014u: goto label_249014;
        default: break;
    }

    ctx->pc = 0x248fb0u;

    // 0x248fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x248fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x248fbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x248fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x248fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x248FC4u;
    {
        const bool branch_taken_0x248fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248fc4) {
            ctx->pc = 0x249014u;
            goto label_249014;
        }
    }
    ctx->pc = 0x248FCCu;
    // 0x248fcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x248fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248fd8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x248fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x248fdc: 0xc092438  jal         func_2490E0
    ctx->pc = 0x248FDCu;
    SET_GPR_U32(ctx, 31, 0x248FE4u);
    ctx->pc = 0x2490E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490E0u, 0x248FDCu, 0x248FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FE4u;
label_248fe4:
    // 0x248fe4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fec: 0xc09240c  jal         func_249030
    ctx->pc = 0x248FECu;
    SET_GPR_U32(ctx, 31, 0x248FF4u);
    ctx->pc = 0x249030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249030u, 0x248FECu, 0x248FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FF4u;
label_248ff4:
    // 0x248ff4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x248ff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248ff8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x248ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248ffc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x248ffcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x249000: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x249000u;
    {
        const bool branch_taken_0x249000 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x249000) {
            ctx->pc = 0x249014u;
            goto label_249014;
        }
    }
    ctx->pc = 0x249008u;
    // 0x249008: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24900c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x24900Cu;
    SET_GPR_U32(ctx, 31, 0x249014u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x24900Cu, 0x249014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249014u;
label_249014:
    // 0x249014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24901c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x249020: 0x3e00008  jr          $ra
    ctx->pc = 0x249020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249028u;
    // 0x249028: 0x0  nop
    ctx->pc = 0x249028u;
    // NOP
    // 0x24902c: 0x0  nop
    ctx->pc = 0x24902cu;
    // NOP
    ctx->pc = 0x249030u;
}
