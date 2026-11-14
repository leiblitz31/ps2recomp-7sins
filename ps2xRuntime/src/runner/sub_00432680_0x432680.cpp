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

// Function: sub_00432680
// Address: 0x432680 - 0x432da0
void sub_00432680_0x432680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432680_0x432680");
#endif

    switch (ctx->pc) {
        case 0x432700u: goto label_432700;
        case 0x432724u: goto label_432724;
        case 0x432750u: goto label_432750;
        case 0x432788u: goto label_432788;
        case 0x432b18u: goto label_432b18;
        case 0x432b68u: goto label_432b68;
        case 0x432d24u: goto label_432d24;
        default: break;
    }

    ctx->pc = 0x432680u;

    // 0x432680: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x432680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x432684: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x432684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x432688: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x432688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x43268c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x43268cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x432690: 0xc60c3b90  lwc1        $f12, 0x3B90($s0)
    ctx->pc = 0x432690u;
    { uint32_t bits = FAST_READ32(0x623B90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x432694: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x432694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x432698: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x432698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x43269c: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x43269cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x4326a0: 0x26103b90  addiu       $s0, $s0, 0x3B90
    ctx->pc = 0x4326a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15248));
    // 0x4326a4: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x4326a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x4326a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4326a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4326ac: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x4326acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x4326b0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x4326b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x4326b4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x4326b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x4326b8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x4326b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x4326bc: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x4326bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x4326c0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4326c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x4326c4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4326c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4326c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4326c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4326cc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x4326ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x4326d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4326d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x4326d4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x4326d4u;
    { uint32_t bits = FAST_READ32(0x623BA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4326d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4326d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4326dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4326dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4326e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4326e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4326e4: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x4326e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x4326e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4326e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4326ec: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x4326ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x4326f0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4326f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x4326f4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x4326f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x4326f8: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4326F8u;
    SET_GPR_U32(ctx, 31, 0x432700u);
    ctx->pc = 0x4326FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4326F8u;
    // 0x4326fc: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4326F8u, 0x432700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432700u;
label_432700:
    // 0x432700: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x432700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x432704: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x432704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x432708: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x432708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x43270c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x43270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x432710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x432710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x432714: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x432714u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x432718: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x432718u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x43271c: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x43271Cu;
    SET_GPR_U32(ctx, 31, 0x432724u);
    ctx->pc = 0x432720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43271Cu;
    // 0x432720: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x43271Cu, 0x432724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432724u;
label_432724:
    // 0x432724: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x432724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x432728: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x432728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x43272c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x43272cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x432730: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x432730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x432734: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x432734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x432738: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x432738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x43273c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x43273cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x432740: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x432740u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x432744: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x432744u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x432748: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x432748u;
    SET_GPR_U32(ctx, 31, 0x432750u);
    ctx->pc = 0x43274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432748u;
    // 0x43274c: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x432748u, 0x432750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432750u;
label_432750:
    // 0x432750: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x432750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432754: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x432754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x432758: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x432758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43275c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x43275cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432760: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x432760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x432764: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x432764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x432768: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x432768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x43276c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x432770: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x432770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x432774: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x432774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x432778: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x432778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43277c: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x43277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x432780: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x432780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x432784: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x432784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_432788:
    // 0x432788: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x432788u;
    {
        const bool branch_taken_0x432788 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432788u;
        // 0x43278c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432788) {
            ctx->pc = 0x43279Cu;
            goto label_43279c;
        }
    }
    ctx->pc = 0x432790u;
    // 0x432790: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x432790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x432794: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x432794u;
    {
        const bool branch_taken_0x432794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432794u;
        // 0x432798: 0x24f13580  addiu       $s1, $a3, 0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 13696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432794) {
            ctx->pc = 0x4327D4u;
            goto label_4327d4;
        }
    }
    ctx->pc = 0x43279Cu;
label_43279c:
    // 0x43279c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x43279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4327a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4327a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4327a4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4327A4u;
    {
        const bool branch_taken_0x4327a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4327A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327A4u;
        // 0x4327a8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327a4) {
            ctx->pc = 0x4327B8u;
            goto label_4327b8;
        }
    }
    ctx->pc = 0x4327ACu;
    // 0x4327ac: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x4327acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x4327b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4327B0u;
    {
        const bool branch_taken_0x4327b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4327B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327B0u;
        // 0x4327b4: 0x24b136c0  addiu       $s1, $a1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327b0) {
            ctx->pc = 0x4327D4u;
            goto label_4327d4;
        }
    }
    ctx->pc = 0x4327B8u;
label_4327b8:
    // 0x4327b8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4327b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4327bc: 0x14c70004  bne         $a2, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4327BCu;
    {
        const bool branch_taken_0x4327bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x4327C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327BCu;
        // 0x4327c0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327bc) {
            ctx->pc = 0x4327D0u;
            goto label_4327d0;
        }
    }
    ctx->pc = 0x4327C4u;
    // 0x4327c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4327c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4327c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4327C8u;
    {
        const bool branch_taken_0x4327c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4327CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327C8u;
        // 0x4327cc: 0x24513800  addiu       $s1, $v0, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327c8) {
            ctx->pc = 0x4327D4u;
            goto label_4327d4;
        }
    }
    ctx->pc = 0x4327D0u;
label_4327d0:
    // 0x4327d0: 0x24713940  addiu       $s1, $v1, 0x3940
    ctx->pc = 0x4327d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
label_4327d4:
    // 0x4327d4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x4327d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x4327d8: 0x24a33b90  addiu       $v1, $a1, 0x3B90
    ctx->pc = 0x4327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15248));
    // 0x4327dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4327dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x623BB4u));
    // 0x4327e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4327e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4327e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4327E4u;
    {
        const bool branch_taken_0x4327e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4327E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327E4u;
        // 0x4327e8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327e4) {
            ctx->pc = 0x4327F8u;
            goto label_4327f8;
        }
    }
    ctx->pc = 0x4327ECu;
    // 0x4327ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4327ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4327f0: 0x66043  sra         $t4, $a2, 1
    ctx->pc = 0x4327f0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4327f4: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x4327f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4327f8:
    // 0x4327f8: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x4327f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x4327fc: 0x354a0013  ori         $t2, $t2, 0x13
    ctx->pc = 0x4327fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)19);
    // 0x432800: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x432800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432804: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432804u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432808: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x432808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x43280c: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x43280cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x432810: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x432810u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x432814: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x432814u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x432818: 0x354a8012  ori         $t2, $t2, 0x8012
    ctx->pc = 0x432818u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32786);
    // 0x43281c: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x43281cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x432820: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x432820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432824: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432824u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432828: 0x241e0020  addiu       $fp, $zero, 0x20
    ctx->pc = 0x432828u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43282c: 0x7e290010  sq          $t1, 0x10($s1)
    ctx->pc = 0x43282cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 9));
    // 0x432830: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x432830u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432834: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x432834u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432838: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x432838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43283c: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x43283cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432840: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x432840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x432844: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x432844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
    // 0x432848: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x432848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43284c: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x43284cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432850: 0x240e0020  addiu       $t6, $zero, 0x20
    ctx->pc = 0x432850u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432854: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x432854u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432858: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x432858u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43285c: 0x24180020  addiu       $t8, $zero, 0x20
    ctx->pc = 0x43285cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432860: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x432860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432864: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x432864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432868: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x432868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43286c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x43286cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432870: 0x11800007  beqz        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x432870u;
    {
        const bool branch_taken_0x432870 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x432874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432870u;
        // 0x432874: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432870) {
            ctx->pc = 0x432890u;
            goto label_432890;
        }
    }
    ctx->pc = 0x432878u;
    // 0x432878: 0xde420360  ld          $v0, 0x360($s2)
    ctx->pc = 0x432878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 864)));
    // 0x43287c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x43287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x432880: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x432880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x432884: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x432884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x432888: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x432888u;
    {
        const bool branch_taken_0x432888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432888u;
        // 0x43288c: 0x8e440360  lw          $a0, 0x360($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432888) {
            ctx->pc = 0x4328A4u;
            goto label_4328a4;
        }
    }
    ctx->pc = 0x432890u;
label_432890:
    // 0x432890: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x432890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x432894: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x432894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x432898: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x432898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x43289c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43289cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4328a0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4328a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4328a4:
    // 0x4328a4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4328a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4328a8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4328a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x4328ac: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4328acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4328b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4328b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4328b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4328b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4328b8: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x4328b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x4328bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4328bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4328c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4328c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4328c4: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x4328c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4328c8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x4328c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x4328cc: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x4328ccu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x4328d0: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x4328d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4328d4: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x4328d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x4328d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4328d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4328dc: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x4328dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4328e0: 0x1711021  addu        $v0, $t3, $s1
    ctx->pc = 0x4328e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x4328e4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x4328e4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x4328e8: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x4328e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x4328ec: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x4328ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x4328f0: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x4328f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x4328f4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4328f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4328f8: 0x354a7fff  ori         $t2, $t2, 0x7FFF
    ctx->pc = 0x4328f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32767);
    // 0x4328fc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4328fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x432900: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x432900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x432904: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x432904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x432908: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432908u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x43290c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x43290cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x432910: 0x7c490020  sq          $t1, 0x20($v0)
    ctx->pc = 0x432910u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 9));
    // 0x432914: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x432914u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x432918: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x432918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x43291c: 0x24633b90  addiu       $v1, $v1, 0x3B90
    ctx->pc = 0x43291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15248));
    // 0x432920: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432920u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432924: 0x8cc53b90  lw          $a1, 0x3B90($a2)
    ctx->pc = 0x432924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15248)));
    // 0x432928: 0x7ce90030  sq          $t1, 0x30($a3)
    ctx->pc = 0x432928u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 9));
    // 0x43292c: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x43292cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x432930: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x432930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x432934: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x432934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x432938: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x432938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x43293c: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x43293cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x432940: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x432940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x432944: 0xde4301e0  ld          $v1, 0x1E0($s2)
    ctx->pc = 0x432944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x432948: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x432948u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x43294c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x43294cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x432950: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x432950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x432954: 0x3163a  dsrl        $v0, $v1, 24
    ctx->pc = 0x432954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 24);
    // 0x432958: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x432958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43295c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x43295cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x432960: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x432960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x432964: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x432964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x432968: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x432968u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43296c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x432970: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x432970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x432974: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x432974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x432978: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x432978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x43297c: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x43297cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x432980: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x432980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x432984: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432984u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432988: 0x2cc60018  sltiu       $a2, $a2, 0x18
    ctx->pc = 0x432988u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x43298c: 0x7d090040  sq          $t1, 0x40($t0)
    ctx->pc = 0x43298cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), GPR_VEC(ctx, 9));
    // 0x432990: 0x3112821  addu        $a1, $t8, $s1
    ctx->pc = 0x432990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 17)));
    // 0x432994: 0x24090045  addiu       $t1, $zero, 0x45
    ctx->pc = 0x432994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x432998: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x432998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43299c: 0x71264b89  pcpyld      $t1, $t1, $a2
    ctx->pc = 0x43299cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4329a0: 0x835025  or          $t2, $a0, $v1
    ctx->pc = 0x4329a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4329a4: 0x7ca90050  sq          $t1, 0x50($a1)
    ctx->pc = 0x4329a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 9));
    // 0x4329a8: 0x3311021  addu        $v0, $t9, $s1
    ctx->pc = 0x4329a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 17)));
    // 0x4329ac: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x4329acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4329b0: 0x27de0070  addiu       $fp, $fp, 0x70
    ctx->pc = 0x4329b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x4329b4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x4329b4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x4329b8: 0x26f70070  addiu       $s7, $s7, 0x70
    ctx->pc = 0x4329b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    // 0x4329bc: 0x7c490060  sq          $t1, 0x60($v0)
    ctx->pc = 0x4329bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 9));
    // 0x4329c0: 0x26d60070  addiu       $s6, $s6, 0x70
    ctx->pc = 0x4329c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x4329c4: 0x26b50070  addiu       $s5, $s5, 0x70
    ctx->pc = 0x4329c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x4329c8: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x4329c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x4329cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x4329ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4329d0: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x4329d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x4329d4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x4329d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x4329d8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x4329d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x4329dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4329dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4329e0: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x4329e4: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x4329e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x4329e8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x4329e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x4329ec: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x4329ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x4329f0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x4329f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x4329f4: 0x25ce0070  addiu       $t6, $t6, 0x70
    ctx->pc = 0x4329f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x4329f8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4329f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4329fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4329FCu;
    {
        const bool branch_taken_0x4329fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4329FCu;
        // 0x432a00: 0x25ad0070  addiu       $t5, $t5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4329fc) {
            ctx->pc = 0x432A48u;
            goto label_432a48;
        }
    }
    ctx->pc = 0x432A04u;
    // 0x432a04: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x432a04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x432a08: 0xde4401d0  ld          $a0, 0x1D0($s2)
    ctx->pc = 0x432a08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x432a0c: 0x8ce23b90  lw          $v0, 0x3B90($a3)
    ctx->pc = 0x432a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x623B90u));
    // 0x432a10: 0x3405aa80  ori         $a1, $zero, 0xAA80
    ctx->pc = 0x432a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x432a14: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x432a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x432a18: 0x41e3a  dsrl        $v1, $a0, 24
    ctx->pc = 0x432a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 24);
    // 0x432a1c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x432a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x432a20: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x432a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x432a24: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x432a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x432a28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x432a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x432a2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x432a2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x432a30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x432a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x432a34: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x432a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x432a38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x432a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x432a3c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x432a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x432a40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x432A40u;
    {
        const bool branch_taken_0x432a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432A40u;
        // 0x432a44: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432a40) {
            ctx->pc = 0x432A88u;
            goto label_432a88;
        }
    }
    ctx->pc = 0x432A48u;
label_432a48:
    // 0x432a48: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x432a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x432a4c: 0xde440060  ld          $a0, 0x60($s2)
    ctx->pc = 0x432a4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x432a50: 0x8cc23b90  lw          $v0, 0x3B90($a2)
    ctx->pc = 0x432a50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x623B90u));
    // 0x432a54: 0x3407aa80  ori         $a3, $zero, 0xAA80
    ctx->pc = 0x432a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x432a58: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x432a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x432a5c: 0x41e3a  dsrl        $v1, $a0, 24
    ctx->pc = 0x432a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 24);
    // 0x432a60: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x432a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x432a64: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x432a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x432a68: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x432a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x432a6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x432a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x432a70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x432a70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x432a74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x432a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x432a78: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x432a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x432a7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x432a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x432a80: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x432a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x432a84: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x432a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_432a88:
    // 0x432a88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x432a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x432a8c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x432a8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x432a90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x432a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x432a94: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x432a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x432a98: 0x645025  or          $t2, $v1, $a0
    ctx->pc = 0x432a98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x432a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432aa0: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x432aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x432aa4: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x432aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x432aa8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x432aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x432aac: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432aacu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432ab0: 0x1b11021  addu        $v0, $t5, $s1
    ctx->pc = 0x432ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x432ab4: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x432ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x432ab8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x432ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x432abc: 0x346a0001  ori         $t2, $v1, 0x1
    ctx->pc = 0x432abcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x432ac0: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x432ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x432ac4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432ac4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432ac8: 0x1d11021  addu        $v0, $t6, $s1
    ctx->pc = 0x432ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x432acc: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x432accu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x432ad0: 0x240a0016  addiu       $t2, $zero, 0x16
    ctx->pc = 0x432ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x432ad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x432ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ad8: 0x1f11821  addu        $v1, $t7, $s1
    ctx->pc = 0x432ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x432adc: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432adcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432ae0: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x432ae0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x432ae4: 0x7c690020  sq          $t1, 0x20($v1)
    ctx->pc = 0x432ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 9));
    // 0x432ae8: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x432ae8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x432aec: 0xa53bc  dsll32      $t2, $t2, 14
    ctx->pc = 0x432aecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 14));
    // 0x432af0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x432af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432af4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x432af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x432af8: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432af8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432afc: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x432afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x432b00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x432b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x432b04: 0x7c490030  sq          $t1, 0x30($v0)
    ctx->pc = 0x432b04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 9));
    // 0x432b08: 0x27de0040  addiu       $fp, $fp, 0x40
    ctx->pc = 0x432b08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x432b0c: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x432b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x432b10: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x432B10u;
    SET_GPR_U32(ctx, 31, 0x432B18u);
    ctx->pc = 0x432B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432B10u;
    // 0x432b14: 0x26f70040  addiu       $s7, $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x432B10u, 0x432B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432B18u;
label_432b18:
    // 0x432b18: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x432b18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x432b1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x432b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x432b20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x432b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x432b24: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x432b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x432b28: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x432b28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x432b2c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x432b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x432b30: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x432b30u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x432b34: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x432b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x432b38: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x432b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x432b3c: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x432b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x432b40: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x432b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x432b44: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x432b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x432b48: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x432B48u;
    {
        const bool branch_taken_0x432b48 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x432B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B48u;
        // 0x432b4c: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b48) {
            ctx->pc = 0x432B58u;
            goto label_432b58;
        }
    }
    ctx->pc = 0x432B50u;
    // 0x432b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x432B50u;
    {
        const bool branch_taken_0x432b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B50u;
        // 0x432b54: 0xdfa40048  ld          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b50) {
            ctx->pc = 0x432B60u;
            goto label_432b60;
        }
    }
    ctx->pc = 0x432B58u;
label_432b58:
    // 0x432b58: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x432b58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x432b5c: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x432b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
label_432b60:
    // 0x432b60: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x432B60u;
    SET_GPR_U32(ctx, 31, 0x432B68u);
    ctx->pc = 0x432B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432B60u;
    // 0x432b64: 0x27de0020  addiu       $fp, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x432B60u, 0x432B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432B68u;
label_432b68:
    // 0x432b68: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x432b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x432b6c: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x432b6cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x432b70: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x432b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x432b74: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x432b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x432b78: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x432b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x432b7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x432b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x432b80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x432b80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432b84: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x432b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x432b88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x432b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x432b8c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x432b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x432b90: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x432b90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x432b94: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432b94u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432b98: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x432b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x432b9c: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x432b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x432ba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x432ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ba4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x432ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x432ba8: 0x8ce33b90  lw          $v1, 0x3B90($a3)
    ctx->pc = 0x432ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 15248)));
    // 0x432bac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x432bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x432bb0: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432bb0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432bb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x432bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x432bb8: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x432bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x432bbc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x432bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x432bc0: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x432bc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x432bc4: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x432bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x432bc8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x432bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x432bcc: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x432bccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x432bd0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x432bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432bd4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x432bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x432bd8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432BD8u;
    {
        const bool branch_taken_0x432bd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x432BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432BD8u;
        // 0x432bdc: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432bd8) {
            ctx->pc = 0x432BF0u;
            goto label_432bf0;
        }
    }
    ctx->pc = 0x432BE0u;
    // 0x432be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x432be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x432be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x432be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x432be8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x432BE8u;
    {
        const bool branch_taken_0x432be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432BE8u;
        // 0x432bec: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432be8) {
            ctx->pc = 0x432C0Cu;
            goto label_432c0c;
        }
    }
    ctx->pc = 0x432BF0u;
label_432bf0:
    // 0x432bf0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x432bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x432bf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x432bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x432bf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x432bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x432bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x432bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x432c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x432c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x432c04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x432c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x432c08: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x432c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_432c0c:
    // 0x432c0c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x432c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x432c10: 0x24c63b90  addiu       $a2, $a2, 0x3B90
    ctx->pc = 0x432c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x432c14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x432c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x432c18: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x432c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x432c1c: 0x11800007  beqz        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x432C1Cu;
    {
        const bool branch_taken_0x432c1c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x432C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C1Cu;
        // 0x432c20: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c1c) {
            ctx->pc = 0x432C3Cu;
            goto label_432c3c;
        }
    }
    ctx->pc = 0x432C24u;
    // 0x432c24: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x432c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x432c28: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x432c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x432c2c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x432C2Cu;
    {
        const bool branch_taken_0x432c2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x432C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C2Cu;
        // 0x432c30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c2c) {
            ctx->pc = 0x432C4Cu;
            goto label_432c4c;
        }
    }
    ctx->pc = 0x432C34u;
    // 0x432c34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x432C34u;
    {
        const bool branch_taken_0x432c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C34u;
        // 0x432c38: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c34) {
            ctx->pc = 0x432C60u;
            goto label_432c60;
        }
    }
    ctx->pc = 0x432C3Cu;
label_432c3c:
    // 0x432c3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x432c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x432c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x432c44: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432C44u;
    {
        const bool branch_taken_0x432c44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x432C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C44u;
        // 0x432c48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c44) {
            ctx->pc = 0x432C5Cu;
            goto label_432c5c;
        }
    }
    ctx->pc = 0x432C4Cu;
label_432c4c:
    // 0x432c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x432c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x432c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x432c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x432c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x432C54u;
    {
        const bool branch_taken_0x432c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432C54u;
        // 0x432c58: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432c54) {
            ctx->pc = 0x432C74u;
            goto label_432c74;
        }
    }
    ctx->pc = 0x432C5Cu;
label_432c5c:
    // 0x432c5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x432c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_432c60:
    // 0x432c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x432c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x432c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x432c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x432c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x432c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x432c6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x432c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x432c70: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x432c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_432c74:
    // 0x432c74: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x432c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x432c78: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x432c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x432c7c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x432c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x432c80: 0x24c63b90  addiu       $a2, $a2, 0x3B90
    ctx->pc = 0x432c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x432c84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x432c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432c88: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x432c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x432c8c: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x432c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x432c90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x432c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x432c94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x432c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x432c98: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x432c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x432c9c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x432c9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x432ca0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x432ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x432ca4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432ca4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432ca8: 0x52d00  sll         $a1, $a1, 20
    ctx->pc = 0x432ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x432cac: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x432cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x432cb0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x432cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x432cb4: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x432cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x432cb8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x432cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432cbc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x432cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x432cc0: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x432cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x432cc4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432cc4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432cc8: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x432cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x432ccc: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x432cccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x432cd0: 0x3d12821  addu        $a1, $fp, $s1
    ctx->pc = 0x432cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x432cd4: 0xdf8aae50  ld          $t2, -0x51B0($gp)
    ctx->pc = 0x432cd4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 28), 4294946384)));
    // 0x432cd8: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x432cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x432cdc: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432cdcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432ce0: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x432ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x432ce4: 0x7c490020  sq          $t1, 0x20($v0)
    ctx->pc = 0x432ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 9));
    // 0x432ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x432ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432cec: 0xde4a0060  ld          $t2, 0x60($s2)
    ctx->pc = 0x432cecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x432cf0: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x432cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x432cf4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432cf4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432cf8: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x432cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x432cfc: 0x7c690030  sq          $t1, 0x30($v1)
    ctx->pc = 0x432cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 9));
    // 0x432d00: 0x24a500cf  addiu       $a1, $a1, 0xCF
    ctx->pc = 0x432d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 207));
    // 0x432d04: 0xde4a0070  ld          $t2, 0x70($s2)
    ctx->pc = 0x432d04u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x432d08: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x432d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x432d0c: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x432d0cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x432d10: 0x7c490040  sq          $t1, 0x40($v0)
    ctx->pc = 0x432d10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 9));
    // 0x432d14: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x432d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432d18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x432d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x432d1c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x432D1Cu;
    SET_GPR_U32(ctx, 31, 0x432D24u);
    ctx->pc = 0x432D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432D1Cu;
    // 0x432d20: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x432D1Cu, 0x432D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432D24u;
label_432d24:
    // 0x432d24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x432d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432d28: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x432d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x432d2c: 0x1440fe96  bnez        $v0, . + 4 + (-0x16A << 2)
    ctx->pc = 0x432D2Cu;
    {
        const bool branch_taken_0x432d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D2Cu;
        // 0x432d30: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432d2c) {
            ctx->pc = 0x432788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432788;
        }
    }
    ctx->pc = 0x432D34u;
    // 0x432d34: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x432d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x432d38: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x432d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x432d3c: 0x24833580  addiu       $v1, $a0, 0x3580
    ctx->pc = 0x432d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13696));
    // 0x432d40: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x432d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x432d44: 0x24a436c0  addiu       $a0, $a1, 0x36C0
    ctx->pc = 0x432d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
    // 0x432d48: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x432d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x432d4c: 0x24c53800  addiu       $a1, $a2, 0x3800
    ctx->pc = 0x432d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 14336));
    // 0x432d50: 0x24e23940  addiu       $v0, $a3, 0x3940
    ctx->pc = 0x432d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 14656));
    // 0x432d54: 0xae4203cc  sw          $v0, 0x3CC($s2)
    ctx->pc = 0x432d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 972), GPR_U32(ctx, 2));
    // 0x432d58: 0xae4303c0  sw          $v1, 0x3C0($s2)
    ctx->pc = 0x432d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 960), GPR_U32(ctx, 3));
    // 0x432d5c: 0xae4403c4  sw          $a0, 0x3C4($s2)
    ctx->pc = 0x432d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 964), GPR_U32(ctx, 4));
    // 0x432d60: 0xae4503c8  sw          $a1, 0x3C8($s2)
    ctx->pc = 0x432d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 968), GPR_U32(ctx, 5));
    // 0x432d64: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x432d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x432d68: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x432d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x432d6c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x432d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x432d70: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x432d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x432d74: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x432d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x432d78: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x432d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x432d7c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x432d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x432d80: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x432d80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x432d84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x432d84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x432d88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x432d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x432d8c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x432d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x432d90: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x432d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x432d94: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x432d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x432d98: 0x3e00008  jr          $ra
    ctx->pc = 0x432D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432D98u;
        // 0x432d9c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432DA0u;
}
