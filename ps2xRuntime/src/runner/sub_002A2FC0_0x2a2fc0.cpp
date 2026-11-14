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

// Function: sub_002A2FC0
// Address: 0x2a2fc0 - 0x2a3040
void sub_002A2FC0_0x2a2fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2FC0_0x2a2fc0");
#endif

    switch (ctx->pc) {
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a3024u: goto label_2a3024;
        default: break;
    }

    ctx->pc = 0x2a2fc0u;

    // 0x2a2fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2fc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a2fcc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a2fd0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a2fd4: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A2FD4u;
    SET_GPR_U32(ctx, 31, 0x2A2FDCu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A2FD4u, 0x2A2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FDCu;
label_2a2fdc:
    // 0x2a2fdc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2fe0: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x2a2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2fe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a2fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2fe8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a2fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a2fec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ff0: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x2a2ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2a2ff4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2FF4u;
    {
        const bool branch_taken_0x2a2ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ff4) {
            ctx->pc = 0x2A302Cu;
            goto label_2a302c;
        }
    }
    ctx->pc = 0x2A2FFCu;
    // 0x2a2ffc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3000: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2a3000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3004: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a3004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a3008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a300c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A300Cu;
    {
        const bool branch_taken_0x2a300c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a300c) {
            ctx->pc = 0x2A302Cu;
            goto label_2a302c;
        }
    }
    ctx->pc = 0x2A3014u;
    // 0x2a3014: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a3014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a301c: 0xc0a8b78  jal         func_2A2DE0
    ctx->pc = 0x2A301Cu;
    SET_GPR_U32(ctx, 31, 0x2A3024u);
    ctx->pc = 0x2A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2DE0u, 0x2A301Cu, 0x2A3024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3024u;
label_2a3024:
    // 0x2a3024: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3028: 0xa0600038  sb          $zero, 0x38($v1)
    ctx->pc = 0x2a3028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
label_2a302c:
    // 0x2a302c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a302cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3030: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a3030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3034: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A303Cu;
    // 0x2a303c: 0x0  nop
    ctx->pc = 0x2a303cu;
    // NOP
    ctx->pc = 0x2a3040u;
}
