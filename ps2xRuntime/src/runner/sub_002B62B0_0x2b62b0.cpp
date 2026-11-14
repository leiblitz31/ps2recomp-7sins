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

// Function: sub_002B62B0
// Address: 0x2b62b0 - 0x2b6490
void sub_002B62B0_0x2b62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B62B0_0x2b62b0");
#endif

    switch (ctx->pc) {
        case 0x2b62b0u: goto label_2b62b0;
        case 0x2b62b4u: goto label_2b62b4;
        case 0x2b62b8u: goto label_2b62b8;
        case 0x2b62bcu: goto label_2b62bc;
        case 0x2b62c0u: goto label_2b62c0;
        case 0x2b62c4u: goto label_2b62c4;
        case 0x2b62c8u: goto label_2b62c8;
        case 0x2b62ccu: goto label_2b62cc;
        case 0x2b62d0u: goto label_2b62d0;
        case 0x2b62d4u: goto label_2b62d4;
        case 0x2b62d8u: goto label_2b62d8;
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62e0u: goto label_2b62e0;
        case 0x2b62e4u: goto label_2b62e4;
        case 0x2b62e8u: goto label_2b62e8;
        case 0x2b62ecu: goto label_2b62ec;
        case 0x2b62f0u: goto label_2b62f0;
        case 0x2b62f4u: goto label_2b62f4;
        case 0x2b62f8u: goto label_2b62f8;
        case 0x2b62fcu: goto label_2b62fc;
        case 0x2b6300u: goto label_2b6300;
        case 0x2b6304u: goto label_2b6304;
        case 0x2b6308u: goto label_2b6308;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6310u: goto label_2b6310;
        case 0x2b6314u: goto label_2b6314;
        case 0x2b6318u: goto label_2b6318;
        case 0x2b631cu: goto label_2b631c;
        case 0x2b6320u: goto label_2b6320;
        case 0x2b6324u: goto label_2b6324;
        case 0x2b6328u: goto label_2b6328;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6330u: goto label_2b6330;
        case 0x2b6334u: goto label_2b6334;
        case 0x2b6338u: goto label_2b6338;
        case 0x2b633cu: goto label_2b633c;
        case 0x2b6340u: goto label_2b6340;
        case 0x2b6344u: goto label_2b6344;
        case 0x2b6348u: goto label_2b6348;
        case 0x2b634cu: goto label_2b634c;
        case 0x2b6350u: goto label_2b6350;
        case 0x2b6354u: goto label_2b6354;
        case 0x2b6358u: goto label_2b6358;
        case 0x2b635cu: goto label_2b635c;
        case 0x2b6360u: goto label_2b6360;
        case 0x2b6364u: goto label_2b6364;
        case 0x2b6368u: goto label_2b6368;
        case 0x2b636cu: goto label_2b636c;
        case 0x2b6370u: goto label_2b6370;
        case 0x2b6374u: goto label_2b6374;
        case 0x2b6378u: goto label_2b6378;
        case 0x2b637cu: goto label_2b637c;
        case 0x2b6380u: goto label_2b6380;
        case 0x2b6384u: goto label_2b6384;
        case 0x2b6388u: goto label_2b6388;
        case 0x2b638cu: goto label_2b638c;
        case 0x2b6390u: goto label_2b6390;
        case 0x2b6394u: goto label_2b6394;
        case 0x2b6398u: goto label_2b6398;
        case 0x2b639cu: goto label_2b639c;
        case 0x2b63a0u: goto label_2b63a0;
        case 0x2b63a4u: goto label_2b63a4;
        case 0x2b63a8u: goto label_2b63a8;
        case 0x2b63acu: goto label_2b63ac;
        case 0x2b63b0u: goto label_2b63b0;
        case 0x2b63b4u: goto label_2b63b4;
        case 0x2b63b8u: goto label_2b63b8;
        case 0x2b63bcu: goto label_2b63bc;
        case 0x2b63c0u: goto label_2b63c0;
        case 0x2b63c4u: goto label_2b63c4;
        case 0x2b63c8u: goto label_2b63c8;
        case 0x2b63ccu: goto label_2b63cc;
        case 0x2b63d0u: goto label_2b63d0;
        case 0x2b63d4u: goto label_2b63d4;
        case 0x2b63d8u: goto label_2b63d8;
        case 0x2b63dcu: goto label_2b63dc;
        case 0x2b63e0u: goto label_2b63e0;
        case 0x2b63e4u: goto label_2b63e4;
        case 0x2b63e8u: goto label_2b63e8;
        case 0x2b63ecu: goto label_2b63ec;
        case 0x2b63f0u: goto label_2b63f0;
        case 0x2b63f4u: goto label_2b63f4;
        case 0x2b63f8u: goto label_2b63f8;
        case 0x2b63fcu: goto label_2b63fc;
        case 0x2b6400u: goto label_2b6400;
        case 0x2b6404u: goto label_2b6404;
        case 0x2b6408u: goto label_2b6408;
        case 0x2b640cu: goto label_2b640c;
        case 0x2b6410u: goto label_2b6410;
        case 0x2b6414u: goto label_2b6414;
        case 0x2b6418u: goto label_2b6418;
        case 0x2b641cu: goto label_2b641c;
        case 0x2b6420u: goto label_2b6420;
        case 0x2b6424u: goto label_2b6424;
        case 0x2b6428u: goto label_2b6428;
        case 0x2b642cu: goto label_2b642c;
        case 0x2b6430u: goto label_2b6430;
        case 0x2b6434u: goto label_2b6434;
        case 0x2b6438u: goto label_2b6438;
        case 0x2b643cu: goto label_2b643c;
        case 0x2b6440u: goto label_2b6440;
        case 0x2b6444u: goto label_2b6444;
        case 0x2b6448u: goto label_2b6448;
        case 0x2b644cu: goto label_2b644c;
        case 0x2b6450u: goto label_2b6450;
        case 0x2b6454u: goto label_2b6454;
        case 0x2b6458u: goto label_2b6458;
        case 0x2b645cu: goto label_2b645c;
        case 0x2b6460u: goto label_2b6460;
        case 0x2b6464u: goto label_2b6464;
        case 0x2b6468u: goto label_2b6468;
        case 0x2b646cu: goto label_2b646c;
        case 0x2b6470u: goto label_2b6470;
        case 0x2b6474u: goto label_2b6474;
        case 0x2b6478u: goto label_2b6478;
        case 0x2b647cu: goto label_2b647c;
        case 0x2b6480u: goto label_2b6480;
        case 0x2b6484u: goto label_2b6484;
        case 0x2b6488u: goto label_2b6488;
        case 0x2b648cu: goto label_2b648c;
        default: break;
    }

    ctx->pc = 0x2b62b0u;

label_2b62b0:
    // 0x2b62b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b62b4:
    // 0x2b62b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b62b8:
    // 0x2b62b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b62b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b62bc:
    // 0x2b62bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b62bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b62c0:
    // 0x2b62c0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2b62c4:
    // 0x2b62c4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b62c8:
    // 0x2b62c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b62cc:
    // 0x2b62cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b62ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b62d0:
    // 0x2b62d0: 0x320f809  jalr        $t9
label_2b62d4:
    if (ctx->pc == 0x2B62D4u) {
        ctx->pc = 0x2B62D8u;
        goto label_2b62d8;
    }
    ctx->pc = 0x2B62D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B62D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62D0u, 0x2B62D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B62D8u;
label_2b62d8:
    // 0x2b62d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b62d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b62dc:
    // 0x2b62dc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2b62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2b62e0:
    // 0x2b62e0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b62e4:
    // 0x2b62e4: 0xc089a88  jal         func_226A20
label_2b62e8:
    if (ctx->pc == 0x2B62E8u) {
        ctx->pc = 0x2B62ECu;
        goto label_2b62ec;
    }
    ctx->pc = 0x2B62E4u;
    SET_GPR_U32(ctx, 31, 0x2B62ECu);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x2B62E4u, 0x2B62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62ECu;
label_2b62ec:
    // 0x2b62ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b62ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b62f0:
    // 0x2b62f0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2b62f4:
    // 0x2b62f4: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x2b62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b62f8:
    // 0x2b62f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b62fc:
    // 0x2b62fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b6300:
    // 0x2b6300: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6304:
    // 0x2b6304: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b6304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b6308:
    // 0x2b6308: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b6308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2b630c:
    // 0x2b630c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b630cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b6310:
    // 0x2b6310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b6310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6314:
    // 0x2b6314: 0x0  nop
    ctx->pc = 0x2b6314u;
    // NOP
label_2b6318:
    // 0x2b6318: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b6318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b631c:
    // 0x2b631c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2b631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6320:
    // 0x2b6320: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b6320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6324:
    // 0x2b6324: 0xc104cf2  jal         func_4133C8
label_2b6328:
    if (ctx->pc == 0x2B6328u) {
        ctx->pc = 0x2B632Cu;
        goto label_2b632c;
    }
    ctx->pc = 0x2B6324u;
    SET_GPR_U32(ctx, 31, 0x2B632Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B6324u, 0x2B632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B632Cu;
label_2b632c:
    // 0x2b632c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6330:
    // 0x2b6330: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b6330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b6334:
    // 0x2b6334: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6338:
    if (ctx->pc == 0x2B6338u) {
        ctx->pc = 0x2B633Cu;
        goto label_2b633c;
    }
    ctx->pc = 0x2B6334u;
    {
        const bool branch_taken_0x2b6334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6334) {
            ctx->pc = 0x2B6354u;
            goto label_2b6354;
        }
    }
    ctx->pc = 0x2B633Cu;
label_2b633c:
    // 0x2b633c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b6340:
    // 0x2b6340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6344:
    // 0x2b6344: 0x0  nop
    ctx->pc = 0x2b6344u;
    // NOP
label_2b6348:
    // 0x2b6348: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b6348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b634c:
    // 0x2b634c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6350:
    if (ctx->pc == 0x2B6350u) {
        ctx->pc = 0x2B6354u;
        goto label_2b6354;
    }
    ctx->pc = 0x2B634Cu;
    {
        const bool branch_taken_0x2b634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b634c) {
            ctx->pc = 0x2B6364u;
            goto label_2b6364;
        }
    }
    ctx->pc = 0x2B6354u;
label_2b6354:
    // 0x2b6354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b6358:
    // 0x2b6358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b635c:
    // 0x2b635c: 0x0  nop
    ctx->pc = 0x2b635cu;
    // NOP
label_2b6360:
    // 0x2b6360: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b6360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b6364:
    // 0x2b6364: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b6364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6368:
    // 0x2b6368: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b6368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b636c:
    // 0x2b636c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b636cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b6370:
    // 0x2b6370: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2b6370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6374:
    // 0x2b6374: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b6374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6378:
    // 0x2b6378: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b637c:
    // 0x2b637c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6380:
    // 0x2b6380: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b6380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6384:
    // 0x2b6384: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b6384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6388:
    // 0x2b6388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b6388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b638c:
    // 0x2b638c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b638cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2b6390:
    // 0x2b6390: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6394:
    // 0x2b6394: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b6394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b6398:
    // 0x2b6398: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b639c:
    if (ctx->pc == 0x2B639Cu) {
        ctx->pc = 0x2B63A0u;
        goto label_2b63a0;
    }
    ctx->pc = 0x2B6398u;
    {
        const bool branch_taken_0x2b6398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6398) {
            ctx->pc = 0x2B63B8u;
            goto label_2b63b8;
        }
    }
    ctx->pc = 0x2B63A0u;
label_2b63a0:
    // 0x2b63a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b63a4:
    // 0x2b63a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b63a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b63a8:
    // 0x2b63a8: 0x0  nop
    ctx->pc = 0x2b63a8u;
    // NOP
label_2b63ac:
    // 0x2b63ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b63acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b63b0:
    // 0x2b63b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b63b4:
    if (ctx->pc == 0x2B63B4u) {
        ctx->pc = 0x2B63B8u;
        goto label_2b63b8;
    }
    ctx->pc = 0x2B63B0u;
    {
        const bool branch_taken_0x2b63b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b63b0) {
            ctx->pc = 0x2B63C8u;
            goto label_2b63c8;
        }
    }
    ctx->pc = 0x2B63B8u;
label_2b63b8:
    // 0x2b63b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b63bc:
    // 0x2b63bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b63bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b63c0:
    // 0x2b63c0: 0x0  nop
    ctx->pc = 0x2b63c0u;
    // NOP
label_2b63c4:
    // 0x2b63c4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b63c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b63c8:
    // 0x2b63c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b63cc:
    // 0x2b63cc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b63ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b63d0:
    // 0x2b63d0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b63d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b63d4:
    // 0x2b63d4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2b63d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b63d8:
    // 0x2b63d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b63d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b63dc:
    // 0x2b63dc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b63e0:
    // 0x2b63e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b63e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b63e4:
    // 0x2b63e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b63e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b63e8:
    // 0x2b63e8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b63ec:
    // 0x2b63ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b63ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b63f0:
    // 0x2b63f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b63f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b63f4:
    // 0x2b63f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b63f8:
    // 0x2b63f8: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b63f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b63fc:
    // 0x2b63fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6400:
    if (ctx->pc == 0x2B6400u) {
        ctx->pc = 0x2B6404u;
        goto label_2b6404;
    }
    ctx->pc = 0x2B63FCu;
    {
        const bool branch_taken_0x2b63fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b63fc) {
            ctx->pc = 0x2B641Cu;
            goto label_2b641c;
        }
    }
    ctx->pc = 0x2B6404u;
label_2b6404:
    // 0x2b6404: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b6404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b6408:
    // 0x2b6408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b640c:
    // 0x2b640c: 0x0  nop
    ctx->pc = 0x2b640cu;
    // NOP
label_2b6410:
    // 0x2b6410: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b6414:
    // 0x2b6414: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6418:
    if (ctx->pc == 0x2B6418u) {
        ctx->pc = 0x2B641Cu;
        goto label_2b641c;
    }
    ctx->pc = 0x2B6414u;
    {
        const bool branch_taken_0x2b6414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6414) {
            ctx->pc = 0x2B642Cu;
            goto label_2b642c;
        }
    }
    ctx->pc = 0x2B641Cu;
label_2b641c:
    // 0x2b641c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b6420:
    // 0x2b6420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6424:
    // 0x2b6424: 0x0  nop
    ctx->pc = 0x2b6424u;
    // NOP
label_2b6428:
    // 0x2b6428: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b642c:
    // 0x2b642c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6430:
    // 0x2b6430: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6434:
    // 0x2b6434: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b6434u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b6438:
    // 0x2b6438: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2b6438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b643c:
    // 0x2b643c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b643cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6440:
    // 0x2b6440: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b6444:
    // 0x2b6444: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6448:
    // 0x2b6448: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b6448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b644c:
    // 0x2b644c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6450:
    // 0x2b6450: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b6450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6454:
    // 0x2b6454: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b6454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b6458:
    // 0x2b6458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b645c:
    // 0x2b645c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b6460:
    // 0x2b6460: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b6460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6464:
    // 0x2b6464: 0xc106598  jal         func_419660
label_2b6468:
    if (ctx->pc == 0x2B6468u) {
        ctx->pc = 0x2B646Cu;
        goto label_2b646c;
    }
    ctx->pc = 0x2B6464u;
    SET_GPR_U32(ctx, 31, 0x2B646Cu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x2B6464u, 0x2B646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B646Cu;
label_2b646c:
    // 0x2b646c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6470:
    // 0x2b6470: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b6470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6474:
    // 0x2b6474: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b6474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
label_2b6478:
    // 0x2b6478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b647c:
    // 0x2b647c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b647cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6480:
    // 0x2b6480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6484:
    // 0x2b6484: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b6484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b6488:
    // 0x2b6488: 0x3e00008  jr          $ra
label_2b648c:
    if (ctx->pc == 0x2B648Cu) {
        ctx->pc = 0x2B6490u;
        goto label_fallthrough_0x2b6488;
    }
    ctx->pc = 0x2B6488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b6488:
    ctx->pc = 0x2B6490u;
}
