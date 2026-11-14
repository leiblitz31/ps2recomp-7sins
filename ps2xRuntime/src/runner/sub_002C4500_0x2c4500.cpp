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

// Function: sub_002C4500
// Address: 0x2c4500 - 0x2c4990
void sub_002C4500_0x2c4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4500_0x2c4500");
#endif

    switch (ctx->pc) {
        case 0x2c4540u: goto label_2c4540;
        case 0x2c4564u: goto label_2c4564;
        case 0x2c4570u: goto label_2c4570;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c4594u: goto label_2c4594;
        case 0x2c45a4u: goto label_2c45a4;
        case 0x2c45b8u: goto label_2c45b8;
        case 0x2c45d0u: goto label_2c45d0;
        case 0x2c45ecu: goto label_2c45ec;
        case 0x2c4634u: goto label_2c4634;
        case 0x2c4658u: goto label_2c4658;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46fcu: goto label_2c46fc;
        case 0x2c4740u: goto label_2c4740;
        case 0x2c4748u: goto label_2c4748;
        case 0x2c4754u: goto label_2c4754;
        case 0x2c476cu: goto label_2c476c;
        case 0x2c479cu: goto label_2c479c;
        case 0x2c47c8u: goto label_2c47c8;
        case 0x2c47d4u: goto label_2c47d4;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4810u: goto label_2c4810;
        case 0x2c4820u: goto label_2c4820;
        case 0x2c483cu: goto label_2c483c;
        case 0x2c4858u: goto label_2c4858;
        case 0x2c4874u: goto label_2c4874;
        case 0x2c4888u: goto label_2c4888;
        case 0x2c48a4u: goto label_2c48a4;
        case 0x2c48b0u: goto label_2c48b0;
        case 0x2c48c0u: goto label_2c48c0;
        case 0x2c48e8u: goto label_2c48e8;
        case 0x2c48f4u: goto label_2c48f4;
        case 0x2c4904u: goto label_2c4904;
        case 0x2c4928u: goto label_2c4928;
        case 0x2c4938u: goto label_2c4938;
        case 0x2c4950u: goto label_2c4950;
        default: break;
    }

    ctx->pc = 0x2c4500u;

    // 0x2c4500: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2c4500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2c4504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c4504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c4508: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c4508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c450c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c4510: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c4510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c4514: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c4514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c4518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c451c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c452c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x2c452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x2c4530: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x2c4530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x2c4534: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2c4534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2c4538: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2C4538u;
    SET_GPR_U32(ctx, 31, 0x2C4540u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2C4538u, 0x2C4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4540u;
label_2c4540:
    // 0x2c4540: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c4544: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c4544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c4548: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c4548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c454c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2c454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4550: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2c4550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2c4554: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c4554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4558: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2c4558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c455c: 0xc0afd2c  jal         func_2BF4B0
    ctx->pc = 0x2C455Cu;
    SET_GPR_U32(ctx, 31, 0x2C4564u);
    ctx->pc = 0x2BF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF4B0u, 0x2C455Cu, 0x2C4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4564u;
label_2c4564:
    // 0x2c4564: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2c4564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2c4568: 0xc042290  jal         func_108A40
    ctx->pc = 0x2C4568u;
    SET_GPR_U32(ctx, 31, 0x2C4570u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2C4568u, 0x2C4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4570u;
label_2c4570:
    // 0x2c4570: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4574: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x2C4574u;
    {
        const bool branch_taken_0x2c4574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4574) {
            ctx->pc = 0x2C492Cu;
            goto label_2c492c;
        }
    }
    ctx->pc = 0x2C457Cu;
label_2c457c:
    // 0x2c457c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4580: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2c4580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x2c4584: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2c4584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c4588: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c458c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C458Cu;
    SET_GPR_U32(ctx, 31, 0x2C4594u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C458Cu, 0x2C4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4594u;
label_2c4594:
    // 0x2c4594: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c4594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c459c: 0xc096e10  jal         func_25B840
    ctx->pc = 0x2C459Cu;
    SET_GPR_U32(ctx, 31, 0x2C45A4u);
    ctx->pc = 0x25B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B840u, 0x2C459Cu, 0x2C45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45A4u;
label_2c45a4:
    // 0x2c45a4: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2C45A4u;
    {
        const bool branch_taken_0x2c45a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c45a4) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C45ACu;
    // 0x2c45ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c45acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45b0: 0xc096e38  jal         func_25B8E0
    ctx->pc = 0x2C45B0u;
    SET_GPR_U32(ctx, 31, 0x2C45B8u);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x2C45B0u, 0x2C45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45B8u;
label_2c45b8:
    // 0x2c45b8: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2C45B8u;
    {
        const bool branch_taken_0x2c45b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c45b8) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C45C0u;
    // 0x2c45c0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c45c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c45c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C45C8u;
    SET_GPR_U32(ctx, 31, 0x2C45D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C45C8u, 0x2C45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45D0u;
label_2c45d0:
    // 0x2c45d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c45d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45d4: 0xa3a0012f  sb          $zero, 0x12F($sp)
    ctx->pc = 0x2c45d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c45d8: 0xa3a0012e  sb          $zero, 0x12E($sp)
    ctx->pc = 0x2c45d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c45dc: 0xa3a0012d  sb          $zero, 0x12D($sp)
    ctx->pc = 0x2c45dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c45e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c45e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45e4: 0xc0a85b4  jal         func_2A16D0
    ctx->pc = 0x2C45E4u;
    SET_GPR_U32(ctx, 31, 0x2C45ECu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2C45E4u, 0x2C45ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45ECu;
label_2c45ec:
    // 0x2c45ec: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2c45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x2c45f0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c45f4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2c45f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c45f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c45f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c45fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4600: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c4600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c4604: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c4604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4608: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x2c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c460c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2c460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2c4610: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2c4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c4614: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c4618: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2c4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c461c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c4620: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c4620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c4624: 0x24c61820  addiu       $a2, $a2, 0x1820
    ctx->pc = 0x2c4624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6176));
    // 0x2c4628: 0x27a7012f  addiu       $a3, $sp, 0x12F
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 303));
    // 0x2c462c: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2C462Cu;
    SET_GPR_U32(ctx, 31, 0x2C4634u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2C462Cu, 0x2C4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4634u;
label_2c4634:
    // 0x2c4634: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c4634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c4638: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c463c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c463cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4640: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c4644: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2c4644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x2c4648: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2c4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2c464c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4650: 0xc0a85bc  jal         func_2A16F0
    ctx->pc = 0x2C4650u;
    SET_GPR_U32(ctx, 31, 0x2C4658u);
    ctx->pc = 0x2A16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16F0u, 0x2C4650u, 0x2C4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4658u;
label_2c4658:
    // 0x2c4658: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2c4658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x2c465c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c4660: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2c4660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c4664: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c4664u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c4668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c466c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c4670: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c4670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4674: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x2c4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c4678: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2c4678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2c467c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2c467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2c4680: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c4684: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2c4684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c4688: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c4688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c468c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c468cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c4690: 0x24c61820  addiu       $a2, $a2, 0x1820
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6176));
    // 0x2c4694: 0x27a7012e  addiu       $a3, $sp, 0x12E
    ctx->pc = 0x2c4694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 302));
    // 0x2c4698: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2C4698u;
    SET_GPR_U32(ctx, 31, 0x2C46A0u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2C4698u, 0x2C46A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46A0u;
label_2c46a0:
    // 0x2c46a0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c46a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c46a4: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c46a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c46a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c46ac: 0x27be0124  addiu       $fp, $sp, 0x124
    ctx->pc = 0x2c46acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c46b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46b4: 0xc0a85c4  jal         func_2A1710
    ctx->pc = 0x2C46B4u;
    SET_GPR_U32(ctx, 31, 0x2C46BCu);
    ctx->pc = 0x2A1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1710u, 0x2C46B4u, 0x2C46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46BCu;
label_2c46bc:
    // 0x2c46bc: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2c46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x2c46c0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c46c4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2c46c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c46c8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c46c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c46cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c46d0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c46d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c46d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c46d8: 0x27b70124  addiu       $s7, $sp, 0x124
    ctx->pc = 0x2c46d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c46dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c46e0: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2c46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c46e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c46e8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c46e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c46ec: 0x24c61820  addiu       $a2, $a2, 0x1820
    ctx->pc = 0x2c46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6176));
    // 0x2c46f0: 0x27a7012d  addiu       $a3, $sp, 0x12D
    ctx->pc = 0x2c46f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 301));
    // 0x2c46f4: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2C46F4u;
    SET_GPR_U32(ctx, 31, 0x2C46FCu);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2C46F4u, 0x2C46FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46FCu;
label_2c46fc:
    // 0x2c46fc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c46fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c4700: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2c4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2c4704: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c4704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4708: 0x27b60124  addiu       $s6, $sp, 0x124
    ctx->pc = 0x2c4708u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c470c: 0x93a2012f  lbu         $v0, 0x12F($sp)
    ctx->pc = 0x2c470cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 303)));
    // 0x2c4710: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4710u;
    {
        const bool branch_taken_0x2c4710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4710) {
            ctx->pc = 0x2C4730u;
            goto label_2c4730;
        }
    }
    ctx->pc = 0x2C4718u;
    // 0x2c4718: 0x93a2012e  lbu         $v0, 0x12E($sp)
    ctx->pc = 0x2c4718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 302)));
    // 0x2c471c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C471Cu;
    {
        const bool branch_taken_0x2c471c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c471c) {
            ctx->pc = 0x2C4730u;
            goto label_2c4730;
        }
    }
    ctx->pc = 0x2C4724u;
    // 0x2c4724: 0x93a2012d  lbu         $v0, 0x12D($sp)
    ctx->pc = 0x2c4724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 301)));
    // 0x2c4728: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2C4728u;
    {
        const bool branch_taken_0x2c4728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4728) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4730u;
label_2c4730:
    // 0x2c4730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4738: 0xc096e18  jal         func_25B860
    ctx->pc = 0x2C4738u;
    SET_GPR_U32(ctx, 31, 0x2C4740u);
    ctx->pc = 0x25B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B860u, 0x2C4738u, 0x2C4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4740u;
label_2c4740:
    // 0x2c4740: 0xc090864  jal         func_242190
    ctx->pc = 0x2C4740u;
    SET_GPR_U32(ctx, 31, 0x2C4748u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C4740u, 0x2C4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4748u;
label_2c4748:
    // 0x2c4748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c474c: 0xc0905a0  jal         func_241680
    ctx->pc = 0x2C474Cu;
    SET_GPR_U32(ctx, 31, 0x2C4754u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2C474Cu, 0x2C4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4754u;
label_2c4754:
    // 0x2c4754: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c4754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4758: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2c4758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c475c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2c475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c4760: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4760u;
    {
        const bool branch_taken_0x2c4760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4760) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4768u;
    // 0x2c4768: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2c4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2c476c:
    // 0x2c476c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2c476cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4770: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c4774: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c4774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c4778: 0x0  nop
    ctx->pc = 0x2c4778u;
    // NOP
    // 0x2c477c: 0x0  nop
    ctx->pc = 0x2c477cu;
    // NOP
    // 0x2c4780: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C4780u;
    {
        const bool branch_taken_0x2c4780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4780) {
            ctx->pc = 0x2C476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c476c;
        }
    }
    ctx->pc = 0x2C4788u;
label_2c4788:
    // 0x2c4788: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2c4788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c478c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2c478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c4790: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4790u;
    {
        const bool branch_taken_0x2c4790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4790) {
            ctx->pc = 0x2C47B8u;
            goto label_2c47b8;
        }
    }
    ctx->pc = 0x2C4798u;
    // 0x2c4798: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2c4798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2c479c:
    // 0x2c479c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2c479cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c47a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c47a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c47a8: 0x0  nop
    ctx->pc = 0x2c47a8u;
    // NOP
    // 0x2c47ac: 0x0  nop
    ctx->pc = 0x2c47acu;
    // NOP
    // 0x2c47b0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C47B0u;
    {
        const bool branch_taken_0x2c47b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c47b0) {
            ctx->pc = 0x2C479Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c479c;
        }
    }
    ctx->pc = 0x2C47B8u;
label_2c47b8:
    // 0x2c47b8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c47bc: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x2c47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2c47c0: 0xc0adeac  jal         func_2B7AB0
    ctx->pc = 0x2C47C0u;
    SET_GPR_U32(ctx, 31, 0x2C47C8u);
    ctx->pc = 0x2B7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AB0u, 0x2C47C0u, 0x2C47C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47C8u;
label_2c47c8:
    // 0x2c47c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c47c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c47cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C47CCu;
    {
        const bool branch_taken_0x2c47cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c47cc) {
            ctx->pc = 0x2C482Cu;
            goto label_2c482c;
        }
    }
    ctx->pc = 0x2C47D4u;
label_2c47d4:
    // 0x2c47d4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2c47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2c47d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c47dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c47e0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C47E0u;
    {
        const bool branch_taken_0x2c47e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c47e0) {
            ctx->pc = 0x2C4828u;
            goto label_2c4828;
        }
    }
    ctx->pc = 0x2C47E8u;
    // 0x2c47e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2c47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c47ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c47ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c47f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2c47f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c47f4: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2C47F4u;
    SET_GPR_U32(ctx, 31, 0x2C47FCu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2C47F4u, 0x2C47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47FCu;
label_2c47fc:
    // 0x2c47fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2c47fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c4800: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2c4800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c4804: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2c4804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c4808: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2C4808u;
    SET_GPR_U32(ctx, 31, 0x2C4810u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2C4808u, 0x2C4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4810u;
label_2c4810:
    // 0x2c4810: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x2c4810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2c4814: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x2c4814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2c4818: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2C4818u;
    SET_GPR_U32(ctx, 31, 0x2C4820u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2C4818u, 0x2C4820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4820u;
label_2c4820:
    // 0x2c4820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4820u;
    {
        const bool branch_taken_0x2c4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4820) {
            ctx->pc = 0x2C4844u;
            goto label_2c4844;
        }
    }
    ctx->pc = 0x2C4828u;
label_2c4828:
    // 0x2c4828: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x2c4828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_2c482c:
    // 0x2c482c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4830: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x2c4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2c4834: 0xc0addac  jal         func_2B76B0
    ctx->pc = 0x2C4834u;
    SET_GPR_U32(ctx, 31, 0x2C483Cu);
    ctx->pc = 0x2B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B76B0u, 0x2C4834u, 0x2C483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C483Cu;
label_2c483c:
    // 0x2c483c: 0x1602ffe5  bne         $s0, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2C483Cu;
    {
        const bool branch_taken_0x2c483c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c483c) {
            ctx->pc = 0x2C47D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c47d4;
        }
    }
    ctx->pc = 0x2C4844u;
label_2c4844:
    // 0x2c4844: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4848: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c4848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c484c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2c484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c4850: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2C4850u;
    SET_GPR_U32(ctx, 31, 0x2C4858u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C4850u, 0x2C4858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4858u;
label_2c4858:
    // 0x2c4858: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4858u;
    {
        const bool branch_taken_0x2c4858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4858) {
            ctx->pc = 0x2C4874u;
            goto label_2c4874;
        }
    }
    ctx->pc = 0x2C4860u;
    // 0x2c4860: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4864: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c4864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c4868: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2c4868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c486c: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2C486Cu;
    SET_GPR_U32(ctx, 31, 0x2C4874u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2C486Cu, 0x2C4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4874u;
label_2c4874:
    // 0x2c4874: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c4874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4878: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c4878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c487c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2c487cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c4880: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2C4880u;
    SET_GPR_U32(ctx, 31, 0x2C4888u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2C4880u, 0x2C4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4888u;
label_2c4888:
    // 0x2c4888: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4888u;
    {
        const bool branch_taken_0x2c4888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4888) {
            ctx->pc = 0x2C48A4u;
            goto label_2c48a4;
        }
    }
    ctx->pc = 0x2C4890u;
    // 0x2c4890: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c4890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4894: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c4894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c4898: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2c4898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c489c: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2C489Cu;
    SET_GPR_U32(ctx, 31, 0x2C48A4u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C489Cu, 0x2C48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48A4u;
label_2c48a4:
    // 0x2c48a4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2c48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2c48a8: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2C48A8u;
    SET_GPR_U32(ctx, 31, 0x2C48B0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C48A8u, 0x2C48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48B0u;
label_2c48b0:
    // 0x2c48b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48b4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c48b8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x2C48B8u;
    SET_GPR_U32(ctx, 31, 0x2C48C0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C48B8u, 0x2C48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48C0u;
label_2c48c0:
    // 0x2c48c0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2c48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x2c48c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c48c8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c48cc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2c48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2c48d0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2c48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c48d4: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2c48d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c48d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c48dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c48dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48e0: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C48E0u;
    SET_GPR_U32(ctx, 31, 0x2C48E8u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C48E0u, 0x2C48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48E8u;
label_2c48e8:
    // 0x2c48e8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2c48ec: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2C48ECu;
    SET_GPR_U32(ctx, 31, 0x2C48F4u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C48ECu, 0x2C48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48F4u;
label_2c48f4:
    // 0x2c48f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c48f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48f8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2c48f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c48fc: 0xc09a364  jal         func_268D90
    ctx->pc = 0x2C48FCu;
    SET_GPR_U32(ctx, 31, 0x2C4904u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C48FCu, 0x2C4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4904u;
label_2c4904:
    // 0x2c4904: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2c4904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2c4908: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2c4908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2c490c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c4910: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2c4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c4914: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x2c4914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2c4918: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c4918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c491c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c491cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4920: 0xc0af050  jal         func_2BC140
    ctx->pc = 0x2C4920u;
    SET_GPR_U32(ctx, 31, 0x2C4928u);
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x2C4920u, 0x2C4928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4928u;
label_2c4928:
    // 0x2c4928: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2c492c:
    // 0x2c492c: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2c492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2c4930: 0xc042288  jal         func_108A20
    ctx->pc = 0x2C4930u;
    SET_GPR_U32(ctx, 31, 0x2C4938u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2C4930u, 0x2C4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4938u;
label_2c4938:
    // 0x2c4938: 0x1642ff10  bne         $s2, $v0, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x2C4938u;
    {
        const bool branch_taken_0x2c4938 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4938) {
            ctx->pc = 0x2C457Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c457c;
        }
    }
    ctx->pc = 0x2C4940u;
    // 0x2c4940: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2c4944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4948: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2C4948u;
    SET_GPR_U32(ctx, 31, 0x2C4950u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2C4948u, 0x2C4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4950u;
label_2c4950:
    // 0x2c4950: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c4950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4954: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c4954u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4958: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c4958u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c495c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c495cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4960: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c4960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c496c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c496cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4978: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2c497c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C497Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C497Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4984u;
    // 0x2c4984: 0x0  nop
    ctx->pc = 0x2c4984u;
    // NOP
    // 0x2c4988: 0x0  nop
    ctx->pc = 0x2c4988u;
    // NOP
    // 0x2c498c: 0x0  nop
    ctx->pc = 0x2c498cu;
    // NOP
    ctx->pc = 0x2c4990u;
}
