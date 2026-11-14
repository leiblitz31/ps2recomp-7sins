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

// Function: sub_00490A60
// Address: 0x490a60 - 0x490b10
void sub_00490A60_0x490a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490A60_0x490a60");
#endif

    switch (ctx->pc) {
        case 0x490ad0u: goto label_490ad0;
        case 0x490af0u: goto label_490af0;
        default: break;
    }

    ctx->pc = 0x490a60u;

    // 0x490a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490a6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x490a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x490a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x490A74u;
    {
        const bool branch_taken_0x490a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490a74) {
            ctx->pc = 0x490AF0u;
            goto label_490af0;
        }
    }
    ctx->pc = 0x490A7Cu;
    // 0x490a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x490a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x490a84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x490A84u;
    {
        const bool branch_taken_0x490a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490a84) {
            ctx->pc = 0x490AD0u;
            goto label_490ad0;
        }
    }
    ctx->pc = 0x490A8Cu;
    // 0x490a8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a90: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x490a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x490a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x490a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490aa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x490aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x490aa4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x490aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490aa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x490aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x490aac: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x490aacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x490ab0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x490AB0u;
    {
        const bool branch_taken_0x490ab0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x490ab0) {
            ctx->pc = 0x490AC0u;
            goto label_490ac0;
        }
    }
    ctx->pc = 0x490AB8u;
    // 0x490ab8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x490ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x490abc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x490abcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_490ac0:
    // 0x490ac0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x490ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x490ac4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x490ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x490ac8: 0xc124c60  jal         func_493180
    ctx->pc = 0x490AC8u;
    SET_GPR_U32(ctx, 31, 0x490AD0u);
    ctx->pc = 0x493180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493180u, 0x490AC8u, 0x490AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490AD0u;
label_490ad0:
    // 0x490ad0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x490ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490ad4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x490ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x490ad8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x490ad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x490adc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x490ADCu;
    {
        const bool branch_taken_0x490adc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x490adc) {
            ctx->pc = 0x490AF0u;
            goto label_490af0;
        }
    }
    ctx->pc = 0x490AE4u;
    // 0x490ae4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490ae8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x490AE8u;
    SET_GPR_U32(ctx, 31, 0x490AF0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x490AE8u, 0x490AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490AF0u;
label_490af0:
    // 0x490af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490af8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x490afc: 0x3e00008  jr          $ra
    ctx->pc = 0x490AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490B04u;
    // 0x490b04: 0x0  nop
    ctx->pc = 0x490b04u;
    // NOP
    // 0x490b08: 0x0  nop
    ctx->pc = 0x490b08u;
    // NOP
    // 0x490b0c: 0x0  nop
    ctx->pc = 0x490b0cu;
    // NOP
    ctx->pc = 0x490b10u;
}
