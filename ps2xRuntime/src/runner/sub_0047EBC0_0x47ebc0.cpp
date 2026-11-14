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

// Function: sub_0047EBC0
// Address: 0x47ebc0 - 0x47ec20
void sub_0047EBC0_0x47ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047EBC0_0x47ebc0");
#endif

    switch (ctx->pc) {
        case 0x47ec04u: goto label_47ec04;
        default: break;
    }

    ctx->pc = 0x47ebc0u;

    // 0x47ebc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47ebc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47ebc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47ebcc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x47ebccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x47ebd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ebd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x47EBD4u;
    {
        const bool branch_taken_0x47ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ebd4) {
            ctx->pc = 0x47EC04u;
            goto label_47ec04;
        }
    }
    ctx->pc = 0x47EBDCu;
    // 0x47ebdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ebe0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x47ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x47ebe4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x47ebe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ebe8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x47ebec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ebecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47ebf0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47EBF0u;
    {
        const bool branch_taken_0x47ebf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47ebf0) {
            ctx->pc = 0x47EC04u;
            goto label_47ec04;
        }
    }
    ctx->pc = 0x47EBF8u;
    // 0x47ebf8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ebfc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x47EBFCu;
    SET_GPR_U32(ctx, 31, 0x47EC04u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x47EBFCu, 0x47EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EC04u;
label_47ec04:
    // 0x47ec04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ec08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ec08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ec0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47ec0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47ec10: 0x3e00008  jr          $ra
    ctx->pc = 0x47EC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47EC18u;
    // 0x47ec18: 0x0  nop
    ctx->pc = 0x47ec18u;
    // NOP
    // 0x47ec1c: 0x0  nop
    ctx->pc = 0x47ec1cu;
    // NOP
    ctx->pc = 0x47ec20u;
}
