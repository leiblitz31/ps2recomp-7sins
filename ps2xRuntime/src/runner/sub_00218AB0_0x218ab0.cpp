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

// Function: sub_00218AB0
// Address: 0x218ab0 - 0x218b10
void sub_00218AB0_0x218ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218AB0_0x218ab0");
#endif

    switch (ctx->pc) {
        case 0x218adcu: goto label_218adc;
        case 0x218afcu: goto label_218afc;
        default: break;
    }

    ctx->pc = 0x218ab0u;

    // 0x218ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218ab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218abc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x218abcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x218ac0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ac4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x218AC4u;
    {
        const bool branch_taken_0x218ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218ac4) {
            ctx->pc = 0x218AFCu;
            goto label_218afc;
        }
    }
    ctx->pc = 0x218ACCu;
    // 0x218acc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ad0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x218ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218ad4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x218AD4u;
    SET_GPR_U32(ctx, 31, 0x218ADCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x218AD4u, 0x218ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218ADCu;
label_218adc:
    // 0x218adc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x218adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218ae0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x218ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x218ae4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x218ae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x218ae8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218AE8u;
    {
        const bool branch_taken_0x218ae8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x218ae8) {
            ctx->pc = 0x218AFCu;
            goto label_218afc;
        }
    }
    ctx->pc = 0x218AF0u;
    // 0x218af0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218af4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x218AF4u;
    SET_GPR_U32(ctx, 31, 0x218AFCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x218AF4u, 0x218AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AFCu;
label_218afc:
    // 0x218afc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218b04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218b08: 0x3e00008  jr          $ra
    ctx->pc = 0x218B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218B10u;
}
