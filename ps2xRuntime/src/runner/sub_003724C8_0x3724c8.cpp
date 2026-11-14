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

// Function: sub_003724C8
// Address: 0x3724c8 - 0x372ea8
void sub_003724C8_0x3724c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003724C8_0x3724c8");
#endif

    switch (ctx->pc) {
        case 0x372550u: goto label_372550;
        case 0x372670u: goto label_372670;
        case 0x372744u: goto label_372744;
        case 0x372778u: goto label_372778;
        case 0x372838u: goto label_372838;
        case 0x372840u: goto label_372840;
        case 0x372948u: goto label_372948;
        case 0x372950u: goto label_372950;
        case 0x372980u: goto label_372980;
        case 0x372b74u: goto label_372b74;
        case 0x372be0u: goto label_372be0;
        case 0x372c40u: goto label_372c40;
        case 0x372d14u: goto label_372d14;
        case 0x372d50u: goto label_372d50;
        case 0x372de4u: goto label_372de4;
        case 0x372df0u: goto label_372df0;
        case 0x372dfcu: goto label_372dfc;
        case 0x372e34u: goto label_372e34;
        case 0x372e48u: goto label_372e48;
        case 0x372e50u: goto label_372e50;
        case 0x372e68u: goto label_372e68;
        default: break;
    }

    ctx->pc = 0x3724c8u;

    // 0x3724c8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3724c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x3724cc: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x3724ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x3724d0: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x3724d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x3724d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3724d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724d8: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x3724d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x3724dc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3724dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724e0: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x3724e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x3724e4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3724e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724e8: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x3724e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x3724ec: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x3724ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3724f0: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x3724f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x3724f4: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x3724f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x3724f8: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x3724f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x3724fc: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x3724fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x372500: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x372500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x372504: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x372504u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x372508: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x372508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x37250c: 0xc6c30010  lwc1        $f3, 0x10($s6)
    ctx->pc = 0x37250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372510: 0xc6c10038  lwc1        $f1, 0x38($s6)
    ctx->pc = 0x372510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372514: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x372514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x372518: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x372518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x37251c: 0xc6c2003c  lwc1        $f2, 0x3C($s6)
    ctx->pc = 0x37251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372520: 0xc6c40014  lwc1        $f4, 0x14($s6)
    ctx->pc = 0x372520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372524: 0xc6c00040  lwc1        $f0, 0x40($s6)
    ctx->pc = 0x372524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372528: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x372528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x37252c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x37252cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x372530: 0xc6c30018  lwc1        $f3, 0x18($s6)
    ctx->pc = 0x372530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372534: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x372534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x372538: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x372538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x37253c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x37253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x372540: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x372540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x372544: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x372544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x372548: 0xc0dc66e  jal         func_3719B8
    ctx->pc = 0x372548u;
    SET_GPR_U32(ctx, 31, 0x372550u);
    ctx->pc = 0x37254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372548u;
    // 0x37254c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3719B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3719B8u, 0x372548u, 0x372550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372550u;
label_372550:
    // 0x372550: 0x10400245  beqz        $v0, . + 4 + (0x245 << 2)
    ctx->pc = 0x372550u;
    {
        const bool branch_taken_0x372550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372550u;
        // 0x372554: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372550) {
            ctx->pc = 0x372E68u;
            goto label_372e68;
        }
    }
    ctx->pc = 0x372558u;
    // 0x372558: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x372558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37255c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x37255cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x372560: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x372560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372564: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x372564u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
    // 0x372568: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x372568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37256c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x37256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372570: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x372570u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
    // 0x372574: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372578: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x372578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37257c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x37257cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x372580: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x372580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372584: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x372584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372588: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x372588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x37258c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x37258cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372590: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372594: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x372594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x372598: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x372598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37259c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x37259cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3725a0: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x3725a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3725a4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3725a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3725a8: 0x0  nop
    ctx->pc = 0x3725a8u;
    // NOP
    // 0x3725ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3725ACu;
    {
        const bool branch_taken_0x3725ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725ACu;
        // 0x3725b0: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725ac) {
            ctx->pc = 0x3725BCu;
            goto label_3725bc;
        }
    }
    ctx->pc = 0x3725B4u;
    // 0x3725b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3725B4u;
    {
        const bool branch_taken_0x3725b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3725B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725B4u;
        // 0x3725b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725b4) {
            ctx->pc = 0x3725D4u;
            goto label_3725d4;
        }
    }
    ctx->pc = 0x3725BCu;
label_3725bc:
    // 0x3725bc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3725bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3725c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3725c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3725c4: 0x0  nop
    ctx->pc = 0x3725c4u;
    // NOP
    // 0x3725c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3725C8u;
    {
        const bool branch_taken_0x3725c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3725CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725C8u;
        // 0x3725cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725c8) {
            ctx->pc = 0x3725D4u;
            goto label_3725d4;
        }
    }
    ctx->pc = 0x3725D0u;
    // 0x3725d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3725d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3725d4:
    // 0x3725d4: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x3725d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x3725d8: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x3725d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3725dc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3725dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3725e0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x3725e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3725e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3725e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3725e8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x3725e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x3725ec: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x3725ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3725f0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3725f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3725f4: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x3725f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3725f8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3725f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3725fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3725fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x372600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x372604: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x372604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x372608: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x372608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x37260c: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x37260cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372610: 0x0  nop
    ctx->pc = 0x372610u;
    // NOP
    // 0x372614: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x372614u;
    {
        const bool branch_taken_0x372614 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x372618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372614u;
        // 0x372618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372614) {
            ctx->pc = 0x372634u;
            goto label_372634;
        }
    }
    ctx->pc = 0x37261Cu;
    // 0x37261c: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x37261cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x372620: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x372620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372624: 0x0  nop
    ctx->pc = 0x372624u;
    // NOP
    // 0x372628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x372628u;
    {
        const bool branch_taken_0x372628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372628u;
        // 0x37262c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372628) {
            ctx->pc = 0x372634u;
            goto label_372634;
        }
    }
    ctx->pc = 0x372630u;
    // 0x372630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372634:
    // 0x372634: 0x1462020d  bne         $v1, $v0, . + 4 + (0x20D << 2)
    ctx->pc = 0x372634u;
    {
        const bool branch_taken_0x372634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x372638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372634u;
        // 0x372638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372634) {
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x37263Cu;
    // 0x37263c: 0x8ee30030  lw          $v1, 0x30($s7)
    ctx->pc = 0x37263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x372640: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x372640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x372644: 0x14620209  bne         $v1, $v0, . + 4 + (0x209 << 2)
    ctx->pc = 0x372644u;
    {
        const bool branch_taken_0x372644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x372648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372644u;
        // 0x372648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372644) {
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x37264Cu;
    // 0x37264c: 0x8ef0000c  lw          $s0, 0xC($s7)
    ctx->pc = 0x37264cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x372650: 0x8ed4000c  lw          $s4, 0xC($s6)
    ctx->pc = 0x372650u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x372654: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x372654u;
    {
        const bool branch_taken_0x372654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x372658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372654u;
        // 0x372658: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372654) {
            ctx->pc = 0x372814u;
            goto label_372814;
        }
    }
    ctx->pc = 0x37265Cu;
    // 0x37265c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37265cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x372660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x372660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x372664: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x372664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372668: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x372668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37266c: 0x0  nop
    ctx->pc = 0x37266cu;
    // NOP
label_372670:
    // 0x372670: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372674: 0x2a2100a  movz        $v0, $s5, $v0
    ctx->pc = 0x372674u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 21));
    // 0x372678: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x372678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x37267c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372680: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x372680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372684: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x372684u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x372688: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x372688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37268c: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x37268cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x372690: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x372690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372694: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x372694u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x372698: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x372698u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x37269c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x37269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3726a0: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x3726a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3726a4: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x3726a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3726a8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3726a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3726ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3726acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726b0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3726b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3726b4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x3726b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3726b8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3726b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3726bc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3726bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726c0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3726c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3726c4: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x3726c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3726c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3726c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3726cc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3726ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3726d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3726d4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3726d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3726d8: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x3726d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3726dc: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3726dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3726e0: 0x46033982  mul.s       $f6, $f7, $f3
    ctx->pc = 0x3726e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3726e4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3726e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3726e8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3726e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x3726ec: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3726ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3726f0: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x3726f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x3726f4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3726f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x3726f8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3726f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3726fc: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x3726fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x372700: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x372700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x372704: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x372704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x372708: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x372708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37270c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x37270cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372710: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x372710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x372714: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x372714u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x372718: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x372718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37271c: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x37271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372724: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x372724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372728: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x372728u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x37272c: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x37272cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x372730: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372734: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x372734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x372738: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x372738u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37273c: 0xc104d24  jal         func_413490
    ctx->pc = 0x37273Cu;
    SET_GPR_U32(ctx, 31, 0x372744u);
    ctx->pc = 0x372740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37273Cu;
    // 0x372740: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x37273Cu, 0x372744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372744u;
label_372744:
    // 0x372744: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x372744u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x372748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37274c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x37274cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372750: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x372750u;
    {
        const bool branch_taken_0x372750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372750u;
        // 0x372754: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372750) {
            ctx->pc = 0x3727D8u;
            goto label_3727d8;
        }
    }
    ctx->pc = 0x372758u;
    // 0x372758: 0xc7898100  lwc1        $f9, -0x7F00($gp)
    ctx->pc = 0x372758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x37275c: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x37275cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x372760: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x372760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x372764: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x372764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372768: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x372768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37276c: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x37276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372770: 0xc7888118  lwc1        $f8, -0x7EE8($gp)
    ctx->pc = 0x372770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x372774: 0x0  nop
    ctx->pc = 0x372774u;
    // NOP
label_372778:
    // 0x372778: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x372778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37277c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x37277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372780: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x372780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x372784: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x372784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372788: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x372788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x37278c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x37278cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x372790: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x372794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x372798: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x372798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x37279c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x37279cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3727a0: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x3727a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3727a4: 0x0  nop
    ctx->pc = 0x3727a4u;
    // NOP
    // 0x3727a8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3727A8u;
    {
        const bool branch_taken_0x3727a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3727ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727A8u;
        // 0x3727ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727a8) {
            ctx->pc = 0x3727C4u;
            goto label_3727c4;
        }
    }
    ctx->pc = 0x3727B0u;
    // 0x3727b0: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x3727b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3727b4: 0x0  nop
    ctx->pc = 0x3727b4u;
    // NOP
    // 0x3727b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3727B8u;
    {
        const bool branch_taken_0x3727b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3727BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727B8u;
        // 0x3727bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727b8) {
            ctx->pc = 0x3727C4u;
            goto label_3727c4;
        }
    }
    ctx->pc = 0x3727C0u;
    // 0x3727c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3727c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3727c4:
    // 0x3727c4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3727c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3727c8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3727c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3727cc: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3727ccu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x3727d0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3727D0u;
    {
        const bool branch_taken_0x3727d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3727D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727D0u;
        // 0x3727d4: 0xa42825  or          $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727d0) {
            ctx->pc = 0x372778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372778;
        }
    }
    ctx->pc = 0x3727D8u;
label_3727d8:
    // 0x3727d8: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x3727d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3727dc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x3727dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3727e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3727e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3727e4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x3727e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3727e8: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3727E8u;
    {
        const bool branch_taken_0x3727e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3727ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727E8u;
        // 0x3727ec: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727e8) {
            ctx->pc = 0x3727F8u;
            goto label_3727f8;
        }
    }
    ctx->pc = 0x3727F0u;
    // 0x3727f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3727F0u;
    {
        const bool branch_taken_0x3727f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727F0u;
        // 0x3727f4: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727f0) {
            ctx->pc = 0x372800u;
            goto label_372800;
        }
    }
    ctx->pc = 0x3727F8u;
label_3727f8:
    // 0x3727f8: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x3727f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x3727fc: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3727fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_372800:
    // 0x372800: 0x1660019a  bnez        $s3, . + 4 + (0x19A << 2)
    ctx->pc = 0x372800u;
    {
        const bool branch_taken_0x372800 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x372804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372800u;
        // 0x372804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372800) {
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x372808u;
    // 0x372808: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x372808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37280c: 0x5600ff98  bnel        $s0, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x37280Cu;
    {
        const bool branch_taken_0x37280c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x37280c) {
            ctx->pc = 0x372810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37280Cu;
            // 0x372810: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372670;
        }
    }
    ctx->pc = 0x372814u;
label_372814:
    // 0x372814: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x372814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x372818: 0x10a00193  beqz        $a1, . + 4 + (0x193 << 2)
    ctx->pc = 0x372818u;
    {
        const bool branch_taken_0x372818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372818u;
        // 0x37281c: 0x8fa600cc  lw          $a2, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372818) {
            ctx->pc = 0x372E68u;
            goto label_372e68;
        }
    }
    ctx->pc = 0x372820u;
    // 0x372820: 0x10c00192  beqz        $a2, . + 4 + (0x192 << 2)
    ctx->pc = 0x372820u;
    {
        const bool branch_taken_0x372820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x372824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372820u;
        // 0x372824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372820) {
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x372828u;
    // 0x372828: 0x8ef5000c  lw          $s5, 0xC($s7)
    ctx->pc = 0x372828u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x37282c: 0x8ed4000c  lw          $s4, 0xC($s6)
    ctx->pc = 0x37282cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x372830: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x372830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372834: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x372834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_372838:
    // 0x372838: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x372838u;
    {
        const bool branch_taken_0x372838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372838u;
        // 0x37283c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372838) {
            ctx->pc = 0x3728E0u;
            goto label_3728e0;
        }
    }
    ctx->pc = 0x372840u;
label_372840:
    // 0x372840: 0x50700025  beql        $v1, $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x372840u;
    {
        const bool branch_taken_0x372840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x372840) {
            ctx->pc = 0x372844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372840u;
            // 0x372844: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D8u;
            goto label_3728d8;
        }
    }
    ctx->pc = 0x372848u;
    // 0x372848: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x372848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37284c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372850: 0xc7838110  lwc1        $f3, -0x7EF0($gp)
    ctx->pc = 0x372850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372854: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372858: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x372858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37285c: 0x0  nop
    ctx->pc = 0x37285cu;
    // NOP
    // 0x372860: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x372860u;
    {
        const bool branch_taken_0x372860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372860) {
            ctx->pc = 0x372864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372860u;
            // 0x372864: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D8u;
            goto label_3728d8;
        }
    }
    ctx->pc = 0x372868u;
    // 0x372868: 0xc7828114  lwc1        $f2, -0x7EEC($gp)
    ctx->pc = 0x372868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37286c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x37286cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372870: 0x0  nop
    ctx->pc = 0x372870u;
    // NOP
    // 0x372874: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x372874u;
    {
        const bool branch_taken_0x372874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372874) {
            ctx->pc = 0x372878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372874u;
            // 0x372878: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D8u;
            goto label_3728d8;
        }
    }
    ctx->pc = 0x37287Cu;
    // 0x37287c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x37287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372880: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x372880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372884: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372884u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372888: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x372888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37288c: 0x0  nop
    ctx->pc = 0x37288cu;
    // NOP
    // 0x372890: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x372890u;
    {
        const bool branch_taken_0x372890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372890) {
            ctx->pc = 0x372894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372890u;
            // 0x372894: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D8u;
            goto label_3728d8;
        }
    }
    ctx->pc = 0x372898u;
    // 0x372898: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x372898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37289c: 0x0  nop
    ctx->pc = 0x37289cu;
    // NOP
    // 0x3728a0: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x3728A0u;
    {
        const bool branch_taken_0x3728a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3728a0) {
            ctx->pc = 0x3728A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3728A0u;
            // 0x3728a4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D8u;
            goto label_3728d8;
        }
    }
    ctx->pc = 0x3728A8u;
    // 0x3728a8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3728a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3728ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3728acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3728b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3728b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3728b4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3728b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3728b8: 0x0  nop
    ctx->pc = 0x3728b8u;
    // NOP
    // 0x3728bc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x3728BCu;
    {
        const bool branch_taken_0x3728bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3728bc) {
            ctx->pc = 0x3728C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3728BCu;
            // 0x3728c0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D8u;
            goto label_3728d8;
        }
    }
    ctx->pc = 0x3728C4u;
    // 0x3728c4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3728c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3728c8: 0x0  nop
    ctx->pc = 0x3728c8u;
    // NOP
    // 0x3728cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3728CCu;
    {
        const bool branch_taken_0x3728cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3728cc) {
            ctx->pc = 0x3728D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3728CCu;
            // 0x3728d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728D4u;
            goto label_3728d4;
        }
    }
    ctx->pc = 0x3728D4u;
label_3728d4:
    // 0x3728d4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3728d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3728d8:
    // 0x3728d8: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3728D8u;
    {
        const bool branch_taken_0x3728d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3728d8) {
            ctx->pc = 0x372840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372840;
        }
    }
    ctx->pc = 0x3728E0u;
label_3728e0:
    // 0x3728e0: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3728E0u;
    {
        const bool branch_taken_0x3728e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3728e0) {
            ctx->pc = 0x3728E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3728E0u;
            // 0x3728e4: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3728E8u;
            goto label_3728e8;
        }
    }
    ctx->pc = 0x3728E8u;
label_3728e8:
    // 0x3728e8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3728E8u;
    {
        const bool branch_taken_0x3728e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3728e8) {
            ctx->pc = 0x372900u;
            goto label_372900;
        }
    }
    ctx->pc = 0x3728F0u;
    // 0x3728f0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3728F0u;
    {
        const bool branch_taken_0x3728f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3728F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728F0u;
        // 0x3728f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728f0) {
            ctx->pc = 0x372908u;
            goto label_372908;
        }
    }
    ctx->pc = 0x3728F8u;
    // 0x3728f8: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x3728F8u;
    {
        const bool branch_taken_0x3728f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3728FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728F8u;
        // 0x3728fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728f8) {
            ctx->pc = 0x372E70u;
            goto label_372e70;
        }
    }
    ctx->pc = 0x372900u;
label_372900:
    // 0x372900: 0x1640ffcd  bnez        $s2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x372900u;
    {
        const bool branch_taken_0x372900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x372904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372900u;
        // 0x372904: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372900) {
            ctx->pc = 0x372838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372838;
        }
    }
    ctx->pc = 0x372908u;
label_372908:
    // 0x372908: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x372908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37290c: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x37290cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x372910: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x372910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x372914: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x372914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x372918: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x372918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37291c: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x37291cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372920: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x372920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x372924: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x372924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x372928: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x372928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37292c: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x37292cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x372930: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x372930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x372934: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x372934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x372938: 0x2a510003  slti        $s1, $s2, 0x3
    ctx->pc = 0x372938u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37293c: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x37293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x372940: 0xafa700dc  sw          $a3, 0xDC($sp)
    ctx->pc = 0x372940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 7));
    // 0x372944: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x372944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_372948:
    // 0x372948: 0xc0de06c  jal         func_3781B0
    ctx->pc = 0x372948u;
    SET_GPR_U32(ctx, 31, 0x372950u);
    ctx->pc = 0x37294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372948u;
    // 0x37294c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x372948u, 0x372950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372950u;
label_372950:
    // 0x372950: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x372950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x372954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372954u;
    {
        const bool branch_taken_0x372954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372954u;
        // 0x372958: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372954) {
            ctx->pc = 0x372964u;
            goto label_372964;
        }
    }
    ctx->pc = 0x37295Cu;
    // 0x37295c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x372960: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x372960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_372964:
    // 0x372964: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x372964u;
    {
        const bool branch_taken_0x372964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x372964) {
            ctx->pc = 0x372968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372964u;
            // 0x372968: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372A5Cu;
            goto label_372a5c;
        }
    }
    ctx->pc = 0x37296Cu;
    // 0x37296c: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x37296Cu;
    {
        const bool branch_taken_0x37296c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x372970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37296Cu;
        // 0x372970: 0x8fa800dc  lw          $t0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37296c) {
            ctx->pc = 0x372A58u;
            goto label_372a58;
        }
    }
    ctx->pc = 0x372974u;
    // 0x372974: 0xc7838110  lwc1        $f3, -0x7EF0($gp)
    ctx->pc = 0x372974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372978: 0x1132021  addu        $a0, $t0, $s3
    ctx->pc = 0x372978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x37297c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x37297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372980:
    // 0x372980: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x372980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372984: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372988: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x372988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37298c: 0x0  nop
    ctx->pc = 0x37298cu;
    // NOP
    // 0x372990: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
    ctx->pc = 0x372990u;
    {
        const bool branch_taken_0x372990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372990) {
            ctx->pc = 0x372994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372990u;
            // 0x372994: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372A48u;
            goto label_372a48;
        }
    }
    ctx->pc = 0x372998u;
    // 0x372998: 0xc7828114  lwc1        $f2, -0x7EEC($gp)
    ctx->pc = 0x372998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37299c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x37299cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3729a0: 0x0  nop
    ctx->pc = 0x3729a0u;
    // NOP
    // 0x3729a4: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x3729A4u;
    {
        const bool branch_taken_0x3729a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3729a4) {
            ctx->pc = 0x3729A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3729A4u;
            // 0x3729a8: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372A48u;
            goto label_372a48;
        }
    }
    ctx->pc = 0x3729ACu;
    // 0x3729ac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3729acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3729b0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3729b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3729b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3729b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3729b8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3729b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3729bc: 0x0  nop
    ctx->pc = 0x3729bcu;
    // NOP
    // 0x3729c0: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x3729C0u;
    {
        const bool branch_taken_0x3729c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3729c0) {
            ctx->pc = 0x3729C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3729C0u;
            // 0x3729c4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372A48u;
            goto label_372a48;
        }
    }
    ctx->pc = 0x3729C8u;
    // 0x3729c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3729c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3729cc: 0x0  nop
    ctx->pc = 0x3729ccu;
    // NOP
    // 0x3729d0: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x3729D0u;
    {
        const bool branch_taken_0x3729d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3729d0) {
            ctx->pc = 0x3729D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3729D0u;
            // 0x3729d4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372A48u;
            goto label_372a48;
        }
    }
    ctx->pc = 0x3729D8u;
    // 0x3729d8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3729d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3729dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3729dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3729e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3729e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3729e4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3729e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3729e8: 0x0  nop
    ctx->pc = 0x3729e8u;
    // NOP
    // 0x3729ec: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x3729ECu;
    {
        const bool branch_taken_0x3729ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3729ec) {
            ctx->pc = 0x3729F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3729ECu;
            // 0x3729f0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372A48u;
            goto label_372a48;
        }
    }
    ctx->pc = 0x3729F4u;
    // 0x3729f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3729f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3729f8: 0x0  nop
    ctx->pc = 0x3729f8u;
    // NOP
    // 0x3729fc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3729FCu;
    {
        const bool branch_taken_0x3729fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729FCu;
        // 0x372a00: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729fc) {
            ctx->pc = 0x372A44u;
            goto label_372a44;
        }
    }
    ctx->pc = 0x372A04u;
    // 0x372a04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x372A04u;
    {
        const bool branch_taken_0x372a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A04u;
        // 0x372a08: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a04) {
            ctx->pc = 0x372A44u;
            goto label_372a44;
        }
    }
    ctx->pc = 0x372A0Cu;
    // 0x372a0c: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x372a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x372a10: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x372a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x372a14: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x372a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x372a18: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x372a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372a1c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x372a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372a20: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x372a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x372a24: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x372a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a28: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x372a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x372a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a30: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x372a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x372a34: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x372a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x372a38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x372a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x372a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372A3Cu;
    {
        const bool branch_taken_0x372a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A3Cu;
        // 0x372a40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a3c) {
            ctx->pc = 0x372A48u;
            goto label_372a48;
        }
    }
    ctx->pc = 0x372A44u;
label_372a44:
    // 0x372a44: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x372a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_372a48:
    // 0x372a48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x372A48u;
    {
        const bool branch_taken_0x372a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A48u;
        // 0x372a4c: 0x2a510003  slti        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a48) {
            ctx->pc = 0x372A58u;
            goto label_372a58;
        }
    }
    ctx->pc = 0x372A50u;
    // 0x372a50: 0x5620ffcb  bnel        $s1, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x372A50u;
    {
        const bool branch_taken_0x372a50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x372a50) {
            ctx->pc = 0x372A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372A50u;
            // 0x372a54: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372980;
        }
    }
    ctx->pc = 0x372A58u;
label_372a58:
    // 0x372a58: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x372a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_372a5c:
    // 0x372a5c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x372A5Cu;
    {
        const bool branch_taken_0x372a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A5Cu;
        // 0x372a60: 0x2b0800a  movz        $s0, $s5, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a5c) {
            ctx->pc = 0x372AF0u;
            goto label_372af0;
        }
    }
    ctx->pc = 0x372A64u;
    // 0x372a64: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x372a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372a68: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x372a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372a6c: 0xc7838110  lwc1        $f3, -0x7EF0($gp)
    ctx->pc = 0x372a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372a70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372a70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372a74: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x372a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372a78: 0x0  nop
    ctx->pc = 0x372a78u;
    // NOP
    // 0x372a7c: 0x4503ffb2  bc1tl       . + 4 + (-0x4E << 2)
    ctx->pc = 0x372A7Cu;
    {
        const bool branch_taken_0x372a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372a7c) {
            ctx->pc = 0x372A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372A7Cu;
            // 0x372a80: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372948;
        }
    }
    ctx->pc = 0x372A84u;
    // 0x372a84: 0xc7828114  lwc1        $f2, -0x7EEC($gp)
    ctx->pc = 0x372a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372a88: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x372a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372a8c: 0x0  nop
    ctx->pc = 0x372a8cu;
    // NOP
    // 0x372a90: 0x4503ffad  bc1tl       . + 4 + (-0x53 << 2)
    ctx->pc = 0x372A90u;
    {
        const bool branch_taken_0x372a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372a90) {
            ctx->pc = 0x372A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372A90u;
            // 0x372a94: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372948;
        }
    }
    ctx->pc = 0x372A98u;
    // 0x372a98: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x372a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372a9c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x372a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372aa0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372aa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372aa4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x372aa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372aa8: 0x0  nop
    ctx->pc = 0x372aa8u;
    // NOP
    // 0x372aac: 0x4503ffa6  bc1tl       . + 4 + (-0x5A << 2)
    ctx->pc = 0x372AACu;
    {
        const bool branch_taken_0x372aac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372aac) {
            ctx->pc = 0x372AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372AACu;
            // 0x372ab0: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372948;
        }
    }
    ctx->pc = 0x372AB4u;
    // 0x372ab4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x372ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372ab8: 0x0  nop
    ctx->pc = 0x372ab8u;
    // NOP
    // 0x372abc: 0x4503ffa2  bc1tl       . + 4 + (-0x5E << 2)
    ctx->pc = 0x372ABCu;
    {
        const bool branch_taken_0x372abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372abc) {
            ctx->pc = 0x372AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372ABCu;
            // 0x372ac0: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372948;
        }
    }
    ctx->pc = 0x372AC4u;
    // 0x372ac4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x372ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372ac8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x372ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372acc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372accu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372ad0: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x372ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372ad4: 0x0  nop
    ctx->pc = 0x372ad4u;
    // NOP
    // 0x372ad8: 0x4503ff9b  bc1tl       . + 4 + (-0x65 << 2)
    ctx->pc = 0x372AD8u;
    {
        const bool branch_taken_0x372ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372ad8) {
            ctx->pc = 0x372ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372AD8u;
            // 0x372adc: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372948;
        }
    }
    ctx->pc = 0x372AE0u;
    // 0x372ae0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x372ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372ae4: 0x0  nop
    ctx->pc = 0x372ae4u;
    // NOP
    // 0x372ae8: 0x4503ff97  bc1tl       . + 4 + (-0x69 << 2)
    ctx->pc = 0x372AE8u;
    {
        const bool branch_taken_0x372ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372ae8) {
            ctx->pc = 0x372AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372AE8u;
            // 0x372aec: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372948;
        }
    }
    ctx->pc = 0x372AF0u;
label_372af0:
    // 0x372af0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372af4: 0x164200da  bne         $s2, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x372AF4u;
    {
        const bool branch_taken_0x372af4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x372AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372AF4u;
        // 0x372af8: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372af4) {
            ctx->pc = 0x372E60u;
            goto label_372e60;
        }
    }
    ctx->pc = 0x372AFCu;
    // 0x372afc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x372afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b00: 0xc7838110  lwc1        $f3, -0x7EF0($gp)
    ctx->pc = 0x372b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372b04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372b04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372b08: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x372b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372b0c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x372B0Cu;
    {
        const bool branch_taken_0x372b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372b0c) {
            ctx->pc = 0x372B6Cu;
            goto label_372b6c;
        }
    }
    ctx->pc = 0x372B14u;
    // 0x372b14: 0xc7828114  lwc1        $f2, -0x7EEC($gp)
    ctx->pc = 0x372b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372b18: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x372b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372b1c: 0x0  nop
    ctx->pc = 0x372b1cu;
    // NOP
    // 0x372b20: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x372B20u;
    {
        const bool branch_taken_0x372b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B20u;
        // 0x372b24: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b20) {
            ctx->pc = 0x372B6Cu;
            goto label_372b6c;
        }
    }
    ctx->pc = 0x372B28u;
    // 0x372b28: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x372b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372b2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372b30: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x372b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372b34: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x372B34u;
    {
        const bool branch_taken_0x372b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372b34) {
            ctx->pc = 0x372B6Cu;
            goto label_372b6c;
        }
    }
    ctx->pc = 0x372B3Cu;
    // 0x372b3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x372b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372b40: 0x0  nop
    ctx->pc = 0x372b40u;
    // NOP
    // 0x372b44: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x372B44u;
    {
        const bool branch_taken_0x372b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B44u;
        // 0x372b48: 0xc7a10048  lwc1        $f1, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b44) {
            ctx->pc = 0x372B6Cu;
            goto label_372b6c;
        }
    }
    ctx->pc = 0x372B4Cu;
    // 0x372b4c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x372b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372b54: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x372b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372b58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x372B58u;
    {
        const bool branch_taken_0x372b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372b58) {
            ctx->pc = 0x372B6Cu;
            goto label_372b6c;
        }
    }
    ctx->pc = 0x372B60u;
    // 0x372b60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x372b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372b64: 0x450100be  bc1t        . + 4 + (0xBE << 2)
    ctx->pc = 0x372B64u;
    {
        const bool branch_taken_0x372b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372b64) {
            ctx->pc = 0x372E60u;
            goto label_372e60;
        }
    }
    ctx->pc = 0x372B6Cu;
label_372b6c:
    // 0x372b6c: 0xc0dc888  jal         func_372220
    ctx->pc = 0x372B6Cu;
    SET_GPR_U32(ctx, 31, 0x372B74u);
    ctx->pc = 0x372B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B6Cu;
    // 0x372b70: 0x8fa400d8  lw          $a0, 0xD8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372220u, 0x372B6Cu, 0x372B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B74u;
label_372b74:
    // 0x372b74: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x372b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x372b78: 0x504000bc  beql        $v0, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x372B78u;
    {
        const bool branch_taken_0x372b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372b78) {
            ctx->pc = 0x372B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372B78u;
            // 0x372b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x372B80u;
    // 0x372b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x372b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x372b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372b88: 0x17c20021  bne         $fp, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x372B88u;
    {
        const bool branch_taken_0x372b88 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x372B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B88u;
        // 0x372b8c: 0x3bc30001  xori        $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b88) {
            ctx->pc = 0x372C10u;
            goto label_372c10;
        }
    }
    ctx->pc = 0x372B90u;
    // 0x372b90: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x372b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x372b94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x372b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x372b98: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x372b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x372b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372ba0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x372ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372ba4: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x372ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372ba8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x372ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372bac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372bb0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x372bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372bb4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x372bb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x372bb8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x372bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372bbc: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x372bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372bc0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x372bc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x372bc4: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x372bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372bc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372bcc: 0xc44297e4  lwc1        $f2, -0x681C($v0)
    ctx->pc = 0x372bccu;
    { uint32_t bits = FAST_READ32(0x6097E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372bd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x372bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372bd4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x372bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x372bd8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x372bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x372bdc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x372bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_372be0:
    // 0x372be0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x372be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372be4: 0x0  nop
    ctx->pc = 0x372be4u;
    // NOP
    // 0x372be8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x372BE8u;
    {
        const bool branch_taken_0x372be8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x372BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BE8u;
        // 0x372bec: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372be8) {
            ctx->pc = 0x372C04u;
            goto label_372c04;
        }
    }
    ctx->pc = 0x372BF0u;
    // 0x372bf0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x372bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372bf4: 0x0  nop
    ctx->pc = 0x372bf4u;
    // NOP
    // 0x372bf8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x372BF8u;
    {
        const bool branch_taken_0x372bf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BF8u;
        // 0x372bfc: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372bf8) {
            ctx->pc = 0x372C04u;
            goto label_372c04;
        }
    }
    ctx->pc = 0x372C00u;
    // 0x372c00: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x372c00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372c04:
    // 0x372c04: 0x13c3fff6  beq         $fp, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x372C04u;
    {
        const bool branch_taken_0x372c04 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x372c04) {
            ctx->pc = 0x372BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372be0;
        }
    }
    ctx->pc = 0x372C0Cu;
    // 0x372c0c: 0x3bc30001  xori        $v1, $fp, 0x1
    ctx->pc = 0x372c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
label_372c10:
    // 0x372c10: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x372c10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372c14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372c18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x372c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c1c: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x372c1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x372c20: 0x1220006e  beqz        $s1, . + 4 + (0x6E << 2)
    ctx->pc = 0x372C20u;
    {
        const bool branch_taken_0x372c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x372C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C20u;
        // 0x372c24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372c20) {
            ctx->pc = 0x372DDCu;
            goto label_372ddc;
        }
    }
    ctx->pc = 0x372C28u;
    // 0x372c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x372c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x372c2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x372c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x372c30: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x372c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c34: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x372c34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x372c38: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x372c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x372c3c: 0x0  nop
    ctx->pc = 0x372c3cu;
    // NOP
label_372c40:
    // 0x372c40: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x372c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x372c44: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x372c44u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x372c48: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x372c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x372c4c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x372c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372c50: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x372c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372c54: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x372c54u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x372c58: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x372c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372c5c: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x372c5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x372c60: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x372c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372c64: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x372c64u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x372c68: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x372c68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x372c6c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x372c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372c70: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x372c70u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x372c74: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x372c74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x372c78: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x372c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372c7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x372c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372c80: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x372c80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x372c84: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x372c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x372c88: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x372c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372c8c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x372c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372c90: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x372c90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x372c94: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x372c94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x372c98: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x372c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372c9c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x372c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372ca0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372ca0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372ca4: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x372ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x372ca8: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x372ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x372cac: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x372cacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x372cb0: 0x46033982  mul.s       $f6, $f7, $f3
    ctx->pc = 0x372cb0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x372cb4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x372cb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x372cb8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x372cb8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x372cbc: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x372cbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x372cc0: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x372cc0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x372cc4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x372cc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x372cc8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x372cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x372ccc: 0xe7a600b8  swc1        $f6, 0xB8($sp)
    ctx->pc = 0x372cccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x372cd0: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x372cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x372cd4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x372cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x372cd8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x372cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x372cdc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x372cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372ce0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x372ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x372ce4: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x372ce4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x372ce8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x372ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372cec: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x372cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372cf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372cf4: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x372cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372cf8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x372cf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x372cfc: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x372cfcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x372d00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372d04: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x372d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x372d08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x372d08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x372d0c: 0xc104d24  jal         func_413490
    ctx->pc = 0x372D0Cu;
    SET_GPR_U32(ctx, 31, 0x372D14u);
    ctx->pc = 0x372D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D0Cu;
    // 0x372d10: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x372D0Cu, 0x372D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D14u;
label_372d14:
    // 0x372d14: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x372d14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x372d18: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x372d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x372d1c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x372D1Cu;
    {
        const bool branch_taken_0x372d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D1Cu;
        // 0x372d20: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d1c) {
            ctx->pc = 0x372DC8u;
            goto label_372dc8;
        }
    }
    ctx->pc = 0x372D24u;
    // 0x372d24: 0x56400029  bnel        $s2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x372D24u;
    {
        const bool branch_taken_0x372d24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x372d24) {
            ctx->pc = 0x372D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372D24u;
            // 0x372d28: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372DCCu;
            goto label_372dcc;
        }
    }
    ctx->pc = 0x372D2Cu;
    // 0x372d2c: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x372d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x372d30: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x372d30u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x372d34: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x372d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372d38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x372d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372d3c: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x372d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372d40: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x372d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372d44: 0xc6a997e4  lwc1        $f9, -0x681C($s5)
    ctx->pc = 0x372d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294940644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x372d48: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x372d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x372d4c: 0x0  nop
    ctx->pc = 0x372d4cu;
    // NOP
label_372d50:
    // 0x372d50: 0x50710019  beql        $v1, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x372D50u;
    {
        const bool branch_taken_0x372d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x372d50) {
            ctx->pc = 0x372D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372D50u;
            // 0x372d54: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372DB8u;
            goto label_372db8;
        }
    }
    ctx->pc = 0x372D58u;
    // 0x372d58: 0x50700017  beql        $v1, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x372D58u;
    {
        const bool branch_taken_0x372d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x372d58) {
            ctx->pc = 0x372D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372D58u;
            // 0x372d5c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372DB8u;
            goto label_372db8;
        }
    }
    ctx->pc = 0x372D60u;
    // 0x372d60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x372d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372d64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x372d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372d68: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x372d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x372d6c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x372d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372d70: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x372d70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x372d74: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x372d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x372d78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372d7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x372d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x372d80: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x372d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x372d84: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x372d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x372d88: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x372d88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372d8c: 0x0  nop
    ctx->pc = 0x372d8cu;
    // NOP
    // 0x372d90: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x372D90u;
    {
        const bool branch_taken_0x372d90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x372D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D90u;
        // 0x372d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d90) {
            ctx->pc = 0x372DACu;
            goto label_372dac;
        }
    }
    ctx->pc = 0x372D98u;
    // 0x372d98: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x372d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372d9c: 0x0  nop
    ctx->pc = 0x372d9cu;
    // NOP
    // 0x372da0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x372DA0u;
    {
        const bool branch_taken_0x372da0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DA0u;
        // 0x372da4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372da0) {
            ctx->pc = 0x372DACu;
            goto label_372dac;
        }
    }
    ctx->pc = 0x372DA8u;
    // 0x372da8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372dac:
    // 0x372dac: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x372dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x372db0: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x372db0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x372db4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x372db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_372db8:
    // 0x372db8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x372DB8u;
    {
        const bool branch_taken_0x372db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x372db8) {
            ctx->pc = 0x372DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372DB8u;
            // 0x372dbc: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372DCCu;
            goto label_372dcc;
        }
    }
    ctx->pc = 0x372DC0u;
    // 0x372dc0: 0x1240ffe3  beqz        $s2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x372DC0u;
    {
        const bool branch_taken_0x372dc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dc0) {
            ctx->pc = 0x372D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372d50;
        }
    }
    ctx->pc = 0x372DC8u;
label_372dc8:
    // 0x372dc8: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x372dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_372dcc:
    // 0x372dcc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x372DCCu;
    {
        const bool branch_taken_0x372dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dcc) {
            ctx->pc = 0x372DDCu;
            goto label_372ddc;
        }
    }
    ctx->pc = 0x372DD4u;
    // 0x372dd4: 0x5240ff9a  beql        $s2, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x372DD4u;
    {
        const bool branch_taken_0x372dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dd4) {
            ctx->pc = 0x372DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372DD4u;
            // 0x372dd8: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372c40;
        }
    }
    ctx->pc = 0x372DDCu;
label_372ddc:
    // 0x372ddc: 0xc0dc1aa  jal         func_3706A8
    ctx->pc = 0x372DDCu;
    SET_GPR_U32(ctx, 31, 0x372DE4u);
    ctx->pc = 0x372DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DDCu;
    // 0x372de0: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706A8u, 0x372DDCu, 0x372DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DE4u;
label_372de4:
    // 0x372de4: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x372de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x372de8: 0xc0dc1aa  jal         func_3706A8
    ctx->pc = 0x372DE8u;
    SET_GPR_U32(ctx, 31, 0x372DF0u);
    ctx->pc = 0x372DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DE8u;
    // 0x372dec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706A8u, 0x372DE8u, 0x372DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DF0u;
label_372df0:
    // 0x372df0: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x372df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x372df4: 0xc0dc1aa  jal         func_3706A8
    ctx->pc = 0x372DF4u;
    SET_GPR_U32(ctx, 31, 0x372DFCu);
    ctx->pc = 0x372DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DF4u;
    // 0x372df8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706A8u, 0x372DF4u, 0x372DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DFCu;
label_372dfc:
    // 0x372dfc: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x372dfcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x372e00: 0xc7808120  lwc1        $f0, -0x7EE0($gp)
    ctx->pc = 0x372e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e04: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x372e04u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x372e08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x372e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372e0c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x372E0Cu;
    {
        const bool branch_taken_0x372e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372e0c) {
            ctx->pc = 0x372E60u;
            goto label_372e60;
        }
    }
    ctx->pc = 0x372E14u;
    // 0x372e14: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x372e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x372e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372e1c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x372E1Cu;
    {
        const bool branch_taken_0x372e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372e1c) {
            ctx->pc = 0x372E60u;
            goto label_372e60;
        }
    }
    ctx->pc = 0x372E24u;
    // 0x372e24: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x372E24u;
    {
        const bool branch_taken_0x372e24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x372e24) {
            ctx->pc = 0x372E60u;
            goto label_372e60;
        }
    }
    ctx->pc = 0x372E2Cu;
    // 0x372e2c: 0xc0ddfd0  jal         func_377F40
    ctx->pc = 0x372E2Cu;
    SET_GPR_U32(ctx, 31, 0x372E34u);
    ctx->pc = 0x372E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E2Cu;
    // 0x372e30: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F40u, 0x372E2Cu, 0x372E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E34u;
label_372e34:
    // 0x372e34: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x372e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372e38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x372E38u;
    {
        const bool branch_taken_0x372e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372e38) {
            ctx->pc = 0x372E60u;
            goto label_372e60;
        }
    }
    ctx->pc = 0x372E40u;
    // 0x372e40: 0xc0ddfae  jal         func_377EB8
    ctx->pc = 0x372E40u;
    SET_GPR_U32(ctx, 31, 0x372E48u);
    ctx->pc = 0x372E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E40u;
    // 0x372e44: 0x26e4000c  addiu       $a0, $s7, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x372E40u, 0x372E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E48u;
label_372e48:
    // 0x372e48: 0xc0ddfae  jal         func_377EB8
    ctx->pc = 0x372E48u;
    SET_GPR_U32(ctx, 31, 0x372E50u);
    ctx->pc = 0x372E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E48u;
    // 0x372e4c: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x372E48u, 0x372E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E50u;
label_372e50:
    // 0x372e50: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x372e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x372e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372e58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372E58u;
    {
        const bool branch_taken_0x372e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E58u;
        // 0x372e5c: 0xaee3000c  sw          $v1, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e58) {
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x372E60u;
label_372e60:
    // 0x372e60: 0xc0ddfae  jal         func_377EB8
    ctx->pc = 0x372E60u;
    SET_GPR_U32(ctx, 31, 0x372E68u);
    ctx->pc = 0x372E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E60u;
    // 0x372e64: 0x8fa400d8  lw          $a0, 0xD8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x372E60u, 0x372E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E68u;
label_372e68:
    // 0x372e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372e6c:
    // 0x372e6c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x372e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_372e70:
    // 0x372e70: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x372e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x372e74: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x372e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x372e78: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x372e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x372e7c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x372e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x372e80: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x372e80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x372e84: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x372e84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x372e88: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x372e88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x372e8c: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x372e8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x372e90: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x372e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x372e94: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x372e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x372e98: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x372e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x372e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x372E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E9Cu;
        // 0x372ea0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372EA4u;
    // 0x372ea4: 0x0  nop
    ctx->pc = 0x372ea4u;
    // NOP
    ctx->pc = 0x372ea8u;
}
