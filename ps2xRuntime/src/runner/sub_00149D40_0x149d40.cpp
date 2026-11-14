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

// Function: sub_00149D40
// Address: 0x149d40 - 0x149db0
void sub_00149D40_0x149d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D40_0x149d40");
#endif

    switch (ctx->pc) {
        case 0x149d74u: goto label_149d74;
        case 0x149d94u: goto label_149d94;
        default: break;
    }

    ctx->pc = 0x149d40u;

    // 0x149d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149d4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x149d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x149d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x149D54u;
    {
        const bool branch_taken_0x149d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149d54) {
            ctx->pc = 0x149D94u;
            goto label_149d94;
        }
    }
    ctx->pc = 0x149D5Cu;
    // 0x149d5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d6c: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x149D6Cu;
    SET_GPR_U32(ctx, 31, 0x149D74u);
    ctx->pc = 0x151B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151B20u, 0x149D6Cu, 0x149D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D74u;
label_149d74:
    // 0x149d74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x149d74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149d78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x149d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x149d7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x149d7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x149d80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149D80u;
    {
        const bool branch_taken_0x149d80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x149d80) {
            ctx->pc = 0x149D94u;
            goto label_149d94;
        }
    }
    ctx->pc = 0x149D88u;
    // 0x149d88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x149D8Cu;
    SET_GPR_U32(ctx, 31, 0x149D94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x149D8Cu, 0x149D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D94u;
label_149d94:
    // 0x149d94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149da0: 0x3e00008  jr          $ra
    ctx->pc = 0x149DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149DA8u;
    // 0x149da8: 0x0  nop
    ctx->pc = 0x149da8u;
    // NOP
    // 0x149dac: 0x0  nop
    ctx->pc = 0x149dacu;
    // NOP
    ctx->pc = 0x149db0u;
}
