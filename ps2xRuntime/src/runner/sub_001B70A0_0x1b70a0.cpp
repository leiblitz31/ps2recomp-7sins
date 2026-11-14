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

// Function: sub_001B70A0
// Address: 0x1b70a0 - 0x1b7280
void sub_001B70A0_0x1b70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B70A0_0x1b70a0");
#endif

    switch (ctx->pc) {
        case 0x1b70d4u: goto label_1b70d4;
        case 0x1b70e8u: goto label_1b70e8;
        case 0x1b70fcu: goto label_1b70fc;
        case 0x1b711cu: goto label_1b711c;
        default: break;
    }

    ctx->pc = 0x1b70a0u;

    // 0x1b70a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b70a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b70a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b70a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b70ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b70acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b70b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b70b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b70b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b70b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b70b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b70bc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1b70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1b70c0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1b70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1b70c4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b70c8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b70cc: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1B70CCu;
    SET_GPR_U32(ctx, 31, 0x1B70D4u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1B70CCu, 0x1B70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70D4u;
label_1b70d4:
    // 0x1b70d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b70d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b70d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b70dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70e0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1B70E0u;
    {
        const bool branch_taken_0x1b70e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b70e0) {
            ctx->pc = 0x1B723Cu;
            goto label_1b723c;
        }
    }
    ctx->pc = 0x1B70E8u;
label_1b70e8:
    // 0x1b70e8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b70ec: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b70f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b70f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70f4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B70F4u;
    SET_GPR_U32(ctx, 31, 0x1B70FCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B70F4u, 0x1B70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70FCu;
label_1b70fc:
    // 0x1b70fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b70fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7100: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7104: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1b7104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b7108: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x1b7108u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b710c: 0x2810  mfhi        $a1
    ctx->pc = 0x1b710cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1b7110: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1b7110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1b7114: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B7114u;
    SET_GPR_U32(ctx, 31, 0x1B711Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B7114u, 0x1B711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B711Cu;
label_1b711c:
    // 0x1b711c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b711cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7120: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b7120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7124: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7128: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b712c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b712cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7130: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7130u;
    {
        const bool branch_taken_0x1b7130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7130) {
            ctx->pc = 0x1B7150u;
            goto label_1b7150;
        }
    }
    ctx->pc = 0x1B7138u;
    // 0x1b7138: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b7138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b713c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7140: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7148: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x1B7148u;
    {
        const bool branch_taken_0x1b7148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7148) {
            ctx->pc = 0x1B7238u;
            goto label_1b7238;
        }
    }
    ctx->pc = 0x1B7150u;
label_1b7150:
    // 0x1b7150: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b7150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7154: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7158: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b715c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b715cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7160: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7160u;
    {
        const bool branch_taken_0x1b7160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7160) {
            ctx->pc = 0x1B7180u;
            goto label_1b7180;
        }
    }
    ctx->pc = 0x1B7168u;
    // 0x1b7168: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b7168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b716c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7170: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b7170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7174: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7178: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1B7178u;
    {
        const bool branch_taken_0x1b7178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7178) {
            ctx->pc = 0x1B7238u;
            goto label_1b7238;
        }
    }
    ctx->pc = 0x1B7180u;
label_1b7180:
    // 0x1b7180: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b7180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7184: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b7184u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1b7188: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b718c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b718cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7190: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b7190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b7194: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b7194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7198: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b719c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b719cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b71a0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b71a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b71a4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1b71a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b71a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b71a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b71ac: 0x0  nop
    ctx->pc = 0x1b71acu;
    // NOP
    // 0x1b71b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b71b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b71b4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B71B4u;
    {
        const bool branch_taken_0x1b71b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b71b4) {
            ctx->pc = 0x1B71D4u;
            goto label_1b71d4;
        }
    }
    ctx->pc = 0x1B71BCu;
    // 0x1b71bc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1b71bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b71c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b71c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b71c4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b71c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b71c8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b71cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b71ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b71d0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b71d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1b71d4:
    // 0x1b71d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b71d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b71dc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b71dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b71e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b71e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b71e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b71e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b71e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b71ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b71f0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b71f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b71f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b71f8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b71f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b71fc: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1b71fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7200: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1b7200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7204: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1b7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7208: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b7208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b720c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b720cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7214: 0x0  nop
    ctx->pc = 0x1b7214u;
    // NOP
    // 0x1b7218: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b7218u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b721c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1b721cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b7220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7224: 0x0  nop
    ctx->pc = 0x1b7224u;
    // NOP
    // 0x1b7228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b722c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B722Cu;
    {
        const bool branch_taken_0x1b722c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b722c) {
            ctx->pc = 0x1B7238u;
            goto label_1b7238;
        }
    }
    ctx->pc = 0x1B7234u;
    // 0x1b7234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b7234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b7238:
    // 0x1b7238: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b723c:
    // 0x1b723c: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x1b723cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1b7240: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1B7240u;
    {
        const bool branch_taken_0x1b7240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7240) {
            ctx->pc = 0x1B70E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b70e8;
        }
    }
    ctx->pc = 0x1B7248u;
    // 0x1b7248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b724c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1b7250: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b7250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b7254: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b7258: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b725c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b725cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7260: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7264: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b726c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b726cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7270: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b7270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b7274: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B727Cu;
    // 0x1b727c: 0x0  nop
    ctx->pc = 0x1b727cu;
    // NOP
    ctx->pc = 0x1b7280u;
}
