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

// Function: sub_00486440
// Address: 0x486440 - 0x486650
void sub_00486440_0x486440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486440_0x486440");
#endif

    switch (ctx->pc) {
        case 0x486440u: goto label_486440;
        case 0x486444u: goto label_486444;
        case 0x486448u: goto label_486448;
        case 0x48644cu: goto label_48644c;
        case 0x486450u: goto label_486450;
        case 0x486454u: goto label_486454;
        case 0x486458u: goto label_486458;
        case 0x48645cu: goto label_48645c;
        case 0x486460u: goto label_486460;
        case 0x486464u: goto label_486464;
        case 0x486468u: goto label_486468;
        case 0x48646cu: goto label_48646c;
        case 0x486470u: goto label_486470;
        case 0x486474u: goto label_486474;
        case 0x486478u: goto label_486478;
        case 0x48647cu: goto label_48647c;
        case 0x486480u: goto label_486480;
        case 0x486484u: goto label_486484;
        case 0x486488u: goto label_486488;
        case 0x48648cu: goto label_48648c;
        case 0x486490u: goto label_486490;
        case 0x486494u: goto label_486494;
        case 0x486498u: goto label_486498;
        case 0x48649cu: goto label_48649c;
        case 0x4864a0u: goto label_4864a0;
        case 0x4864a4u: goto label_4864a4;
        case 0x4864a8u: goto label_4864a8;
        case 0x4864acu: goto label_4864ac;
        case 0x4864b0u: goto label_4864b0;
        case 0x4864b4u: goto label_4864b4;
        case 0x4864b8u: goto label_4864b8;
        case 0x4864bcu: goto label_4864bc;
        case 0x4864c0u: goto label_4864c0;
        case 0x4864c4u: goto label_4864c4;
        case 0x4864c8u: goto label_4864c8;
        case 0x4864ccu: goto label_4864cc;
        case 0x4864d0u: goto label_4864d0;
        case 0x4864d4u: goto label_4864d4;
        case 0x4864d8u: goto label_4864d8;
        case 0x4864dcu: goto label_4864dc;
        case 0x4864e0u: goto label_4864e0;
        case 0x4864e4u: goto label_4864e4;
        case 0x4864e8u: goto label_4864e8;
        case 0x4864ecu: goto label_4864ec;
        case 0x4864f0u: goto label_4864f0;
        case 0x4864f4u: goto label_4864f4;
        case 0x4864f8u: goto label_4864f8;
        case 0x4864fcu: goto label_4864fc;
        case 0x486500u: goto label_486500;
        case 0x486504u: goto label_486504;
        case 0x486508u: goto label_486508;
        case 0x48650cu: goto label_48650c;
        case 0x486510u: goto label_486510;
        case 0x486514u: goto label_486514;
        case 0x486518u: goto label_486518;
        case 0x48651cu: goto label_48651c;
        case 0x486520u: goto label_486520;
        case 0x486524u: goto label_486524;
        case 0x486528u: goto label_486528;
        case 0x48652cu: goto label_48652c;
        case 0x486530u: goto label_486530;
        case 0x486534u: goto label_486534;
        case 0x486538u: goto label_486538;
        case 0x48653cu: goto label_48653c;
        case 0x486540u: goto label_486540;
        case 0x486544u: goto label_486544;
        case 0x486548u: goto label_486548;
        case 0x48654cu: goto label_48654c;
        case 0x486550u: goto label_486550;
        case 0x486554u: goto label_486554;
        case 0x486558u: goto label_486558;
        case 0x48655cu: goto label_48655c;
        case 0x486560u: goto label_486560;
        case 0x486564u: goto label_486564;
        case 0x486568u: goto label_486568;
        case 0x48656cu: goto label_48656c;
        case 0x486570u: goto label_486570;
        case 0x486574u: goto label_486574;
        case 0x486578u: goto label_486578;
        case 0x48657cu: goto label_48657c;
        case 0x486580u: goto label_486580;
        case 0x486584u: goto label_486584;
        case 0x486588u: goto label_486588;
        case 0x48658cu: goto label_48658c;
        case 0x486590u: goto label_486590;
        case 0x486594u: goto label_486594;
        case 0x486598u: goto label_486598;
        case 0x48659cu: goto label_48659c;
        case 0x4865a0u: goto label_4865a0;
        case 0x4865a4u: goto label_4865a4;
        case 0x4865a8u: goto label_4865a8;
        case 0x4865acu: goto label_4865ac;
        case 0x4865b0u: goto label_4865b0;
        case 0x4865b4u: goto label_4865b4;
        case 0x4865b8u: goto label_4865b8;
        case 0x4865bcu: goto label_4865bc;
        case 0x4865c0u: goto label_4865c0;
        case 0x4865c4u: goto label_4865c4;
        case 0x4865c8u: goto label_4865c8;
        case 0x4865ccu: goto label_4865cc;
        case 0x4865d0u: goto label_4865d0;
        case 0x4865d4u: goto label_4865d4;
        case 0x4865d8u: goto label_4865d8;
        case 0x4865dcu: goto label_4865dc;
        case 0x4865e0u: goto label_4865e0;
        case 0x4865e4u: goto label_4865e4;
        case 0x4865e8u: goto label_4865e8;
        case 0x4865ecu: goto label_4865ec;
        case 0x4865f0u: goto label_4865f0;
        case 0x4865f4u: goto label_4865f4;
        case 0x4865f8u: goto label_4865f8;
        case 0x4865fcu: goto label_4865fc;
        case 0x486600u: goto label_486600;
        case 0x486604u: goto label_486604;
        case 0x486608u: goto label_486608;
        case 0x48660cu: goto label_48660c;
        case 0x486610u: goto label_486610;
        case 0x486614u: goto label_486614;
        case 0x486618u: goto label_486618;
        case 0x48661cu: goto label_48661c;
        case 0x486620u: goto label_486620;
        case 0x486624u: goto label_486624;
        case 0x486628u: goto label_486628;
        case 0x48662cu: goto label_48662c;
        case 0x486630u: goto label_486630;
        case 0x486634u: goto label_486634;
        case 0x486638u: goto label_486638;
        case 0x48663cu: goto label_48663c;
        case 0x486640u: goto label_486640;
        case 0x486644u: goto label_486644;
        case 0x486648u: goto label_486648;
        case 0x48664cu: goto label_48664c;
        default: break;
    }

    ctx->pc = 0x486440u;

label_486440:
    // 0x486440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x486440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_486444:
    // 0x486444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x486444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_486448:
    // 0x486448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48644c:
    // 0x48644c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486450:
    // 0x486450: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x486450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_486454:
    // 0x486454: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x486454u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_486458:
    // 0x486458: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48645c:
    // 0x48645c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486460:
    // 0x486460: 0x90630072  lbu         $v1, 0x72($v1)
    ctx->pc = 0x486460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
label_486464:
    // 0x486464: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_486468:
    if (ctx->pc == 0x486468u) {
        ctx->pc = 0x48646Cu;
        goto label_48646c;
    }
    ctx->pc = 0x486464u;
    {
        const bool branch_taken_0x486464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486464) {
            ctx->pc = 0x48647Cu;
            goto label_48647c;
        }
    }
    ctx->pc = 0x48646Cu;
label_48646c:
    // 0x48646c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486470:
    // 0x486470: 0x8c70007c  lw          $s0, 0x7C($v1)
    ctx->pc = 0x486470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_486474:
    // 0x486474: 0x10000003  b           . + 4 + (0x3 << 2)
label_486478:
    if (ctx->pc == 0x486478u) {
        ctx->pc = 0x48647Cu;
        goto label_48647c;
    }
    ctx->pc = 0x486474u;
    {
        const bool branch_taken_0x486474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486474) {
            ctx->pc = 0x486484u;
            goto label_486484;
        }
    }
    ctx->pc = 0x48647Cu;
label_48647c:
    // 0x48647c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486480:
    // 0x486480: 0x8c700078  lw          $s0, 0x78($v1)
    ctx->pc = 0x486480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_486484:
    // 0x486484: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x486484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486488:
    // 0x486488: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x486488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_48648c:
    // 0x48648c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486490:
    // 0x486490: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x486490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_486494:
    // 0x486494: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x486494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486498:
    // 0x486498: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x486498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48649c:
    // 0x48649c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x48649cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_4864a0:
    // 0x4864a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4864a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4864a4:
    // 0x4864a4: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x4864a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_4864a8:
    // 0x4864a8: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_4864ac:
    if (ctx->pc == 0x4864ACu) {
        ctx->pc = 0x4864B0u;
        goto label_4864b0;
    }
    ctx->pc = 0x4864A8u;
    {
        const bool branch_taken_0x4864a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4864a8) {
            ctx->pc = 0x486634u;
            goto label_486634;
        }
    }
    ctx->pc = 0x4864B0u;
label_4864b0:
    // 0x4864b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4864b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4864b4:
    // 0x4864b4: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4864b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4864b8:
    // 0x4864b8: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x4864b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4864bc:
    // 0x4864bc: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_4864c0:
    if (ctx->pc == 0x4864C0u) {
        ctx->pc = 0x4864C4u;
        goto label_4864c4;
    }
    ctx->pc = 0x4864BCu;
    {
        const bool branch_taken_0x4864bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4864bc) {
            ctx->pc = 0x486634u;
            goto label_486634;
        }
    }
    ctx->pc = 0x4864C4u;
label_4864c4:
    // 0x4864c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4864c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4864c8:
    // 0x4864c8: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4864c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4864cc:
    // 0x4864cc: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x4864ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4864d0:
    // 0x4864d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4864d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4864d4:
    // 0x4864d4: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_4864d8:
    if (ctx->pc == 0x4864D8u) {
        ctx->pc = 0x4864DCu;
        goto label_4864dc;
    }
    ctx->pc = 0x4864D4u;
    {
        const bool branch_taken_0x4864d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4864d4) {
            ctx->pc = 0x486634u;
            goto label_486634;
        }
    }
    ctx->pc = 0x4864DCu;
label_4864dc:
    // 0x4864dc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x4864dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4864e0:
    // 0x4864e0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4864e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4864e4:
    // 0x4864e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4864e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4864e8:
    // 0x4864e8: 0x8c51005c  lw          $s1, 0x5C($v0)
    ctx->pc = 0x4864e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4864ec:
    // 0x4864ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4864ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4864f0:
    // 0x4864f0: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x4864f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_4864f4:
    // 0x4864f4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x4864f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4864f8:
    // 0x4864f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4864f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4864fc:
    // 0x4864fc: 0x0  nop
    ctx->pc = 0x4864fcu;
    // NOP
label_486500:
    // 0x486500: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x486500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486504:
    // 0x486504: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_486508:
    if (ctx->pc == 0x486508u) {
        ctx->pc = 0x48650Cu;
        goto label_48650c;
    }
    ctx->pc = 0x486504u;
    {
        const bool branch_taken_0x486504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486504) {
            ctx->pc = 0x48656Cu;
            goto label_48656c;
        }
    }
    ctx->pc = 0x48650Cu;
label_48650c:
    // 0x48650c: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
label_486510:
    if (ctx->pc == 0x486510u) {
        ctx->pc = 0x486514u;
        goto label_486514;
    }
    ctx->pc = 0x48650Cu;
    {
        const bool branch_taken_0x48650c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48650c) {
            ctx->pc = 0x48654Cu;
            goto label_48654c;
        }
    }
    ctx->pc = 0x486514u;
label_486514:
    // 0x486514: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x486514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486518:
    // 0x486518: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x486518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48651c:
    // 0x48651c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48651cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_486520:
    // 0x486520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486524:
    // 0x486524: 0x0  nop
    ctx->pc = 0x486524u;
    // NOP
label_486528:
    // 0x486528: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x486528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48652c:
    // 0x48652c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_486530:
    if (ctx->pc == 0x486530u) {
        ctx->pc = 0x486534u;
        goto label_486534;
    }
    ctx->pc = 0x48652Cu;
    {
        const bool branch_taken_0x48652c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48652c) {
            ctx->pc = 0x48654Cu;
            goto label_48654c;
        }
    }
    ctx->pc = 0x486534u;
label_486534:
    // 0x486534: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x486534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486538:
    // 0x486538: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x486538u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_48653c:
    // 0x48653c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x48653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_486540:
    // 0x486540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x486540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486544:
    // 0x486544: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x486544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486548:
    // 0x486548: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x486548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_48654c:
    // 0x48654c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x48654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486550:
    // 0x486550: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x486550u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_486554:
    // 0x486554: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x486554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486558:
    // 0x486558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x486558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48655c:
    // 0x48655c: 0xc121a90  jal         func_486A40
label_486560:
    if (ctx->pc == 0x486560u) {
        ctx->pc = 0x486564u;
        goto label_486564;
    }
    ctx->pc = 0x48655Cu;
    SET_GPR_U32(ctx, 31, 0x486564u);
    ctx->pc = 0x486A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486A40u, 0x48655Cu, 0x486564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486564u;
label_486564:
    // 0x486564: 0x10000018  b           . + 4 + (0x18 << 2)
label_486568:
    if (ctx->pc == 0x486568u) {
        ctx->pc = 0x48656Cu;
        goto label_48656c;
    }
    ctx->pc = 0x486564u;
    {
        const bool branch_taken_0x486564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486564) {
            ctx->pc = 0x4865C8u;
            goto label_4865c8;
        }
    }
    ctx->pc = 0x48656Cu;
label_48656c:
    // 0x48656c: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
label_486570:
    if (ctx->pc == 0x486570u) {
        ctx->pc = 0x486574u;
        goto label_486574;
    }
    ctx->pc = 0x48656Cu;
    {
        const bool branch_taken_0x48656c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48656c) {
            ctx->pc = 0x4865B4u;
            goto label_4865b4;
        }
    }
    ctx->pc = 0x486574u;
label_486574:
    // 0x486574: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x486574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486578:
    // 0x486578: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x486578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48657c:
    // 0x48657c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48657cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_486580:
    // 0x486580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x486580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486584:
    // 0x486584: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x486584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486588:
    // 0x486588: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x486588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48658c:
    // 0x48658c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_486590:
    if (ctx->pc == 0x486590u) {
        ctx->pc = 0x486594u;
        goto label_486594;
    }
    ctx->pc = 0x48658Cu;
    {
        const bool branch_taken_0x48658c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48658c) {
            ctx->pc = 0x4865B4u;
            goto label_4865b4;
        }
    }
    ctx->pc = 0x486594u;
label_486594:
    // 0x486594: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x486594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486598:
    // 0x486598: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x486598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48659c:
    // 0x48659c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x48659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4865a0:
    // 0x4865a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4865a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4865a4:
    // 0x4865a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4865a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4865a8:
    // 0x4865a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4865a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4865ac:
    // 0x4865ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4865acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4865b0:
    // 0x4865b0: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x4865b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_4865b4:
    // 0x4865b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4865b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4865b8:
    // 0x4865b8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x4865b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4865bc:
    // 0x4865bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4865bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4865c0:
    // 0x4865c0: 0xc121994  jal         func_486650
label_4865c4:
    if (ctx->pc == 0x4865C4u) {
        ctx->pc = 0x4865C8u;
        goto label_4865c8;
    }
    ctx->pc = 0x4865C0u;
    SET_GPR_U32(ctx, 31, 0x4865C8u);
    ctx->pc = 0x486650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486650u, 0x4865C0u, 0x4865C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4865C8u;
label_4865c8:
    // 0x4865c8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x4865c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4865cc:
    // 0x4865cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4865ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4865d0:
    // 0x4865d0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x4865d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_4865d4:
    // 0x4865d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4865d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4865d8:
    // 0x4865d8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x4865d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4865dc:
    // 0x4865dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4865e0:
    if (ctx->pc == 0x4865E0u) {
        ctx->pc = 0x4865E4u;
        goto label_4865e4;
    }
    ctx->pc = 0x4865DCu;
    {
        const bool branch_taken_0x4865dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4865dc) {
            ctx->pc = 0x486628u;
            goto label_486628;
        }
    }
    ctx->pc = 0x4865E4u;
label_4865e4:
    // 0x4865e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4865e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4865e8:
    // 0x4865e8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x4865e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_4865ec:
    // 0x4865ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4865f0:
    if (ctx->pc == 0x4865F0u) {
        ctx->pc = 0x4865F4u;
        goto label_4865f4;
    }
    ctx->pc = 0x4865ECu;
    {
        const bool branch_taken_0x4865ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4865ec) {
            ctx->pc = 0x486628u;
            goto label_486628;
        }
    }
    ctx->pc = 0x4865F4u;
label_4865f4:
    // 0x4865f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4865f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4865f8:
    // 0x4865f8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x4865f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4865fc:
    // 0x4865fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4865fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486600:
    // 0x486600: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x486600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_486604:
    // 0x486604: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x486604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_486608:
    // 0x486608: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x486608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48660c:
    // 0x48660c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x48660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_486610:
    // 0x486610: 0x40f809  jalr        $v0
label_486614:
    if (ctx->pc == 0x486614u) {
        ctx->pc = 0x486618u;
        goto label_486618;
    }
    ctx->pc = 0x486610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486610u, 0x486618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486618u;
label_486618:
    // 0x486618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_48661c:
    if (ctx->pc == 0x48661Cu) {
        ctx->pc = 0x486620u;
        goto label_486620;
    }
    ctx->pc = 0x486618u;
    {
        const bool branch_taken_0x486618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486618) {
            ctx->pc = 0x486628u;
            goto label_486628;
        }
    }
    ctx->pc = 0x486620u;
label_486620:
    // 0x486620: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x486620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_486624:
    // 0x486624: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x486624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_486628:
    // 0x486628: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x486628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48662c:
    // 0x48662c: 0xc121bb0  jal         func_486EC0
label_486630:
    if (ctx->pc == 0x486630u) {
        ctx->pc = 0x486634u;
        goto label_486634;
    }
    ctx->pc = 0x48662Cu;
    SET_GPR_U32(ctx, 31, 0x486634u);
    ctx->pc = 0x486EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486EC0u, 0x48662Cu, 0x486634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486634u;
label_486634:
    // 0x486634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x486634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_486638:
    // 0x486638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48663c:
    // 0x48663c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48663cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486640:
    // 0x486640: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x486640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_486644:
    // 0x486644: 0x3e00008  jr          $ra
label_486648:
    if (ctx->pc == 0x486648u) {
        ctx->pc = 0x48664Cu;
        goto label_48664c;
    }
    ctx->pc = 0x486644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48664Cu;
label_48664c:
    // 0x48664c: 0x0  nop
    ctx->pc = 0x48664cu;
    // NOP
    ctx->pc = 0x486650u;
}
