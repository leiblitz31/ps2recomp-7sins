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

// Function: sub_001F0270
// Address: 0x1f0270 - 0x1f0350
void sub_001F0270_0x1f0270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0270_0x1f0270");
#endif

    ctx->pc = 0x1f0270u;

    // 0x1f0270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0274: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1f0274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1f0278: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1f0278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1f027c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1f027cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f0280: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1f0280u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f0284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0288u;
    {
        const bool branch_taken_0x1f0288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0288) {
            ctx->pc = 0x1F029Cu;
            goto label_1f029c;
        }
    }
    ctx->pc = 0x1F0290u;
    // 0x1f0290: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0294: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0294u;
    {
        const bool branch_taken_0x1f0294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0294) {
            ctx->pc = 0x1F02A8u;
            goto label_1f02a8;
        }
    }
    ctx->pc = 0x1F029Cu;
label_1f029c:
    // 0x1f029c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f029cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F02A0u;
    {
        const bool branch_taken_0x1f02a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02a0) {
            ctx->pc = 0x1F0338u;
            goto label_1f0338;
        }
    }
    ctx->pc = 0x1F02A8u;
label_1f02a8:
    // 0x1f02a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f02ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f02acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f02b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f02b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f02b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f02bc: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F02BCu;
    {
        const bool branch_taken_0x1f02bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f02bc) {
            ctx->pc = 0x1F0334u;
            goto label_1f0334;
        }
    }
    ctx->pc = 0x1F02C4u;
    // 0x1f02c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f02c8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f02cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f02d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f02d4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1f02d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f02d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f02dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f02dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f02e0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1F02E0u;
    {
        const bool branch_taken_0x1f02e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f02e0) {
            ctx->pc = 0x1F0334u;
            goto label_1f0334;
        }
    }
    ctx->pc = 0x1F02E8u;
    // 0x1f02e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f02ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f02ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f02f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f02f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f02f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f02f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f02fc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F02FCu;
    {
        const bool branch_taken_0x1f02fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f02fc) {
            ctx->pc = 0x1F0334u;
            goto label_1f0334;
        }
    }
    ctx->pc = 0x1F0304u;
    // 0x1f0304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0308: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f030c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0310: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0314: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1f0314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f031c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f031cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0320: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0320u;
    {
        const bool branch_taken_0x1f0320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0320) {
            ctx->pc = 0x1F0334u;
            goto label_1f0334;
        }
    }
    ctx->pc = 0x1F0328u;
    // 0x1f0328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f032c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F032Cu;
    {
        const bool branch_taken_0x1f032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f032c) {
            ctx->pc = 0x1F0338u;
            goto label_1f0338;
        }
    }
    ctx->pc = 0x1F0334u;
label_1f0334:
    // 0x1f0334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0338:
    // 0x1f0338: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f0338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f033c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F033Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F033Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0344u;
    // 0x1f0344: 0x0  nop
    ctx->pc = 0x1f0344u;
    // NOP
    // 0x1f0348: 0x0  nop
    ctx->pc = 0x1f0348u;
    // NOP
    // 0x1f034c: 0x0  nop
    ctx->pc = 0x1f034cu;
    // NOP
    ctx->pc = 0x1f0350u;
}
