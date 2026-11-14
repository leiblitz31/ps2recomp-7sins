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

// Function: sub_00249030
// Address: 0x249030 - 0x2490e0
void sub_00249030_0x249030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249030_0x249030");
#endif

    switch (ctx->pc) {
        case 0x2490a0u: goto label_2490a0;
        case 0x2490c0u: goto label_2490c0;
        default: break;
    }

    ctx->pc = 0x249030u;

    // 0x249030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x249038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24903c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24903cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x249040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249044: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x249044u;
    {
        const bool branch_taken_0x249044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249044) {
            ctx->pc = 0x2490C0u;
            goto label_2490c0;
        }
    }
    ctx->pc = 0x24904Cu;
    // 0x24904c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249050: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x249050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249054: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x249054u;
    {
        const bool branch_taken_0x249054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249054) {
            ctx->pc = 0x2490A0u;
            goto label_2490a0;
        }
    }
    ctx->pc = 0x24905Cu;
    // 0x24905c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249060: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x249060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249068: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x249068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24906c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x249070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249074: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x249074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249078: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24907c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x24907cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x249080: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x249080u;
    {
        const bool branch_taken_0x249080 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x249080) {
            ctx->pc = 0x249090u;
            goto label_249090;
        }
    }
    ctx->pc = 0x249088u;
    // 0x249088: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x249088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x24908c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x24908cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_249090:
    // 0x249090: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x249090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x249094: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x249094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x249098: 0xc093bb0  jal         func_24EEC0
    ctx->pc = 0x249098u;
    SET_GPR_U32(ctx, 31, 0x2490A0u);
    ctx->pc = 0x24EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EEC0u, 0x249098u, 0x2490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490A0u;
label_2490a0:
    // 0x2490a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2490a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2490a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2490a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2490a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2490a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2490ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2490ACu;
    {
        const bool branch_taken_0x2490ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2490ac) {
            ctx->pc = 0x2490C0u;
            goto label_2490c0;
        }
    }
    ctx->pc = 0x2490B4u;
    // 0x2490b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2490b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2490b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2490B8u;
    SET_GPR_U32(ctx, 31, 0x2490C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2490B8u, 0x2490C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490C0u;
label_2490c0:
    // 0x2490c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2490c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2490c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2490c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2490c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2490cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2490CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2490CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2490D4u;
    // 0x2490d4: 0x0  nop
    ctx->pc = 0x2490d4u;
    // NOP
    // 0x2490d8: 0x0  nop
    ctx->pc = 0x2490d8u;
    // NOP
    // 0x2490dc: 0x0  nop
    ctx->pc = 0x2490dcu;
    // NOP
    ctx->pc = 0x2490e0u;
}
