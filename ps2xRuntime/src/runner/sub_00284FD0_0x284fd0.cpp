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

// Function: sub_00284FD0
// Address: 0x284fd0 - 0x285030
void sub_00284FD0_0x284fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284FD0_0x284fd0");
#endif

    switch (ctx->pc) {
        case 0x284ffcu: goto label_284ffc;
        case 0x28501cu: goto label_28501c;
        default: break;
    }

    ctx->pc = 0x284fd0u;

    // 0x284fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284fdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284fe4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284FE4u;
    {
        const bool branch_taken_0x284fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284fe4) {
            ctx->pc = 0x28501Cu;
            goto label_28501c;
        }
    }
    ctx->pc = 0x284FECu;
    // 0x284fec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ff0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x284ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284ff4: 0xc0a140c  jal         func_285030
    ctx->pc = 0x284FF4u;
    SET_GPR_U32(ctx, 31, 0x284FFCu);
    ctx->pc = 0x285030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285030u, 0x284FF4u, 0x284FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FFCu;
label_284ffc:
    // 0x284ffc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285000: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x285000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x285004: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x285004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x285008: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285008u;
    {
        const bool branch_taken_0x285008 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x285008) {
            ctx->pc = 0x28501Cu;
            goto label_28501c;
        }
    }
    ctx->pc = 0x285010u;
    // 0x285010: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285014: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x285014u;
    SET_GPR_U32(ctx, 31, 0x28501Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x285014u, 0x28501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28501Cu;
label_28501c:
    // 0x28501c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285028: 0x3e00008  jr          $ra
    ctx->pc = 0x285028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285030u;
}
