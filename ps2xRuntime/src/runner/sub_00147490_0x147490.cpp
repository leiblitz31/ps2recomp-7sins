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

// Function: sub_00147490
// Address: 0x147490 - 0x147bc0
void sub_00147490_0x147490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147490_0x147490");
#endif

    switch (ctx->pc) {
        case 0x1474d0u: goto label_1474d0;
        case 0x1474fcu: goto label_1474fc;
        case 0x147520u: goto label_147520;
        case 0x14752cu: goto label_14752c;
        case 0x14753cu: goto label_14753c;
        case 0x147568u: goto label_147568;
        case 0x147594u: goto label_147594;
        case 0x1475b4u: goto label_1475b4;
        case 0x1475c0u: goto label_1475c0;
        case 0x147600u: goto label_147600;
        case 0x147638u: goto label_147638;
        case 0x14766cu: goto label_14766c;
        case 0x1476c4u: goto label_1476c4;
        case 0x1476e0u: goto label_1476e0;
        case 0x14771cu: goto label_14771c;
        case 0x147728u: goto label_147728;
        case 0x14773cu: goto label_14773c;
        case 0x147768u: goto label_147768;
        case 0x147784u: goto label_147784;
        case 0x147794u: goto label_147794;
        case 0x1477ccu: goto label_1477cc;
        case 0x1477d8u: goto label_1477d8;
        case 0x1477ecu: goto label_1477ec;
        case 0x147820u: goto label_147820;
        case 0x14783cu: goto label_14783c;
        case 0x147860u: goto label_147860;
        case 0x14786cu: goto label_14786c;
        case 0x147880u: goto label_147880;
        case 0x1478b4u: goto label_1478b4;
        case 0x1478d0u: goto label_1478d0;
        case 0x1478f4u: goto label_1478f4;
        case 0x147900u: goto label_147900;
        case 0x147914u: goto label_147914;
        case 0x14794cu: goto label_14794c;
        case 0x147968u: goto label_147968;
        case 0x1479b0u: goto label_1479b0;
        case 0x1479c8u: goto label_1479c8;
        case 0x1479d4u: goto label_1479d4;
        case 0x1479e8u: goto label_1479e8;
        case 0x147a34u: goto label_147a34;
        case 0x147a40u: goto label_147a40;
        case 0x147a54u: goto label_147a54;
        case 0x147a88u: goto label_147a88;
        case 0x147a9cu: goto label_147a9c;
        case 0x147ae8u: goto label_147ae8;
        case 0x147afcu: goto label_147afc;
        default: break;
    }

    ctx->pc = 0x147490u;

    // 0x147490: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x147494: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x147494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x147498: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x147498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14749c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1474a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1474a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1474a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1474a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1474a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1474a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1474ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1474acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1474b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1474b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1474b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1474b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1474b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1474b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1474bc: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x1474bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x1474c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1474c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1474c4: 0x24a52b10  addiu       $a1, $a1, 0x2B10
    ctx->pc = 0x1474c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11024));
    // 0x1474c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1474c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1474cc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1474ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1474d0:
    // 0x1474d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1474d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1474d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1474d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1474d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1474dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1474dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1474e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1474e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1474e4: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1474E4u;
    {
        const bool branch_taken_0x1474e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1474e4) {
            ctx->pc = 0x1474D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1474d0;
        }
    }
    ctx->pc = 0x1474ECu;
    // 0x1474ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1474ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1474f0: 0x24a52b30  addiu       $a1, $a1, 0x2B30
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11056));
    // 0x1474f4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1474f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1474f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1474f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1474fc:
    // 0x1474fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147500: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x147500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x147504: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x147508: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x147508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14750c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x147510: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147510u;
    {
        const bool branch_taken_0x147510 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x147510) {
            ctx->pc = 0x1474FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1474fc;
        }
    }
    ctx->pc = 0x147518u;
    // 0x147518: 0xc090864  jal         func_242190
    ctx->pc = 0x147518u;
    SET_GPR_U32(ctx, 31, 0x147520u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x147518u, 0x147520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147520u;
label_147520:
    // 0x147520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147524: 0xc090590  jal         func_241640
    ctx->pc = 0x147524u;
    SET_GPR_U32(ctx, 31, 0x14752Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x147524u, 0x14752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14752Cu;
label_14752c:
    // 0x14752c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14752cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147530: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147534: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x147534u;
    SET_GPR_U32(ctx, 31, 0x14753Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x147534u, 0x14753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14753Cu;
label_14753c:
    // 0x14753c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x14753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x147540: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x147544: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x147544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147548: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x147548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x14754c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x147550: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x147550u;
    {
        const bool branch_taken_0x147550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147550) {
            ctx->pc = 0x147574u;
            goto label_147574;
        }
    }
    ctx->pc = 0x147558u;
    // 0x147558: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x147558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x14755c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x14755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x147560: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147560u;
    SET_GPR_U32(ctx, 31, 0x147568u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147560u, 0x147568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147568u;
label_147568:
    // 0x147568: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x147568u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14756c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14756Cu;
    {
        const bool branch_taken_0x14756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14756c) {
            ctx->pc = 0x147578u;
            goto label_147578;
        }
    }
    ctx->pc = 0x147574u;
label_147574:
    // 0x147574: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x147574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147578:
    // 0x147578: 0xafbe0184  sw          $fp, 0x184($sp)
    ctx->pc = 0x147578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 30));
    // 0x14757c: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x147580: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147580u;
    {
        const bool branch_taken_0x147580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147580) {
            ctx->pc = 0x1475A0u;
            goto label_1475a0;
        }
    }
    ctx->pc = 0x147588u;
    // 0x147588: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x147588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x14758c: 0xc096880  jal         func_25A200
    ctx->pc = 0x14758Cu;
    SET_GPR_U32(ctx, 31, 0x147594u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x14758Cu, 0x147594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147594u;
label_147594:
    // 0x147594: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x147594u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147598u;
    {
        const bool branch_taken_0x147598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147598) {
            ctx->pc = 0x1475A4u;
            goto label_1475a4;
        }
    }
    ctx->pc = 0x1475A0u;
label_1475a0:
    // 0x1475a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1475a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1475a4:
    // 0x1475a4: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x1475a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475a8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1475ac: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1475ACu;
    SET_GPR_U32(ctx, 31, 0x1475B4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1475ACu, 0x1475B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475B4u;
label_1475b4:
    // 0x1475b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1475b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475b8: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x1475B8u;
    SET_GPR_U32(ctx, 31, 0x1475C0u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x1475B8u, 0x1475C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475C0u;
label_1475c0:
    // 0x1475c0: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1475c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1475c4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1475c8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1475c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1475cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1475d0: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1475d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1475d4: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1475d8: 0x8c72003c  lw          $s2, 0x3C($v1)
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1475dc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1475e0: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1475e4: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1475e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1475e8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1475e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1475ec: 0x1483014a  bne         $a0, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x1475ECu;
    {
        const bool branch_taken_0x1475ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1475ec) {
            ctx->pc = 0x147B18u;
            goto label_147b18;
        }
    }
    ctx->pc = 0x1475F4u;
    // 0x1475f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1475f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475f8: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x1475F8u;
    {
        const bool branch_taken_0x1475f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1475f8) {
            ctx->pc = 0x147B18u;
            goto label_147b18;
        }
    }
    ctx->pc = 0x147600u;
label_147600:
    // 0x147600: 0x2e410010  sltiu       $at, $s2, 0x10
    ctx->pc = 0x147600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x147604: 0x10200142  beqz        $at, . + 4 + (0x142 << 2)
    ctx->pc = 0x147604u;
    {
        const bool branch_taken_0x147604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147604) {
            ctx->pc = 0x147B10u;
            goto label_147b10;
        }
    }
    ctx->pc = 0x14760Cu;
    // 0x14760c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x147610: 0x248481c0  addiu       $a0, $a0, -0x7E40
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934976));
    // 0x147614: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x147614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x147618: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x147618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14761c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147620: 0x600008  jr          $v1
    ctx->pc = 0x147620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147628u: goto label_147628;
            case 0x1477F8u: goto label_1477f8;
            case 0x14788Cu: goto label_14788c;
            case 0x147920u: goto label_147920;
            case 0x147B10u: goto label_147b10;
            case 0x147B14u: goto label_147b14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147620u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147628u;
label_147628:
    // 0x147628: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x147628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x14762c: 0x24e72b50  addiu       $a3, $a3, 0x2B50
    ctx->pc = 0x14762cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11088));
    // 0x147630: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x147630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x147634: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x147634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_147638:
    // 0x147638: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14763c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x14763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x147640: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x147640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x147644: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x147648: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x147648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x14764c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x14764cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x147650: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x147654: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x147654u;
    {
        const bool branch_taken_0x147654 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x147654) {
            ctx->pc = 0x147638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147638;
        }
    }
    ctx->pc = 0x14765Cu;
    // 0x14765c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x14765cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x147660: 0x24e72b80  addiu       $a3, $a3, 0x2B80
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11136));
    // 0x147664: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x147668: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x147668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14766c:
    // 0x14766c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x147670: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x147674: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x147678: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14767c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x14767cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x147680: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x147680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x147684: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x147688: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x147688u;
    {
        const bool branch_taken_0x147688 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x147688) {
            ctx->pc = 0x14766Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14766c;
        }
    }
    ctx->pc = 0x147690u;
    // 0x147690: 0x2643fffe  addiu       $v1, $s2, -0x2
    ctx->pc = 0x147690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x147694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147698: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x14769c: 0x8c7500e0  lw          $s5, 0xE0($v1)
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1476a0: 0x16950028  bne         $s4, $s5, . + 4 + (0x28 << 2)
    ctx->pc = 0x1476A0u;
    {
        const bool branch_taken_0x1476a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x1476a0) {
            ctx->pc = 0x147744u;
            goto label_147744;
        }
    }
    ctx->pc = 0x1476A8u;
    // 0x1476a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1476a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1476ac: 0x16230025  bne         $s1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1476ACu;
    {
        const bool branch_taken_0x1476ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1476ac) {
            ctx->pc = 0x147744u;
            goto label_147744;
        }
    }
    ctx->pc = 0x1476B4u;
    // 0x1476b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1476b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476b8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1476b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1476bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1476BCu;
    SET_GPR_U32(ctx, 31, 0x1476C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1476BCu, 0x1476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476C4u;
label_1476c4:
    // 0x1476c4: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1476c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x1476c8: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x1476c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x1476cc: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x1476CCu;
    {
        const bool branch_taken_0x1476cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1476cc) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x1476D4u;
    // 0x1476d4: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x1476d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x1476d8: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x1476D8u;
    SET_GPR_U32(ctx, 31, 0x1476E0u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x1476D8u, 0x1476E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476E0u;
label_1476e0:
    // 0x1476e0: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x1476e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1476e4: 0x1460010b  bnez        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x1476E4u;
    {
        const bool branch_taken_0x1476e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1476e4) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x1476ECu;
    // 0x1476ec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1476ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1476f0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1476f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1476f4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1476f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1476f8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1476fc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147700: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x147700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x147704: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147708: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x147708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x14770c: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x14770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x147710: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x147710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147714: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x147714u;
    SET_GPR_U32(ctx, 31, 0x14771Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x147714u, 0x14771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14771Cu;
label_14771c:
    // 0x14771c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x147720: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x147720u;
    SET_GPR_U32(ctx, 31, 0x147728u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x147720u, 0x147728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147728u;
label_147728:
    // 0x147728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14772c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x14772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147730: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147734: 0xc041b24  jal         func_106C90
    ctx->pc = 0x147734u;
    SET_GPR_U32(ctx, 31, 0x14773Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x147734u, 0x14773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14773Cu;
label_14773c:
    // 0x14773c: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x14773Cu;
    {
        const bool branch_taken_0x14773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14773c) {
            ctx->pc = 0x147B8Cu;
            goto label_147b8c;
        }
    }
    ctx->pc = 0x147744u;
label_147744:
    // 0x147744: 0x169500f3  bne         $s4, $s5, . + 4 + (0xF3 << 2)
    ctx->pc = 0x147744u;
    {
        const bool branch_taken_0x147744 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x147744) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x14774Cu;
    // 0x14774c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147750: 0x162300f0  bne         $s1, $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x147750u;
    {
        const bool branch_taken_0x147750 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x147750) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147758u;
    // 0x147758: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14775c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x14775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x147760: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147760u;
    SET_GPR_U32(ctx, 31, 0x147768u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147760u, 0x147768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147768u;
label_147768:
    // 0x147768: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x147768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x14776c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x147770: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x147770u;
    {
        const bool branch_taken_0x147770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147770) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147778u;
    // 0x147778: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x147778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x14777c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x14777Cu;
    SET_GPR_U32(ctx, 31, 0x147784u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x14777Cu, 0x147784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147784u;
label_147784:
    // 0x147784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147788: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x147788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14778c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x14778Cu;
    SET_GPR_U32(ctx, 31, 0x147794u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x14778Cu, 0x147794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147794u;
label_147794:
    // 0x147794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147798: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x147798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14779c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1477a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1477a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477a4: 0x0  nop
    ctx->pc = 0x1477a4u;
    // NOP
    // 0x1477a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1477a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1477ac: 0x450000d9  bc1f        . + 4 + (0xD9 << 2)
    ctx->pc = 0x1477ACu;
    {
        const bool branch_taken_0x1477ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1477ac) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x1477B4u;
    // 0x1477b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1477b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1477bc: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x1477c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1477c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477c4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1477C4u;
    SET_GPR_U32(ctx, 31, 0x1477CCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1477C4u, 0x1477CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477CCu;
label_1477cc:
    // 0x1477cc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1477ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1477d0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1477D0u;
    SET_GPR_U32(ctx, 31, 0x1477D8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1477D0u, 0x1477D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477D8u;
label_1477d8:
    // 0x1477d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1477d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477dc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1477dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1477e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1477e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477e4: 0xc041b24  jal         func_106C90
    ctx->pc = 0x1477E4u;
    SET_GPR_U32(ctx, 31, 0x1477ECu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1477E4u, 0x1477ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477ECu;
label_1477ec:
    // 0x1477ec: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1477f0: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1477F0u;
    {
        const bool branch_taken_0x1477f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477f0) {
            ctx->pc = 0x147B3Cu;
            goto label_147b3c;
        }
    }
    ctx->pc = 0x1477F8u;
label_1477f8:
    // 0x1477f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1477fc: 0x168300c5  bne         $s4, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1477FCu;
    {
        const bool branch_taken_0x1477fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1477fc) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147804u;
    // 0x147804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147808: 0x162300c2  bne         $s1, $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x147808u;
    {
        const bool branch_taken_0x147808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x147808) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147810u;
    // 0x147810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147814: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x147814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x147818: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147818u;
    SET_GPR_U32(ctx, 31, 0x147820u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147818u, 0x147820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147820u;
label_147820:
    // 0x147820: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x147820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x147824: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x147824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x147828: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x147828u;
    {
        const bool branch_taken_0x147828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147828) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147830u;
    // 0x147830: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x147830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x147834: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x147834u;
    SET_GPR_U32(ctx, 31, 0x14783Cu);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x147834u, 0x14783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14783Cu;
label_14783c:
    // 0x14783c: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x14783cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x147840: 0x146000b4  bnez        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x147840u;
    {
        const bool branch_taken_0x147840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147840) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147848u;
    // 0x147848: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x147848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14784c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14784cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x147850: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x147850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x147854: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x147854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x147858: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x147858u;
    SET_GPR_U32(ctx, 31, 0x147860u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x147858u, 0x147860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147860u;
label_147860:
    // 0x147860: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x147860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x147864: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x147864u;
    SET_GPR_U32(ctx, 31, 0x14786Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x147864u, 0x14786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14786Cu;
label_14786c:
    // 0x14786c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147870: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x147870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147878: 0xc041b24  jal         func_106C90
    ctx->pc = 0x147878u;
    SET_GPR_U32(ctx, 31, 0x147880u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x147878u, 0x147880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147880u;
label_147880:
    // 0x147880: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x147880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x147884: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x147884u;
    {
        const bool branch_taken_0x147884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147884) {
            ctx->pc = 0x147B3Cu;
            goto label_147b3c;
        }
    }
    ctx->pc = 0x14788Cu;
label_14788c:
    // 0x14788c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14788cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147890: 0x168300a0  bne         $s4, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x147890u;
    {
        const bool branch_taken_0x147890 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x147890) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147898u;
    // 0x147898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14789c: 0x1623009d  bne         $s1, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x14789Cu;
    {
        const bool branch_taken_0x14789c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14789c) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x1478A4u;
    // 0x1478a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1478a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1478a8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1478ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1478ACu;
    SET_GPR_U32(ctx, 31, 0x1478B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1478ACu, 0x1478B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1478B4u;
label_1478b4:
    // 0x1478b4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1478b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1478b8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1478bc: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x1478BCu;
    {
        const bool branch_taken_0x1478bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1478bc) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x1478C4u;
    // 0x1478c4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1478c8: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x1478C8u;
    SET_GPR_U32(ctx, 31, 0x1478D0u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x1478C8u, 0x1478D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1478D0u;
label_1478d0:
    // 0x1478d0: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x1478d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1478d4: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1478D4u;
    {
        const bool branch_taken_0x1478d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1478d4) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x1478DCu;
    // 0x1478dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1478dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1478e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1478e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1478e4: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x1478e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x1478e8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1478ec: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1478ECu;
    SET_GPR_U32(ctx, 31, 0x1478F4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1478ECu, 0x1478F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1478F4u;
label_1478f4:
    // 0x1478f4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1478f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1478f8: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1478F8u;
    SET_GPR_U32(ctx, 31, 0x147900u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1478F8u, 0x147900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147900u;
label_147900:
    // 0x147900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147904: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x147904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14790c: 0xc041b24  jal         func_106C90
    ctx->pc = 0x14790Cu;
    SET_GPR_U32(ctx, 31, 0x147914u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x14790Cu, 0x147914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147914u;
label_147914:
    // 0x147914: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x147914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x147918: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x147918u;
    {
        const bool branch_taken_0x147918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147918) {
            ctx->pc = 0x147B3Cu;
            goto label_147b3c;
        }
    }
    ctx->pc = 0x147920u;
label_147920:
    // 0x147920: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x147924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147928: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x147928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14792c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14792cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147930: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x147930u;
    {
        const bool branch_taken_0x147930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147930) {
            ctx->pc = 0x147B3Cu;
            goto label_147b3c;
        }
    }
    ctx->pc = 0x147938u;
    // 0x147938: 0x10130076  beq         $zero, $s3, . + 4 + (0x76 << 2)
    ctx->pc = 0x147938u;
    {
        const bool branch_taken_0x147938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x147938) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147940u;
    // 0x147940: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x147940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x147944u;
    {
        const bool branch_taken_0x147944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147944) {
            ctx->pc = 0x147978u;
            goto label_147978;
        }
    }
    ctx->pc = 0x14794Cu;
label_14794c:
    // 0x14794c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x147950: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x147950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147954: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x147958: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x147958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14795c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147960: 0xc09138c  jal         func_244E30
    ctx->pc = 0x147960u;
    SET_GPR_U32(ctx, 31, 0x147968u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x147960u, 0x147968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147968u;
label_147968:
    // 0x147968: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x147968u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14796c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14796Cu;
    {
        const bool branch_taken_0x14796c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14796c) {
            ctx->pc = 0x147984u;
            goto label_147984;
        }
    }
    ctx->pc = 0x147974u;
    // 0x147974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_147978:
    // 0x147978: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x147978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x14797c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x14797Cu;
    {
        const bool branch_taken_0x14797c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14797c) {
            ctx->pc = 0x14794Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14794c;
        }
    }
    ctx->pc = 0x147984u;
label_147984:
    // 0x147984: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x147984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147988: 0x12030080  beq         $s0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x147988u;
    {
        const bool branch_taken_0x147988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x147988) {
            ctx->pc = 0x147B8Cu;
            goto label_147b8c;
        }
    }
    ctx->pc = 0x147990u;
    // 0x147990: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147994: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x147994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x147998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14799c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14799Cu;
    {
        const bool branch_taken_0x14799c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14799c) {
            ctx->pc = 0x147A1Cu;
            goto label_147a1c;
        }
    }
    ctx->pc = 0x1479A4u;
    // 0x1479a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1479a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1479A8u;
    {
        const bool branch_taken_0x1479a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479a8) {
            ctx->pc = 0x1479ECu;
            goto label_1479ec;
        }
    }
    ctx->pc = 0x1479B0u;
label_1479b0:
    // 0x1479b0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1479b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1479b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1479b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1479b8: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x1479b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x1479bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1479bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479c0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1479C0u;
    SET_GPR_U32(ctx, 31, 0x1479C8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1479C0u, 0x1479C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479C8u;
label_1479c8:
    // 0x1479c8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1479cc: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1479CCu;
    SET_GPR_U32(ctx, 31, 0x1479D4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1479CCu, 0x1479D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479D4u;
label_1479d4:
    // 0x1479d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1479d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479d8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1479d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1479dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1479dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1479e0: 0xc041b24  jal         func_106C90
    ctx->pc = 0x1479E0u;
    SET_GPR_U32(ctx, 31, 0x1479E8u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1479E0u, 0x1479E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479E8u;
label_1479e8:
    // 0x1479e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1479ec:
    // 0x1479ec: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x1479ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1479f0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1479F0u;
    {
        const bool branch_taken_0x1479f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1479f0) {
            ctx->pc = 0x1479B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1479b0;
        }
    }
    ctx->pc = 0x1479F8u;
    // 0x1479f8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1479f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1479fc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1479fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147a00: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x147a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x147a04: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147a08: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x147a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x147a0c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147a10: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x147a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x147a14: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x147A14u;
    {
        const bool branch_taken_0x147a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a14) {
            ctx->pc = 0x147B8Cu;
            goto label_147b8c;
        }
    }
    ctx->pc = 0x147A1Cu;
label_147a1c:
    // 0x147a1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147a20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x147a24: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x147a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x147a28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x147a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a2c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x147A2Cu;
    SET_GPR_U32(ctx, 31, 0x147A34u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x147A2Cu, 0x147A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A34u;
label_147a34:
    // 0x147a34: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x147a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x147a38: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x147A38u;
    SET_GPR_U32(ctx, 31, 0x147A40u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x147A38u, 0x147A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A40u;
label_147a40:
    // 0x147a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a44: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x147a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a4c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x147A4Cu;
    SET_GPR_U32(ctx, 31, 0x147A54u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x147A4Cu, 0x147A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A54u;
label_147a54:
    // 0x147a54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a58: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x147a58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a5c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x147a5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x147a60: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x147A60u;
    {
        const bool branch_taken_0x147a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a60) {
            ctx->pc = 0x147AB8u;
            goto label_147ab8;
        }
    }
    ctx->pc = 0x147A68u;
    // 0x147a68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x147a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x147a6c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x147a70: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x147a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x147a74: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x147A74u;
    {
        const bool branch_taken_0x147a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a74) {
            ctx->pc = 0x147B08u;
            goto label_147b08;
        }
    }
    ctx->pc = 0x147A7Cu;
    // 0x147a7c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x147a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x147a80: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x147A80u;
    SET_GPR_U32(ctx, 31, 0x147A88u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x147A80u, 0x147A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A88u;
label_147a88:
    // 0x147a88: 0x113023  negu        $a2, $s1
    ctx->pc = 0x147a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x147a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a90: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x147a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x147a94: 0xc041b24  jal         func_106C90
    ctx->pc = 0x147A94u;
    SET_GPR_U32(ctx, 31, 0x147A9Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x147A94u, 0x147A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A9Cu;
label_147a9c:
    // 0x147a9c: 0x2624fffe  addiu       $a0, $s1, -0x2
    ctx->pc = 0x147a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x147aa0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x147aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x147aa4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x147aa8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x147aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x147aac: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x147aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x147ab0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x147AB0u;
    {
        const bool branch_taken_0x147ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ab0) {
            ctx->pc = 0x147B3Cu;
            goto label_147b3c;
        }
    }
    ctx->pc = 0x147AB8u;
label_147ab8:
    // 0x147ab8: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x147ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x147abc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x147ABCu;
    {
        const bool branch_taken_0x147abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147abc) {
            ctx->pc = 0x147B08u;
            goto label_147b08;
        }
    }
    ctx->pc = 0x147AC4u;
    // 0x147ac4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x147ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x147ac8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x147ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147acc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x147ad0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x147ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x147ad4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147ad8: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x147ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x147adc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x147ae0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x147AE0u;
    SET_GPR_U32(ctx, 31, 0x147AE8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x147AE0u, 0x147AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AE8u;
label_147ae8:
    // 0x147ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147aec: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x147af0: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x147af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x147af4: 0xc040924  jal         func_102490
    ctx->pc = 0x147AF4u;
    SET_GPR_U32(ctx, 31, 0x147AFCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x147AF4u, 0x147AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AFCu;
label_147afc:
    // 0x147afc: 0x118823  negu        $s1, $s1
    ctx->pc = 0x147afcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x147b00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147B00u;
    {
        const bool branch_taken_0x147b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b00) {
            ctx->pc = 0x147B14u;
            goto label_147b14;
        }
    }
    ctx->pc = 0x147B08u;
label_147b08:
    // 0x147b08: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x147B08u;
    {
        const bool branch_taken_0x147b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b08) {
            ctx->pc = 0x147B8Cu;
            goto label_147b8c;
        }
    }
    ctx->pc = 0x147B10u;
label_147b10:
    // 0x147b10: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x147b10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147b14:
    // 0x147b14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x147b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_147b18:
    // 0x147b18: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x147b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x147b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147b20: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x147B20u;
    {
        const bool branch_taken_0x147b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x147b20) {
            ctx->pc = 0x147B34u;
            goto label_147b34;
        }
    }
    ctx->pc = 0x147B28u;
    // 0x147b28: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x147b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x147b2c: 0x1020feb4  beqz        $at, . + 4 + (-0x14C << 2)
    ctx->pc = 0x147B2Cu;
    {
        const bool branch_taken_0x147b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b2c) {
            ctx->pc = 0x147600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147600;
        }
    }
    ctx->pc = 0x147B34u;
label_147b34:
    // 0x147b34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x147B34u;
    {
        const bool branch_taken_0x147b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b34) {
            ctx->pc = 0x147B8Cu;
            goto label_147b8c;
        }
    }
    ctx->pc = 0x147B3Cu;
label_147b3c:
    // 0x147b3c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b40: 0xac720034  sw          $s2, 0x34($v1)
    ctx->pc = 0x147b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 18));
    // 0x147b44: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b48: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x147b48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x147b4c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b50: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x147b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x147b54: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x147b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147b58: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b5c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x147b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x147b60: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b64: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x147b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x147b68: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b6c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x147b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x147b70: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x147b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x147b74: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x147B74u;
    {
        const bool branch_taken_0x147b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b74) {
            ctx->pc = 0x147B8Cu;
            goto label_147b8c;
        }
    }
    ctx->pc = 0x147B7Cu;
    // 0x147b7c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b80: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x147b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x147b84: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x147b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x147b88: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x147b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_147b8c:
    // 0x147b8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x147b90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x147b90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x147b94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x147b94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147b98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x147b98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147b9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x147b9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147ba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x147ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x147ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147bb4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x147bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x147bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x147BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147BC0u;
}
