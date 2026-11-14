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

// Function: sub_001EE670
// Address: 0x1ee670 - 0x1ee720
void sub_001EE670_0x1ee670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE670_0x1ee670");
#endif

    switch (ctx->pc) {
        case 0x1ee6ccu: goto label_1ee6cc;
        case 0x1ee6fcu: goto label_1ee6fc;
        default: break;
    }

    ctx->pc = 0x1ee670u;

    // 0x1ee670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ee678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ee67c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ee67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ee680: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ee680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee684: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE684u;
    {
        const bool branch_taken_0x1ee684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee684) {
            ctx->pc = 0x1EE698u;
            goto label_1ee698;
        }
    }
    ctx->pc = 0x1EE68Cu;
    // 0x1ee68c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee690: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1EE690u;
    {
        const bool branch_taken_0x1ee690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee690) {
            ctx->pc = 0x1EE70Cu;
            goto label_1ee70c;
        }
    }
    ctx->pc = 0x1EE698u;
label_1ee698:
    // 0x1ee698: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee69c: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ee69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee6a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ee6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6a4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee6a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ee6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ee6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ee6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee6b8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1ee6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1ee6bc: 0x2466001c  addiu       $a2, $v1, 0x1C
    ctx->pc = 0x1ee6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1ee6c0: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x1ee6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ee6c4: 0xc07c0d4  jal         func_1F0350
    ctx->pc = 0x1EE6C4u;
    SET_GPR_U32(ctx, 31, 0x1EE6CCu);
    ctx->pc = 0x1F0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0350u, 0x1EE6C4u, 0x1EE6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6CCu;
label_1ee6cc:
    // 0x1ee6cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ee6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6d0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1ee6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee6d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ee6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ee6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6dc: 0x0  nop
    ctx->pc = 0x1ee6dcu;
    // NOP
    // 0x1ee6e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ee6e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee6e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE6E4u;
    {
        const bool branch_taken_0x1ee6e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee6e4) {
            ctx->pc = 0x1EE708u;
            goto label_1ee708;
        }
    }
    ctx->pc = 0x1EE6ECu;
    // 0x1ee6ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ee6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee6f0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6f4: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1EE6F4u;
    SET_GPR_U32(ctx, 31, 0x1EE6FCu);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1EE6F4u, 0x1EE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6FCu;
label_1ee6fc:
    // 0x1ee6fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE700u;
    {
        const bool branch_taken_0x1ee700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee700) {
            ctx->pc = 0x1EE70Cu;
            goto label_1ee70c;
        }
    }
    ctx->pc = 0x1EE708u;
label_1ee708:
    // 0x1ee708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee70c:
    // 0x1ee70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee710: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ee714: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE71Cu;
    // 0x1ee71c: 0x0  nop
    ctx->pc = 0x1ee71cu;
    // NOP
    ctx->pc = 0x1ee720u;
}
