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

// Function: sub_001B22E0
// Address: 0x1b22e0 - 0x1b2e80
void sub_001B22E0_0x1b22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B22E0_0x1b22e0");
#endif

    switch (ctx->pc) {
        case 0x1b2378u: goto label_1b2378;
        case 0x1b2398u: goto label_1b2398;
        case 0x1b23acu: goto label_1b23ac;
        case 0x1b23c0u: goto label_1b23c0;
        case 0x1b23f4u: goto label_1b23f4;
        case 0x1b240cu: goto label_1b240c;
        case 0x1b241cu: goto label_1b241c;
        case 0x1b2428u: goto label_1b2428;
        case 0x1b2458u: goto label_1b2458;
        case 0x1b246cu: goto label_1b246c;
        case 0x1b2478u: goto label_1b2478;
        case 0x1b2484u: goto label_1b2484;
        case 0x1b24b4u: goto label_1b24b4;
        case 0x1b24c8u: goto label_1b24c8;
        case 0x1b24d4u: goto label_1b24d4;
        case 0x1b24e0u: goto label_1b24e0;
        case 0x1b2510u: goto label_1b2510;
        case 0x1b2524u: goto label_1b2524;
        case 0x1b2530u: goto label_1b2530;
        case 0x1b253cu: goto label_1b253c;
        case 0x1b256cu: goto label_1b256c;
        case 0x1b2580u: goto label_1b2580;
        case 0x1b258cu: goto label_1b258c;
        case 0x1b2598u: goto label_1b2598;
        case 0x1b25c8u: goto label_1b25c8;
        case 0x1b25dcu: goto label_1b25dc;
        case 0x1b25e8u: goto label_1b25e8;
        case 0x1b25f4u: goto label_1b25f4;
        case 0x1b269cu: goto label_1b269c;
        case 0x1b26b4u: goto label_1b26b4;
        case 0x1b26c8u: goto label_1b26c8;
        case 0x1b26d4u: goto label_1b26d4;
        case 0x1b26ecu: goto label_1b26ec;
        case 0x1b2700u: goto label_1b2700;
        case 0x1b28d0u: goto label_1b28d0;
        case 0x1b28dcu: goto label_1b28dc;
        case 0x1b28f4u: goto label_1b28f4;
        case 0x1b2934u: goto label_1b2934;
        case 0x1b294cu: goto label_1b294c;
        case 0x1b2968u: goto label_1b2968;
        case 0x1b2984u: goto label_1b2984;
        case 0x1b29a0u: goto label_1b29a0;
        case 0x1b2adcu: goto label_1b2adc;
        default: break;
    }

    ctx->pc = 0x1b22e0u;

    // 0x1b22e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b22e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b22e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b22e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b22ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b22f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b22f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b22f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b22f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b22f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b22f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b22fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b22fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2300: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1b2300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1b2304: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1b2308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b230c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2310: 0xe46001f8  swc1        $f0, 0x1F8($v1)
    ctx->pc = 0x1b2310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 504), bits); }
    // 0x1b2314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2318: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b231c: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x1b231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x1b2320: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b2320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2328: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b232c: 0xe460048c  swc1        $f0, 0x48C($v1)
    ctx->pc = 0x1b232cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1164), bits); }
    // 0x1b2330: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1b2334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2338: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b233c: 0xe460049c  swc1        $f0, 0x49C($v1)
    ctx->pc = 0x1b233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1180), bits); }
    // 0x1b2340: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1b2340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1b2344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2348: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b234c: 0xe46004a0  swc1        $f0, 0x4A0($v1)
    ctx->pc = 0x1b234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1184), bits); }
    // 0x1b2350: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2354: 0xac6004a4  sw          $zero, 0x4A4($v1)
    ctx->pc = 0x1b2354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1188), GPR_U32(ctx, 0));
    // 0x1b2358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b235c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2360: 0xa08304a8  sb          $v1, 0x4A8($a0)
    ctx->pc = 0x1b2360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1192), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2364: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1b2364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1b2368: 0x24720054  addiu       $s2, $v1, 0x54
    ctx->pc = 0x1b2368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x1b236c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b236cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2370: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1B2370u;
    {
        const bool branch_taken_0x1b2370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2370) {
            ctx->pc = 0x1B2600u;
            goto label_1b2600;
        }
    }
    ctx->pc = 0x1B2378u;
label_1b2378:
    // 0x1b2378: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b2378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b237c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1b237cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1b2380: 0x24636d80  addiu       $v1, $v1, 0x6D80
    ctx->pc = 0x1b2380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28032));
    // 0x1b2384: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b2384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2388: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b2388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b238c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b238cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2390: 0xc040304  jal         func_100C10
    ctx->pc = 0x1B2390u;
    SET_GPR_U32(ctx, 31, 0x1B2398u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1B2390u, 0x1B2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2398u;
label_1b2398:
    // 0x1b2398: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b2398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b239c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b23a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b23a4: 0xc05c618  jal         func_171860
    ctx->pc = 0x1B23A4u;
    SET_GPR_U32(ctx, 31, 0x1B23ACu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1B23A4u, 0x1B23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23ACu;
label_1b23ac:
    // 0x1b23ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b23acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b23b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b23b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b23b8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1B23B8u;
    SET_GPR_U32(ctx, 31, 0x1B23C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1B23B8u, 0x1B23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23C0u;
label_1b23c0:
    // 0x1b23c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b23c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b23c8: 0x1223008c  beq         $s1, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1B23C8u;
    {
        const bool branch_taken_0x1b23c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b23c8) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B23D0u;
    // 0x1b23d0: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1b23d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1b23d4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b23d8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1b23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1b23dc: 0x24636d80  addiu       $v1, $v1, 0x6D80
    ctx->pc = 0x1b23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28032));
    // 0x1b23e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b23e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b23e8: 0x278594a8  addiu       $a1, $gp, -0x6B58
    ctx->pc = 0x1b23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939816));
    // 0x1b23ec: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1B23ECu;
    SET_GPR_U32(ctx, 31, 0x1B23F4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1B23ECu, 0x1B23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23F4u;
label_1b23f4:
    // 0x1b23f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b23f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B23F8u;
    {
        const bool branch_taken_0x1b23f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b23f8) {
            ctx->pc = 0x1B2438u;
            goto label_1b2438;
        }
    }
    ctx->pc = 0x1B2400u;
    // 0x1b2400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2404: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1B2404u;
    SET_GPR_U32(ctx, 31, 0x1B240Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1B2404u, 0x1B240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B240Cu;
label_1b240c:
    // 0x1b240c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b240cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2410: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b2414: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1B2414u;
    SET_GPR_U32(ctx, 31, 0x1B241Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1B2414u, 0x1B241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B241Cu;
label_1b241c:
    // 0x1b241c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2420: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1B2420u;
    SET_GPR_U32(ctx, 31, 0x1B2428u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1B2420u, 0x1B2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2428u;
label_1b2428:
    // 0x1b2428: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b242c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1b242cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1b2430: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1B2430u;
    {
        const bool branch_taken_0x1b2430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2430) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B2438u;
label_1b2438:
    // 0x1b2438: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b2438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b243c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b2440: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x1b2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x1b2444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b244c: 0x278594ac  addiu       $a1, $gp, -0x6B54
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939820));
    // 0x1b2450: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1B2450u;
    SET_GPR_U32(ctx, 31, 0x1B2458u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1B2450u, 0x1B2458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2458u;
label_1b2458:
    // 0x1b2458: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2458u;
    {
        const bool branch_taken_0x1b2458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2458) {
            ctx->pc = 0x1B2494u;
            goto label_1b2494;
        }
    }
    ctx->pc = 0x1B2460u;
    // 0x1b2460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2464: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1B2464u;
    SET_GPR_U32(ctx, 31, 0x1B246Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1B2464u, 0x1B246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B246Cu;
label_1b246c:
    // 0x1b246c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1b246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b2470: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1B2470u;
    SET_GPR_U32(ctx, 31, 0x1B2478u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1B2470u, 0x1B2478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2478u;
label_1b2478:
    // 0x1b2478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b247c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1B247Cu;
    SET_GPR_U32(ctx, 31, 0x1B2484u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1B247Cu, 0x1B2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2484u;
label_1b2484:
    // 0x1b2484: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2488: 0xe44001f8  swc1        $f0, 0x1F8($v0)
    ctx->pc = 0x1b2488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 504), bits); }
    // 0x1b248c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1B248Cu;
    {
        const bool branch_taken_0x1b248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b248c) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B2494u;
label_1b2494:
    // 0x1b2494: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b2494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b2498: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b249c: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x1b249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x1b24a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b24a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b24a8: 0x278594b0  addiu       $a1, $gp, -0x6B50
    ctx->pc = 0x1b24a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939824));
    // 0x1b24ac: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1B24ACu;
    SET_GPR_U32(ctx, 31, 0x1B24B4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1B24ACu, 0x1B24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24B4u;
label_1b24b4:
    // 0x1b24b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B24B4u;
    {
        const bool branch_taken_0x1b24b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b24b4) {
            ctx->pc = 0x1B24F0u;
            goto label_1b24f0;
        }
    }
    ctx->pc = 0x1B24BCu;
    // 0x1b24bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24c0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1B24C0u;
    SET_GPR_U32(ctx, 31, 0x1B24C8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1B24C0u, 0x1B24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24C8u;
label_1b24c8:
    // 0x1b24c8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b24cc: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1B24CCu;
    SET_GPR_U32(ctx, 31, 0x1B24D4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1B24CCu, 0x1B24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24D4u;
label_1b24d4:
    // 0x1b24d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b24d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24d8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1B24D8u;
    SET_GPR_U32(ctx, 31, 0x1B24E0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1B24D8u, 0x1B24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24E0u;
label_1b24e0:
    // 0x1b24e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b24e4: 0xe440048c  swc1        $f0, 0x48C($v0)
    ctx->pc = 0x1b24e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1164), bits); }
    // 0x1b24e8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1B24E8u;
    {
        const bool branch_taken_0x1b24e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24e8) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B24F0u;
label_1b24f0:
    // 0x1b24f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b24f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b24f8: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x1b24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x1b24fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2504: 0x278594b4  addiu       $a1, $gp, -0x6B4C
    ctx->pc = 0x1b2504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939828));
    // 0x1b2508: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1B2508u;
    SET_GPR_U32(ctx, 31, 0x1B2510u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1B2508u, 0x1B2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2510u;
label_1b2510:
    // 0x1b2510: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2510u;
    {
        const bool branch_taken_0x1b2510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2510) {
            ctx->pc = 0x1B254Cu;
            goto label_1b254c;
        }
    }
    ctx->pc = 0x1B2518u;
    // 0x1b2518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b251c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1B251Cu;
    SET_GPR_U32(ctx, 31, 0x1B2524u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1B251Cu, 0x1B2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2524u;
label_1b2524:
    // 0x1b2524: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1b2524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b2528: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1B2528u;
    SET_GPR_U32(ctx, 31, 0x1B2530u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1B2528u, 0x1B2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2530u;
label_1b2530:
    // 0x1b2530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2534: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1B2534u;
    SET_GPR_U32(ctx, 31, 0x1B253Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1B2534u, 0x1B253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B253Cu;
label_1b253c:
    // 0x1b253c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2540: 0xe4400488  swc1        $f0, 0x488($v0)
    ctx->pc = 0x1b2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1160), bits); }
    // 0x1b2544: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1B2544u;
    {
        const bool branch_taken_0x1b2544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2544) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B254Cu;
label_1b254c:
    // 0x1b254c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b2550: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b2550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b2554: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x1b2558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b255c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2560: 0x278594b8  addiu       $a1, $gp, -0x6B48
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939832));
    // 0x1b2564: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1B2564u;
    SET_GPR_U32(ctx, 31, 0x1B256Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1B2564u, 0x1B256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B256Cu;
label_1b256c:
    // 0x1b256c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B256Cu;
    {
        const bool branch_taken_0x1b256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b256c) {
            ctx->pc = 0x1B25A8u;
            goto label_1b25a8;
        }
    }
    ctx->pc = 0x1B2574u;
    // 0x1b2574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2578: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1B2578u;
    SET_GPR_U32(ctx, 31, 0x1B2580u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1B2578u, 0x1B2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2580u;
label_1b2580:
    // 0x1b2580: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b2584: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1B2584u;
    SET_GPR_U32(ctx, 31, 0x1B258Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1B2584u, 0x1B258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B258Cu;
label_1b258c:
    // 0x1b258c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2590: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1B2590u;
    SET_GPR_U32(ctx, 31, 0x1B2598u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1B2590u, 0x1B2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2598u;
label_1b2598:
    // 0x1b2598: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b259c: 0xe440049c  swc1        $f0, 0x49C($v0)
    ctx->pc = 0x1b259cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1180), bits); }
    // 0x1b25a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B25A0u;
    {
        const bool branch_taken_0x1b25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a0) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B25A8u;
label_1b25a8:
    // 0x1b25a8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b25a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b25ac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b25acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b25b0: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x1b25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x1b25b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b25b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b25bc: 0x278594bc  addiu       $a1, $gp, -0x6B44
    ctx->pc = 0x1b25bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939836));
    // 0x1b25c0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1B25C0u;
    SET_GPR_U32(ctx, 31, 0x1B25C8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1B25C0u, 0x1B25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25C8u;
label_1b25c8:
    // 0x1b25c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B25C8u;
    {
        const bool branch_taken_0x1b25c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b25c8) {
            ctx->pc = 0x1B25FCu;
            goto label_1b25fc;
        }
    }
    ctx->pc = 0x1B25D0u;
    // 0x1b25d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25d4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1B25D4u;
    SET_GPR_U32(ctx, 31, 0x1B25DCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1B25D4u, 0x1B25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25DCu;
label_1b25dc:
    // 0x1b25dc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1b25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b25e0: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1B25E0u;
    SET_GPR_U32(ctx, 31, 0x1B25E8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1B25E0u, 0x1B25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25E8u;
label_1b25e8:
    // 0x1b25e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b25e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25ec: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1B25ECu;
    SET_GPR_U32(ctx, 31, 0x1B25F4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1B25ECu, 0x1B25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25F4u;
label_1b25f4:
    // 0x1b25f4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b25f8: 0xe44004a0  swc1        $f0, 0x4A0($v0)
    ctx->pc = 0x1b25f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1184), bits); }
label_1b25fc:
    // 0x1b25fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b2600:
    // 0x1b2600: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1b2600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b2604: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2378;
        }
    }
    ctx->pc = 0x1B260Cu;
    // 0x1b260c: 0x8382bafc  lb          $v0, -0x4504($gp)
    ctx->pc = 0x1b260cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949628)));
    // 0x1b2610: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2610u;
    {
        const bool branch_taken_0x1b2610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2610) {
            ctx->pc = 0x1B2684u;
            goto label_1b2684;
        }
    }
    ctx->pc = 0x1B2618u;
    // 0x1b2618: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b261c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2620: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2620u;
    {
        const bool branch_taken_0x1b2620 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2620) {
            ctx->pc = 0x1B263Cu;
            goto label_1b263c;
        }
    }
    ctx->pc = 0x1B2628u;
    // 0x1b2628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b262c: 0x0  nop
    ctx->pc = 0x1b262cu;
    // NOP
    // 0x1b2630: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2634: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2634u;
    {
        const bool branch_taken_0x1b2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2634) {
            ctx->pc = 0x1B2658u;
            goto label_1b2658;
        }
    }
    ctx->pc = 0x1B263Cu;
label_1b263c:
    // 0x1b263c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b2640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b264c: 0x0  nop
    ctx->pc = 0x1b264cu;
    // NOP
    // 0x1b2650: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2654: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2658:
    // 0x1b2658: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b265c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2660: 0x0  nop
    ctx->pc = 0x1b2660u;
    // NOP
    // 0x1b2664: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2664u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2668: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x1b2668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x1b266c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b266cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2670: 0x0  nop
    ctx->pc = 0x1b2670u;
    // NOP
    // 0x1b2674: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2678: 0xe780baf8  swc1        $f0, -0x4508($gp)
    ctx->pc = 0x1b2678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949624), bits); }
    // 0x1b267c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2680: 0xa382bafc  sb          $v0, -0x4504($gp)
    ctx->pc = 0x1b2680u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949628), (uint8_t)GPR_U32(ctx, 2));
label_1b2684:
    // 0x1b2684: 0xc780baf8  lwc1        $f0, -0x4508($gp)
    ctx->pc = 0x1b2684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2688: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b268c: 0xe44001d4  swc1        $f0, 0x1D4($v0)
    ctx->pc = 0x1b268cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 468), bits); }
    // 0x1b2690: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b2690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2694: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B2694u;
    SET_GPR_U32(ctx, 31, 0x1B269Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B2694u, 0x1B269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B269Cu;
label_1b269c:
    // 0x1b269c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b269cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b26a4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b26a8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b26ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B26ACu;
    SET_GPR_U32(ctx, 31, 0x1B26B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B26ACu, 0x1B26B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26B4u;
label_1b26b4:
    // 0x1b26b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b26b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b26b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26bc: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1b26bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1b26c0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B26C0u;
    SET_GPR_U32(ctx, 31, 0x1B26C8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B26C0u, 0x1B26C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26C8u;
label_1b26c8:
    // 0x1b26c8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b26cc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B26CCu;
    SET_GPR_U32(ctx, 31, 0x1B26D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B26CCu, 0x1B26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26D4u;
label_1b26d4:
    // 0x1b26d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b26d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b26dc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b26e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b26e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b26e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B26E4u;
    SET_GPR_U32(ctx, 31, 0x1B26ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B26E4u, 0x1B26ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26ECu;
label_1b26ec:
    // 0x1b26ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b26f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b26f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26f4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1b26f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b26f8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B26F8u;
    SET_GPR_U32(ctx, 31, 0x1B2700u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B26F8u, 0x1B2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2700u;
label_1b2700:
    // 0x1b2700: 0xc78094f8  lwc1        $f0, -0x6B08($gp)
    ctx->pc = 0x1b2700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2704: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2708: 0xe44001d8  swc1        $f0, 0x1D8($v0)
    ctx->pc = 0x1b2708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 472), bits); }
    // 0x1b270c: 0xc78094fc  lwc1        $f0, -0x6B04($gp)
    ctx->pc = 0x1b270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2710: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2714: 0xe44001dc  swc1        $f0, 0x1DC($v0)
    ctx->pc = 0x1b2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 476), bits); }
    // 0x1b2718: 0x8382bb04  lb          $v0, -0x44FC($gp)
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x1b271c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B271Cu;
    {
        const bool branch_taken_0x1b271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b271c) {
            ctx->pc = 0x1B2794u;
            goto label_1b2794;
        }
    }
    ctx->pc = 0x1B2724u;
    // 0x1b2724: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b2724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2728: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b272c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B272Cu;
    {
        const bool branch_taken_0x1b272c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b272c) {
            ctx->pc = 0x1B2748u;
            goto label_1b2748;
        }
    }
    ctx->pc = 0x1B2734u;
    // 0x1b2734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2738: 0x0  nop
    ctx->pc = 0x1b2738u;
    // NOP
    // 0x1b273c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b273cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2740: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2740u;
    {
        const bool branch_taken_0x1b2740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2740) {
            ctx->pc = 0x1B2764u;
            goto label_1b2764;
        }
    }
    ctx->pc = 0x1B2748u;
label_1b2748:
    // 0x1b2748: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b274c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2750: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2758: 0x0  nop
    ctx->pc = 0x1b2758u;
    // NOP
    // 0x1b275c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b275cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2760: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2764:
    // 0x1b2764: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1b2764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1b2768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b276c: 0x0  nop
    ctx->pc = 0x1b276cu;
    // NOP
    // 0x1b2770: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2770u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2774: 0x24020113  addiu       $v0, $zero, 0x113
    ctx->pc = 0x1b2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x1b2778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b277c: 0x0  nop
    ctx->pc = 0x1b277cu;
    // NOP
    // 0x1b2780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2788: 0xe780bb00  swc1        $f0, -0x4500($gp)
    ctx->pc = 0x1b2788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949632), bits); }
    // 0x1b278c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2790: 0xa382bb04  sb          $v0, -0x44FC($gp)
    ctx->pc = 0x1b2790u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949636), (uint8_t)GPR_U32(ctx, 2));
label_1b2794:
    // 0x1b2794: 0x8382bb0c  lb          $v0, -0x44F4($gp)
    ctx->pc = 0x1b2794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x1b2798: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2798u;
    {
        const bool branch_taken_0x1b2798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2798) {
            ctx->pc = 0x1B280Cu;
            goto label_1b280c;
        }
    }
    ctx->pc = 0x1B27A0u;
    // 0x1b27a0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b27a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b27a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B27A8u;
    {
        const bool branch_taken_0x1b27a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b27a8) {
            ctx->pc = 0x1B27C4u;
            goto label_1b27c4;
        }
    }
    ctx->pc = 0x1B27B0u;
    // 0x1b27b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b27b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27b4: 0x0  nop
    ctx->pc = 0x1b27b4u;
    // NOP
    // 0x1b27b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b27b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b27bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B27BCu;
    {
        const bool branch_taken_0x1b27bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b27bc) {
            ctx->pc = 0x1B27E0u;
            goto label_1b27e0;
        }
    }
    ctx->pc = 0x1B27C4u;
label_1b27c4:
    // 0x1b27c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b27c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b27c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b27cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b27ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b27d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b27d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27d4: 0x0  nop
    ctx->pc = 0x1b27d4u;
    // NOP
    // 0x1b27d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b27d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b27dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b27dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b27e0:
    // 0x1b27e0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b27e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b27e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27e8: 0x0  nop
    ctx->pc = 0x1b27e8u;
    // NOP
    // 0x1b27ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b27ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b27f0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1b27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1b27f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27f8: 0x0  nop
    ctx->pc = 0x1b27f8u;
    // NOP
    // 0x1b27fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b27fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2800: 0xe780bb08  swc1        $f0, -0x44F8($gp)
    ctx->pc = 0x1b2800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949640), bits); }
    // 0x1b2804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2808: 0xa382bb0c  sb          $v0, -0x44F4($gp)
    ctx->pc = 0x1b2808u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949644), (uint8_t)GPR_U32(ctx, 2));
label_1b280c:
    // 0x1b280c: 0xc780bb00  lwc1        $f0, -0x4500($gp)
    ctx->pc = 0x1b280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2810: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2814: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x1b2814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x1b2818: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b281c: 0xc44101d4  lwc1        $f1, 0x1D4($v0)
    ctx->pc = 0x1b281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2820: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b2820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2824: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b2824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2828: 0xc780bb08  lwc1        $f0, -0x44F8($gp)
    ctx->pc = 0x1b2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b282c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b282cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2830: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2834: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x1b2834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x1b2838: 0xc780bb00  lwc1        $f0, -0x4500($gp)
    ctx->pc = 0x1b2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b283c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2840: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1b2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1b2844: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2848: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b2848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b284c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B284Cu;
    {
        const bool branch_taken_0x1b284c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b284c) {
            ctx->pc = 0x1B2868u;
            goto label_1b2868;
        }
    }
    ctx->pc = 0x1B2854u;
    // 0x1b2854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2858: 0x0  nop
    ctx->pc = 0x1b2858u;
    // NOP
    // 0x1b285c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b285cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2860u;
    {
        const bool branch_taken_0x1b2860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2860) {
            ctx->pc = 0x1B2884u;
            goto label_1b2884;
        }
    }
    ctx->pc = 0x1B2868u;
label_1b2868:
    // 0x1b2868: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b2868u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b286c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2878: 0x0  nop
    ctx->pc = 0x1b2878u;
    // NOP
    // 0x1b287c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b287cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2880: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2884:
    // 0x1b2884: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b2884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b2888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b288c: 0x0  nop
    ctx->pc = 0x1b288cu;
    // NOP
    // 0x1b2890: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1b2890u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2894: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b2894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1b2898: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b2898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b289c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b28a0: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1b28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b28a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b28a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b28a8: 0x0  nop
    ctx->pc = 0x1b28a8u;
    // NOP
    // 0x1b28ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b28acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b28b0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b28b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b28b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b28b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b28b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1b28bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b28c0: 0x244401e0  addiu       $a0, $v0, 0x1E0
    ctx->pc = 0x1b28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1b28c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b28c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b28c8: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x1B28C8u;
    SET_GPR_U32(ctx, 31, 0x1B28D0u);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x1B28C8u, 0x1B28D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28D0u;
label_1b28d0:
    // 0x1b28d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b28d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B28D4u;
    {
        const bool branch_taken_0x1b28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b28d4) {
            ctx->pc = 0x1B28FCu;
            goto label_1b28fc;
        }
    }
    ctx->pc = 0x1B28DCu;
label_1b28dc:
    // 0x1b28dc: 0xc7949500  lwc1        $f20, -0x6B00($gp)
    ctx->pc = 0x1b28dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b28e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b28e4: 0x244401e0  addiu       $a0, $v0, 0x1E0
    ctx->pc = 0x1b28e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1b28e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28ec: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1B28ECu;
    SET_GPR_U32(ctx, 31, 0x1B28F4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1B28ECu, 0x1B28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28F4u;
label_1b28f4:
    // 0x1b28f4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b28f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b28f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b28f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b28fc:
    // 0x1b28fc: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1b28fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b2900: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B2900u;
    {
        const bool branch_taken_0x1b2900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2900) {
            ctx->pc = 0x1B28DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b28dc;
        }
    }
    ctx->pc = 0x1B2908u;
    // 0x1b2908: 0xc780bb10  lwc1        $f0, -0x44F0($gp)
    ctx->pc = 0x1b2908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b290c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2910: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1b2910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1b2914: 0xc7809504  lwc1        $f0, -0x6AFC($gp)
    ctx->pc = 0x1b2914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2918: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b291c: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1b291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1b2920: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2924: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x1b2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x1b2928: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b292c: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x1B292Cu;
    SET_GPR_U32(ctx, 31, 0x1B2934u);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x1B292Cu, 0x1B2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2934u;
label_1b2934:
    // 0x1b2934: 0xc794832c  lwc1        $f20, -0x7CD4($gp)
    ctx->pc = 0x1b2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2938: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b293c: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x1b2940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2944: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1B2944u;
    SET_GPR_U32(ctx, 31, 0x1B294Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1B2944u, 0x1B294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B294Cu;
label_1b294c:
    // 0x1b294c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b294cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b2950: 0xc79483e4  lwc1        $f20, -0x7C1C($gp)
    ctx->pc = 0x1b2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2954: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2958: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x1b295c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2960: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1B2960u;
    SET_GPR_U32(ctx, 31, 0x1B2968u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1B2960u, 0x1B2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2968u;
label_1b2968:
    // 0x1b2968: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b2968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b296c: 0xc79483e8  lwc1        $f20, -0x7C18($gp)
    ctx->pc = 0x1b296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2970: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2974: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x1b2974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x1b2978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b2978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b297c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1B297Cu;
    SET_GPR_U32(ctx, 31, 0x1B2984u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1B297Cu, 0x1B2984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2984u;
label_1b2984:
    // 0x1b2984: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b2984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b2988: 0xc79483ec  lwc1        $f20, -0x7C14($gp)
    ctx->pc = 0x1b2988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b298c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2990: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x1b2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x1b2994: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2998: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1B2998u;
    SET_GPR_U32(ctx, 31, 0x1B29A0u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1B2998u, 0x1B29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29A0u;
label_1b29a0:
    // 0x1b29a0: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b29a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b29a4: 0x8382bb18  lb          $v0, -0x44E8($gp)
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x1b29a8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B29A8u;
    {
        const bool branch_taken_0x1b29a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29a8) {
            ctx->pc = 0x1B2A1Cu;
            goto label_1b2a1c;
        }
    }
    ctx->pc = 0x1B29B0u;
    // 0x1b29b0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b29b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b29b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B29B8u;
    {
        const bool branch_taken_0x1b29b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b29b8) {
            ctx->pc = 0x1B29D4u;
            goto label_1b29d4;
        }
    }
    ctx->pc = 0x1B29C0u;
    // 0x1b29c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b29c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b29c4: 0x0  nop
    ctx->pc = 0x1b29c4u;
    // NOP
    // 0x1b29c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b29c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b29cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B29CCu;
    {
        const bool branch_taken_0x1b29cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b29cc) {
            ctx->pc = 0x1B29F0u;
            goto label_1b29f0;
        }
    }
    ctx->pc = 0x1B29D4u;
label_1b29d4:
    // 0x1b29d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b29d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b29d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b29dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b29dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b29e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b29e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b29e4: 0x0  nop
    ctx->pc = 0x1b29e4u;
    // NOP
    // 0x1b29e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b29e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b29ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b29ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b29f0:
    // 0x1b29f0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1b29f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b29f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b29f8: 0x0  nop
    ctx->pc = 0x1b29f8u;
    // NOP
    // 0x1b29fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b29fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2a00: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x1b2a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a08: 0x0  nop
    ctx->pc = 0x1b2a08u;
    // NOP
    // 0x1b2a0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2a10: 0xe780bb14  swc1        $f0, -0x44EC($gp)
    ctx->pc = 0x1b2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949652), bits); }
    // 0x1b2a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2a18: 0xa382bb18  sb          $v0, -0x44E8($gp)
    ctx->pc = 0x1b2a18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949656), (uint8_t)GPR_U32(ctx, 2));
label_1b2a1c:
    // 0x1b2a1c: 0x8382bb20  lb          $v0, -0x44E0($gp)
    ctx->pc = 0x1b2a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949664)));
    // 0x1b2a20: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2A20u;
    {
        const bool branch_taken_0x1b2a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a20) {
            ctx->pc = 0x1B2A94u;
            goto label_1b2a94;
        }
    }
    ctx->pc = 0x1B2A28u;
    // 0x1b2a28: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2a2c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2a30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2A30u;
    {
        const bool branch_taken_0x1b2a30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2a30) {
            ctx->pc = 0x1B2A4Cu;
            goto label_1b2a4c;
        }
    }
    ctx->pc = 0x1B2A38u;
    // 0x1b2a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a3c: 0x0  nop
    ctx->pc = 0x1b2a3cu;
    // NOP
    // 0x1b2a40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2a44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2A44u;
    {
        const bool branch_taken_0x1b2a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a44) {
            ctx->pc = 0x1B2A68u;
            goto label_1b2a68;
        }
    }
    ctx->pc = 0x1B2A4Cu;
label_1b2a4c:
    // 0x1b2a4c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b2a50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2a54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a5c: 0x0  nop
    ctx->pc = 0x1b2a5cu;
    // NOP
    // 0x1b2a60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2a64: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2a64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2a68:
    // 0x1b2a68: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1b2a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a70: 0x0  nop
    ctx->pc = 0x1b2a70u;
    // NOP
    // 0x1b2a74: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2a74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2a78: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1b2a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a80: 0x0  nop
    ctx->pc = 0x1b2a80u;
    // NOP
    // 0x1b2a84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2a88: 0xe780bb1c  swc1        $f0, -0x44E4($gp)
    ctx->pc = 0x1b2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949660), bits); }
    // 0x1b2a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2a90: 0xa382bb20  sb          $v0, -0x44E0($gp)
    ctx->pc = 0x1b2a90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949664), (uint8_t)GPR_U32(ctx, 2));
label_1b2a94:
    // 0x1b2a94: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2a98: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1b2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2a9c: 0xc780bb14  lwc1        $f0, -0x44EC($gp)
    ctx->pc = 0x1b2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2aa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b2aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2aa4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2aa8: 0xe440013c  swc1        $f0, 0x13C($v0)
    ctx->pc = 0x1b2aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 316), bits); }
    // 0x1b2aac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2ab0: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1b2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2ab4: 0xc780bb1c  lwc1        $f0, -0x44E4($gp)
    ctx->pc = 0x1b2ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2ab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b2ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2abc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2ac0: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1b2ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1b2ac4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2ac8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2acc: 0x24640134  addiu       $a0, $v1, 0x134
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 308));
    // 0x1b2ad0: 0x2445013c  addiu       $a1, $v0, 0x13C
    ctx->pc = 0x1b2ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 316));
    // 0x1b2ad4: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B2AD4u;
    SET_GPR_U32(ctx, 31, 0x1B2ADCu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B2AD4u, 0x1B2ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2ADCu;
label_1b2adc:
    // 0x1b2adc: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2ae0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b2ae4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2AE4u;
    {
        const bool branch_taken_0x1b2ae4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b2ae4) {
            ctx->pc = 0x1B2B00u;
            goto label_1b2b00;
        }
    }
    ctx->pc = 0x1B2AECu;
    // 0x1b2aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2af0: 0x0  nop
    ctx->pc = 0x1b2af0u;
    // NOP
    // 0x1b2af4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2af8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2AF8u;
    {
        const bool branch_taken_0x1b2af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2af8) {
            ctx->pc = 0x1B2B1Cu;
            goto label_1b2b1c;
        }
    }
    ctx->pc = 0x1B2B00u;
label_1b2b00:
    // 0x1b2b00: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b2b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b2b04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2b08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2b0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2b0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b10: 0x0  nop
    ctx->pc = 0x1b2b10u;
    // NOP
    // 0x1b2b14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2b18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2b18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2b1c:
    // 0x1b2b1c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1b2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1b2b20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2b20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b24: 0x0  nop
    ctx->pc = 0x1b2b24u;
    // NOP
    // 0x1b2b28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2b28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2b2c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1b2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1b2b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b34: 0x0  nop
    ctx->pc = 0x1b2b34u;
    // NOP
    // 0x1b2b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2b3c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2b40: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x1b2b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x1b2b44: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1b2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2b48: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1b2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b2b4c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2B4Cu;
    {
        const bool branch_taken_0x1b2b4c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b2b4c) {
            ctx->pc = 0x1B2B68u;
            goto label_1b2b68;
        }
    }
    ctx->pc = 0x1B2B54u;
    // 0x1b2b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b58: 0x0  nop
    ctx->pc = 0x1b2b58u;
    // NOP
    // 0x1b2b5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2b60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2B60u;
    {
        const bool branch_taken_0x1b2b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b60) {
            ctx->pc = 0x1B2B84u;
            goto label_1b2b84;
        }
    }
    ctx->pc = 0x1B2B68u;
label_1b2b68:
    // 0x1b2b68: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b2b6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2b70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b2b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2b74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2b74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b78: 0x0  nop
    ctx->pc = 0x1b2b78u;
    // NOP
    // 0x1b2b7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2b80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2b84:
    // 0x1b2b84: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1b2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1b2b88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b8c: 0x0  nop
    ctx->pc = 0x1b2b8cu;
    // NOP
    // 0x1b2b90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2b94: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x1b2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x1b2b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b9c: 0x0  nop
    ctx->pc = 0x1b2b9cu;
    // NOP
    // 0x1b2ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2ba4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2ba8: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x1b2ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 328), bits); }
    // 0x1b2bac: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2bb0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1b2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b2bb4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2BB4u;
    {
        const bool branch_taken_0x1b2bb4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b2bb4) {
            ctx->pc = 0x1B2BD0u;
            goto label_1b2bd0;
        }
    }
    ctx->pc = 0x1B2BBCu;
    // 0x1b2bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2bc0: 0x0  nop
    ctx->pc = 0x1b2bc0u;
    // NOP
    // 0x1b2bc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2bc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2BC8u;
    {
        const bool branch_taken_0x1b2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bc8) {
            ctx->pc = 0x1B2BECu;
            goto label_1b2bec;
        }
    }
    ctx->pc = 0x1B2BD0u;
label_1b2bd0:
    // 0x1b2bd0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b2bd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2bd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b2bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2bdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2bdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2be0: 0x0  nop
    ctx->pc = 0x1b2be0u;
    // NOP
    // 0x1b2be4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2be8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2bec:
    // 0x1b2bec: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1b2bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2bf4: 0x0  nop
    ctx->pc = 0x1b2bf4u;
    // NOP
    // 0x1b2bf8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2bf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2bfc: 0x3c03c282  lui         $v1, 0xC282
    ctx->pc = 0x1b2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49794 << 16));
    // 0x1b2c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c04: 0x0  nop
    ctx->pc = 0x1b2c04u;
    // NOP
    // 0x1b2c08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2c0c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2c10: 0xe460014c  swc1        $f0, 0x14C($v1)
    ctx->pc = 0x1b2c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 332), bits); }
    // 0x1b2c14: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1b2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2c18: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1b2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b2c1c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2C1Cu;
    {
        const bool branch_taken_0x1b2c1c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b2c1c) {
            ctx->pc = 0x1B2C38u;
            goto label_1b2c38;
        }
    }
    ctx->pc = 0x1B2C24u;
    // 0x1b2c24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c28: 0x0  nop
    ctx->pc = 0x1b2c28u;
    // NOP
    // 0x1b2c2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2c30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2C30u;
    {
        const bool branch_taken_0x1b2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c30) {
            ctx->pc = 0x1B2C54u;
            goto label_1b2c54;
        }
    }
    ctx->pc = 0x1B2C38u;
label_1b2c38:
    // 0x1b2c38: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b2c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b2c3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2c40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b2c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2c44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2c44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c48: 0x0  nop
    ctx->pc = 0x1b2c48u;
    // NOP
    // 0x1b2c4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2c50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2c54:
    // 0x1b2c54: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1b2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1b2c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c5c: 0x0  nop
    ctx->pc = 0x1b2c5cu;
    // NOP
    // 0x1b2c60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2c60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2c64: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x1b2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x1b2c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c6c: 0x0  nop
    ctx->pc = 0x1b2c6cu;
    // NOP
    // 0x1b2c70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2c74: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2c78: 0xe4600150  swc1        $f0, 0x150($v1)
    ctx->pc = 0x1b2c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
    // 0x1b2c7c: 0x8383bb28  lb          $v1, -0x44D8($gp)
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949672)));
    // 0x1b2c80: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2C80u;
    {
        const bool branch_taken_0x1b2c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c80) {
            ctx->pc = 0x1B2CF4u;
            goto label_1b2cf4;
        }
    }
    ctx->pc = 0x1B2C88u;
    // 0x1b2c88: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1b2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2c8c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1b2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b2c90: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2C90u;
    {
        const bool branch_taken_0x1b2c90 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b2c90) {
            ctx->pc = 0x1B2CACu;
            goto label_1b2cac;
        }
    }
    ctx->pc = 0x1B2C98u;
    // 0x1b2c98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c9c: 0x0  nop
    ctx->pc = 0x1b2c9cu;
    // NOP
    // 0x1b2ca0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2ca4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2CA4u;
    {
        const bool branch_taken_0x1b2ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ca4) {
            ctx->pc = 0x1B2CC8u;
            goto label_1b2cc8;
        }
    }
    ctx->pc = 0x1B2CACu;
label_1b2cac:
    // 0x1b2cac: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b2cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b2cb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2cb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b2cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2cb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2cb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2cbc: 0x0  nop
    ctx->pc = 0x1b2cbcu;
    // NOP
    // 0x1b2cc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2cc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2cc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2cc8:
    // 0x1b2cc8: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1b2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1b2ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2cd0: 0x0  nop
    ctx->pc = 0x1b2cd0u;
    // NOP
    // 0x1b2cd4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2cd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2cd8: 0x3c03432f  lui         $v1, 0x432F
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17199 << 16));
    // 0x1b2cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2ce0: 0x0  nop
    ctx->pc = 0x1b2ce0u;
    // NOP
    // 0x1b2ce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2ce8: 0xe780bb24  swc1        $f0, -0x44DC($gp)
    ctx->pc = 0x1b2ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949668), bits); }
    // 0x1b2cec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2cf0: 0xa383bb28  sb          $v1, -0x44D8($gp)
    ctx->pc = 0x1b2cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949672), (uint8_t)GPR_U32(ctx, 3));
label_1b2cf4:
    // 0x1b2cf4: 0x8383bb30  lb          $v1, -0x44D0($gp)
    ctx->pc = 0x1b2cf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949680)));
    // 0x1b2cf8: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2CF8u;
    {
        const bool branch_taken_0x1b2cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cf8) {
            ctx->pc = 0x1B2D6Cu;
            goto label_1b2d6c;
        }
    }
    ctx->pc = 0x1B2D00u;
    // 0x1b2d00: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1b2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2d04: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1b2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b2d08: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2D08u;
    {
        const bool branch_taken_0x1b2d08 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b2d08) {
            ctx->pc = 0x1B2D24u;
            goto label_1b2d24;
        }
    }
    ctx->pc = 0x1B2D10u;
    // 0x1b2d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d14: 0x0  nop
    ctx->pc = 0x1b2d14u;
    // NOP
    // 0x1b2d18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2D1Cu;
    {
        const bool branch_taken_0x1b2d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d1c) {
            ctx->pc = 0x1B2D40u;
            goto label_1b2d40;
        }
    }
    ctx->pc = 0x1B2D24u;
label_1b2d24:
    // 0x1b2d24: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b2d28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2d2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b2d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2d30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2d30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d34: 0x0  nop
    ctx->pc = 0x1b2d34u;
    // NOP
    // 0x1b2d38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b2d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2d3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b2d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b2d40:
    // 0x1b2d40: 0x3c124416  lui         $s2, 0x4416
    ctx->pc = 0x1b2d40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17430 << 16));
    // 0x1b2d44: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b2d44u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d48: 0x0  nop
    ctx->pc = 0x1b2d48u;
    // NOP
    // 0x1b2d4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b2d4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b2d50: 0x3c04c170  lui         $a0, 0xC170
    ctx->pc = 0x1b2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49520 << 16));
    // 0x1b2d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b2d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d58: 0x0  nop
    ctx->pc = 0x1b2d58u;
    // NOP
    // 0x1b2d5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2d60: 0xe780bb2c  swc1        $f0, -0x44D4($gp)
    ctx->pc = 0x1b2d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949676), bits); }
    // 0x1b2d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d68: 0xa383bb30  sb          $v1, -0x44D0($gp)
    ctx->pc = 0x1b2d68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949680), (uint8_t)GPR_U32(ctx, 3));
label_1b2d6c:
    // 0x1b2d6c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2d70: 0xc461013c  lwc1        $f1, 0x13C($v1)
    ctx->pc = 0x1b2d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2d74: 0xc780bb24  lwc1        $f0, -0x44DC($gp)
    ctx->pc = 0x1b2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b2d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2d7c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2d80: 0xe48001cc  swc1        $f0, 0x1CC($a0)
    ctx->pc = 0x1b2d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
    // 0x1b2d84: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1b2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2d88: 0xc4a101d4  lwc1        $f1, 0x1D4($a1)
    ctx->pc = 0x1b2d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2d8c: 0xc780bb2c  lwc1        $f0, -0x44D4($gp)
    ctx->pc = 0x1b2d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b2d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2d94: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2d98: 0xe46001d0  swc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1b2d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
    // 0x1b2d9c: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2da0: 0xc7809508  lwc1        $f0, -0x6AF8($gp)
    ctx->pc = 0x1b2da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2da4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2da8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1b2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2dac: 0xe4a00158  swc1        $f0, 0x158($a1)
    ctx->pc = 0x1b2dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 344), bits); }
    // 0x1b2db0: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b2db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2db4: 0xc780950c  lwc1        $f0, -0x6AF4($gp)
    ctx->pc = 0x1b2db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2db8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2dbc: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x1b2dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2dc0: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x1b2dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    // 0x1b2dc4: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b2dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2dc8: 0xc7809510  lwc1        $f0, -0x6AF0($gp)
    ctx->pc = 0x1b2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2dcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2dd0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2dd4: 0xe4800160  swc1        $f0, 0x160($a0)
    ctx->pc = 0x1b2dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x1b2dd8: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b2dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2ddc: 0xc7809514  lwc1        $f0, -0x6AEC($gp)
    ctx->pc = 0x1b2ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2de0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2de4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1b2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2de8: 0xe4a0016c  swc1        $f0, 0x16C($a1)
    ctx->pc = 0x1b2de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 364), bits); }
    // 0x1b2dec: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b2decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2df0: 0xc7809518  lwc1        $f0, -0x6AE8($gp)
    ctx->pc = 0x1b2df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2df4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2df8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2dfc: 0xe4600170  swc1        $f0, 0x170($v1)
    ctx->pc = 0x1b2dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x1b2e00: 0xc78083f0  lwc1        $f0, -0x7C10($gp)
    ctx->pc = 0x1b2e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e04: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e08: 0xe4600178  swc1        $f0, 0x178($v1)
    ctx->pc = 0x1b2e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
    // 0x1b2e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e10: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x1b2e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e14: 0xe6200174  swc1        $f0, 0x174($s1)
    ctx->pc = 0x1b2e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x1b2e18: 0xc78082c8  lwc1        $f0, -0x7D38($gp)
    ctx->pc = 0x1b2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e1c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e20: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1b2e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1b2e24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2e28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e2c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e30: 0xe460017c  swc1        $f0, 0x17C($v1)
    ctx->pc = 0x1b2e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x1b2e34: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b2e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e38: 0xc4800158  lwc1        $f0, 0x158($a0)
    ctx->pc = 0x1b2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e3c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1b2e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e40: 0xe4a00154  swc1        $f0, 0x154($a1)
    ctx->pc = 0x1b2e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 340), bits); }
    // 0x1b2e44: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e48: 0xc460016c  lwc1        $f0, 0x16C($v1)
    ctx->pc = 0x1b2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e4c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1b2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2e50: 0xe4600168  swc1        $f0, 0x168($v1)
    ctx->pc = 0x1b2e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 360), bits); }
    // 0x1b2e54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b2e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2e58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b2e58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2e5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b2e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2e60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b2e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2e64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2e68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2e6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2e70: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1b2e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E7Cu;
    // 0x1b2e7c: 0x0  nop
    ctx->pc = 0x1b2e7cu;
    // NOP
    ctx->pc = 0x1b2e80u;
}
