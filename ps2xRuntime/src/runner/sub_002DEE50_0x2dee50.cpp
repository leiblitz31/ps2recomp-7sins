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

// Function: sub_002DEE50
// Address: 0x2dee50 - 0x2deea0
void sub_002DEE50_0x2dee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEE50_0x2dee50");
#endif

    switch (ctx->pc) {
        case 0x2dee8cu: goto label_2dee8c;
        default: break;
    }

    ctx->pc = 0x2dee50u;

    // 0x2dee50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dee54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dee58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dee58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dee5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dee60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dee64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DEE64u;
    {
        const bool branch_taken_0x2dee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dee64) {
            ctx->pc = 0x2DEE8Cu;
            goto label_2dee8c;
        }
    }
    ctx->pc = 0x2DEE6Cu;
    // 0x2dee6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dee6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dee70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dee74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dee74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dee78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEE78u;
    {
        const bool branch_taken_0x2dee78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dee78) {
            ctx->pc = 0x2DEE8Cu;
            goto label_2dee8c;
        }
    }
    ctx->pc = 0x2DEE80u;
    // 0x2dee80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dee84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DEE84u;
    SET_GPR_U32(ctx, 31, 0x2DEE8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DEE84u, 0x2DEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE8Cu;
label_2dee8c:
    // 0x2dee8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dee90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dee94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dee94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dee98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEEA0u;
}
