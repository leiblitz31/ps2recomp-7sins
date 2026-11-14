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

// Function: sub_001FF220
// Address: 0x1ff220 - 0x1ff530
void sub_001FF220_0x1ff220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF220_0x1ff220");
#endif

    switch (ctx->pc) {
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff30cu: goto label_1ff30c;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff330u: goto label_1ff330;
        case 0x1ff364u: goto label_1ff364;
        case 0x1ff37cu: goto label_1ff37c;
        case 0x1ff388u: goto label_1ff388;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3b4u: goto label_1ff3b4;
        case 0x1ff3ccu: goto label_1ff3cc;
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff400u: goto label_1ff400;
        case 0x1ff40cu: goto label_1ff40c;
        case 0x1ff424u: goto label_1ff424;
        case 0x1ff438u: goto label_1ff438;
        case 0x1ff484u: goto label_1ff484;
        case 0x1ff4b4u: goto label_1ff4b4;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff4f0u: goto label_1ff4f0;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff510u: goto label_1ff510;
        default: break;
    }

    ctx->pc = 0x1ff220u;

    // 0x1ff220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ff220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ff224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ff224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ff228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff230: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1ff230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1ff234: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ff234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff238: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1ff238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1ff23c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff240: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF240u;
    {
        const bool branch_taken_0x1ff240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff240) {
            ctx->pc = 0x1FF25Cu;
            goto label_1ff25c;
        }
    }
    ctx->pc = 0x1FF248u;
    // 0x1ff248: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff24c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1ff24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ff250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff254: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF254u;
    {
        const bool branch_taken_0x1ff254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff254) {
            ctx->pc = 0x1FF268u;
            goto label_1ff268;
        }
    }
    ctx->pc = 0x1FF25Cu;
label_1ff25c:
    // 0x1ff25c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff260: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1FF260u;
    {
        const bool branch_taken_0x1ff260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff260) {
            ctx->pc = 0x1FF514u;
            goto label_1ff514;
        }
    }
    ctx->pc = 0x1FF268u;
label_1ff268:
    // 0x1ff268: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff26c: 0x8c5100ec  lw          $s1, 0xEC($v0)
    ctx->pc = 0x1ff26cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1ff270: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ff270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff274: 0x8c5000f0  lw          $s0, 0xF0($v0)
    ctx->pc = 0x1ff274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ff278: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ff278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff27c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ff280: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ff280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ff284: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ff284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff288: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ff288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ff28c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ff290: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ff290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff294: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff29c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ff2a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF2A0u;
    {
        const bool branch_taken_0x1ff2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2a0) {
            ctx->pc = 0x1FF2B4u;
            goto label_1ff2b4;
        }
    }
    ctx->pc = 0x1FF2A8u;
    // 0x1ff2a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2ac: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1FF2ACu;
    {
        const bool branch_taken_0x1ff2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2ac) {
            ctx->pc = 0x1FF514u;
            goto label_1ff514;
        }
    }
    ctx->pc = 0x1FF2B4u;
label_1ff2b4:
    // 0x1ff2b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ff2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff2b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ff2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff2bc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF2BCu;
    {
        const bool branch_taken_0x1ff2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2bc) {
            ctx->pc = 0x1FF2E4u;
            goto label_1ff2e4;
        }
    }
    ctx->pc = 0x1FF2C4u;
    // 0x1ff2c4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ff2c8:
    // 0x1ff2c8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ff2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff2cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ff2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ff2d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff2d4: 0x0  nop
    ctx->pc = 0x1ff2d4u;
    // NOP
    // 0x1ff2d8: 0x0  nop
    ctx->pc = 0x1ff2d8u;
    // NOP
    // 0x1ff2dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF2DCu;
    {
        const bool branch_taken_0x1ff2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2dc) {
            ctx->pc = 0x1FF2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff2c8;
        }
    }
    ctx->pc = 0x1FF2E4u;
label_1ff2e4:
    // 0x1ff2e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ff2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff2e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1ff2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff2ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ff2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ff2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2f4: 0xc07fa44  jal         func_1FE910
    ctx->pc = 0x1FF2F4u;
    SET_GPR_U32(ctx, 31, 0x1FF2FCu);
    ctx->pc = 0x1FE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE910u, 0x1FF2F4u, 0x1FF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2FCu;
label_1ff2fc:
    // 0x1ff2fc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ff300: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff304: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1FF304u;
    SET_GPR_U32(ctx, 31, 0x1FF30Cu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1FF304u, 0x1FF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF30Cu;
label_1ff30c:
    // 0x1ff30c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff310: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF310u;
    SET_GPR_U32(ctx, 31, 0x1FF318u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF310u, 0x1FF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF318u;
label_1ff318:
    // 0x1ff318: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff31c: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff324: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1ff324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ff328: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1FF328u;
    SET_GPR_U32(ctx, 31, 0x1FF330u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1FF328u, 0x1FF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF330u;
label_1ff330:
    // 0x1ff330: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ff334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ff334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff338: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ff338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff33c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ff33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ff340: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1ff340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ff344: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ff344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ff348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ff348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff34c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ff34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff350: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ff350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ff354: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ff354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ff358: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff35c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF35Cu;
    SET_GPR_U32(ctx, 31, 0x1FF364u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF35Cu, 0x1FF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF364u;
label_1ff364:
    // 0x1ff364: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff368: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff374: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FF374u;
    SET_GPR_U32(ctx, 31, 0x1FF37Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FF374u, 0x1FF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF37Cu;
label_1ff37c:
    // 0x1ff37c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff380: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF380u;
    SET_GPR_U32(ctx, 31, 0x1FF388u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF380u, 0x1FF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF388u;
label_1ff388:
    // 0x1ff388: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff38c: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff394: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1ff394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff398: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x1ff398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ff39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3a0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1FF3A0u;
    SET_GPR_U32(ctx, 31, 0x1FF3A8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1FF3A0u, 0x1FF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3A8u;
label_1ff3a8:
    // 0x1ff3a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff3ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF3ACu;
    SET_GPR_U32(ctx, 31, 0x1FF3B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF3ACu, 0x1FF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3B4u;
label_1ff3b4:
    // 0x1ff3b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff3b8: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ff3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff3c4: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1FF3C4u;
    SET_GPR_U32(ctx, 31, 0x1FF3CCu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1FF3C4u, 0x1FF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3CCu;
label_1ff3cc:
    // 0x1ff3cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff3d0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF3D0u;
    SET_GPR_U32(ctx, 31, 0x1FF3D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF3D0u, 0x1FF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3D8u;
label_1ff3d8:
    // 0x1ff3d8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff3dc: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff3e0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ff3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff3e4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1ff3e4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1ff3e8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1ff3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff3ec: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1ff3ecu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1ff3f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3f8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1FF3F8u;
    SET_GPR_U32(ctx, 31, 0x1FF400u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1FF3F8u, 0x1FF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF400u;
label_1ff400:
    // 0x1ff400: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff404: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF404u;
    SET_GPR_U32(ctx, 31, 0x1FF40Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF404u, 0x1FF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF40Cu;
label_1ff40c:
    // 0x1ff40c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff410: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff418: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff41c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1FF41Cu;
    SET_GPR_U32(ctx, 31, 0x1FF424u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1FF41Cu, 0x1FF424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF424u;
label_1ff424:
    // 0x1ff424: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1ff424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ff428: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ff428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff42c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF42Cu;
    {
        const bool branch_taken_0x1ff42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff42c) {
            ctx->pc = 0x1FF454u;
            goto label_1ff454;
        }
    }
    ctx->pc = 0x1FF434u;
    // 0x1ff434: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ff434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ff438:
    // 0x1ff438: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ff438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff43c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ff43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ff440: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff444: 0x0  nop
    ctx->pc = 0x1ff444u;
    // NOP
    // 0x1ff448: 0x0  nop
    ctx->pc = 0x1ff448u;
    // NOP
    // 0x1ff44c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF44Cu;
    {
        const bool branch_taken_0x1ff44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff44c) {
            ctx->pc = 0x1FF438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff438;
        }
    }
    ctx->pc = 0x1FF454u;
label_1ff454:
    // 0x1ff454: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1ff454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff458: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ff458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff45c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ff45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ff460: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ff460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ff464: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ff464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff468: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ff468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff46c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ff46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ff470: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ff470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ff474: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ff474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ff478: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff47c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF47Cu;
    SET_GPR_U32(ctx, 31, 0x1FF484u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF47Cu, 0x1FF484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF484u;
label_1ff484:
    // 0x1ff484: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff488: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff48c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff490: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1ff490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1ff494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ff494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff498: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1ff498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff49c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1ff49cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4a4: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ff4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ff4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff4ac: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1FF4ACu;
    SET_GPR_U32(ctx, 31, 0x1FF4B4u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1FF4ACu, 0x1FF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4B4u;
label_1ff4b4:
    // 0x1ff4b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff4b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF4B8u;
    SET_GPR_U32(ctx, 31, 0x1FF4C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF4B8u, 0x1FF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4C0u;
label_1ff4c0:
    // 0x1ff4c0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff4c4: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff4c8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1ff4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff4cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ff4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff4d0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1ff4d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ff4d4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1ff4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff4d8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ff4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff4dc: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1ff4dcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ff4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff4e8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1FF4E8u;
    SET_GPR_U32(ctx, 31, 0x1FF4F0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1FF4E8u, 0x1FF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4F0u;
label_1ff4f0:
    // 0x1ff4f0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ff4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff4f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FF4F4u;
    SET_GPR_U32(ctx, 31, 0x1FF4FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FF4F4u, 0x1FF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4FCu;
label_1ff4fc:
    // 0x1ff4fc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff500: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ff504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff508: 0xc08c258  jal         func_230960
    ctx->pc = 0x1FF508u;
    SET_GPR_U32(ctx, 31, 0x1FF510u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1FF508u, 0x1FF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF510u;
label_1ff510:
    // 0x1ff510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff514:
    // 0x1ff514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff520: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ff520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ff524: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF52Cu;
    // 0x1ff52c: 0x0  nop
    ctx->pc = 0x1ff52cu;
    // NOP
    ctx->pc = 0x1ff530u;
}
