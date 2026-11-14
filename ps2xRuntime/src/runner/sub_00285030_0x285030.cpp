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

// Function: sub_00285030
// Address: 0x285030 - 0x2850a0
void sub_00285030_0x285030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285030_0x285030");
#endif

    switch (ctx->pc) {
        case 0x285058u: goto label_285058;
        case 0x285068u: goto label_285068;
        case 0x285088u: goto label_285088;
        default: break;
    }

    ctx->pc = 0x285030u;

    // 0x285030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28503c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28503cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x285040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285044: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x285044u;
    {
        const bool branch_taken_0x285044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285044) {
            ctx->pc = 0x285088u;
            goto label_285088;
        }
    }
    ctx->pc = 0x28504Cu;
    // 0x28504c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285050: 0xc0a1444  jal         func_285110
    ctx->pc = 0x285050u;
    SET_GPR_U32(ctx, 31, 0x285058u);
    ctx->pc = 0x285110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285110u, 0x285050u, 0x285058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285058u;
label_285058:
    // 0x285058: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28505c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285060: 0xc0a1428  jal         func_2850A0
    ctx->pc = 0x285060u;
    SET_GPR_U32(ctx, 31, 0x285068u);
    ctx->pc = 0x2850A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850A0u, 0x285060u, 0x285068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285068u;
label_285068:
    // 0x285068: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x285068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28506c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x285070: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x285070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x285074: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285074u;
    {
        const bool branch_taken_0x285074 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x285074) {
            ctx->pc = 0x285088u;
            goto label_285088;
        }
    }
    ctx->pc = 0x28507Cu;
    // 0x28507c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285080: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x285080u;
    SET_GPR_U32(ctx, 31, 0x285088u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x285080u, 0x285088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285088u;
label_285088:
    // 0x285088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28508c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285090: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285094: 0x3e00008  jr          $ra
    ctx->pc = 0x285094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28509Cu;
    // 0x28509c: 0x0  nop
    ctx->pc = 0x28509cu;
    // NOP
    ctx->pc = 0x2850a0u;
}
