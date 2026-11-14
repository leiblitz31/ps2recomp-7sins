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

// Function: sub_00101A80
// Address: 0x101a80 - 0x101ae0
void sub_00101A80_0x101a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A80_0x101a80");
#endif

    switch (ctx->pc) {
        case 0x101aa8u: goto label_101aa8;
        case 0x101ac8u: goto label_101ac8;
        default: break;
    }

    ctx->pc = 0x101a80u;

    // 0x101a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x101a8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x101a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x101a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101a94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x101A94u;
    {
        const bool branch_taken_0x101a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101a94) {
            ctx->pc = 0x101AC8u;
            goto label_101ac8;
        }
    }
    ctx->pc = 0x101A9Cu;
    // 0x101a9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101aa0: 0xc0406b8  jal         func_101AE0
    ctx->pc = 0x101AA0u;
    SET_GPR_U32(ctx, 31, 0x101AA8u);
    ctx->pc = 0x101AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AE0u, 0x101AA0u, 0x101AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AA8u;
label_101aa8:
    // 0x101aa8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x101aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101aac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x101aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x101ab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101ab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x101ab4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101AB4u;
    {
        const bool branch_taken_0x101ab4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x101ab4) {
            ctx->pc = 0x101AC8u;
            goto label_101ac8;
        }
    }
    ctx->pc = 0x101ABCu;
    // 0x101abc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101ac0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x101AC0u;
    SET_GPR_U32(ctx, 31, 0x101AC8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x101AC0u, 0x101AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AC8u;
label_101ac8:
    // 0x101ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ad0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x101ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x101ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x101AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101ADCu;
    // 0x101adc: 0x0  nop
    ctx->pc = 0x101adcu;
    // NOP
    ctx->pc = 0x101ae0u;
}
