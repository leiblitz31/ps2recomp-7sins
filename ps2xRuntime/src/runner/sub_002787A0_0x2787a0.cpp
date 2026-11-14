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

// Function: sub_002787A0
// Address: 0x2787a0 - 0x278920
void sub_002787A0_0x2787a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787A0_0x2787a0");
#endif

    ctx->pc = 0x2787a0u;

    // 0x2787a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2787a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2787a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2787a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2787a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2787a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2787ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2787acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2787b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2787b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2787b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2787b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2787b8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2787b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2787bc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2787bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2787c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2787C0u;
    {
        const bool branch_taken_0x2787c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2787c0) {
            ctx->pc = 0x2787DCu;
            goto label_2787dc;
        }
    }
    ctx->pc = 0x2787C8u;
    // 0x2787c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2787c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2787cc: 0x0  nop
    ctx->pc = 0x2787ccu;
    // NOP
    // 0x2787d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2787d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2787d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2787D4u;
    {
        const bool branch_taken_0x2787d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2787d4) {
            ctx->pc = 0x2787F8u;
            goto label_2787f8;
        }
    }
    ctx->pc = 0x2787DCu;
label_2787dc:
    // 0x2787dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2787dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2787e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2787e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2787e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2787e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2787e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2787e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2787ec: 0x0  nop
    ctx->pc = 0x2787ecu;
    // NOP
    // 0x2787f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2787f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2787f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2787f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2787f8:
    // 0x2787f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2787f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2787fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2787fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278800: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278800u;
    {
        const bool branch_taken_0x278800 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x278800) {
            ctx->pc = 0x27881Cu;
            goto label_27881c;
        }
    }
    ctx->pc = 0x278808u;
    // 0x278808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27880c: 0x0  nop
    ctx->pc = 0x27880cu;
    // NOP
    // 0x278810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x278810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x278814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278814u;
    {
        const bool branch_taken_0x278814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278814) {
            ctx->pc = 0x278838u;
            goto label_278838;
        }
    }
    ctx->pc = 0x27881Cu;
label_27881c:
    // 0x27881c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27881cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x278820: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278824: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x278828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27882c: 0x0  nop
    ctx->pc = 0x27882cu;
    // NOP
    // 0x278830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x278830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x278834: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x278834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_278838:
    // 0x278838: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x278838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27883c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x27883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x278840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278844: 0x0  nop
    ctx->pc = 0x278844u;
    // NOP
    // 0x278848: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x278848u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27884c: 0x0  nop
    ctx->pc = 0x27884cu;
    // NOP
    // 0x278850: 0x0  nop
    ctx->pc = 0x278850u;
    // NOP
    // 0x278854: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x278854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x278858: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278858u;
    {
        const bool branch_taken_0x278858 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x278858) {
            ctx->pc = 0x278874u;
            goto label_278874;
        }
    }
    ctx->pc = 0x278860u;
    // 0x278860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278864: 0x0  nop
    ctx->pc = 0x278864u;
    // NOP
    // 0x278868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x278868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27886c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27886Cu;
    {
        const bool branch_taken_0x27886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27886c) {
            ctx->pc = 0x278890u;
            goto label_278890;
        }
    }
    ctx->pc = 0x278874u;
label_278874:
    // 0x278874: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x278878: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27887c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27887cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x278880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278884: 0x0  nop
    ctx->pc = 0x278884u;
    // NOP
    // 0x278888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x278888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27888c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27888cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_278890:
    // 0x278890: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x278890u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x278894: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x278898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27889c: 0x0  nop
    ctx->pc = 0x27889cu;
    // NOP
    // 0x2788a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2788a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2788a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2788A4u;
    {
        const bool branch_taken_0x2788a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2788a4) {
            ctx->pc = 0x2788BCu;
            goto label_2788bc;
        }
    }
    ctx->pc = 0x2788ACu;
    // 0x2788ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2788acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2788b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2788b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2788b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2788B4u;
    {
        const bool branch_taken_0x2788b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2788b4) {
            ctx->pc = 0x2788D0u;
            goto label_2788d0;
        }
    }
    ctx->pc = 0x2788BCu;
label_2788bc:
    // 0x2788bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2788bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2788c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2788c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2788c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2788c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2788c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2788c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2788cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2788ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2788d0:
    // 0x2788d0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x2788d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2788d4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2788d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2788d8: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x2788d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x2788dc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2788DCu;
    {
        const bool branch_taken_0x2788dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2788dc) {
            ctx->pc = 0x2788ECu;
            goto label_2788ec;
        }
    }
    ctx->pc = 0x2788E4u;
    // 0x2788e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2788e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2788e8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2788e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2788ec:
    // 0x2788ec: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x2788ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x2788f0: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x2788f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x2788f4: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x2788f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x2788f8: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x2788f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x2788fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2788fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278908: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x278908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27890c: 0x3e00008  jr          $ra
    ctx->pc = 0x27890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278914u;
    // 0x278914: 0x0  nop
    ctx->pc = 0x278914u;
    // NOP
    // 0x278918: 0x0  nop
    ctx->pc = 0x278918u;
    // NOP
    // 0x27891c: 0x0  nop
    ctx->pc = 0x27891cu;
    // NOP
    ctx->pc = 0x278920u;
}
