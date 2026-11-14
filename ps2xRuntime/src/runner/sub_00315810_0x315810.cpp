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

// Function: sub_00315810
// Address: 0x315810 - 0x315ac0
void sub_00315810_0x315810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315810_0x315810");
#endif

    switch (ctx->pc) {
        case 0x315810u: goto label_315810;
        case 0x315814u: goto label_315814;
        case 0x315818u: goto label_315818;
        case 0x31581cu: goto label_31581c;
        case 0x315820u: goto label_315820;
        case 0x315824u: goto label_315824;
        case 0x315828u: goto label_315828;
        case 0x31582cu: goto label_31582c;
        case 0x315830u: goto label_315830;
        case 0x315834u: goto label_315834;
        case 0x315838u: goto label_315838;
        case 0x31583cu: goto label_31583c;
        case 0x315840u: goto label_315840;
        case 0x315844u: goto label_315844;
        case 0x315848u: goto label_315848;
        case 0x31584cu: goto label_31584c;
        case 0x315850u: goto label_315850;
        case 0x315854u: goto label_315854;
        case 0x315858u: goto label_315858;
        case 0x31585cu: goto label_31585c;
        case 0x315860u: goto label_315860;
        case 0x315864u: goto label_315864;
        case 0x315868u: goto label_315868;
        case 0x31586cu: goto label_31586c;
        case 0x315870u: goto label_315870;
        case 0x315874u: goto label_315874;
        case 0x315878u: goto label_315878;
        case 0x31587cu: goto label_31587c;
        case 0x315880u: goto label_315880;
        case 0x315884u: goto label_315884;
        case 0x315888u: goto label_315888;
        case 0x31588cu: goto label_31588c;
        case 0x315890u: goto label_315890;
        case 0x315894u: goto label_315894;
        case 0x315898u: goto label_315898;
        case 0x31589cu: goto label_31589c;
        case 0x3158a0u: goto label_3158a0;
        case 0x3158a4u: goto label_3158a4;
        case 0x3158a8u: goto label_3158a8;
        case 0x3158acu: goto label_3158ac;
        case 0x3158b0u: goto label_3158b0;
        case 0x3158b4u: goto label_3158b4;
        case 0x3158b8u: goto label_3158b8;
        case 0x3158bcu: goto label_3158bc;
        case 0x3158c0u: goto label_3158c0;
        case 0x3158c4u: goto label_3158c4;
        case 0x3158c8u: goto label_3158c8;
        case 0x3158ccu: goto label_3158cc;
        case 0x3158d0u: goto label_3158d0;
        case 0x3158d4u: goto label_3158d4;
        case 0x3158d8u: goto label_3158d8;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e0u: goto label_3158e0;
        case 0x3158e4u: goto label_3158e4;
        case 0x3158e8u: goto label_3158e8;
        case 0x3158ecu: goto label_3158ec;
        case 0x3158f0u: goto label_3158f0;
        case 0x3158f4u: goto label_3158f4;
        case 0x3158f8u: goto label_3158f8;
        case 0x3158fcu: goto label_3158fc;
        case 0x315900u: goto label_315900;
        case 0x315904u: goto label_315904;
        case 0x315908u: goto label_315908;
        case 0x31590cu: goto label_31590c;
        case 0x315910u: goto label_315910;
        case 0x315914u: goto label_315914;
        case 0x315918u: goto label_315918;
        case 0x31591cu: goto label_31591c;
        case 0x315920u: goto label_315920;
        case 0x315924u: goto label_315924;
        case 0x315928u: goto label_315928;
        case 0x31592cu: goto label_31592c;
        case 0x315930u: goto label_315930;
        case 0x315934u: goto label_315934;
        case 0x315938u: goto label_315938;
        case 0x31593cu: goto label_31593c;
        case 0x315940u: goto label_315940;
        case 0x315944u: goto label_315944;
        case 0x315948u: goto label_315948;
        case 0x31594cu: goto label_31594c;
        case 0x315950u: goto label_315950;
        case 0x315954u: goto label_315954;
        case 0x315958u: goto label_315958;
        case 0x31595cu: goto label_31595c;
        case 0x315960u: goto label_315960;
        case 0x315964u: goto label_315964;
        case 0x315968u: goto label_315968;
        case 0x31596cu: goto label_31596c;
        case 0x315970u: goto label_315970;
        case 0x315974u: goto label_315974;
        case 0x315978u: goto label_315978;
        case 0x31597cu: goto label_31597c;
        case 0x315980u: goto label_315980;
        case 0x315984u: goto label_315984;
        case 0x315988u: goto label_315988;
        case 0x31598cu: goto label_31598c;
        case 0x315990u: goto label_315990;
        case 0x315994u: goto label_315994;
        case 0x315998u: goto label_315998;
        case 0x31599cu: goto label_31599c;
        case 0x3159a0u: goto label_3159a0;
        case 0x3159a4u: goto label_3159a4;
        case 0x3159a8u: goto label_3159a8;
        case 0x3159acu: goto label_3159ac;
        case 0x3159b0u: goto label_3159b0;
        case 0x3159b4u: goto label_3159b4;
        case 0x3159b8u: goto label_3159b8;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c0u: goto label_3159c0;
        case 0x3159c4u: goto label_3159c4;
        case 0x3159c8u: goto label_3159c8;
        case 0x3159ccu: goto label_3159cc;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159d4u: goto label_3159d4;
        case 0x3159d8u: goto label_3159d8;
        case 0x3159dcu: goto label_3159dc;
        case 0x3159e0u: goto label_3159e0;
        case 0x3159e4u: goto label_3159e4;
        case 0x3159e8u: goto label_3159e8;
        case 0x3159ecu: goto label_3159ec;
        case 0x3159f0u: goto label_3159f0;
        case 0x3159f4u: goto label_3159f4;
        case 0x3159f8u: goto label_3159f8;
        case 0x3159fcu: goto label_3159fc;
        case 0x315a00u: goto label_315a00;
        case 0x315a04u: goto label_315a04;
        case 0x315a08u: goto label_315a08;
        case 0x315a0cu: goto label_315a0c;
        case 0x315a10u: goto label_315a10;
        case 0x315a14u: goto label_315a14;
        case 0x315a18u: goto label_315a18;
        case 0x315a1cu: goto label_315a1c;
        case 0x315a20u: goto label_315a20;
        case 0x315a24u: goto label_315a24;
        case 0x315a28u: goto label_315a28;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a30u: goto label_315a30;
        case 0x315a34u: goto label_315a34;
        case 0x315a38u: goto label_315a38;
        case 0x315a3cu: goto label_315a3c;
        case 0x315a40u: goto label_315a40;
        case 0x315a44u: goto label_315a44;
        case 0x315a48u: goto label_315a48;
        case 0x315a4cu: goto label_315a4c;
        case 0x315a50u: goto label_315a50;
        case 0x315a54u: goto label_315a54;
        case 0x315a58u: goto label_315a58;
        case 0x315a5cu: goto label_315a5c;
        case 0x315a60u: goto label_315a60;
        case 0x315a64u: goto label_315a64;
        case 0x315a68u: goto label_315a68;
        case 0x315a6cu: goto label_315a6c;
        case 0x315a70u: goto label_315a70;
        case 0x315a74u: goto label_315a74;
        case 0x315a78u: goto label_315a78;
        case 0x315a7cu: goto label_315a7c;
        case 0x315a80u: goto label_315a80;
        case 0x315a84u: goto label_315a84;
        case 0x315a88u: goto label_315a88;
        case 0x315a8cu: goto label_315a8c;
        case 0x315a90u: goto label_315a90;
        case 0x315a94u: goto label_315a94;
        case 0x315a98u: goto label_315a98;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa0u: goto label_315aa0;
        case 0x315aa4u: goto label_315aa4;
        case 0x315aa8u: goto label_315aa8;
        case 0x315aacu: goto label_315aac;
        case 0x315ab0u: goto label_315ab0;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ab8u: goto label_315ab8;
        case 0x315abcu: goto label_315abc;
        default: break;
    }

    ctx->pc = 0x315810u;

label_315810:
    // 0x315810: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x315810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_315814:
    // 0x315814: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x315814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_315818:
    // 0x315818: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x315818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_31581c:
    // 0x31581c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_315820:
    // 0x315820: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x315820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_315824:
    // 0x315824: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x315824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_315828:
    // 0x315828: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x315828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_31582c:
    // 0x31582c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31582cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_315830:
    // 0x315830: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x315830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_315834:
    // 0x315834: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x315834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_315838:
    // 0x315838: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x315838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_31583c:
    // 0x31583c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x31583cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_315840:
    // 0x315840: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x315840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_315844:
    // 0x315844: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x315844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_315848:
    // 0x315848: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x315848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31584c:
    // 0x31584c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x31584cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315850:
    // 0x315850: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x315850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_315854:
    // 0x315854: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x315854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_315858:
    // 0x315858: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x315858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31585c:
    // 0x31585c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_315860:
    // 0x315860: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x315860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315864:
    // 0x315864: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x315864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315868:
    // 0x315868: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x315868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_31586c:
    // 0x31586c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x31586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315870:
    // 0x315870: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x315870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_315874:
    // 0x315874: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x315874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_315878:
    // 0x315878: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x315878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31587c:
    // 0x31587c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31587cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_315880:
    // 0x315880: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x315880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315884:
    // 0x315884: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x315884u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_315888:
    // 0x315888: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x315888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31588c:
    // 0x31588c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x31588cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_315890:
    // 0x315890: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x315890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315894:
    // 0x315894: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x315894u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_315898:
    // 0x315898: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x315898u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31589c:
    // 0x31589c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31589cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3158a0:
    // 0x3158a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3158a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3158a4:
    // 0x3158a4: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x3158a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3158a8:
    // 0x3158a8: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x3158a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3158ac:
    // 0x3158ac: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x3158acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3158b0:
    // 0x3158b0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3158b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3158b4:
    // 0x3158b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3158b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3158b8:
    // 0x3158b8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3158b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3158bc:
    // 0x3158bc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3158bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3158c0:
    // 0x3158c0: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x3158c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3158c4:
    // 0x3158c4: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x3158c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3158c8:
    // 0x3158c8: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x3158c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3158cc:
    // 0x3158cc: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x3158ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3158d0:
    // 0x3158d0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3158d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3158d4:
    // 0x3158d4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3158d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3158d8:
    // 0x3158d8: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x3158d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3158dc:
    // 0x3158dc: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x3158dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3158e0:
    // 0x3158e0: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x3158e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3158e4:
    // 0x3158e4: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x3158e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3158e8:
    // 0x3158e8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3158e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3158ec:
    // 0x3158ec: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x3158ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_3158f0:
    // 0x3158f0: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x3158f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_3158f4:
    // 0x3158f4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x3158f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3158f8:
    // 0x3158f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3158f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3158fc:
    // 0x3158fc: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x3158fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_315900:
    // 0x315900: 0x10800066  beqz        $a0, . + 4 + (0x66 << 2)
label_315904:
    if (ctx->pc == 0x315904u) {
        ctx->pc = 0x315904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315900u;
        // 0x315904: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315908u;
        goto label_315908;
    }
    ctx->pc = 0x315900u;
    {
        const bool branch_taken_0x315900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x315904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315900u;
        // 0x315904: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315900) {
            ctx->pc = 0x315A9Cu;
            goto label_315a9c;
        }
    }
    ctx->pc = 0x315908u;
label_315908:
    // 0x315908: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x315908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_31590c:
    // 0x31590c: 0x0  nop
    ctx->pc = 0x31590cu;
    // NOP
label_315910:
    // 0x315910: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x315910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_315914:
    // 0x315914: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x315914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_315918:
    // 0x315918: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x315918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31591c:
    // 0x31591c: 0x4800021  bltz        $a0, . + 4 + (0x21 << 2)
label_315920:
    if (ctx->pc == 0x315920u) {
        ctx->pc = 0x315920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31591Cu;
        // 0x315920: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315924u;
        goto label_315924;
    }
    ctx->pc = 0x31591Cu;
    {
        const bool branch_taken_0x31591c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x315920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31591Cu;
        // 0x315920: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31591c) {
            ctx->pc = 0x3159A4u;
            goto label_3159a4;
        }
    }
    ctx->pc = 0x315924u;
label_315924:
    // 0x315924: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x315924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_315928:
    // 0x315928: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x315928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_31592c:
    // 0x31592c: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x31592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_315930:
    // 0x315930: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x315930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_315934:
    // 0x315934: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x315934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315938:
    // 0x315938: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x315938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_31593c:
    // 0x31593c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x31593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315940:
    // 0x315940: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x315940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315944:
    // 0x315944: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315948:
    // 0x315948: 0x0  nop
    ctx->pc = 0x315948u;
    // NOP
label_31594c:
    // 0x31594c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_315950:
    if (ctx->pc == 0x315950u) {
        ctx->pc = 0x315950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31594Cu;
        // 0x315950: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315954u;
        goto label_315954;
    }
    ctx->pc = 0x31594Cu;
    {
        const bool branch_taken_0x31594c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31594Cu;
        // 0x315950: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31594c) {
            ctx->pc = 0x315960u;
            goto label_315960;
        }
    }
    ctx->pc = 0x315954u;
label_315954:
    // 0x315954: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x315954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315958:
    // 0x315958: 0x1000000c  b           . + 4 + (0xC << 2)
label_31595c:
    if (ctx->pc == 0x31595Cu) {
        ctx->pc = 0x31595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315958u;
        // 0x31595c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315960u;
        goto label_315960;
    }
    ctx->pc = 0x315958u;
    {
        const bool branch_taken_0x315958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315958u;
        // 0x31595c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315958) {
            ctx->pc = 0x31598Cu;
            goto label_31598c;
        }
    }
    ctx->pc = 0x315960u;
label_315960:
    // 0x315960: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x315960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315964:
    // 0x315964: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x315964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315968:
    // 0x315968: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x315968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_31596c:
    // 0x31596c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31596cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315970:
    // 0x315970: 0x0  nop
    ctx->pc = 0x315970u;
    // NOP
label_315974:
    // 0x315974: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_315978:
    if (ctx->pc == 0x315978u) {
        ctx->pc = 0x315978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315974u;
        // 0x315978: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31597Cu;
        goto label_31597c;
    }
    ctx->pc = 0x315974u;
    {
        const bool branch_taken_0x315974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315974u;
        // 0x315978: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315974) {
            ctx->pc = 0x31598Cu;
            goto label_31598c;
        }
    }
    ctx->pc = 0x31597Cu;
label_31597c:
    // 0x31597c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315980:
    // 0x315980: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x315980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_315984:
    // 0x315984: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x315984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_315988:
    // 0x315988: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x315988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_31598c:
    // 0x31598c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x31598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_315990:
    // 0x315990: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x315990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315994:
    // 0x315994: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x315994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315998:
    // 0x315998: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
label_31599c:
    if (ctx->pc == 0x31599Cu) {
        ctx->pc = 0x31599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315998u;
        // 0x31599c: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159A0u;
        goto label_3159a0;
    }
    ctx->pc = 0x315998u;
    {
        const bool branch_taken_0x315998 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x31599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315998u;
        // 0x31599c: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315998) {
            ctx->pc = 0x315930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315930;
        }
    }
    ctx->pc = 0x3159A0u;
label_3159a0:
    // 0x3159a0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x3159a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_3159a4:
    // 0x3159a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3159a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3159a8:
    // 0x3159a8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3159a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3159ac:
    // 0x3159ac: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x3159acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3159b0:
    // 0x3159b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3159b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3159b4:
    // 0x3159b4: 0x0  nop
    ctx->pc = 0x3159b4u;
    // NOP
label_3159b8:
    // 0x3159b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3159bc:
    if (ctx->pc == 0x3159BCu) {
        ctx->pc = 0x3159BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159B8u;
        // 0x3159bc: 0xc4a10048  lwc1        $f1, 0x48($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159C0u;
        goto label_3159c0;
    }
    ctx->pc = 0x3159B8u;
    {
        const bool branch_taken_0x3159b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3159b8) {
            ctx->pc = 0x3159BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3159B8u;
            // 0x3159bc: 0xc4a10048  lwc1        $f1, 0x48($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3159C8u;
            goto label_3159c8;
        }
    }
    ctx->pc = 0x3159C0u;
label_3159c0:
    // 0x3159c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3159c4:
    if (ctx->pc == 0x3159C4u) {
        ctx->pc = 0x3159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C0u;
        // 0x3159c4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159C8u;
        goto label_3159c8;
    }
    ctx->pc = 0x3159C0u;
    {
        const bool branch_taken_0x3159c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C0u;
        // 0x3159c4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159c0) {
            ctx->pc = 0x3159DCu;
            goto label_3159dc;
        }
    }
    ctx->pc = 0x3159C8u;
label_3159c8:
    // 0x3159c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3159c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3159cc:
    // 0x3159cc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3159ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3159d0:
    // 0x3159d0: 0x0  nop
    ctx->pc = 0x3159d0u;
    // NOP
label_3159d4:
    // 0x3159d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3159d8:
    if (ctx->pc == 0x3159D8u) {
        ctx->pc = 0x3159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159D4u;
        // 0x3159d8: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159DCu;
        goto label_3159dc;
    }
    ctx->pc = 0x3159D4u;
    {
        const bool branch_taken_0x3159d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3159d4) {
            ctx->pc = 0x3159D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3159D4u;
            // 0x3159d8: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3159DCu;
            goto label_3159dc;
        }
    }
    ctx->pc = 0x3159DCu;
label_3159dc:
    // 0x3159dc: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x3159dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3159e0:
    // 0x3159e0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3159e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3159e4:
    // 0x3159e4: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x3159e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3159e8:
    // 0x3159e8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3159e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3159ec:
    // 0x3159ec: 0x0  nop
    ctx->pc = 0x3159ecu;
    // NOP
label_3159f0:
    // 0x3159f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3159f4:
    if (ctx->pc == 0x3159F4u) {
        ctx->pc = 0x3159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F0u;
        // 0x3159f4: 0xc4a2004c  lwc1        $f2, 0x4C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159F8u;
        goto label_3159f8;
    }
    ctx->pc = 0x3159F0u;
    {
        const bool branch_taken_0x3159f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3159f0) {
            ctx->pc = 0x3159F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3159F0u;
            // 0x3159f4: 0xc4a2004c  lwc1        $f2, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x315A00u;
            goto label_315a00;
        }
    }
    ctx->pc = 0x3159F8u;
label_3159f8:
    // 0x3159f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3159fc:
    if (ctx->pc == 0x3159FCu) {
        ctx->pc = 0x3159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F8u;
        // 0x3159fc: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A00u;
        goto label_315a00;
    }
    ctx->pc = 0x3159F8u;
    {
        const bool branch_taken_0x3159f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F8u;
        // 0x3159fc: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159f8) {
            ctx->pc = 0x315A14u;
            goto label_315a14;
        }
    }
    ctx->pc = 0x315A00u;
label_315a00:
    // 0x315a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315a04:
    // 0x315a04: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x315a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315a08:
    // 0x315a08: 0x0  nop
    ctx->pc = 0x315a08u;
    // NOP
label_315a0c:
    // 0x315a0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_315a10:
    if (ctx->pc == 0x315A10u) {
        ctx->pc = 0x315A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A0Cu;
        // 0x315a10: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A14u;
        goto label_315a14;
    }
    ctx->pc = 0x315A0Cu;
    {
        const bool branch_taken_0x315a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315a0c) {
            ctx->pc = 0x315A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315A0Cu;
            // 0x315a10: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x315A14u;
            goto label_315a14;
        }
    }
    ctx->pc = 0x315A14u;
label_315a14:
    // 0x315a14: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x315a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315a18:
    // 0x315a18: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x315a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_315a1c:
    // 0x315a1c: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x315a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315a20:
    // 0x315a20: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x315a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315a24:
    // 0x315a24: 0x0  nop
    ctx->pc = 0x315a24u;
    // NOP
label_315a28:
    // 0x315a28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_315a2c:
    if (ctx->pc == 0x315A2Cu) {
        ctx->pc = 0x315A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A28u;
        // 0x315a2c: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A30u;
        goto label_315a30;
    }
    ctx->pc = 0x315A28u;
    {
        const bool branch_taken_0x315a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A28u;
        // 0x315a2c: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a28) {
            ctx->pc = 0x315A38u;
            goto label_315a38;
        }
    }
    ctx->pc = 0x315A30u;
label_315a30:
    // 0x315a30: 0x10000007  b           . + 4 + (0x7 << 2)
label_315a34:
    if (ctx->pc == 0x315A34u) {
        ctx->pc = 0x315A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A30u;
        // 0x315a34: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A38u;
        goto label_315a38;
    }
    ctx->pc = 0x315A30u;
    {
        const bool branch_taken_0x315a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A30u;
        // 0x315a34: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a30) {
            ctx->pc = 0x315A50u;
            goto label_315a50;
        }
    }
    ctx->pc = 0x315A38u;
label_315a38:
    // 0x315a38: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x315a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315a3c:
    // 0x315a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315a40:
    // 0x315a40: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x315a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315a44:
    // 0x315a44: 0x0  nop
    ctx->pc = 0x315a44u;
    // NOP
label_315a48:
    // 0x315a48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_315a4c:
    if (ctx->pc == 0x315A4Cu) {
        ctx->pc = 0x315A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A48u;
        // 0x315a4c: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A50u;
        goto label_315a50;
    }
    ctx->pc = 0x315A48u;
    {
        const bool branch_taken_0x315a48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315a48) {
            ctx->pc = 0x315A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315A48u;
            // 0x315a4c: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x315A50u;
            goto label_315a50;
        }
    }
    ctx->pc = 0x315A50u;
label_315a50:
    // 0x315a50: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x315a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_315a54:
    // 0x315a54: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x315a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315a58:
    // 0x315a58: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x315a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_315a5c:
    // 0x315a5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x315a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_315a60:
    // 0x315a60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315a64:
    // 0x315a64: 0x0  nop
    ctx->pc = 0x315a64u;
    // NOP
label_315a68:
    // 0x315a68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_315a6c:
    if (ctx->pc == 0x315A6Cu) {
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A70u;
        goto label_315a70;
    }
    ctx->pc = 0x315A68u;
    {
        const bool branch_taken_0x315a68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a68) {
            ctx->pc = 0x315A74u;
            goto label_315a74;
        }
    }
    ctx->pc = 0x315A70u;
label_315a70:
    // 0x315a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315a74:
    // 0x315a74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_315a78:
    if (ctx->pc == 0x315A78u) {
        ctx->pc = 0x315A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A74u;
        // 0x315a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A7Cu;
        goto label_315a7c;
    }
    ctx->pc = 0x315A74u;
    {
        const bool branch_taken_0x315a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A74u;
        // 0x315a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a74) {
            ctx->pc = 0x315A8Cu;
            goto label_315a8c;
        }
    }
    ctx->pc = 0x315A7Cu;
label_315a7c:
    // 0x315a7c: 0x240f809  jalr        $s2
label_315a80:
    if (ctx->pc == 0x315A80u) {
        ctx->pc = 0x315A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A7Cu;
        // 0x315a80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A84u;
        goto label_315a84;
    }
    ctx->pc = 0x315A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x315A84u);
        ctx->pc = 0x315A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A7Cu;
        // 0x315a80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315A7Cu, 0x315A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315A84u;
label_315a84:
    // 0x315a84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_315a88:
    if (ctx->pc == 0x315A88u) {
        ctx->pc = 0x315A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A84u;
        // 0x315a88: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A8Cu;
        goto label_315a8c;
    }
    ctx->pc = 0x315A84u;
    {
        const bool branch_taken_0x315a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315a84) {
            ctx->pc = 0x315A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315A84u;
            // 0x315a88: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315AA0u;
            goto label_315aa0;
        }
    }
    ctx->pc = 0x315A8Cu;
label_315a8c:
    // 0x315a8c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x315a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_315a90:
    // 0x315a90: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x315a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_315a94:
    // 0x315a94: 0x5440ff9e  bnel        $v0, $zero, . + 4 + (-0x62 << 2)
label_315a98:
    if (ctx->pc == 0x315A98u) {
        ctx->pc = 0x315A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A94u;
        // 0x315a98: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A9Cu;
        goto label_315a9c;
    }
    ctx->pc = 0x315A94u;
    {
        const bool branch_taken_0x315a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315a94) {
            ctx->pc = 0x315A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315A94u;
            // 0x315a98: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315910;
        }
    }
    ctx->pc = 0x315A9Cu;
label_315a9c:
    // 0x315a9c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x315a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_315aa0:
    // 0x315aa0: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x315aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_315aa4:
    // 0x315aa4: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x315aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_315aa8:
    // 0x315aa8: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x315aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_315aac:
    // 0x315aac: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x315aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_315ab0:
    // 0x315ab0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x315ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_315ab4:
    // 0x315ab4: 0x3e00008  jr          $ra
label_315ab8:
    if (ctx->pc == 0x315AB8u) {
        ctx->pc = 0x315AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB4u;
        // 0x315ab8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315ABCu;
        goto label_315abc;
    }
    ctx->pc = 0x315AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB4u;
        // 0x315ab8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315ABCu;
label_315abc:
    // 0x315abc: 0x0  nop
    ctx->pc = 0x315abcu;
    // NOP
    ctx->pc = 0x315ac0u;
}
