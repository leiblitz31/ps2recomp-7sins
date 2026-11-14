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

// Function: sub_001DDAB0
// Address: 0x1ddab0 - 0x1ddcb0
void sub_001DDAB0_0x1ddab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDAB0_0x1ddab0");
#endif

    switch (ctx->pc) {
        case 0x1ddad0u: goto label_1ddad0;
        case 0x1ddaf4u: goto label_1ddaf4;
        case 0x1ddb4cu: goto label_1ddb4c;
        case 0x1ddb68u: goto label_1ddb68;
        case 0x1ddb80u: goto label_1ddb80;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddba8u: goto label_1ddba8;
        case 0x1ddbb8u: goto label_1ddbb8;
        case 0x1ddbd4u: goto label_1ddbd4;
        case 0x1ddc28u: goto label_1ddc28;
        case 0x1ddc38u: goto label_1ddc38;
        case 0x1ddc54u: goto label_1ddc54;
        case 0x1ddc68u: goto label_1ddc68;
        default: break;
    }

    ctx->pc = 0x1ddab0u;

    // 0x1ddab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ddab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ddab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ddab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ddab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ddac0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ddac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1ddac4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ddac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddac8: 0xc0778ec  jal         func_1DE3B0
    ctx->pc = 0x1DDAC8u;
    SET_GPR_U32(ctx, 31, 0x1DDAD0u);
    ctx->pc = 0x1DE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3B0u, 0x1DDAC8u, 0x1DDAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAD0u;
label_1ddad0:
    // 0x1ddad0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddad4: 0xa0620029  sb          $v0, 0x29($v1)
    ctx->pc = 0x1ddad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ddad8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddadc: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x1ddadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x1ddae0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DDAE0u;
    {
        const bool branch_taken_0x1ddae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddae0) {
            ctx->pc = 0x1DDB08u;
            goto label_1ddb08;
        }
    }
    ctx->pc = 0x1DDAE8u;
    // 0x1ddae8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ddae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddaec: 0xc077788  jal         func_1DDE20
    ctx->pc = 0x1DDAECu;
    SET_GPR_U32(ctx, 31, 0x1DDAF4u);
    ctx->pc = 0x1DDE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDE20u, 0x1DDAECu, 0x1DDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAF4u;
label_1ddaf4:
    // 0x1ddaf4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1ddaf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ddaf8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1ddaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ddafc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1ddafcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ddb00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDB00u;
    {
        const bool branch_taken_0x1ddb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb00) {
            ctx->pc = 0x1DDB0Cu;
            goto label_1ddb0c;
        }
    }
    ctx->pc = 0x1DDB08u;
label_1ddb08:
    // 0x1ddb08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ddb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb0c:
    // 0x1ddb0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb10: 0xa0700028  sb          $s0, 0x28($v1)
    ctx->pc = 0x1ddb10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ddb14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb18: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x1ddb18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x1ddb1c: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1DDB1Cu;
    {
        const bool branch_taken_0x1ddb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb1c) {
            ctx->pc = 0x1DDC94u;
            goto label_1ddc94;
        }
    }
    ctx->pc = 0x1DDB24u;
    // 0x1ddb24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb28: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x1ddb28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1ddb2c: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1DDB2Cu;
    {
        const bool branch_taken_0x1ddb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb2c) {
            ctx->pc = 0x1DDC94u;
            goto label_1ddc94;
        }
    }
    ctx->pc = 0x1DDB34u;
    // 0x1ddb34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb38: 0x8c510078  lw          $s1, 0x78($v0)
    ctx->pc = 0x1ddb38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ddb3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb40: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1ddb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1ddb44: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DDB44u;
    SET_GPR_U32(ctx, 31, 0x1DDB4Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DDB44u, 0x1DDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB4Cu;
label_1ddb4c:
    // 0x1ddb4c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1ddb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddb50: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x1DDB50u;
    {
        const bool branch_taken_0x1ddb50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb50) {
            ctx->pc = 0x1DDC94u;
            goto label_1ddc94;
        }
    }
    ctx->pc = 0x1DDB58u;
    // 0x1ddb58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb5c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ddb60: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDB60u;
    SET_GPR_U32(ctx, 31, 0x1DDB68u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDB60u, 0x1DDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB68u;
label_1ddb68:
    // 0x1ddb68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb6c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1ddb70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ddb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ddb78: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DDB78u;
    SET_GPR_U32(ctx, 31, 0x1DDB80u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DDB78u, 0x1DDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB80u;
label_1ddb80:
    // 0x1ddb80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb84: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ddb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ddb88: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDB88u;
    SET_GPR_U32(ctx, 31, 0x1DDB90u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDB88u, 0x1DDB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB90u;
label_1ddb90:
    // 0x1ddb90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddb94: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1ddb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb9c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ddba0: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DDBA0u;
    SET_GPR_U32(ctx, 31, 0x1DDBA8u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DDBA0u, 0x1DDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBA8u;
label_1ddba8:
    // 0x1ddba8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddbac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ddbb0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDBB0u;
    SET_GPR_U32(ctx, 31, 0x1DDBB8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDBB0u, 0x1DDBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBB8u;
label_1ddbb8:
    // 0x1ddbb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ddbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddbc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddbc4: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x1ddbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ddbc8: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x1ddbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x1ddbcc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DDBCCu;
    SET_GPR_U32(ctx, 31, 0x1DDBD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DDBCCu, 0x1DDBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBD4u;
label_1ddbd4:
    // 0x1ddbd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ddbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddbd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ddbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ddbdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ddbdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ddbe0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1ddbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddbe4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ddbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddbe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddbe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddbec: 0x0  nop
    ctx->pc = 0x1ddbecu;
    // NOP
    // 0x1ddbf0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddbf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddbf4: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1ddbf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ddbf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ddbfc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ddbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ddc00: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1ddc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddc04: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ddc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc0c: 0x0  nop
    ctx->pc = 0x1ddc0cu;
    // NOP
    // 0x1ddc10: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddc10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddc14: 0x46021b5c  madd.s      $f13, $f3, $f2
    ctx->pc = 0x1ddc14u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ddc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc20: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DDC20u;
    SET_GPR_U32(ctx, 31, 0x1DDC28u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DDC20u, 0x1DDC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC28u;
label_1ddc28:
    // 0x1ddc28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddc2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ddc30: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDC30u;
    SET_GPR_U32(ctx, 31, 0x1DDC38u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDC30u, 0x1DDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC38u;
label_1ddc38:
    // 0x1ddc38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ddc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc3c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ddc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddc40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ddc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddc44: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x1ddc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ddc48: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x1ddc4c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DDC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DDC4Cu, 0x1DDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC54u;
label_1ddc54:
    // 0x1ddc54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ddc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ddc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc60: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DDC60u;
    SET_GPR_U32(ctx, 31, 0x1DDC68u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DDC60u, 0x1DDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC68u;
label_1ddc68:
    // 0x1ddc68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ddc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddc6c: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x1ddc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1ddc70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ddc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ddc74: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x1ddc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x1ddc78: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ddc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddc7c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1ddc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddc80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ddc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ddc84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ddc84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc88: 0x0  nop
    ctx->pc = 0x1ddc88u;
    // NOP
    // 0x1ddc8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ddc8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ddc90: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ddc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1ddc94:
    // 0x1ddc94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ddc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ddc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddca0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ddca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDCACu;
    // 0x1ddcac: 0x0  nop
    ctx->pc = 0x1ddcacu;
    // NOP
    ctx->pc = 0x1ddcb0u;
}
