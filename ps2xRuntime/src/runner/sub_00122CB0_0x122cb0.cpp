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

// Function: sub_00122CB0
// Address: 0x122cb0 - 0x122d10
void sub_00122CB0_0x122cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122CB0_0x122cb0");
#endif

    switch (ctx->pc) {
        case 0x122cdcu: goto label_122cdc;
        case 0x122cfcu: goto label_122cfc;
        default: break;
    }

    ctx->pc = 0x122cb0u;

    // 0x122cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x122cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x122cbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x122cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x122cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122cc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x122CC4u;
    {
        const bool branch_taken_0x122cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122cc4) {
            ctx->pc = 0x122CFCu;
            goto label_122cfc;
        }
    }
    ctx->pc = 0x122CCCu;
    // 0x122ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cd4: 0xc048b44  jal         func_122D10
    ctx->pc = 0x122CD4u;
    SET_GPR_U32(ctx, 31, 0x122CDCu);
    ctx->pc = 0x122D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D10u, 0x122CD4u, 0x122CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CDCu;
label_122cdc:
    // 0x122cdc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x122cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122ce0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x122ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x122ce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x122ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x122ce8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122CE8u;
    {
        const bool branch_taken_0x122ce8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x122ce8) {
            ctx->pc = 0x122CFCu;
            goto label_122cfc;
        }
    }
    ctx->pc = 0x122CF0u;
    // 0x122cf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122cf4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x122CF4u;
    SET_GPR_U32(ctx, 31, 0x122CFCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x122CF4u, 0x122CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CFCu;
label_122cfc:
    // 0x122cfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122d04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x122d08: 0x3e00008  jr          $ra
    ctx->pc = 0x122D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122D10u;
}
