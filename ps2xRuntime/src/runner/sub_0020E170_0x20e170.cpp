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

// Function: sub_0020E170
// Address: 0x20e170 - 0x20e810
void sub_0020E170_0x20e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E170_0x20e170");
#endif

    switch (ctx->pc) {
        case 0x20e18cu: goto label_20e18c;
        case 0x20e1f0u: goto label_20e1f0;
        case 0x20e204u: goto label_20e204;
        case 0x20e21cu: goto label_20e21c;
        case 0x20e250u: goto label_20e250;
        case 0x20e260u: goto label_20e260;
        case 0x20e280u: goto label_20e280;
        case 0x20e298u: goto label_20e298;
        case 0x20e57cu: goto label_20e57c;
        case 0x20e684u: goto label_20e684;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6dcu: goto label_20e6dc;
        default: break;
    }

    ctx->pc = 0x20e170u;

    // 0x20e170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20e178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e180: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x20e180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x20e184: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20E184u;
    SET_GPR_U32(ctx, 31, 0x20E18Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20E184u, 0x20E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E18Cu;
label_20e18c:
    // 0x20e18c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E18Cu;
    {
        const bool branch_taken_0x20e18c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20e18c) {
            ctx->pc = 0x20E1A8u;
            goto label_20e1a8;
        }
    }
    ctx->pc = 0x20E194u;
    // 0x20e194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e198: 0x0  nop
    ctx->pc = 0x20e198u;
    // NOP
    // 0x20e19c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20e19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20e1a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E1A0u;
    {
        const bool branch_taken_0x20e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e1a0) {
            ctx->pc = 0x20E1C4u;
            goto label_20e1c4;
        }
    }
    ctx->pc = 0x20E1A8u;
label_20e1a8:
    // 0x20e1a8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20e1ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e1b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20e1b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e1b8: 0x0  nop
    ctx->pc = 0x20e1b8u;
    // NOP
    // 0x20e1bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20e1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20e1c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20e1c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20e1c4:
    // 0x20e1c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20e1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e1cc: 0x0  nop
    ctx->pc = 0x20e1ccu;
    // NOP
    // 0x20e1d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20e1d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20e1d4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20e1d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e1e0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x20e1e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1e8: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x20E1E8u;
    SET_GPR_U32(ctx, 31, 0x20E1F0u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x20E1E8u, 0x20E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1F0u;
label_20e1f0:
    // 0x20e1f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e1f4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x20e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e1f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20e1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20e1fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20E1FCu;
    {
        const bool branch_taken_0x20e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e1fc) {
            ctx->pc = 0x20E230u;
            goto label_20e230;
        }
    }
    ctx->pc = 0x20E204u;
label_20e204:
    // 0x20e204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20e208: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e20c: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x20e210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e214: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x20E214u;
    SET_GPR_U32(ctx, 31, 0x20E21Cu);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x20E214u, 0x20E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E21Cu;
label_20e21c:
    // 0x20e21c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e220: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x20e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e224: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x20e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20e228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20e22c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20e22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20e230:
    // 0x20e230: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x20e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e234: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x20e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e238: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e23c: 0x4500fff1  bc1f        . + 4 + (-0xF << 2)
    ctx->pc = 0x20E23Cu;
    {
        const bool branch_taken_0x20e23c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e23c) {
            ctx->pc = 0x20E204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e204;
        }
    }
    ctx->pc = 0x20E244u;
    // 0x20e244: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x20e244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x20e248: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x20E248u;
    SET_GPR_U32(ctx, 31, 0x20E250u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x20E248u, 0x20E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E250u;
label_20e250:
    // 0x20e250: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x20e250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x20e254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e258: 0xc0400e0  jal         func_100380
    ctx->pc = 0x20E258u;
    SET_GPR_U32(ctx, 31, 0x20E260u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x20E258u, 0x20E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E260u;
label_20e260:
    // 0x20e260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20e260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e264: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x20E264u;
    {
        const bool branch_taken_0x20e264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e264) {
            ctx->pc = 0x20E29Cu;
            goto label_20e29c;
        }
    }
    ctx->pc = 0x20E26Cu;
    // 0x20e26c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e270: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x20e274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e278: 0xc082b80  jal         func_20AE00
    ctx->pc = 0x20E278u;
    SET_GPR_U32(ctx, 31, 0x20E280u);
    ctx->pc = 0x20AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE00u, 0x20E278u, 0x20E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E280u;
label_20e280:
    // 0x20e280: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x20e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e288: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e28c: 0x246600a4  addiu       $a2, $v1, 0xA4
    ctx->pc = 0x20e28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x20e290: 0xc083a04  jal         func_20E810
    ctx->pc = 0x20E290u;
    SET_GPR_U32(ctx, 31, 0x20E298u);
    ctx->pc = 0x20E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E810u, 0x20E290u, 0x20E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E298u;
label_20e298:
    // 0x20e298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20e298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e29c:
    // 0x20e29c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20e29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e2ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20e2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E2B8u;
    // 0x20e2b8: 0x0  nop
    ctx->pc = 0x20e2b8u;
    // NOP
    // 0x20e2bc: 0x0  nop
    ctx->pc = 0x20e2bcu;
    // NOP
    // 0x20e2c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20e2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e2cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20e2d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20e2d4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x20e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x20e2d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e2dc: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x20e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e2e0: 0xc78082ec  lwc1        $f0, -0x7D14($gp)
    ctx->pc = 0x20e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e2e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e2e8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x20E2E8u;
    {
        const bool branch_taken_0x20e2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e2e8) {
            ctx->pc = 0x20E364u;
            goto label_20e364;
        }
    }
    ctx->pc = 0x20E2F0u;
    // 0x20e2f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2f4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e2f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e2fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e304: 0x0  nop
    ctx->pc = 0x20e304u;
    // NOP
    // 0x20e308: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e30c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e310: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x20e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e318: 0x0  nop
    ctx->pc = 0x20e318u;
    // NOP
    // 0x20e31c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e31cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e320: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20e320u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e324: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x20e324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x20e328: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e32c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e330: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e338: 0x0  nop
    ctx->pc = 0x20e338u;
    // NOP
    // 0x20e33c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e340: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e344: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x20e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e34c: 0x0  nop
    ctx->pc = 0x20e34cu;
    // NOP
    // 0x20e350: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e350u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e354: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20e354u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e358: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x20e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x20e35c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x20E35Cu;
    {
        const bool branch_taken_0x20e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e35c) {
            ctx->pc = 0x20E500u;
            goto label_20e500;
        }
    }
    ctx->pc = 0x20E364u;
label_20e364:
    // 0x20e364: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e368: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x20e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e36c: 0xc78082f0  lwc1        $f0, -0x7D10($gp)
    ctx->pc = 0x20e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e374: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x20E374u;
    {
        const bool branch_taken_0x20e374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e374) {
            ctx->pc = 0x20E3F0u;
            goto label_20e3f0;
        }
    }
    ctx->pc = 0x20E37Cu;
    // 0x20e37c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20e37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e380: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e384: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e388: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e390: 0x0  nop
    ctx->pc = 0x20e390u;
    // NOP
    // 0x20e394: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e398: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e39c: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x20e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e3a4: 0x0  nop
    ctx->pc = 0x20e3a4u;
    // NOP
    // 0x20e3a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e3a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e3ac: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20e3acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e3b0: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x20e3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x20e3b4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e3b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e3bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e3c4: 0x0  nop
    ctx->pc = 0x20e3c4u;
    // NOP
    // 0x20e3c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e3c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e3cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e3d0: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x20e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e3d8: 0x0  nop
    ctx->pc = 0x20e3d8u;
    // NOP
    // 0x20e3dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e3dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e3e0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20e3e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e3e4: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x20e3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x20e3e8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x20E3E8u;
    {
        const bool branch_taken_0x20e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e3e8) {
            ctx->pc = 0x20E500u;
            goto label_20e500;
        }
    }
    ctx->pc = 0x20E3F0u;
label_20e3f0:
    // 0x20e3f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e3f4: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x20e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3f8: 0xc78082f4  lwc1        $f0, -0x7D0C($gp)
    ctx->pc = 0x20e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e3fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e400: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x20E400u;
    {
        const bool branch_taken_0x20e400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e400) {
            ctx->pc = 0x20E47Cu;
            goto label_20e47c;
        }
    }
    ctx->pc = 0x20E408u;
    // 0x20e408: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x20e408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e40c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e410: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e414: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e41c: 0x0  nop
    ctx->pc = 0x20e41cu;
    // NOP
    // 0x20e420: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e424: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e428: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x20e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e430: 0x0  nop
    ctx->pc = 0x20e430u;
    // NOP
    // 0x20e434: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e434u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e438: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20e438u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e43c: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x20e43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x20e440: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e444: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e448: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e450: 0x0  nop
    ctx->pc = 0x20e450u;
    // NOP
    // 0x20e454: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e458: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e45c: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x20e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e464: 0x0  nop
    ctx->pc = 0x20e464u;
    // NOP
    // 0x20e468: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e468u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e46c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20e46cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e470: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x20e470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x20e474: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20E474u;
    {
        const bool branch_taken_0x20e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e474) {
            ctx->pc = 0x20E500u;
            goto label_20e500;
        }
    }
    ctx->pc = 0x20E47Cu;
label_20e47c:
    // 0x20e47c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e480: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x20e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e484: 0xc78082f8  lwc1        $f0, -0x7D08($gp)
    ctx->pc = 0x20e484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e488: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e48c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x20E48Cu;
    {
        const bool branch_taken_0x20e48c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e48c) {
            ctx->pc = 0x20E500u;
            goto label_20e500;
        }
    }
    ctx->pc = 0x20E494u;
    // 0x20e494: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x20e494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e498: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e49c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e4a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x20e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e4a8: 0x0  nop
    ctx->pc = 0x20e4a8u;
    // NOP
    // 0x20e4ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e4b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e4b4: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x20e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e4b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e4bc: 0x0  nop
    ctx->pc = 0x20e4bcu;
    // NOP
    // 0x20e4c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e4c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e4c4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20e4c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e4c8: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x20e4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x20e4cc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e4d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20e4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20e4d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e4d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e4dc: 0x0  nop
    ctx->pc = 0x20e4dcu;
    // NOP
    // 0x20e4e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20e4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e4e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e4e8: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x20e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e4ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e4ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e4f0: 0x0  nop
    ctx->pc = 0x20e4f0u;
    // NOP
    // 0x20e4f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e4f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e4f8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x20e4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20e4fc: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x20e4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
label_20e500:
    // 0x20e500: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20e504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e508: 0x0  nop
    ctx->pc = 0x20e508u;
    // NOP
    // 0x20e50c: 0x46000004  c1          0x4
    ctx->pc = 0x20e50cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20e510: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x20e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x20e514: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e518: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x20e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e51c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e520: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x20e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e524: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x20e524u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e528: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e52c: 0xc44100dc  lwc1        $f1, 0xDC($v0)
    ctx->pc = 0x20e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e530: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x20e530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e534: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20e534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20e538: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x20e538u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x20e53c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x20e53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20e540: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e544: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x20e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e548: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e54c: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x20e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e550: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x20e550u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e554: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e558: 0xc44100dc  lwc1        $f1, 0xDC($v0)
    ctx->pc = 0x20e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e55c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x20e55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e560: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20e560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20e564: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x20e564u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x20e568: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x20e568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20e56c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e570: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20e570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e574: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x20E574u;
    SET_GPR_U32(ctx, 31, 0x20E57Cu);
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x20E574u, 0x20E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E57Cu;
label_20e57c:
    // 0x20e57c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x20e57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20e580: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x20e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e584: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20e588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e58c: 0x0  nop
    ctx->pc = 0x20e58cu;
    // NOP
    // 0x20e590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e594: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x20E594u;
    {
        const bool branch_taken_0x20e594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e594) {
            ctx->pc = 0x20E5B4u;
            goto label_20e5b4;
        }
    }
    ctx->pc = 0x20E59Cu;
    // 0x20e59c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20e5a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e5a4: 0x0  nop
    ctx->pc = 0x20e5a4u;
    // NOP
    // 0x20e5a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x20e5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20e5ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20E5ACu;
    {
        const bool branch_taken_0x20e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e5ac) {
            ctx->pc = 0x20E5E0u;
            goto label_20e5e0;
        }
    }
    ctx->pc = 0x20E5B4u;
label_20e5b4:
    // 0x20e5b4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x20e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e5b8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20e5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e5c0: 0x0  nop
    ctx->pc = 0x20e5c0u;
    // NOP
    // 0x20e5c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e5c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20E5C8u;
    {
        const bool branch_taken_0x20e5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e5c8) {
            ctx->pc = 0x20E5E0u;
            goto label_20e5e0;
        }
    }
    ctx->pc = 0x20E5D0u;
    // 0x20e5d0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x20e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20e5d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e5d8: 0x0  nop
    ctx->pc = 0x20e5d8u;
    // NOP
    // 0x20e5dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x20e5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_20e5e0:
    // 0x20e5e0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x20e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e5e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20e5e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e5ec: 0x0  nop
    ctx->pc = 0x20e5ecu;
    // NOP
    // 0x20e5f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e5f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e5f4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x20E5F4u;
    {
        const bool branch_taken_0x20e5f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e5f4) {
            ctx->pc = 0x20E614u;
            goto label_20e614;
        }
    }
    ctx->pc = 0x20E5FCu;
    // 0x20e5fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20e600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e604: 0x0  nop
    ctx->pc = 0x20e604u;
    // NOP
    // 0x20e608: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x20e608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20e60c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20E60Cu;
    {
        const bool branch_taken_0x20e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e60c) {
            ctx->pc = 0x20E640u;
            goto label_20e640;
        }
    }
    ctx->pc = 0x20E614u;
label_20e614:
    // 0x20e614: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x20e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e618: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x20e618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20e61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e620: 0x0  nop
    ctx->pc = 0x20e620u;
    // NOP
    // 0x20e624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e628: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20E628u;
    {
        const bool branch_taken_0x20e628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e628) {
            ctx->pc = 0x20E640u;
            goto label_20e640;
        }
    }
    ctx->pc = 0x20E630u;
    // 0x20e630: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20e634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e638: 0x0  nop
    ctx->pc = 0x20e638u;
    // NOP
    // 0x20e63c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x20e63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_20e640:
    // 0x20e640: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e644: 0x12030021  beq         $s0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x20E644u;
    {
        const bool branch_taken_0x20e644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e644) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E64Cu;
    // 0x20e64c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e650: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E650u;
    {
        const bool branch_taken_0x20e650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e650) {
            ctx->pc = 0x20E6B0u;
            goto label_20e6b0;
        }
    }
    ctx->pc = 0x20E658u;
    // 0x20e658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e65c: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20E65Cu;
    {
        const bool branch_taken_0x20e65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e65c) {
            ctx->pc = 0x20E694u;
            goto label_20e694;
        }
    }
    ctx->pc = 0x20E664u;
    // 0x20e664: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E664u;
    {
        const bool branch_taken_0x20e664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e664) {
            ctx->pc = 0x20E674u;
            goto label_20e674;
        }
    }
    ctx->pc = 0x20E66Cu;
    // 0x20e66c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20E66Cu;
    {
        const bool branch_taken_0x20e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e66c) {
            ctx->pc = 0x20E6E4u;
            goto label_20e6e4;
        }
    }
    ctx->pc = 0x20E674u;
label_20e674:
    // 0x20e674: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x20e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e678: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x20e678u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x20e67c: 0xc0c39d0  jal         func_30E740
    ctx->pc = 0x20E67Cu;
    SET_GPR_U32(ctx, 31, 0x20E684u);
    ctx->pc = 0x30E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E740u, 0x20E67Cu, 0x20E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E684u;
label_20e684:
    // 0x20e684: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e688: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x20e68c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20E68Cu;
    {
        const bool branch_taken_0x20e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e68c) {
            ctx->pc = 0x20E6E4u;
            goto label_20e6e4;
        }
    }
    ctx->pc = 0x20E694u;
label_20e694:
    // 0x20e694: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x20e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e698: 0xc0c39d0  jal         func_30E740
    ctx->pc = 0x20E698u;
    SET_GPR_U32(ctx, 31, 0x20E6A0u);
    ctx->pc = 0x30E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E740u, 0x20E698u, 0x20E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6A0u;
label_20e6a0:
    // 0x20e6a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6a4: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x20e6a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20E6A8u;
    {
        const bool branch_taken_0x20e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e6a8) {
            ctx->pc = 0x20E6E4u;
            goto label_20e6e4;
        }
    }
    ctx->pc = 0x20E6B0u;
label_20e6b0:
    // 0x20e6b0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x20e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e6b4: 0xc0c39d0  jal         func_30E740
    ctx->pc = 0x20E6B4u;
    SET_GPR_U32(ctx, 31, 0x20E6BCu);
    ctx->pc = 0x30E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E740u, 0x20E6B4u, 0x20E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6BCu;
label_20e6bc:
    // 0x20e6bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6c0: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x20e6c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20E6C4u;
    {
        const bool branch_taken_0x20e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e6c4) {
            ctx->pc = 0x20E6E4u;
            goto label_20e6e4;
        }
    }
    ctx->pc = 0x20E6CCu;
label_20e6cc:
    // 0x20e6cc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x20e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e6d0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x20e6d0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x20e6d4: 0xc0c39d0  jal         func_30E740
    ctx->pc = 0x20E6D4u;
    SET_GPR_U32(ctx, 31, 0x20E6DCu);
    ctx->pc = 0x30E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E740u, 0x20E6D4u, 0x20E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6DCu;
label_20e6dc:
    // 0x20e6dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6e0: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_20e6e4:
    // 0x20e6e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6e8: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e6ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e6f0: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e6f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20e6f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20e6f8: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x20e6fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e700: 0xc46200e4  lwc1        $f2, 0xE4($v1)
    ctx->pc = 0x20e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20e704: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e708: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e70c: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e710: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20e710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e714: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20e714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e718: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x20E718u;
    {
        const bool branch_taken_0x20e718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e718) {
            ctx->pc = 0x20E740u;
            goto label_20e740;
        }
    }
    ctx->pc = 0x20E720u;
    // 0x20e720: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e724: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e728: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e72c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20e72cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e730: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e734: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x20e738: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20E738u;
    {
        const bool branch_taken_0x20e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e738) {
            ctx->pc = 0x20E77Cu;
            goto label_20e77c;
        }
    }
    ctx->pc = 0x20E740u;
label_20e740:
    // 0x20e740: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e744: 0xc46200e4  lwc1        $f2, 0xE4($v1)
    ctx->pc = 0x20e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20e748: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e74c: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e750: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e754: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20e754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20e758: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20e758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e75c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x20E75Cu;
    {
        const bool branch_taken_0x20e75c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e75c) {
            ctx->pc = 0x20E77Cu;
            goto label_20e77c;
        }
    }
    ctx->pc = 0x20E764u;
    // 0x20e764: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e768: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x20e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e76c: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x20e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20e770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20e774: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e778: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x20e778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_20e77c:
    // 0x20e77c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e780: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e784: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x20e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e788: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20e788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20e78c: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20e78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x20e790: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e794: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e798: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x20e798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x20e79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e7a0: 0x0  nop
    ctx->pc = 0x20e7a0u;
    // NOP
    // 0x20e7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e7a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x20E7A8u;
    {
        const bool branch_taken_0x20e7a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e7a8) {
            ctx->pc = 0x20E7C8u;
            goto label_20e7c8;
        }
    }
    ctx->pc = 0x20E7B0u;
    // 0x20e7b0: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x20e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x20e7b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e7b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e7bc: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20e7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x20e7c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20E7C0u;
    {
        const bool branch_taken_0x20e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e7c0) {
            ctx->pc = 0x20E7F8u;
            goto label_20e7f8;
        }
    }
    ctx->pc = 0x20E7C8u;
label_20e7c8:
    // 0x20e7c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e7cc: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x20e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e7d0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x20e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x20e7d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e7d8: 0x0  nop
    ctx->pc = 0x20e7d8u;
    // NOP
    // 0x20e7dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e7dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e7e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20E7E0u;
    {
        const bool branch_taken_0x20e7e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e7e0) {
            ctx->pc = 0x20E7F8u;
            goto label_20e7f8;
        }
    }
    ctx->pc = 0x20E7E8u;
    // 0x20e7e8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x20e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x20e7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e7f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e7f4: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x20e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_20e7f8:
    // 0x20e7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e7fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e800: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20e804: 0x3e00008  jr          $ra
    ctx->pc = 0x20E804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E80Cu;
    // 0x20e80c: 0x0  nop
    ctx->pc = 0x20e80cu;
    // NOP
    ctx->pc = 0x20e810u;
}
