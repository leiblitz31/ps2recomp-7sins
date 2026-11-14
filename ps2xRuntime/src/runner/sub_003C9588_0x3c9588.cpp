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

// Function: sub_003C9588
// Address: 0x3c9588 - 0x3c96f8
void sub_003C9588_0x3c9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9588_0x3c9588");
#endif

    switch (ctx->pc) {
        case 0x3c95f8u: goto label_3c95f8;
        case 0x3c9658u: goto label_3c9658;
        case 0x3c9678u: goto label_3c9678;
        default: break;
    }

    ctx->pc = 0x3c9588u;

    // 0x3c9588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c958c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c9590: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c9590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c9594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c9594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c959c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c959cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c95a0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x3c95a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3c95a4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3c95a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c95a8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3c95a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c95ac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3c95acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c95b0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3c95b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3c95b4: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x3c95b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3c95b8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3c95b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c95bc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3c95bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c95c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c95c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c95c4: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x3c95c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3c95c8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3c95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c95cc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3c95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c95d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c95d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c95d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c95d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3c95d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c95d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3c95dc: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x3c95dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x3c95e0: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x3c95e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x3c95e4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3c95e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3c95e8: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x3c95e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3c95ec: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x3c95ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3c95f0: 0xc104d24  jal         func_413490
    ctx->pc = 0x3C95F0u;
    SET_GPR_U32(ctx, 31, 0x3C95F8u);
    ctx->pc = 0x3C95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C95F0u;
    // 0x3c95f4: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3C95F0u, 0x3C95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C95F8u;
label_3c95f8:
    // 0x3c95f8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3c95f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c95fc: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x3c95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c9600: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3c9600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c9604: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x3c9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c9608: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c9608u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c960c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3c960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c9610: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x3c9610u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3c9614: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3c9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c9618: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3c9618u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3c961c: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x3c961cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3c9620: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3c9620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c9624: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c9624u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c9628: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x3c9628u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3c962c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3c962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c9630: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x3c9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c9634: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3c9634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c9638: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3c9638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c963c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3c963cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3c9640: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3c9640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3c9644: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3c9644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c9648: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3c9648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c964c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3c964cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c9650: 0xc104d24  jal         func_413490
    ctx->pc = 0x3C9650u;
    SET_GPR_U32(ctx, 31, 0x3C9658u);
    ctx->pc = 0x3C9654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9650u;
    // 0x3c9654: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3C9650u, 0x3C9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9658u;
label_3c9658:
    // 0x3c9658: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3c9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c965c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c965cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c9660: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x3c9660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c9664: 0x0  nop
    ctx->pc = 0x3c9664u;
    // NOP
    // 0x3c9668: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3C9668u;
    {
        const bool branch_taken_0x3c9668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9668u;
        // 0x3c966c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9668) {
            ctx->pc = 0x3C96D8u;
            goto label_3c96d8;
        }
    }
    ctx->pc = 0x3C9670u;
    // 0x3c9670: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x3C9670u;
    SET_GPR_U32(ctx, 31, 0x3C9678u);
    ctx->pc = 0x3C9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9670u;
    // 0x3c9674: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x3C9670u, 0x3C9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9678u;
label_3c9678:
    // 0x3c9678: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3c9678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c967c: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x3c967cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x3c9680: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x3c9680u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3c9684: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x3c9684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3c9688: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3c9688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c968c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3c968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c9690: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x3c9690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c9694: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3c9694u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c9698: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3c9698u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3c969c: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x3c969cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3c96a0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3c96a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c96a4: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3c96a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c96a8: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x3c96a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c96ac: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3c96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c96b0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3c96b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c96b4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3c96b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3c96b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3c96b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c96bc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3c96bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3c96c0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c96c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c96c4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3c96c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3c96c8: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x3c96c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3c96cc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3c96ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3c96d0: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3c96d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c96d4: 0x0  nop
    ctx->pc = 0x3c96d4u;
    // NOP
label_3c96d8:
    // 0x3c96d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c96d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c96dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c96dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c96e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c96e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c96e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c96e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c96e8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3c96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c96ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3c96ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c96f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C96F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C96F0u;
        // 0x3c96f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C96F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C96F8u;
}
