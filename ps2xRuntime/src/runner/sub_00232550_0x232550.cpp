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

// Function: sub_00232550
// Address: 0x232550 - 0x2326a0
void sub_00232550_0x232550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232550_0x232550");
#endif

    switch (ctx->pc) {
        case 0x232584u: goto label_232584;
        case 0x232590u: goto label_232590;
        case 0x232674u: goto label_232674;
        default: break;
    }

    ctx->pc = 0x232550u;

    // 0x232550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x232550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x232554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x232558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23255c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232560: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x232560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x232564: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x232564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x232568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23256c: 0x0  nop
    ctx->pc = 0x23256cu;
    // NOP
    // 0x232570: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x232570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x232574: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x232574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232578: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x23257c: 0xc08b9f4  jal         func_22E7D0
    ctx->pc = 0x23257Cu;
    SET_GPR_U32(ctx, 31, 0x232584u);
    ctx->pc = 0x22E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7D0u, 0x23257Cu, 0x232584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232584u;
label_232584:
    // 0x232584: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232588: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x232588u;
    {
        const bool branch_taken_0x232588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232588) {
            ctx->pc = 0x232664u;
            goto label_232664;
        }
    }
    ctx->pc = 0x232590u;
label_232590:
    // 0x232590: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x232590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232594: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x232594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x232598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23259c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2325a0: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2325A0u;
    {
        const bool branch_taken_0x2325a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2325a0) {
            ctx->pc = 0x232660u;
            goto label_232660;
        }
    }
    ctx->pc = 0x2325A8u;
    // 0x2325a8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2325a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2325ac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2325acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2325b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2325b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2325b4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2325b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2325b8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2325b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2325bc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2325bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2325c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2325c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2325c4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2325c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2325c8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2325c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2325cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2325ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2325d0: 0x0  nop
    ctx->pc = 0x2325d0u;
    // NOP
    // 0x2325d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2325d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2325d8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2325D8u;
    {
        const bool branch_taken_0x2325d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2325d8) {
            ctx->pc = 0x23261Cu;
            goto label_23261c;
        }
    }
    ctx->pc = 0x2325E0u;
    // 0x2325e0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2325e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2325e4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2325e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2325e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2325e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2325ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2325ECu;
    {
        const bool branch_taken_0x2325ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2325ec) {
            ctx->pc = 0x232604u;
            goto label_232604;
        }
    }
    ctx->pc = 0x2325F4u;
    // 0x2325f4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2325f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2325f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2325f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2325fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2325FCu;
    {
        const bool branch_taken_0x2325fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2325fc) {
            ctx->pc = 0x23260Cu;
            goto label_23260c;
        }
    }
    ctx->pc = 0x232604u;
label_232604:
    // 0x232604: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x232604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232608: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x232608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_23260c:
    // 0x23260c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x23260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232610: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x232610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x232614: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x232614u;
    {
        const bool branch_taken_0x232614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232614) {
            ctx->pc = 0x232660u;
            goto label_232660;
        }
    }
    ctx->pc = 0x23261Cu;
label_23261c:
    // 0x23261c: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x23261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232620: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x232620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232624: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x232624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23262c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x23262cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232630: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x232630u;
    {
        const bool branch_taken_0x232630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232630) {
            ctx->pc = 0x232648u;
            goto label_232648;
        }
    }
    ctx->pc = 0x232638u;
    // 0x232638: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x232638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23263c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23263cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x232640: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232640u;
    {
        const bool branch_taken_0x232640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232640) {
            ctx->pc = 0x232658u;
            goto label_232658;
        }
    }
    ctx->pc = 0x232648u;
label_232648:
    // 0x232648: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x232648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23264c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x23264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232654: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x232654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_232658:
    // 0x232658: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x232658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23265c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_232660:
    // 0x232660: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x232660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_232664:
    // 0x232664: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x232664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232668: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x23266c: 0xc08b954  jal         func_22E550
    ctx->pc = 0x23266Cu;
    SET_GPR_U32(ctx, 31, 0x232674u);
    ctx->pc = 0x22E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E550u, 0x23266Cu, 0x232674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232674u;
label_232674:
    // 0x232674: 0x1622ffc6  bne         $s1, $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x232674u;
    {
        const bool branch_taken_0x232674 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x232674) {
            ctx->pc = 0x232590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232590;
        }
    }
    ctx->pc = 0x23267Cu;
    // 0x23267c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x23267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232680: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23268c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23268cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x232690: 0x3e00008  jr          $ra
    ctx->pc = 0x232690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232698u;
    // 0x232698: 0x0  nop
    ctx->pc = 0x232698u;
    // NOP
    // 0x23269c: 0x0  nop
    ctx->pc = 0x23269cu;
    // NOP
    ctx->pc = 0x2326a0u;
}
