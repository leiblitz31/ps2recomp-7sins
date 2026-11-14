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

// Function: sub_002AC390
// Address: 0x2ac390 - 0x2ac3f0
void sub_002AC390_0x2ac390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC390_0x2ac390");
#endif

    switch (ctx->pc) {
        case 0x2ac3bcu: goto label_2ac3bc;
        case 0x2ac3dcu: goto label_2ac3dc;
        default: break;
    }

    ctx->pc = 0x2ac390u;

    // 0x2ac390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac39c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ac39cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac3a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac3a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AC3A4u;
    {
        const bool branch_taken_0x2ac3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3a4) {
            ctx->pc = 0x2AC3DCu;
            goto label_2ac3dc;
        }
    }
    ctx->pc = 0x2AC3ACu;
    // 0x2ac3ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3b4: 0xc0ab0fc  jal         func_2AC3F0
    ctx->pc = 0x2AC3B4u;
    SET_GPR_U32(ctx, 31, 0x2AC3BCu);
    ctx->pc = 0x2AC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC3F0u, 0x2AC3B4u, 0x2AC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3BCu;
label_2ac3bc:
    // 0x2ac3bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ac3bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac3c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ac3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac3c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac3c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC3C8u;
    {
        const bool branch_taken_0x2ac3c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ac3c8) {
            ctx->pc = 0x2AC3DCu;
            goto label_2ac3dc;
        }
    }
    ctx->pc = 0x2AC3D0u;
    // 0x2ac3d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac3d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AC3D4u;
    SET_GPR_U32(ctx, 31, 0x2AC3DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AC3D4u, 0x2AC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3DCu;
label_2ac3dc:
    // 0x2ac3dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac3e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC3F0u;
}
