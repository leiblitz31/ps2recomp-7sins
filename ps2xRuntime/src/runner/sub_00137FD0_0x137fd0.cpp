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

// Function: sub_00137FD0
// Address: 0x137fd0 - 0x138080
void sub_00137FD0_0x137fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137FD0_0x137fd0");
#endif

    switch (ctx->pc) {
        case 0x138040u: goto label_138040;
        case 0x138060u: goto label_138060;
        default: break;
    }

    ctx->pc = 0x137fd0u;

    // 0x137fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x137fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x137fdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x137fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x137fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fe4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x137FE4u;
    {
        const bool branch_taken_0x137fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137fe4) {
            ctx->pc = 0x138060u;
            goto label_138060;
        }
    }
    ctx->pc = 0x137FECu;
    // 0x137fec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ff0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137ff4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x137FF4u;
    {
        const bool branch_taken_0x137ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ff4) {
            ctx->pc = 0x138040u;
            goto label_138040;
        }
    }
    ctx->pc = 0x137FFCu;
    // 0x137ffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138000: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138008: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x138008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13800c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138010: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138014: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x138014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x138018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13801c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x138020: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138020u;
    {
        const bool branch_taken_0x138020 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x138020) {
            ctx->pc = 0x138030u;
            goto label_138030;
        }
    }
    ctx->pc = 0x138028u;
    // 0x138028: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13802c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_138030:
    // 0x138030: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x138030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x138034: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x138038: 0xc04efc4  jal         func_13BF10
    ctx->pc = 0x138038u;
    SET_GPR_U32(ctx, 31, 0x138040u);
    ctx->pc = 0x13BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF10u, 0x138038u, 0x138040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138040u;
label_138040:
    // 0x138040: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138044: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x138044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x138048: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x138048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13804c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13804Cu;
    {
        const bool branch_taken_0x13804c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13804c) {
            ctx->pc = 0x138060u;
            goto label_138060;
        }
    }
    ctx->pc = 0x138054u;
    // 0x138054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138058: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x138058u;
    SET_GPR_U32(ctx, 31, 0x138060u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x138058u, 0x138060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138060u;
label_138060:
    // 0x138060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13806c: 0x3e00008  jr          $ra
    ctx->pc = 0x13806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138074u;
    // 0x138074: 0x0  nop
    ctx->pc = 0x138074u;
    // NOP
    // 0x138078: 0x0  nop
    ctx->pc = 0x138078u;
    // NOP
    // 0x13807c: 0x0  nop
    ctx->pc = 0x13807cu;
    // NOP
    ctx->pc = 0x138080u;
}
