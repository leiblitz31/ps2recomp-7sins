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

// Function: sub_002116D0
// Address: 0x2116d0 - 0x211cb0
void sub_002116D0_0x2116d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002116D0_0x2116d0");
#endif

    switch (ctx->pc) {
        case 0x211700u: goto label_211700;
        case 0x211784u: goto label_211784;
        case 0x21180cu: goto label_21180c;
        case 0x2118a0u: goto label_2118a0;
        case 0x2118e4u: goto label_2118e4;
        case 0x211968u: goto label_211968;
        case 0x211978u: goto label_211978;
        case 0x2119e4u: goto label_2119e4;
        case 0x211a94u: goto label_211a94;
        case 0x211b18u: goto label_211b18;
        case 0x211b9cu: goto label_211b9c;
        case 0x211c20u: goto label_211c20;
        default: break;
    }

    ctx->pc = 0x2116d0u;

    // 0x2116d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2116d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2116d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2116d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2116d8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2116d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2116dc: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2116dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2116e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2116e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2116e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2116e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2116e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2116e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2116ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2116ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2116f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2116f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2116f4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2116f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2116f8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2116F8u;
    SET_GPR_U32(ctx, 31, 0x211700u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2116F8u, 0x211700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211700u;
label_211700:
    // 0x211700: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211700u;
    {
        const bool branch_taken_0x211700 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x211700) {
            ctx->pc = 0x21171Cu;
            goto label_21171c;
        }
    }
    ctx->pc = 0x211708u;
    // 0x211708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21170c: 0x0  nop
    ctx->pc = 0x21170cu;
    // NOP
    // 0x211710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211714u;
    {
        const bool branch_taken_0x211714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211714) {
            ctx->pc = 0x211738u;
            goto label_211738;
        }
    }
    ctx->pc = 0x21171Cu;
label_21171c:
    // 0x21171c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x21171cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211720: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21172c: 0x0  nop
    ctx->pc = 0x21172cu;
    // NOP
    // 0x211730: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211734: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211738:
    // 0x211738: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x211738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x21173c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21173cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211740: 0x0  nop
    ctx->pc = 0x211740u;
    // NOP
    // 0x211744: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211744u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211748: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21174c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x21174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211750: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211754: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x211754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211758: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x211758u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21175c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211760: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x211760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211768: 0x0  nop
    ctx->pc = 0x211768u;
    // NOP
    // 0x21176c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x21176cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211770: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211770u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211774: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211778: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x211778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x21177c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x21177Cu;
    SET_GPR_U32(ctx, 31, 0x211784u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x21177Cu, 0x211784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211784u;
label_211784:
    // 0x211784: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211784u;
    {
        const bool branch_taken_0x211784 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x211784) {
            ctx->pc = 0x2117A0u;
            goto label_2117a0;
        }
    }
    ctx->pc = 0x21178Cu;
    // 0x21178c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21178cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211790: 0x0  nop
    ctx->pc = 0x211790u;
    // NOP
    // 0x211794: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211798: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211798u;
    {
        const bool branch_taken_0x211798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211798) {
            ctx->pc = 0x2117BCu;
            goto label_2117bc;
        }
    }
    ctx->pc = 0x2117A0u;
label_2117a0:
    // 0x2117a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2117a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2117a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2117a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2117a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2117a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2117ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2117acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2117b0: 0x0  nop
    ctx->pc = 0x2117b0u;
    // NOP
    // 0x2117b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2117b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2117b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2117b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2117bc:
    // 0x2117bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2117bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2117c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2117c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2117c4: 0x0  nop
    ctx->pc = 0x2117c4u;
    // NOP
    // 0x2117c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2117c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2117cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2117d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2117d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2117d4: 0x0  nop
    ctx->pc = 0x2117d4u;
    // NOP
    // 0x2117d8: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2117d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2117dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2117dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2117e0: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2117e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2117e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2117e8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2117e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2117ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2117ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2117f0: 0x0  nop
    ctx->pc = 0x2117f0u;
    // NOP
    // 0x2117f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2117f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2117f8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2117f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2117fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211800: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x211800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x211804: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x211804u;
    SET_GPR_U32(ctx, 31, 0x21180Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x211804u, 0x21180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21180Cu;
label_21180c:
    // 0x21180c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21180Cu;
    {
        const bool branch_taken_0x21180c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21180c) {
            ctx->pc = 0x211828u;
            goto label_211828;
        }
    }
    ctx->pc = 0x211814u;
    // 0x211814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211818: 0x0  nop
    ctx->pc = 0x211818u;
    // NOP
    // 0x21181c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21181cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211820u;
    {
        const bool branch_taken_0x211820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211820) {
            ctx->pc = 0x211844u;
            goto label_211844;
        }
    }
    ctx->pc = 0x211828u;
label_211828:
    // 0x211828: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x21182c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211838: 0x0  nop
    ctx->pc = 0x211838u;
    // NOP
    // 0x21183c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21183cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211840: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211844:
    // 0x211844: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x211848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21184c: 0x0  nop
    ctx->pc = 0x21184cu;
    // NOP
    // 0x211850: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x211850u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211854: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x211858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21185c: 0x0  nop
    ctx->pc = 0x21185cu;
    // NOP
    // 0x211860: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x211860u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211864: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211868: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x211868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21186c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211870: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x211870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211878: 0x0  nop
    ctx->pc = 0x211878u;
    // NOP
    // 0x21187c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x21187cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211880: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211880u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211884: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211888: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x211888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21188c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211890: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211894: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211894u;
    {
        const bool branch_taken_0x211894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211894) {
            ctx->pc = 0x2118BCu;
            goto label_2118bc;
        }
    }
    ctx->pc = 0x21189Cu;
    // 0x21189c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x21189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2118a0:
    // 0x2118a0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2118a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2118a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2118a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2118a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2118ac: 0x0  nop
    ctx->pc = 0x2118acu;
    // NOP
    // 0x2118b0: 0x0  nop
    ctx->pc = 0x2118b0u;
    // NOP
    // 0x2118b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2118B4u;
    {
        const bool branch_taken_0x2118b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2118b4) {
            ctx->pc = 0x2118A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2118a0;
        }
    }
    ctx->pc = 0x2118BCu;
label_2118bc:
    // 0x2118bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2118c0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2118c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2118c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2118c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2118c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2118c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2118cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2118d0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2118d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2118d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2118d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2118d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2118d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2118dc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2118DCu;
    SET_GPR_U32(ctx, 31, 0x2118E4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2118DCu, 0x2118E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118E4u;
label_2118e4:
    // 0x2118e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2118E4u;
    {
        const bool branch_taken_0x2118e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2118e4) {
            ctx->pc = 0x211900u;
            goto label_211900;
        }
    }
    ctx->pc = 0x2118ECu;
    // 0x2118ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2118ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2118f0: 0x0  nop
    ctx->pc = 0x2118f0u;
    // NOP
    // 0x2118f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2118f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2118f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2118F8u;
    {
        const bool branch_taken_0x2118f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2118f8) {
            ctx->pc = 0x21191Cu;
            goto label_21191c;
        }
    }
    ctx->pc = 0x211900u;
label_211900:
    // 0x211900: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211904: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211908: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21190c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21190cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211910: 0x0  nop
    ctx->pc = 0x211910u;
    // NOP
    // 0x211914: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211918: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_21191c:
    // 0x21191c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x21191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x211920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211924: 0x0  nop
    ctx->pc = 0x211924u;
    // NOP
    // 0x211928: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211928u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x21192c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211930: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x211930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211934: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211938: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x211938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21193c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x21193cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211940: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211944: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x211944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21194c: 0x0  nop
    ctx->pc = 0x21194cu;
    // NOP
    // 0x211950: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211950u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211954: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211954u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211958: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x211958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x21195c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x21195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x211960: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x211960u;
    SET_GPR_U32(ctx, 31, 0x211968u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x211960u, 0x211968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211968u;
label_211968:
    // 0x211968: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x211968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21196c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x21196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x211970: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x211970u;
    SET_GPR_U32(ctx, 31, 0x211978u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x211970u, 0x211978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211978u;
label_211978:
    // 0x211978: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x211978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21197c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211980: 0xc443003c  lwc1        $f3, 0x3C($v0)
    ctx->pc = 0x211980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211984: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x211984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211988: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x211988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21198c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x211990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211998: 0x0  nop
    ctx->pc = 0x211998u;
    // NOP
    // 0x21199c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x21199cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2119a0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2119a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2119a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2119a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2119a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2119a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2119ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2119acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2119b0: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x2119b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2119b4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2119b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2119b8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2119b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2119bc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2119bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2119c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2119c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2119c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2119c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2119c8: 0x0  nop
    ctx->pc = 0x2119c8u;
    // NOP
    // 0x2119cc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2119ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2119d0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2119d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2119d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2119d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2119d8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2119d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2119dc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2119DCu;
    SET_GPR_U32(ctx, 31, 0x2119E4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2119DCu, 0x2119E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119E4u;
label_2119e4:
    // 0x2119e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2119E4u;
    {
        const bool branch_taken_0x2119e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2119e4) {
            ctx->pc = 0x211A00u;
            goto label_211a00;
        }
    }
    ctx->pc = 0x2119ECu;
    // 0x2119ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2119ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2119f0: 0x0  nop
    ctx->pc = 0x2119f0u;
    // NOP
    // 0x2119f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2119f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2119f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2119F8u;
    {
        const bool branch_taken_0x2119f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119f8) {
            ctx->pc = 0x211A1Cu;
            goto label_211a1c;
        }
    }
    ctx->pc = 0x211A00u;
label_211a00:
    // 0x211a00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211a10: 0x0  nop
    ctx->pc = 0x211a10u;
    // NOP
    // 0x211a14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211a18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211a1c:
    // 0x211a1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x211a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x211a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211a24: 0x0  nop
    ctx->pc = 0x211a24u;
    // NOP
    // 0x211a28: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211a28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211a2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211a30: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x211a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211a34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211a38: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x211a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211a3c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x211a3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211a40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211a44: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x211a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211a4c: 0x0  nop
    ctx->pc = 0x211a4cu;
    // NOP
    // 0x211a50: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211a50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211a54: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211a58: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x211a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x211a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211a60: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x211a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211a64: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x211a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211a68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x211a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211a6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211a70: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x211a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x211a74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211a78: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x211a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211a7c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x211a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211a80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x211a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211a84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211a88: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x211a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x211a8c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x211A8Cu;
    SET_GPR_U32(ctx, 31, 0x211A94u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x211A8Cu, 0x211A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A94u;
label_211a94:
    // 0x211a94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211A94u;
    {
        const bool branch_taken_0x211a94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x211a94) {
            ctx->pc = 0x211AB0u;
            goto label_211ab0;
        }
    }
    ctx->pc = 0x211A9Cu;
    // 0x211a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211aa0: 0x0  nop
    ctx->pc = 0x211aa0u;
    // NOP
    // 0x211aa4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211aa8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211AA8u;
    {
        const bool branch_taken_0x211aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211aa8) {
            ctx->pc = 0x211ACCu;
            goto label_211acc;
        }
    }
    ctx->pc = 0x211AB0u;
label_211ab0:
    // 0x211ab0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211ab4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211ab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211ac0: 0x0  nop
    ctx->pc = 0x211ac0u;
    // NOP
    // 0x211ac4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211ac8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211acc:
    // 0x211acc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x211ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211ad4: 0x0  nop
    ctx->pc = 0x211ad4u;
    // NOP
    // 0x211ad8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211ad8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211adc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211ae0: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x211ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211ae4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211ae8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x211ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211aec: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x211aecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211af0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211af4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x211af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211afc: 0x0  nop
    ctx->pc = 0x211afcu;
    // NOP
    // 0x211b00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211b00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211b04: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211b08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211b0c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x211b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x211b10: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x211B10u;
    SET_GPR_U32(ctx, 31, 0x211B18u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x211B10u, 0x211B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B18u;
label_211b18:
    // 0x211b18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211B18u;
    {
        const bool branch_taken_0x211b18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x211b18) {
            ctx->pc = 0x211B34u;
            goto label_211b34;
        }
    }
    ctx->pc = 0x211B20u;
    // 0x211b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b24: 0x0  nop
    ctx->pc = 0x211b24u;
    // NOP
    // 0x211b28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211b2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211B2Cu;
    {
        const bool branch_taken_0x211b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b2c) {
            ctx->pc = 0x211B50u;
            goto label_211b50;
        }
    }
    ctx->pc = 0x211B34u;
label_211b34:
    // 0x211b34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211b38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211b3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b44: 0x0  nop
    ctx->pc = 0x211b44u;
    // NOP
    // 0x211b48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211b4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211b50:
    // 0x211b50: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x211b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x211b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b58: 0x0  nop
    ctx->pc = 0x211b58u;
    // NOP
    // 0x211b5c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211b5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211b60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211b64: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x211b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211b68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211b6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x211b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211b70: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x211b70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211b74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211b78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x211b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b80: 0x0  nop
    ctx->pc = 0x211b80u;
    // NOP
    // 0x211b84: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211b84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211b88: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211b8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211b90: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x211b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x211b94: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x211B94u;
    SET_GPR_U32(ctx, 31, 0x211B9Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x211B94u, 0x211B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B9Cu;
label_211b9c:
    // 0x211b9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211B9Cu;
    {
        const bool branch_taken_0x211b9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x211b9c) {
            ctx->pc = 0x211BB8u;
            goto label_211bb8;
        }
    }
    ctx->pc = 0x211BA4u;
    // 0x211ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211ba8: 0x0  nop
    ctx->pc = 0x211ba8u;
    // NOP
    // 0x211bac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211BB0u;
    {
        const bool branch_taken_0x211bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211bb0) {
            ctx->pc = 0x211BD4u;
            goto label_211bd4;
        }
    }
    ctx->pc = 0x211BB8u;
label_211bb8:
    // 0x211bb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211bbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211bc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x211bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211bc8: 0x0  nop
    ctx->pc = 0x211bc8u;
    // NOP
    // 0x211bcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211bd0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211bd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211bd4:
    // 0x211bd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x211bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x211bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211bdc: 0x0  nop
    ctx->pc = 0x211bdcu;
    // NOP
    // 0x211be0: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211be0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211be4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211be8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x211be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211bec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211bf0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x211bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211bf4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x211bf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211bf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211bfc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x211bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c04: 0x0  nop
    ctx->pc = 0x211c04u;
    // NOP
    // 0x211c08: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211c08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211c0c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211c10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211c14: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x211c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x211c18: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x211C18u;
    SET_GPR_U32(ctx, 31, 0x211C20u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x211C18u, 0x211C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C20u;
label_211c20:
    // 0x211c20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211C20u;
    {
        const bool branch_taken_0x211c20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x211c20) {
            ctx->pc = 0x211C3Cu;
            goto label_211c3c;
        }
    }
    ctx->pc = 0x211C28u;
    // 0x211c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c2c: 0x0  nop
    ctx->pc = 0x211c2cu;
    // NOP
    // 0x211c30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211c34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211C34u;
    {
        const bool branch_taken_0x211c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211c34) {
            ctx->pc = 0x211C58u;
            goto label_211c58;
        }
    }
    ctx->pc = 0x211C3Cu;
label_211c3c:
    // 0x211c3c: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x211c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211c40: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x211c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211c44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x211c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x211c48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211c48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c4c: 0x0  nop
    ctx->pc = 0x211c4cu;
    // NOP
    // 0x211c50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x211c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211c54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x211c54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_211c58:
    // 0x211c58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x211c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x211c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c60: 0x0  nop
    ctx->pc = 0x211c60u;
    // NOP
    // 0x211c64: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x211c64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211c68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211c6c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x211c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211c70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211c74: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x211c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211c78: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x211c78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211c7c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211c80: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x211c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211c84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c88: 0x0  nop
    ctx->pc = 0x211c88u;
    // NOP
    // 0x211c8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211c8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211c90: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211c94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211c98: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x211c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x211c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211ca0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x211ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x211CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211CACu;
    // 0x211cac: 0x0  nop
    ctx->pc = 0x211cacu;
    // NOP
    ctx->pc = 0x211cb0u;
}
