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

// Function: sub_002182C0
// Address: 0x2182c0 - 0x218560
void sub_002182C0_0x2182c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002182C0_0x2182c0");
#endif

    switch (ctx->pc) {
        case 0x2182c0u: goto label_2182c0;
        case 0x2182c4u: goto label_2182c4;
        case 0x2182c8u: goto label_2182c8;
        case 0x2182ccu: goto label_2182cc;
        case 0x2182d0u: goto label_2182d0;
        case 0x2182d4u: goto label_2182d4;
        case 0x2182d8u: goto label_2182d8;
        case 0x2182dcu: goto label_2182dc;
        case 0x2182e0u: goto label_2182e0;
        case 0x2182e4u: goto label_2182e4;
        case 0x2182e8u: goto label_2182e8;
        case 0x2182ecu: goto label_2182ec;
        case 0x2182f0u: goto label_2182f0;
        case 0x2182f4u: goto label_2182f4;
        case 0x2182f8u: goto label_2182f8;
        case 0x2182fcu: goto label_2182fc;
        case 0x218300u: goto label_218300;
        case 0x218304u: goto label_218304;
        case 0x218308u: goto label_218308;
        case 0x21830cu: goto label_21830c;
        case 0x218310u: goto label_218310;
        case 0x218314u: goto label_218314;
        case 0x218318u: goto label_218318;
        case 0x21831cu: goto label_21831c;
        case 0x218320u: goto label_218320;
        case 0x218324u: goto label_218324;
        case 0x218328u: goto label_218328;
        case 0x21832cu: goto label_21832c;
        case 0x218330u: goto label_218330;
        case 0x218334u: goto label_218334;
        case 0x218338u: goto label_218338;
        case 0x21833cu: goto label_21833c;
        case 0x218340u: goto label_218340;
        case 0x218344u: goto label_218344;
        case 0x218348u: goto label_218348;
        case 0x21834cu: goto label_21834c;
        case 0x218350u: goto label_218350;
        case 0x218354u: goto label_218354;
        case 0x218358u: goto label_218358;
        case 0x21835cu: goto label_21835c;
        case 0x218360u: goto label_218360;
        case 0x218364u: goto label_218364;
        case 0x218368u: goto label_218368;
        case 0x21836cu: goto label_21836c;
        case 0x218370u: goto label_218370;
        case 0x218374u: goto label_218374;
        case 0x218378u: goto label_218378;
        case 0x21837cu: goto label_21837c;
        case 0x218380u: goto label_218380;
        case 0x218384u: goto label_218384;
        case 0x218388u: goto label_218388;
        case 0x21838cu: goto label_21838c;
        case 0x218390u: goto label_218390;
        case 0x218394u: goto label_218394;
        case 0x218398u: goto label_218398;
        case 0x21839cu: goto label_21839c;
        case 0x2183a0u: goto label_2183a0;
        case 0x2183a4u: goto label_2183a4;
        case 0x2183a8u: goto label_2183a8;
        case 0x2183acu: goto label_2183ac;
        case 0x2183b0u: goto label_2183b0;
        case 0x2183b4u: goto label_2183b4;
        case 0x2183b8u: goto label_2183b8;
        case 0x2183bcu: goto label_2183bc;
        case 0x2183c0u: goto label_2183c0;
        case 0x2183c4u: goto label_2183c4;
        case 0x2183c8u: goto label_2183c8;
        case 0x2183ccu: goto label_2183cc;
        case 0x2183d0u: goto label_2183d0;
        case 0x2183d4u: goto label_2183d4;
        case 0x2183d8u: goto label_2183d8;
        case 0x2183dcu: goto label_2183dc;
        case 0x2183e0u: goto label_2183e0;
        case 0x2183e4u: goto label_2183e4;
        case 0x2183e8u: goto label_2183e8;
        case 0x2183ecu: goto label_2183ec;
        case 0x2183f0u: goto label_2183f0;
        case 0x2183f4u: goto label_2183f4;
        case 0x2183f8u: goto label_2183f8;
        case 0x2183fcu: goto label_2183fc;
        case 0x218400u: goto label_218400;
        case 0x218404u: goto label_218404;
        case 0x218408u: goto label_218408;
        case 0x21840cu: goto label_21840c;
        case 0x218410u: goto label_218410;
        case 0x218414u: goto label_218414;
        case 0x218418u: goto label_218418;
        case 0x21841cu: goto label_21841c;
        case 0x218420u: goto label_218420;
        case 0x218424u: goto label_218424;
        case 0x218428u: goto label_218428;
        case 0x21842cu: goto label_21842c;
        case 0x218430u: goto label_218430;
        case 0x218434u: goto label_218434;
        case 0x218438u: goto label_218438;
        case 0x21843cu: goto label_21843c;
        case 0x218440u: goto label_218440;
        case 0x218444u: goto label_218444;
        case 0x218448u: goto label_218448;
        case 0x21844cu: goto label_21844c;
        case 0x218450u: goto label_218450;
        case 0x218454u: goto label_218454;
        case 0x218458u: goto label_218458;
        case 0x21845cu: goto label_21845c;
        case 0x218460u: goto label_218460;
        case 0x218464u: goto label_218464;
        case 0x218468u: goto label_218468;
        case 0x21846cu: goto label_21846c;
        case 0x218470u: goto label_218470;
        case 0x218474u: goto label_218474;
        case 0x218478u: goto label_218478;
        case 0x21847cu: goto label_21847c;
        case 0x218480u: goto label_218480;
        case 0x218484u: goto label_218484;
        case 0x218488u: goto label_218488;
        case 0x21848cu: goto label_21848c;
        case 0x218490u: goto label_218490;
        case 0x218494u: goto label_218494;
        case 0x218498u: goto label_218498;
        case 0x21849cu: goto label_21849c;
        case 0x2184a0u: goto label_2184a0;
        case 0x2184a4u: goto label_2184a4;
        case 0x2184a8u: goto label_2184a8;
        case 0x2184acu: goto label_2184ac;
        case 0x2184b0u: goto label_2184b0;
        case 0x2184b4u: goto label_2184b4;
        case 0x2184b8u: goto label_2184b8;
        case 0x2184bcu: goto label_2184bc;
        case 0x2184c0u: goto label_2184c0;
        case 0x2184c4u: goto label_2184c4;
        case 0x2184c8u: goto label_2184c8;
        case 0x2184ccu: goto label_2184cc;
        case 0x2184d0u: goto label_2184d0;
        case 0x2184d4u: goto label_2184d4;
        case 0x2184d8u: goto label_2184d8;
        case 0x2184dcu: goto label_2184dc;
        case 0x2184e0u: goto label_2184e0;
        case 0x2184e4u: goto label_2184e4;
        case 0x2184e8u: goto label_2184e8;
        case 0x2184ecu: goto label_2184ec;
        case 0x2184f0u: goto label_2184f0;
        case 0x2184f4u: goto label_2184f4;
        case 0x2184f8u: goto label_2184f8;
        case 0x2184fcu: goto label_2184fc;
        case 0x218500u: goto label_218500;
        case 0x218504u: goto label_218504;
        case 0x218508u: goto label_218508;
        case 0x21850cu: goto label_21850c;
        case 0x218510u: goto label_218510;
        case 0x218514u: goto label_218514;
        case 0x218518u: goto label_218518;
        case 0x21851cu: goto label_21851c;
        case 0x218520u: goto label_218520;
        case 0x218524u: goto label_218524;
        case 0x218528u: goto label_218528;
        case 0x21852cu: goto label_21852c;
        case 0x218530u: goto label_218530;
        case 0x218534u: goto label_218534;
        case 0x218538u: goto label_218538;
        case 0x21853cu: goto label_21853c;
        case 0x218540u: goto label_218540;
        case 0x218544u: goto label_218544;
        case 0x218548u: goto label_218548;
        case 0x21854cu: goto label_21854c;
        case 0x218550u: goto label_218550;
        case 0x218554u: goto label_218554;
        case 0x218558u: goto label_218558;
        case 0x21855cu: goto label_21855c;
        default: break;
    }

    ctx->pc = 0x2182c0u;

label_2182c0:
    // 0x2182c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2182c4:
    // 0x2182c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2182c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2182c8:
    // 0x2182c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2182c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2182cc:
    // 0x2182cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2182ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2182d0:
    // 0x2182d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2182d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2182d4:
    // 0x2182d4: 0xc11904c  jal         func_464130
label_2182d8:
    if (ctx->pc == 0x2182D8u) {
        ctx->pc = 0x2182DCu;
        goto label_2182dc;
    }
    ctx->pc = 0x2182D4u;
    SET_GPR_U32(ctx, 31, 0x2182DCu);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x2182D4u, 0x2182DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182DCu;
label_2182dc:
    // 0x2182dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2182e0:
    // 0x2182e0: 0xfc620028  sd          $v0, 0x28($v1)
    ctx->pc = 0x2182e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
label_2182e4:
    // 0x2182e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2182e8:
    // 0x2182e8: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x2182e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_2182ec:
    // 0x2182ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2182ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2182f0:
    // 0x2182f0: 0xdc420030  ld          $v0, 0x30($v0)
    ctx->pc = 0x2182f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_2182f4:
    // 0x2182f4: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x2182f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2182f8:
    // 0x2182f8: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x2182f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_2182fc:
    // 0x2182fc: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2182fcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_218300:
    // 0x218300: 0x2e2103e9  sltiu       $at, $s1, 0x3E9
    ctx->pc = 0x218300u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
label_218304:
    // 0x218304: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_218308:
    if (ctx->pc == 0x218308u) {
        ctx->pc = 0x21830Cu;
        goto label_21830c;
    }
    ctx->pc = 0x218304u;
    {
        const bool branch_taken_0x218304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x218304) {
            ctx->pc = 0x218310u;
            goto label_218310;
        }
    }
    ctx->pc = 0x21830Cu;
label_21830c:
    // 0x21830c: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x21830cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_218310:
    // 0x218310: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x218310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_218314:
    // 0x218314: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x218314u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_218318:
    // 0x218318: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x218318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21831c:
    // 0x21831c: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x21831cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
label_218320:
    // 0x218320: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_218324:
    if (ctx->pc == 0x218324u) {
        ctx->pc = 0x218328u;
        goto label_218328;
    }
    ctx->pc = 0x218320u;
    {
        const bool branch_taken_0x218320 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x218320) {
            ctx->pc = 0x21833Cu;
            goto label_21833c;
        }
    }
    ctx->pc = 0x218328u;
label_218328:
    // 0x218328: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x218328u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21832c:
    // 0x21832c: 0x0  nop
    ctx->pc = 0x21832cu;
    // NOP
label_218330:
    // 0x218330: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x218330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_218334:
    // 0x218334: 0x10000008  b           . + 4 + (0x8 << 2)
label_218338:
    if (ctx->pc == 0x218338u) {
        ctx->pc = 0x21833Cu;
        goto label_21833c;
    }
    ctx->pc = 0x218334u;
    {
        const bool branch_taken_0x218334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218334) {
            ctx->pc = 0x218358u;
            goto label_218358;
        }
    }
    ctx->pc = 0x21833Cu;
label_21833c:
    // 0x21833c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x21833cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_218340:
    // 0x218340: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x218340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_218344:
    // 0x218344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x218344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_218348:
    // 0x218348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21834c:
    // 0x21834c: 0x0  nop
    ctx->pc = 0x21834cu;
    // NOP
label_218350:
    // 0x218350: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x218350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_218354:
    // 0x218354: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x218354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_218358:
    // 0x218358: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x218358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_21835c:
    // 0x21835c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21835cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218360:
    // 0x218360: 0x0  nop
    ctx->pc = 0x218360u;
    // NOP
label_218364:
    // 0x218364: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x218364u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_218368:
    // 0x218368: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x218368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_21836c:
    // 0x21836c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21836cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_218370:
    // 0x218370: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x218370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_218374:
    // 0x218374: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x218374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_218378:
    // 0x218378: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x218378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21837c:
    // 0x21837c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x21837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218380:
    // 0x218380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x218380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_218384:
    // 0x218384: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x218384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_218388:
    // 0x218388: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x218388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_21838c:
    // 0x21838c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_218390:
    // 0x218390: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x218390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_218394:
    // 0x218394: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x218394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_218398:
    // 0x218398: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x218398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21839c:
    // 0x21839c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21839cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2183a0:
    // 0x2183a0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2183a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2183a4:
    // 0x2183a4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2183a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2183a8:
    // 0x2183a8: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2183a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2183ac:
    // 0x2183ac: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2183acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2183b0:
    // 0x2183b0: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2183b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2183b4:
    // 0x2183b4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2183b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2183b8:
    // 0x2183b8: 0xc0858c4  jal         func_216310
label_2183bc:
    if (ctx->pc == 0x2183BCu) {
        ctx->pc = 0x2183C0u;
        goto label_2183c0;
    }
    ctx->pc = 0x2183B8u;
    SET_GPR_U32(ctx, 31, 0x2183C0u);
    ctx->pc = 0x216310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216310u, 0x2183B8u, 0x2183C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183C0u;
label_2183c0:
    // 0x2183c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2183c4:
    // 0x2183c4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2183c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2183c8:
    // 0x2183c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2183cc:
    // 0x2183cc: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2183ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2183d0:
    // 0x2183d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2183d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2183d4:
    // 0x2183d4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2183d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2183d8:
    // 0x2183d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2183d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2183dc:
    // 0x2183dc: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x2183dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_2183e0:
    // 0x2183e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2183e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2183e4:
    // 0x2183e4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2183e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2183e8:
    // 0x2183e8: 0x2c4103e9  sltiu       $at, $v0, 0x3E9
    ctx->pc = 0x2183e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
label_2183ec:
    // 0x2183ec: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
label_2183f0:
    if (ctx->pc == 0x2183F0u) {
        ctx->pc = 0x2183F4u;
        goto label_2183f4;
    }
    ctx->pc = 0x2183ECu;
    {
        const bool branch_taken_0x2183ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2183ec) {
            ctx->pc = 0x2184ECu;
            goto label_2184ec;
        }
    }
    ctx->pc = 0x2183F4u;
label_2183f4:
    // 0x2183f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2183f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2183f8:
    // 0x2183f8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2183f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2183fc:
    // 0x2183fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_218400:
    if (ctx->pc == 0x218400u) {
        ctx->pc = 0x218404u;
        goto label_218404;
    }
    ctx->pc = 0x2183FCu;
    {
        const bool branch_taken_0x2183fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2183fc) {
            ctx->pc = 0x218418u;
            goto label_218418;
        }
    }
    ctx->pc = 0x218404u;
label_218404:
    // 0x218404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218408:
    // 0x218408: 0x0  nop
    ctx->pc = 0x218408u;
    // NOP
label_21840c:
    // 0x21840c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21840cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_218410:
    // 0x218410: 0x10000008  b           . + 4 + (0x8 << 2)
label_218414:
    if (ctx->pc == 0x218414u) {
        ctx->pc = 0x218418u;
        goto label_218418;
    }
    ctx->pc = 0x218410u;
    {
        const bool branch_taken_0x218410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218410) {
            ctx->pc = 0x218434u;
            goto label_218434;
        }
    }
    ctx->pc = 0x218418u;
label_218418:
    // 0x218418: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x218418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_21841c:
    // 0x21841c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_218420:
    // 0x218420: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x218420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_218424:
    // 0x218424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218428:
    // 0x218428: 0x0  nop
    ctx->pc = 0x218428u;
    // NOP
label_21842c:
    // 0x21842c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21842cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_218430:
    // 0x218430: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x218430u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_218434:
    // 0x218434: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x218434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_218438:
    // 0x218438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21843c:
    // 0x21843c: 0x0  nop
    ctx->pc = 0x21843cu;
    // NOP
label_218440:
    // 0x218440: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x218440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_218444:
    // 0x218444: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x218444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_218448:
    // 0x218448: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x218448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21844c:
    // 0x21844c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_218450:
    if (ctx->pc == 0x218450u) {
        ctx->pc = 0x218454u;
        goto label_218454;
    }
    ctx->pc = 0x21844Cu;
    {
        const bool branch_taken_0x21844c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21844c) {
            ctx->pc = 0x218468u;
            goto label_218468;
        }
    }
    ctx->pc = 0x218454u;
label_218454:
    // 0x218454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218458:
    // 0x218458: 0x0  nop
    ctx->pc = 0x218458u;
    // NOP
label_21845c:
    // 0x21845c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21845cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218460:
    // 0x218460: 0x10000008  b           . + 4 + (0x8 << 2)
label_218464:
    if (ctx->pc == 0x218464u) {
        ctx->pc = 0x218468u;
        goto label_218468;
    }
    ctx->pc = 0x218460u;
    {
        const bool branch_taken_0x218460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218460) {
            ctx->pc = 0x218484u;
            goto label_218484;
        }
    }
    ctx->pc = 0x218468u;
label_218468:
    // 0x218468: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x218468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_21846c:
    // 0x21846c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_218470:
    // 0x218470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x218470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_218474:
    // 0x218474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218478:
    // 0x218478: 0x0  nop
    ctx->pc = 0x218478u;
    // NOP
label_21847c:
    // 0x21847c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21847cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218480:
    // 0x218480: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x218480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_218484:
    // 0x218484: 0x0  nop
    ctx->pc = 0x218484u;
    // NOP
label_218488:
    // 0x218488: 0x0  nop
    ctx->pc = 0x218488u;
    // NOP
label_21848c:
    // 0x21848c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x21848cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_218490:
    // 0x218490: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_218494:
    // 0x218494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218498:
    // 0x218498: 0x0  nop
    ctx->pc = 0x218498u;
    // NOP
label_21849c:
    // 0x21849c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21849cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2184a0:
    // 0x2184a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2184a4:
    if (ctx->pc == 0x2184A4u) {
        ctx->pc = 0x2184A8u;
        goto label_2184a8;
    }
    ctx->pc = 0x2184A0u;
    {
        const bool branch_taken_0x2184a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2184a0) {
            ctx->pc = 0x2184B8u;
            goto label_2184b8;
        }
    }
    ctx->pc = 0x2184A8u;
label_2184a8:
    // 0x2184a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2184a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2184ac:
    // 0x2184ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2184acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2184b0:
    // 0x2184b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2184b4:
    if (ctx->pc == 0x2184B4u) {
        ctx->pc = 0x2184B8u;
        goto label_2184b8;
    }
    ctx->pc = 0x2184B0u;
    {
        const bool branch_taken_0x2184b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2184b0) {
            ctx->pc = 0x2184CCu;
            goto label_2184cc;
        }
    }
    ctx->pc = 0x2184B8u;
label_2184b8:
    // 0x2184b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2184b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2184bc:
    // 0x2184bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2184bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2184c0:
    // 0x2184c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2184c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2184c4:
    // 0x2184c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2184c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2184c8:
    // 0x2184c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2184c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2184cc:
    // 0x2184cc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2184ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2184d0:
    // 0x2184d0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2184d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_2184d4:
    // 0x2184d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2184d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2184d8:
    // 0x2184d8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2184d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2184dc:
    // 0x2184dc: 0x2442fc18  addiu       $v0, $v0, -0x3E8
    ctx->pc = 0x2184dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
label_2184e0:
    // 0x2184e0: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2184e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2184e4:
    // 0x2184e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2184e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2184e8:
    // 0x2184e8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2184e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_2184ec:
    // 0x2184ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2184ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2184f0:
    // 0x2184f0: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2184f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2184f4:
    // 0x2184f4: 0xc085f54  jal         func_217D50
label_2184f8:
    if (ctx->pc == 0x2184F8u) {
        ctx->pc = 0x2184FCu;
        goto label_2184fc;
    }
    ctx->pc = 0x2184F4u;
    SET_GPR_U32(ctx, 31, 0x2184FCu);
    ctx->pc = 0x217D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D50u, 0x2184F4u, 0x2184FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184FCu;
label_2184fc:
    // 0x2184fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2184fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218500:
    // 0x218500: 0x10000008  b           . + 4 + (0x8 << 2)
label_218504:
    if (ctx->pc == 0x218504u) {
        ctx->pc = 0x218508u;
        goto label_218508;
    }
    ctx->pc = 0x218500u;
    {
        const bool branch_taken_0x218500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218500) {
            ctx->pc = 0x218524u;
            goto label_218524;
        }
    }
    ctx->pc = 0x218508u;
label_218508:
    // 0x218508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21850c:
    // 0x21850c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x21850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_218510:
    // 0x218510: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x218510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_218514:
    // 0x218514: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x218514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_218518:
    // 0x218518: 0x40f809  jalr        $v0
label_21851c:
    if (ctx->pc == 0x21851Cu) {
        ctx->pc = 0x218520u;
        goto label_218520;
    }
    ctx->pc = 0x218518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218520u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218518u, 0x218520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218520u;
label_218520:
    // 0x218520: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x218520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_218524:
    // 0x218524: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x218524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_218528:
    // 0x218528: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x218528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_21852c:
    // 0x21852c: 0xc085f44  jal         func_217D10
label_218530:
    if (ctx->pc == 0x218530u) {
        ctx->pc = 0x218534u;
        goto label_218534;
    }
    ctx->pc = 0x21852Cu;
    SET_GPR_U32(ctx, 31, 0x218534u);
    ctx->pc = 0x217D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D10u, 0x21852Cu, 0x218534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218534u;
label_218534:
    // 0x218534: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_218538:
    if (ctx->pc == 0x218538u) {
        ctx->pc = 0x21853Cu;
        goto label_21853c;
    }
    ctx->pc = 0x218534u;
    {
        const bool branch_taken_0x218534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x218534) {
            ctx->pc = 0x218508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218508;
        }
    }
    ctx->pc = 0x21853Cu;
label_21853c:
    // 0x21853c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21853cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_218540:
    // 0x218540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_218544:
    // 0x218544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218548:
    // 0x218548: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_21854c:
    // 0x21854c: 0x3e00008  jr          $ra
label_218550:
    if (ctx->pc == 0x218550u) {
        ctx->pc = 0x218554u;
        goto label_218554;
    }
    ctx->pc = 0x21854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218554u;
label_218554:
    // 0x218554: 0x0  nop
    ctx->pc = 0x218554u;
    // NOP
label_218558:
    // 0x218558: 0x0  nop
    ctx->pc = 0x218558u;
    // NOP
label_21855c:
    // 0x21855c: 0x0  nop
    ctx->pc = 0x21855cu;
    // NOP
    ctx->pc = 0x218560u;
}
