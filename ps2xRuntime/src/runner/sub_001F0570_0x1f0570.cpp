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

// Function: sub_001F0570
// Address: 0x1f0570 - 0x1f0640
void sub_001F0570_0x1f0570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0570_0x1f0570");
#endif

    ctx->pc = 0x1f0570u;

    // 0x1f0570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0574: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1f0574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1f0578: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1f0578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1f057c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0584: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0584u;
    {
        const bool branch_taken_0x1f0584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f0584) {
            ctx->pc = 0x1F05D8u;
            goto label_1f05d8;
        }
    }
    ctx->pc = 0x1F058Cu;
    // 0x1f058c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0590: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0590u;
    {
        const bool branch_taken_0x1f0590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f0590) {
            ctx->pc = 0x1F05C0u;
            goto label_1f05c0;
        }
    }
    ctx->pc = 0x1F0598u;
    // 0x1f0598: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0598u;
    {
        const bool branch_taken_0x1f0598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0598) {
            ctx->pc = 0x1F05A8u;
            goto label_1f05a8;
        }
    }
    ctx->pc = 0x1F05A0u;
    // 0x1f05a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F05A0u;
    {
        const bool branch_taken_0x1f05a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05a0) {
            ctx->pc = 0x1F05E8u;
            goto label_1f05e8;
        }
    }
    ctx->pc = 0x1F05A8u;
label_1f05a8:
    // 0x1f05a8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f05a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f05ac: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f05b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f05b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f05b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F05B8u;
    {
        const bool branch_taken_0x1f05b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05b8) {
            ctx->pc = 0x1F05E8u;
            goto label_1f05e8;
        }
    }
    ctx->pc = 0x1F05C0u;
label_1f05c0:
    // 0x1f05c0: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f05c4: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f05c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f05ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f05d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F05D0u;
    {
        const bool branch_taken_0x1f05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05d0) {
            ctx->pc = 0x1F05E8u;
            goto label_1f05e8;
        }
    }
    ctx->pc = 0x1F05D8u;
label_1f05d8:
    // 0x1f05d8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f05dc: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f05e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f05e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f05e8:
    // 0x1f05e8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f05ec: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f05ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f05f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05f4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1f05f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f05f8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f05fc: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1f05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0600: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0604: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f060c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0610: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f0610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f0614: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f0614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f0618: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1f0618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f061c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0620: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f0628: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1f0628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f062c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f062cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0630: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0638u;
    // 0x1f0638: 0x0  nop
    ctx->pc = 0x1f0638u;
    // NOP
    // 0x1f063c: 0x0  nop
    ctx->pc = 0x1f063cu;
    // NOP
    ctx->pc = 0x1f0640u;
}
