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

// Function: sub_0048BB90
// Address: 0x48bb90 - 0x48bc10
void sub_0048BB90_0x48bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BB90_0x48bb90");
#endif

    switch (ctx->pc) {
        case 0x48bbc4u: goto label_48bbc4;
        case 0x48bbd4u: goto label_48bbd4;
        case 0x48bbf4u: goto label_48bbf4;
        default: break;
    }

    ctx->pc = 0x48bb90u;

    // 0x48bb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48bb9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48bb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x48bba0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bba4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x48BBA4u;
    {
        const bool branch_taken_0x48bba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bba4) {
            ctx->pc = 0x48BBF4u;
            goto label_48bbf4;
        }
    }
    ctx->pc = 0x48BBACu;
    // 0x48bbac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bbb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bbb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48bbb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48bbbc: 0xc122f2c  jal         func_48BCB0
    ctx->pc = 0x48BBBCu;
    SET_GPR_U32(ctx, 31, 0x48BBC4u);
    ctx->pc = 0x48BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BCB0u, 0x48BBBCu, 0x48BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BBC4u;
label_48bbc4:
    // 0x48bbc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bbc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48bbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bbcc: 0xc122f04  jal         func_48BC10
    ctx->pc = 0x48BBCCu;
    SET_GPR_U32(ctx, 31, 0x48BBD4u);
    ctx->pc = 0x48BC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC10u, 0x48BBCCu, 0x48BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BBD4u;
label_48bbd4:
    // 0x48bbd4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48bbd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bbd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48bbdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48bbdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48bbe0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48BBE0u;
    {
        const bool branch_taken_0x48bbe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48bbe0) {
            ctx->pc = 0x48BBF4u;
            goto label_48bbf4;
        }
    }
    ctx->pc = 0x48BBE8u;
    // 0x48bbe8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bbec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48BBECu;
    SET_GPR_U32(ctx, 31, 0x48BBF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48BBECu, 0x48BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BBF4u;
label_48bbf4:
    // 0x48bbf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bbfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48bbfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48bc00: 0x3e00008  jr          $ra
    ctx->pc = 0x48BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BC08u;
    // 0x48bc08: 0x0  nop
    ctx->pc = 0x48bc08u;
    // NOP
    // 0x48bc0c: 0x0  nop
    ctx->pc = 0x48bc0cu;
    // NOP
    ctx->pc = 0x48bc10u;
}
