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

// Function: sub_00183BA0
// Address: 0x183ba0 - 0x183c00
void sub_00183BA0_0x183ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183BA0_0x183ba0");
#endif

    switch (ctx->pc) {
        case 0x183bccu: goto label_183bcc;
        case 0x183becu: goto label_183bec;
        default: break;
    }

    ctx->pc = 0x183ba0u;

    // 0x183ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183bac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x183bacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183bb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183bb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x183BB4u;
    {
        const bool branch_taken_0x183bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bb4) {
            ctx->pc = 0x183BECu;
            goto label_183bec;
        }
    }
    ctx->pc = 0x183BBCu;
    // 0x183bbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bc4: 0xc060f00  jal         func_183C00
    ctx->pc = 0x183BC4u;
    SET_GPR_U32(ctx, 31, 0x183BCCu);
    ctx->pc = 0x183C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C00u, 0x183BC4u, 0x183BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BCCu;
label_183bcc:
    // 0x183bcc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183bd0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183bd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183bd8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183BD8u;
    {
        const bool branch_taken_0x183bd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183bd8) {
            ctx->pc = 0x183BECu;
            goto label_183bec;
        }
    }
    ctx->pc = 0x183BE0u;
    // 0x183be0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183be4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x183BE4u;
    SET_GPR_U32(ctx, 31, 0x183BECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x183BE4u, 0x183BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BECu;
label_183bec:
    // 0x183bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183bf4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x183BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C00u;
}
