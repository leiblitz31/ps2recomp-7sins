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

// Function: sub_00148110
// Address: 0x148110 - 0x148790
void sub_00148110_0x148110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148110_0x148110");
#endif

    switch (ctx->pc) {
        case 0x148150u: goto label_148150;
        case 0x148184u: goto label_148184;
        case 0x1481a8u: goto label_1481a8;
        case 0x1481b4u: goto label_1481b4;
        case 0x1481c4u: goto label_1481c4;
        case 0x1481f0u: goto label_1481f0;
        case 0x14821cu: goto label_14821c;
        case 0x14823cu: goto label_14823c;
        case 0x148248u: goto label_148248;
        case 0x148288u: goto label_148288;
        case 0x1482c0u: goto label_1482c0;
        case 0x148310u: goto label_148310;
        case 0x14832cu: goto label_14832c;
        case 0x148368u: goto label_148368;
        case 0x148374u: goto label_148374;
        case 0x148388u: goto label_148388;
        case 0x1483b4u: goto label_1483b4;
        case 0x1483d0u: goto label_1483d0;
        case 0x14840cu: goto label_14840c;
        case 0x148418u: goto label_148418;
        case 0x14842cu: goto label_14842c;
        case 0x148458u: goto label_148458;
        case 0x148480u: goto label_148480;
        case 0x14849cu: goto label_14849c;
        case 0x1484c4u: goto label_1484c4;
        case 0x1484d0u: goto label_1484d0;
        case 0x1484e4u: goto label_1484e4;
        case 0x14851cu: goto label_14851c;
        case 0x148538u: goto label_148538;
        case 0x148580u: goto label_148580;
        case 0x148598u: goto label_148598;
        case 0x1485a4u: goto label_1485a4;
        case 0x1485b8u: goto label_1485b8;
        case 0x148604u: goto label_148604;
        case 0x148610u: goto label_148610;
        case 0x148624u: goto label_148624;
        case 0x148658u: goto label_148658;
        case 0x14866cu: goto label_14866c;
        case 0x1486b8u: goto label_1486b8;
        case 0x1486ccu: goto label_1486cc;
        default: break;
    }

    ctx->pc = 0x148110u;

    // 0x148110: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x148110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x148114: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x148114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x148118: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x148118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14811c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x148120: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x148124: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148128: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14812c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14813c: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x14813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x148140: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x148140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x148144: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x148144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
    // 0x148148: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14814c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_148150:
    // 0x148150: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x148150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148154: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x148158: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x14815c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x148160: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x148160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x148164: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x148164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x148168: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x148168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x14816c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14816Cu;
    {
        const bool branch_taken_0x14816c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x14816c) {
            ctx->pc = 0x148150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148150;
        }
    }
    ctx->pc = 0x148174u;
    // 0x148174: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x148174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x148178: 0x24a52c00  addiu       $a1, $a1, 0x2C00
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11264));
    // 0x14817c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x148180: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x148180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_148184:
    // 0x148184: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x148184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148188: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14818c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x148190: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148194: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x148198: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148198u;
    {
        const bool branch_taken_0x148198 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x148198) {
            ctx->pc = 0x148184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148184;
        }
    }
    ctx->pc = 0x1481A0u;
    // 0x1481a0: 0xc090864  jal         func_242190
    ctx->pc = 0x1481A0u;
    SET_GPR_U32(ctx, 31, 0x1481A8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1481A0u, 0x1481A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481A8u;
label_1481a8:
    // 0x1481a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1481a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481ac: 0xc090590  jal         func_241640
    ctx->pc = 0x1481ACu;
    SET_GPR_U32(ctx, 31, 0x1481B4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1481ACu, 0x1481B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481B4u;
label_1481b4:
    // 0x1481b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1481b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1481b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1481bc: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x1481BCu;
    SET_GPR_U32(ctx, 31, 0x1481C4u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1481BCu, 0x1481C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481C4u;
label_1481c4:
    // 0x1481c4: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1481c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x1481c8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1481cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1481d0: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x1481d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x1481d4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1481d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1481D8u;
    {
        const bool branch_taken_0x1481d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1481d8) {
            ctx->pc = 0x1481FCu;
            goto label_1481fc;
        }
    }
    ctx->pc = 0x1481E0u;
    // 0x1481e0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1481e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1481e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1481e8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1481E8u;
    SET_GPR_U32(ctx, 31, 0x1481F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1481E8u, 0x1481F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481F0u;
label_1481f0:
    // 0x1481f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1481f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1481F4u;
    {
        const bool branch_taken_0x1481f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1481f4) {
            ctx->pc = 0x148200u;
            goto label_148200;
        }
    }
    ctx->pc = 0x1481FCu;
label_1481fc:
    // 0x1481fc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1481fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148200:
    // 0x148200: 0xafbe0184  sw          $fp, 0x184($sp)
    ctx->pc = 0x148200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 30));
    // 0x148204: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x148204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x148208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148208u;
    {
        const bool branch_taken_0x148208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148208) {
            ctx->pc = 0x148228u;
            goto label_148228;
        }
    }
    ctx->pc = 0x148210u;
    // 0x148210: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x148210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x148214: 0xc096880  jal         func_25A200
    ctx->pc = 0x148214u;
    SET_GPR_U32(ctx, 31, 0x14821Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x148214u, 0x14821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14821Cu;
label_14821c:
    // 0x14821c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x14821cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148220u;
    {
        const bool branch_taken_0x148220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148220) {
            ctx->pc = 0x14822Cu;
            goto label_14822c;
        }
    }
    ctx->pc = 0x148228u;
label_148228:
    // 0x148228: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x148228u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14822c:
    // 0x14822c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x14822cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148230: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148234: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x148234u;
    SET_GPR_U32(ctx, 31, 0x14823Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x148234u, 0x14823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14823Cu;
label_14823c:
    // 0x14823c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148240: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x148240u;
    SET_GPR_U32(ctx, 31, 0x148248u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x148240u, 0x148248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148248u;
label_148248:
    // 0x148248: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x148248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x14824c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x14824cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148250: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148258: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x148258u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14825c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x14825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148260: 0x8c72003c  lw          $s2, 0x3C($v1)
    ctx->pc = 0x148260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148264: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148268: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x14826c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x14826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148270: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x148274: 0x1483011c  bne         $a0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x148274u;
    {
        const bool branch_taken_0x148274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148274) {
            ctx->pc = 0x1486E8u;
            goto label_1486e8;
        }
    }
    ctx->pc = 0x14827Cu;
    // 0x14827c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14827cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148280: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x148280u;
    {
        const bool branch_taken_0x148280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148280) {
            ctx->pc = 0x1486E8u;
            goto label_1486e8;
        }
    }
    ctx->pc = 0x148288u;
label_148288:
    // 0x148288: 0x2e410013  sltiu       $at, $s2, 0x13
    ctx->pc = 0x148288u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x14828c: 0x10200114  beqz        $at, . + 4 + (0x114 << 2)
    ctx->pc = 0x14828Cu;
    {
        const bool branch_taken_0x14828c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14828c) {
            ctx->pc = 0x1486E0u;
            goto label_1486e0;
        }
    }
    ctx->pc = 0x148294u;
    // 0x148294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x148294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x148298: 0x24848230  addiu       $a0, $a0, -0x7DD0
    ctx->pc = 0x148298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
    // 0x14829c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14829cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1482a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1482a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1482a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1482a8: 0x600008  jr          $v1
    ctx->pc = 0x1482A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1482B0u: goto label_1482b0;
            case 0x1484F0u: goto label_1484f0;
            case 0x1486E0u: goto label_1486e0;
            case 0x1486E4u: goto label_1486e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1482A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1482B0u;
label_1482b0:
    // 0x1482b0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1482b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1482b4: 0x24c62c20  addiu       $a2, $a2, 0x2C20
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11296));
    // 0x1482b8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1482b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1482bc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1482bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1482c0:
    // 0x1482c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1482c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1482c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1482c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1482cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1482ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1482d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1482d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1482d4: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1482D4u;
    {
        const bool branch_taken_0x1482d4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1482d4) {
            ctx->pc = 0x1482C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1482c0;
        }
    }
    ctx->pc = 0x1482DCu;
    // 0x1482dc: 0x2643fffe  addiu       $v1, $s2, -0x2
    ctx->pc = 0x1482dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x1482e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1482e4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1482e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1482e8: 0x8c7300d0  lw          $s3, 0xD0($v1)
    ctx->pc = 0x1482e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x1482ec: 0x16930028  bne         $s4, $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1482ECu;
    {
        const bool branch_taken_0x1482ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x1482ec) {
            ctx->pc = 0x148390u;
            goto label_148390;
        }
    }
    ctx->pc = 0x1482F4u;
    // 0x1482f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1482f8: 0x16230025  bne         $s1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1482F8u;
    {
        const bool branch_taken_0x1482f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1482f8) {
            ctx->pc = 0x148390u;
            goto label_148390;
        }
    }
    ctx->pc = 0x148300u;
    // 0x148300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x148300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148304: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x148304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x148308: 0xc085538  jal         func_2154E0
    ctx->pc = 0x148308u;
    SET_GPR_U32(ctx, 31, 0x148310u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x148308u, 0x148310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148310u;
label_148310:
    // 0x148310: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x148310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x148314: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x148314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x148318: 0x106000f2  beqz        $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x148318u;
    {
        const bool branch_taken_0x148318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148318) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x148320u;
    // 0x148320: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x148320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x148324: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x148324u;
    SET_GPR_U32(ctx, 31, 0x14832Cu);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x148324u, 0x14832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14832Cu;
label_14832c:
    // 0x14832c: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x14832cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x148330: 0x146000ec  bnez        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x148330u;
    {
        const bool branch_taken_0x148330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148330) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x148338u;
    // 0x148338: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x148338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x14833c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x14833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148340: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x148340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x148344: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x148344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x148348: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x148348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14834c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x14834cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x148350: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x148350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x148354: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x148354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x148358: 0x24a52cc8  addiu       $a1, $a1, 0x2CC8
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11464));
    // 0x14835c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14835cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148360: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x148360u;
    SET_GPR_U32(ctx, 31, 0x148368u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x148360u, 0x148368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148368u;
label_148368:
    // 0x148368: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x14836c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x14836Cu;
    SET_GPR_U32(ctx, 31, 0x148374u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14836Cu, 0x148374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148374u;
label_148374:
    // 0x148374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148378: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x148378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14837c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14837cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148380: 0xc041b24  jal         func_106C90
    ctx->pc = 0x148380u;
    SET_GPR_U32(ctx, 31, 0x148388u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x148380u, 0x148388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148388u;
label_148388:
    // 0x148388: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x148388u;
    {
        const bool branch_taken_0x148388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148388) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x148390u;
label_148390:
    // 0x148390: 0x16930028  bne         $s4, $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x148390u;
    {
        const bool branch_taken_0x148390 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x148390) {
            ctx->pc = 0x148434u;
            goto label_148434;
        }
    }
    ctx->pc = 0x148398u;
    // 0x148398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x148398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14839c: 0x16230025  bne         $s1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14839Cu;
    {
        const bool branch_taken_0x14839c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14839c) {
            ctx->pc = 0x148434u;
            goto label_148434;
        }
    }
    ctx->pc = 0x1483A4u;
    // 0x1483a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1483a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483a8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1483a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1483ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1483ACu;
    SET_GPR_U32(ctx, 31, 0x1483B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1483ACu, 0x1483B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483B4u;
label_1483b4:
    // 0x1483b4: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x1483b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1483b8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1483bc: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1483BCu;
    {
        const bool branch_taken_0x1483bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1483bc) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x1483C4u;
    // 0x1483c4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x1483c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1483c8: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x1483C8u;
    SET_GPR_U32(ctx, 31, 0x1483D0u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x1483C8u, 0x1483D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D0u;
label_1483d0:
    // 0x1483d0: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x1483d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1483d4: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1483D4u;
    {
        const bool branch_taken_0x1483d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1483d4) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x1483DCu;
    // 0x1483dc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1483dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1483e0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1483e4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1483e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1483e8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1483e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1483ec: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1483ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1483f0: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1483f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1483f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1483f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1483f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1483f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1483fc: 0x24a52cc8  addiu       $a1, $a1, 0x2CC8
    ctx->pc = 0x1483fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11464));
    // 0x148400: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x148400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148404: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x148404u;
    SET_GPR_U32(ctx, 31, 0x14840Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x148404u, 0x14840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14840Cu;
label_14840c:
    // 0x14840c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148410: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x148410u;
    SET_GPR_U32(ctx, 31, 0x148418u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x148410u, 0x148418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148418u;
label_148418:
    // 0x148418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14841c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x14841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x148420: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x148424: 0xc041b24  jal         func_106C90
    ctx->pc = 0x148424u;
    SET_GPR_U32(ctx, 31, 0x14842Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x148424u, 0x14842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14842Cu;
label_14842c:
    // 0x14842c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x14842Cu;
    {
        const bool branch_taken_0x14842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14842c) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x148434u;
label_148434:
    // 0x148434: 0x169300ab  bne         $s4, $s3, . + 4 + (0xAB << 2)
    ctx->pc = 0x148434u;
    {
        const bool branch_taken_0x148434 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x148434) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x14843Cu;
    // 0x14843c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x148440: 0x162300a8  bne         $s1, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x148440u;
    {
        const bool branch_taken_0x148440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x148440) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x148448u;
    // 0x148448: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x148448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x14844c: 0x24a52cb0  addiu       $a1, $a1, 0x2CB0
    ctx->pc = 0x14844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11440));
    // 0x148450: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x148450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x148454: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x148454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_148458:
    // 0x148458: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x148458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14845c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x148460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x148460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x148464: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148468: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x148468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14846c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14846Cu;
    {
        const bool branch_taken_0x14846c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14846c) {
            ctx->pc = 0x148458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148458;
        }
    }
    ctx->pc = 0x148474u;
    // 0x148474: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148478: 0xc041b40  jal         func_106D00
    ctx->pc = 0x148478u;
    SET_GPR_U32(ctx, 31, 0x148480u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x148478u, 0x148480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148480u;
label_148480:
    // 0x148480: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x148480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x148484: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x148484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x148488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14848c: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x14848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x148490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148494: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x148494u;
    SET_GPR_U32(ctx, 31, 0x14849Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x148494u, 0x14849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14849Cu;
label_14849c:
    // 0x14849c: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x14849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x1484a0: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1484a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1484a4: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1484A4u;
    {
        const bool branch_taken_0x1484a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484a4) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x1484ACu;
    // 0x1484ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1484acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1484b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1484b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1484b4: 0x24a52cc8  addiu       $a1, $a1, 0x2CC8
    ctx->pc = 0x1484b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11464));
    // 0x1484b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1484b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484bc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1484BCu;
    SET_GPR_U32(ctx, 31, 0x1484C4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1484BCu, 0x1484C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484C4u;
label_1484c4:
    // 0x1484c4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1484c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1484c8: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1484C8u;
    SET_GPR_U32(ctx, 31, 0x1484D0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1484C8u, 0x1484D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484D0u;
label_1484d0:
    // 0x1484d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1484d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484d4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1484d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1484d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1484d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484dc: 0xc041b24  jal         func_106C90
    ctx->pc = 0x1484DCu;
    SET_GPR_U32(ctx, 31, 0x1484E4u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1484DCu, 0x1484E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484E4u;
label_1484e4:
    // 0x1484e4: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x1484e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1484e8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1484E8u;
    {
        const bool branch_taken_0x1484e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484e8) {
            ctx->pc = 0x14870Cu;
            goto label_14870c;
        }
    }
    ctx->pc = 0x1484F0u;
label_1484f0:
    // 0x1484f0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1484f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1484f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1484f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1484f8: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x1484f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1484fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1484fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148500: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x148500u;
    {
        const bool branch_taken_0x148500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148500) {
            ctx->pc = 0x14870Cu;
            goto label_14870c;
        }
    }
    ctx->pc = 0x148508u;
    // 0x148508: 0x10150076  beq         $zero, $s5, . + 4 + (0x76 << 2)
    ctx->pc = 0x148508u;
    {
        const bool branch_taken_0x148508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x148508) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x148510u;
    // 0x148510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x148510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148514: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x148514u;
    {
        const bool branch_taken_0x148514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148514) {
            ctx->pc = 0x148548u;
            goto label_148548;
        }
    }
    ctx->pc = 0x14851Cu;
label_14851c:
    // 0x14851c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14851cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148520: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x148520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x148524: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x148524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x148528: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x148528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14852c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148530: 0xc09138c  jal         func_244E30
    ctx->pc = 0x148530u;
    SET_GPR_U32(ctx, 31, 0x148538u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x148530u, 0x148538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148538u;
label_148538:
    // 0x148538: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x148538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14853c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14853Cu;
    {
        const bool branch_taken_0x14853c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14853c) {
            ctx->pc = 0x148554u;
            goto label_148554;
        }
    }
    ctx->pc = 0x148544u;
    // 0x148544: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_148548:
    // 0x148548: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x148548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14854c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x14854Cu;
    {
        const bool branch_taken_0x14854c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14854c) {
            ctx->pc = 0x14851Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14851c;
        }
    }
    ctx->pc = 0x148554u;
label_148554:
    // 0x148554: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x148554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x148558: 0x12030080  beq         $s0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x148558u;
    {
        const bool branch_taken_0x148558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x148558) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x148560u;
    // 0x148560: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148564: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x148564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x148568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14856c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14856Cu;
    {
        const bool branch_taken_0x14856c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14856c) {
            ctx->pc = 0x1485ECu;
            goto label_1485ec;
        }
    }
    ctx->pc = 0x148574u;
    // 0x148574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x148574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148578: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x148578u;
    {
        const bool branch_taken_0x148578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148578) {
            ctx->pc = 0x1485BCu;
            goto label_1485bc;
        }
    }
    ctx->pc = 0x148580u;
label_148580:
    // 0x148580: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x148580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x148584: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x148584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x148588: 0x24a52cc8  addiu       $a1, $a1, 0x2CC8
    ctx->pc = 0x148588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11464));
    // 0x14858c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14858cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148590: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x148590u;
    SET_GPR_U32(ctx, 31, 0x148598u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x148590u, 0x148598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148598u;
label_148598:
    // 0x148598: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x14859c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x14859Cu;
    SET_GPR_U32(ctx, 31, 0x1485A4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14859Cu, 0x1485A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485A4u;
label_1485a4:
    // 0x1485a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1485a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485a8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1485a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1485ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1485acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1485b0: 0xc041b24  jal         func_106C90
    ctx->pc = 0x1485B0u;
    SET_GPR_U32(ctx, 31, 0x1485B8u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1485B0u, 0x1485B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485B8u;
label_1485b8:
    // 0x1485b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1485bc:
    // 0x1485bc: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1485bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1485c0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1485C0u;
    {
        const bool branch_taken_0x1485c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485c0) {
            ctx->pc = 0x148580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148580;
        }
    }
    ctx->pc = 0x1485C8u;
    // 0x1485c8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1485cc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1485ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1485d0: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x1485d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x1485d4: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1485d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1485d8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1485d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1485dc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1485dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1485e0: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1485e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1485e4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1485E4u;
    {
        const bool branch_taken_0x1485e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485e4) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x1485ECu;
label_1485ec:
    // 0x1485ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1485f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1485f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1485f4: 0x24a52cc8  addiu       $a1, $a1, 0x2CC8
    ctx->pc = 0x1485f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11464));
    // 0x1485f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1485f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485fc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1485FCu;
    SET_GPR_U32(ctx, 31, 0x148604u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1485FCu, 0x148604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148604u;
label_148604:
    // 0x148604: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148608: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x148608u;
    SET_GPR_U32(ctx, 31, 0x148610u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x148608u, 0x148610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148610u;
label_148610:
    // 0x148610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148614: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x148614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x148618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14861c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x14861Cu;
    SET_GPR_U32(ctx, 31, 0x148624u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x14861Cu, 0x148624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148624u;
label_148624:
    // 0x148624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x148624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148628: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x148628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14862c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x14862cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x148630: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x148630u;
    {
        const bool branch_taken_0x148630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148630) {
            ctx->pc = 0x148688u;
            goto label_148688;
        }
    }
    ctx->pc = 0x148638u;
    // 0x148638: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x148638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14863c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x14863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x148640: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x148644: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x148644u;
    {
        const bool branch_taken_0x148644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148644) {
            ctx->pc = 0x1486D8u;
            goto label_1486d8;
        }
    }
    ctx->pc = 0x14864Cu;
    // 0x14864c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148650: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x148650u;
    SET_GPR_U32(ctx, 31, 0x148658u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x148650u, 0x148658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148658u;
label_148658:
    // 0x148658: 0x113023  negu        $a2, $s1
    ctx->pc = 0x148658u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x14865c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148660: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x148664: 0xc041b24  jal         func_106C90
    ctx->pc = 0x148664u;
    SET_GPR_U32(ctx, 31, 0x14866Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x148664u, 0x14866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14866Cu;
label_14866c:
    // 0x14866c: 0x2624fffe  addiu       $a0, $s1, -0x2
    ctx->pc = 0x14866cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x148670: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x148670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148674: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x148674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x148678: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x14867c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x14867cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148680: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x148680u;
    {
        const bool branch_taken_0x148680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148680) {
            ctx->pc = 0x14870Cu;
            goto label_14870c;
        }
    }
    ctx->pc = 0x148688u;
label_148688:
    // 0x148688: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x148688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x14868c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x14868Cu;
    {
        const bool branch_taken_0x14868c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14868c) {
            ctx->pc = 0x1486D8u;
            goto label_1486d8;
        }
    }
    ctx->pc = 0x148694u;
    // 0x148694: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148698: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x148698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14869c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1486a0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1486a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1486a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1486a8: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1486a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1486ac: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1486b0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x1486B0u;
    SET_GPR_U32(ctx, 31, 0x1486B8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1486B0u, 0x1486B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486B8u;
label_1486b8:
    // 0x1486b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1486b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486bc: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x1486bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x1486c0: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1486c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1486c4: 0xc040924  jal         func_102490
    ctx->pc = 0x1486C4u;
    SET_GPR_U32(ctx, 31, 0x1486CCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x1486C4u, 0x1486CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486CCu;
label_1486cc:
    // 0x1486cc: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1486ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1486d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1486D0u;
    {
        const bool branch_taken_0x1486d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486d0) {
            ctx->pc = 0x1486E4u;
            goto label_1486e4;
        }
    }
    ctx->pc = 0x1486D8u;
label_1486d8:
    // 0x1486d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1486D8u;
    {
        const bool branch_taken_0x1486d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486d8) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x1486E0u;
label_1486e0:
    // 0x1486e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1486e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1486e4:
    // 0x1486e4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1486e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1486e8:
    // 0x1486e8: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x1486e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1486ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1486ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1486f0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1486F0u;
    {
        const bool branch_taken_0x1486f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1486f0) {
            ctx->pc = 0x148704u;
            goto label_148704;
        }
    }
    ctx->pc = 0x1486F8u;
    // 0x1486f8: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x1486f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1486fc: 0x1020fee2  beqz        $at, . + 4 + (-0x11E << 2)
    ctx->pc = 0x1486FCu;
    {
        const bool branch_taken_0x1486fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486fc) {
            ctx->pc = 0x148288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148288;
        }
    }
    ctx->pc = 0x148704u;
label_148704:
    // 0x148704: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x148704u;
    {
        const bool branch_taken_0x148704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148704) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x14870Cu;
label_14870c:
    // 0x14870c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x14870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148710: 0xac720034  sw          $s2, 0x34($v1)
    ctx->pc = 0x148710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 18));
    // 0x148714: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148718: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x148718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x14871c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x14871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148720: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x148720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x148724: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148728: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14872c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x14872cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x148730: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148734: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x148734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x148738: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14873c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x14873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148740: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x148740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x148744: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x148744u;
    {
        const bool branch_taken_0x148744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148744) {
            ctx->pc = 0x14875Cu;
            goto label_14875c;
        }
    }
    ctx->pc = 0x14874Cu;
    // 0x14874c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x14874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148750: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148754: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x148758: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x148758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_14875c:
    // 0x14875c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14875cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148760: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x148760u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148764: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148768: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x148768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14876c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14876cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14877c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14877cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148784: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x148788: 0x3e00008  jr          $ra
    ctx->pc = 0x148788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148790u;
}
