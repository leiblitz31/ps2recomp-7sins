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

// Function: sub_00485CD0
// Address: 0x485cd0 - 0x485d30
void sub_00485CD0_0x485cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485CD0_0x485cd0");
#endif

    switch (ctx->pc) {
        case 0x485d14u: goto label_485d14;
        default: break;
    }

    ctx->pc = 0x485cd0u;

    // 0x485cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x485cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x485cdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x485cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x485ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485ce4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x485CE4u;
    {
        const bool branch_taken_0x485ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485ce4) {
            ctx->pc = 0x485D14u;
            goto label_485d14;
        }
    }
    ctx->pc = 0x485CECu;
    // 0x485cec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485cf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x485cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x485cf4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x485cf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485cf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x485cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x485cfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x485cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x485d00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x485D00u;
    {
        const bool branch_taken_0x485d00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x485d00) {
            ctx->pc = 0x485D14u;
            goto label_485d14;
        }
    }
    ctx->pc = 0x485D08u;
    // 0x485d08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d0c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x485D0Cu;
    SET_GPR_U32(ctx, 31, 0x485D14u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x485D0Cu, 0x485D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485D14u;
label_485d14:
    // 0x485d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485d1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x485d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x485d20: 0x3e00008  jr          $ra
    ctx->pc = 0x485D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485D28u;
    // 0x485d28: 0x0  nop
    ctx->pc = 0x485d28u;
    // NOP
    // 0x485d2c: 0x0  nop
    ctx->pc = 0x485d2cu;
    // NOP
    ctx->pc = 0x485d30u;
}
