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

// Function: sub_001F6EF0
// Address: 0x1f6ef0 - 0x1f7450
void sub_001F6EF0_0x1f6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6EF0_0x1f6ef0");
#endif

    switch (ctx->pc) {
        case 0x1f6f14u: goto label_1f6f14;
        case 0x1f6f38u: goto label_1f6f38;
        case 0x1f6f50u: goto label_1f6f50;
        case 0x1f6f8cu: goto label_1f6f8c;
        case 0x1f6f9cu: goto label_1f6f9c;
        case 0x1f6fb8u: goto label_1f6fb8;
        case 0x1f7050u: goto label_1f7050;
        case 0x1f7088u: goto label_1f7088;
        case 0x1f70c0u: goto label_1f70c0;
        case 0x1f70f8u: goto label_1f70f8;
        case 0x1f711cu: goto label_1f711c;
        case 0x1f716cu: goto label_1f716c;
        case 0x1f718cu: goto label_1f718c;
        case 0x1f719cu: goto label_1f719c;
        case 0x1f71bcu: goto label_1f71bc;
        case 0x1f7220u: goto label_1f7220;
        case 0x1f7258u: goto label_1f7258;
        case 0x1f7290u: goto label_1f7290;
        case 0x1f72c8u: goto label_1f72c8;
        case 0x1f72ecu: goto label_1f72ec;
        case 0x1f7318u: goto label_1f7318;
        case 0x1f7358u: goto label_1f7358;
        case 0x1f7388u: goto label_1f7388;
        case 0x1f73c0u: goto label_1f73c0;
        case 0x1f73f8u: goto label_1f73f8;
        case 0x1f7430u: goto label_1f7430;
        default: break;
    }

    ctx->pc = 0x1f6ef0u;

    // 0x1f6ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f6efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6f00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f6f04: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1f6f08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f0c: 0xc07e5e8  jal         func_1F97A0
    ctx->pc = 0x1F6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F6F14u);
    ctx->pc = 0x1F97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97A0u, 0x1F6F0Cu, 0x1F6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F14u;
label_1f6f14:
    // 0x1f6f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6f18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6f1c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f6f20: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f6f24: 0x24a58af8  addiu       $a1, $a1, -0x7508
    ctx->pc = 0x1f6f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937336));
    // 0x1f6f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f2c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6f30: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F6F30u;
    SET_GPR_U32(ctx, 31, 0x1F6F38u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F6F30u, 0x1F6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F38u;
label_1f6f38:
    // 0x1f6f38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f40: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f6f44: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f6f48: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F6F48u;
    SET_GPR_U32(ctx, 31, 0x1F6F50u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F6F48u, 0x1F6F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F50u;
label_1f6f50:
    // 0x1f6f50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6f54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6f58: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F6F58u;
    {
        const bool branch_taken_0x1f6f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6f58) {
            ctx->pc = 0x1F7100u;
            goto label_1f7100;
        }
    }
    ctx->pc = 0x1F6F60u;
    // 0x1f6f60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f64: 0x904200b4  lbu         $v0, 0xB4($v0)
    ctx->pc = 0x1f6f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1f6f68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6F68u;
    {
        const bool branch_taken_0x1f6f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f68) {
            ctx->pc = 0x1F6F9Cu;
            goto label_1f6f9c;
        }
    }
    ctx->pc = 0x1F6F70u;
    // 0x1f6f70: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1f6f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6f74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f7c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f6f80: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f6f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f6f84: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F6F84u;
    SET_GPR_U32(ctx, 31, 0x1F6F8Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F6F84u, 0x1F6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F8Cu;
label_1f6f8c:
    // 0x1f6f8c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1f6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1f6f90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6f94: 0xc07db68  jal         func_1F6DA0
    ctx->pc = 0x1F6F94u;
    SET_GPR_U32(ctx, 31, 0x1F6F9Cu);
    ctx->pc = 0x1F6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6DA0u, 0x1F6F94u, 0x1F6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F9Cu;
label_1f6f9c:
    // 0x1f6f9c: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6fa0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6fa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6fa8: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f6fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f6fac: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f6facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f6fb0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F6FB0u;
    SET_GPR_U32(ctx, 31, 0x1F6FB8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F6FB0u, 0x1F6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6FB8u;
label_1f6fb8:
    // 0x1f6fb8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1f6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1f6fbc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6fc0: 0xac6000fc  sw          $zero, 0xFC($v1)
    ctx->pc = 0x1f6fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 0));
    // 0x1f6fc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6fc8: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fcc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1f6fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1f6fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6fd4: 0x0  nop
    ctx->pc = 0x1f6fd4u;
    // NOP
    // 0x1f6fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6fdc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6fe0: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f6fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1f6fe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6fe8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6fec: 0xa06400eb  sb          $a0, 0xEB($v1)
    ctx->pc = 0x1f6fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 235), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f6ff0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ff4: 0xa06000f8  sb          $zero, 0xF8($v1)
    ctx->pc = 0x1f6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6ff8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ffc: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f6ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1f7000: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7000u;
    {
        const bool branch_taken_0x1f7000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7000) {
            ctx->pc = 0x1F7020u;
            goto label_1f7020;
        }
    }
    ctx->pc = 0x1F7008u;
    // 0x1f7008: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f700c: 0xc46100c8  lwc1        $f1, 0xC8($v1)
    ctx->pc = 0x1f700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7010: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7014: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f7018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f701c: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f701cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
label_1f7020:
    // 0x1f7020: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7024: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7028: 0x8c630230  lw          $v1, 0x230($v1)
    ctx->pc = 0x1f7028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x1f702c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F702Cu;
    {
        const bool branch_taken_0x1f702c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f702c) {
            ctx->pc = 0x1F7058u;
            goto label_1f7058;
        }
    }
    ctx->pc = 0x1F7034u;
    // 0x1f7034: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f703c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f703cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7048: 0xc07df0c  jal         func_1F7C30
    ctx->pc = 0x1F7048u;
    SET_GPR_U32(ctx, 31, 0x1F7050u);
    ctx->pc = 0x1F7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C30u, 0x1F7048u, 0x1F7050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7050u;
label_1f7050:
    // 0x1f7050: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F7050u;
    {
        const bool branch_taken_0x1f7050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7050) {
            ctx->pc = 0x1F70F8u;
            goto label_1f70f8;
        }
    }
    ctx->pc = 0x1F7058u;
label_1f7058:
    // 0x1f7058: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f705c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7060: 0x8c630234  lw          $v1, 0x234($v1)
    ctx->pc = 0x1f7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x1f7064: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7064u;
    {
        const bool branch_taken_0x1f7064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7064) {
            ctx->pc = 0x1F7090u;
            goto label_1f7090;
        }
    }
    ctx->pc = 0x1F706Cu;
    // 0x1f706c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f707c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f707cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7080: 0xc07df7c  jal         func_1F7DF0
    ctx->pc = 0x1F7080u;
    SET_GPR_U32(ctx, 31, 0x1F7088u);
    ctx->pc = 0x1F7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF0u, 0x1F7080u, 0x1F7088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7088u;
label_1f7088:
    // 0x1f7088: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F7088u;
    {
        const bool branch_taken_0x1f7088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7088) {
            ctx->pc = 0x1F70F8u;
            goto label_1f70f8;
        }
    }
    ctx->pc = 0x1F7090u;
label_1f7090:
    // 0x1f7090: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7094: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7098: 0x8c630238  lw          $v1, 0x238($v1)
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
    // 0x1f709c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F709Cu;
    {
        const bool branch_taken_0x1f709c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f709c) {
            ctx->pc = 0x1F70C8u;
            goto label_1f70c8;
        }
    }
    ctx->pc = 0x1F70A4u;
    // 0x1f70a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f70a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f70a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f70acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f70b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f70b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70b8: 0xc07dfec  jal         func_1F7FB0
    ctx->pc = 0x1F70B8u;
    SET_GPR_U32(ctx, 31, 0x1F70C0u);
    ctx->pc = 0x1F7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB0u, 0x1F70B8u, 0x1F70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70C0u;
label_1f70c0:
    // 0x1f70c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F70C0u;
    {
        const bool branch_taken_0x1f70c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f70c0) {
            ctx->pc = 0x1F70F8u;
            goto label_1f70f8;
        }
    }
    ctx->pc = 0x1F70C8u;
label_1f70c8:
    // 0x1f70c8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f70cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f70d0: 0x8c63023c  lw          $v1, 0x23C($v1)
    ctx->pc = 0x1f70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x1f70d4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F70D4u;
    {
        const bool branch_taken_0x1f70d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f70d4) {
            ctx->pc = 0x1F70F8u;
            goto label_1f70f8;
        }
    }
    ctx->pc = 0x1F70DCu;
    // 0x1f70dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f70e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f70e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f70e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f70e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f70ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70f0: 0xc07e05c  jal         func_1F8170
    ctx->pc = 0x1F70F0u;
    SET_GPR_U32(ctx, 31, 0x1F70F8u);
    ctx->pc = 0x1F8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8170u, 0x1F70F0u, 0x1F70F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70F8u;
label_1f70f8:
    // 0x1f70f8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1F70F8u;
    {
        const bool branch_taken_0x1f70f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f70f8) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F7100u;
label_1f7100:
    // 0x1f7100: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1f7100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7104: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7108: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f7108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f710c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7110: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7114: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7114u;
    SET_GPR_U32(ctx, 31, 0x1F711Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7114u, 0x1F711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F711Cu;
label_1f711c:
    // 0x1f711c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7120: 0x1222006b  beq         $s1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1F7120u;
    {
        const bool branch_taken_0x1f7120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7120) {
            ctx->pc = 0x1F72D0u;
            goto label_1f72d0;
        }
    }
    ctx->pc = 0x1F7128u;
    // 0x1f7128: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f7128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f712c: 0x904200b4  lbu         $v0, 0xB4($v0)
    ctx->pc = 0x1f712cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1f7130: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7130u;
    {
        const bool branch_taken_0x1f7130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7130) {
            ctx->pc = 0x1F7144u;
            goto label_1f7144;
        }
    }
    ctx->pc = 0x1F7138u;
    // 0x1f7138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f713c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7140: 0xa0430101  sb          $v1, 0x101($v0)
    ctx->pc = 0x1f7140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 257), (uint8_t)GPR_U32(ctx, 3));
label_1f7144:
    // 0x1f7144: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7148: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1f7148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1f714c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f7150: 0xac6200bc  sw          $v0, 0xBC($v1)
    ctx->pc = 0x1f7150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 2));
    // 0x1f7154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f7154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f7158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f7158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f715c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7160: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1f7160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f7164: 0xc064df0  jal         func_1937C0
    ctx->pc = 0x1F7164u;
    SET_GPR_U32(ctx, 31, 0x1F716Cu);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1F7164u, 0x1F716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F716Cu;
label_1f716c:
    // 0x1f716c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7170: 0x8c5000bc  lw          $s0, 0xBC($v0)
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1f7174: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f7174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7178: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f7178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f717c: 0x278598f8  addiu       $a1, $gp, -0x6708
    ctx->pc = 0x1f717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940920));
    // 0x1f7180: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f7180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7184: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F7184u;
    SET_GPR_U32(ctx, 31, 0x1F718Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F7184u, 0x1F718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F718Cu;
label_1f718c:
    // 0x1f718c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7190: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f7194: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F7194u;
    SET_GPR_U32(ctx, 31, 0x1F719Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F7194u, 0x1F719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F719Cu;
label_1f719c:
    // 0x1f719c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f71a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f71a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f71a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f71a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f71a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f71acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f71b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f71b4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F71B4u;
    SET_GPR_U32(ctx, 31, 0x1F71BCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F71B4u, 0x1F71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71BCu;
label_1f71bc:
    // 0x1f71bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f71c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f71c4: 0xa064028c  sb          $a0, 0x28C($v1)
    ctx->pc = 0x1f71c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 652), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f71c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f71c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f71cc: 0x8c6400bc  lw          $a0, 0xBC($v1)
    ctx->pc = 0x1f71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1f71d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f71d4: 0x8c6300b8  lw          $v1, 0xB8($v1)
    ctx->pc = 0x1f71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1f71d8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f71d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f71dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F71DCu;
    {
        const bool branch_taken_0x1f71dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f71dc) {
            ctx->pc = 0x1F71F0u;
            goto label_1f71f0;
        }
    }
    ctx->pc = 0x1F71E4u;
    // 0x1f71e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f71e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f71ec: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x1f71ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_1f71f0:
    // 0x1f71f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f71f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f71f8: 0x8c630230  lw          $v1, 0x230($v1)
    ctx->pc = 0x1f71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x1f71fc: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F71FCu;
    {
        const bool branch_taken_0x1f71fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f71fc) {
            ctx->pc = 0x1F7228u;
            goto label_1f7228;
        }
    }
    ctx->pc = 0x1F7204u;
    // 0x1f7204: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f720c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f720cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7214: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f7214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7218: 0xc07df0c  jal         func_1F7C30
    ctx->pc = 0x1F7218u;
    SET_GPR_U32(ctx, 31, 0x1F7220u);
    ctx->pc = 0x1F7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C30u, 0x1F7218u, 0x1F7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7220u;
label_1f7220:
    // 0x1f7220: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F7220u;
    {
        const bool branch_taken_0x1f7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7220) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F7228u;
label_1f7228:
    // 0x1f7228: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f722c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7230: 0x8c630234  lw          $v1, 0x234($v1)
    ctx->pc = 0x1f7230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x1f7234: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7234u;
    {
        const bool branch_taken_0x1f7234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7234) {
            ctx->pc = 0x1F7260u;
            goto label_1f7260;
        }
    }
    ctx->pc = 0x1F723Cu;
    // 0x1f723c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f724c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7250: 0xc07df7c  jal         func_1F7DF0
    ctx->pc = 0x1F7250u;
    SET_GPR_U32(ctx, 31, 0x1F7258u);
    ctx->pc = 0x1F7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF0u, 0x1F7250u, 0x1F7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7258u;
label_1f7258:
    // 0x1f7258: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F7258u;
    {
        const bool branch_taken_0x1f7258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7258) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F7260u;
label_1f7260:
    // 0x1f7260: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7264: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7268: 0x8c630238  lw          $v1, 0x238($v1)
    ctx->pc = 0x1f7268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
    // 0x1f726c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F726Cu;
    {
        const bool branch_taken_0x1f726c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f726c) {
            ctx->pc = 0x1F7298u;
            goto label_1f7298;
        }
    }
    ctx->pc = 0x1F7274u;
    // 0x1f7274: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f727c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f727cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7284: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f7284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7288: 0xc07dfec  jal         func_1F7FB0
    ctx->pc = 0x1F7288u;
    SET_GPR_U32(ctx, 31, 0x1F7290u);
    ctx->pc = 0x1F7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB0u, 0x1F7288u, 0x1F7290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7290u;
label_1f7290:
    // 0x1f7290: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F7290u;
    {
        const bool branch_taken_0x1f7290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7290) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F7298u;
label_1f7298:
    // 0x1f7298: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f729c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72a0: 0x8c63023c  lw          $v1, 0x23C($v1)
    ctx->pc = 0x1f72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x1f72a4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F72A4u;
    {
        const bool branch_taken_0x1f72a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f72a4) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F72ACu;
    // 0x1f72ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f72acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f72b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f72b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f72b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f72bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f72c0: 0xc07e05c  jal         func_1F8170
    ctx->pc = 0x1F72C0u;
    SET_GPR_U32(ctx, 31, 0x1F72C8u);
    ctx->pc = 0x1F8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8170u, 0x1F72C0u, 0x1F72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F72C8u;
label_1f72c8:
    // 0x1f72c8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1F72C8u;
    {
        const bool branch_taken_0x1f72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f72c8) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F72D0u;
label_1f72d0:
    // 0x1f72d0: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f72d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72dc: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f72e0: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f72e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f72e4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F72E4u;
    SET_GPR_U32(ctx, 31, 0x1F72ECu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F72E4u, 0x1F72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F72ECu;
label_1f72ec:
    // 0x1f72ec: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1f72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1f72f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72f4: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1f72f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f72fc: 0xac6200fc  sw          $v0, 0xFC($v1)
    ctx->pc = 0x1f72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 2));
    // 0x1f7300: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7304: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f7304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7308: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f7308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f730c: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7310: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7310u;
    SET_GPR_U32(ctx, 31, 0x1F7318u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7310u, 0x1F7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7318u;
label_1f7318:
    // 0x1f7318: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f7318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f731c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7320: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F7320u;
    {
        const bool branch_taken_0x1f7320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7320) {
            ctx->pc = 0x1F7358u;
            goto label_1f7358;
        }
    }
    ctx->pc = 0x1F7328u;
    // 0x1f7328: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f732c: 0x8c6400fc  lw          $a0, 0xFC($v1)
    ctx->pc = 0x1f732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1f7330: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7334: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1f7334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1f7338: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7338u;
    {
        const bool branch_taken_0x1f7338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7338) {
            ctx->pc = 0x1F7358u;
            goto label_1f7358;
        }
    }
    ctx->pc = 0x1F7340u;
    // 0x1f7340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7344: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7348: 0xa0430100  sb          $v1, 0x100($v0)
    ctx->pc = 0x1f7348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f734c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7350: 0xc07db68  jal         func_1F6DA0
    ctx->pc = 0x1F7350u;
    SET_GPR_U32(ctx, 31, 0x1F7358u);
    ctx->pc = 0x1F6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6DA0u, 0x1F7350u, 0x1F7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7358u;
label_1f7358:
    // 0x1f7358: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f735c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7360: 0x8c630230  lw          $v1, 0x230($v1)
    ctx->pc = 0x1f7360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x1f7364: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7364u;
    {
        const bool branch_taken_0x1f7364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7364) {
            ctx->pc = 0x1F7390u;
            goto label_1f7390;
        }
    }
    ctx->pc = 0x1F736Cu;
    // 0x1f736c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f7374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f737c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f737cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7380: 0xc07df0c  jal         func_1F7C30
    ctx->pc = 0x1F7380u;
    SET_GPR_U32(ctx, 31, 0x1F7388u);
    ctx->pc = 0x1F7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C30u, 0x1F7380u, 0x1F7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7388u;
label_1f7388:
    // 0x1f7388: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F7388u;
    {
        const bool branch_taken_0x1f7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7388) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F7390u;
label_1f7390:
    // 0x1f7390: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7394: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7398: 0x8c630234  lw          $v1, 0x234($v1)
    ctx->pc = 0x1f7398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x1f739c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F739Cu;
    {
        const bool branch_taken_0x1f739c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f739c) {
            ctx->pc = 0x1F73C8u;
            goto label_1f73c8;
        }
    }
    ctx->pc = 0x1F73A4u;
    // 0x1f73a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f73a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f73a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f73acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f73b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f73b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f73b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73b8: 0xc07df7c  jal         func_1F7DF0
    ctx->pc = 0x1F73B8u;
    SET_GPR_U32(ctx, 31, 0x1F73C0u);
    ctx->pc = 0x1F7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF0u, 0x1F73B8u, 0x1F73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73C0u;
label_1f73c0:
    // 0x1f73c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F73C0u;
    {
        const bool branch_taken_0x1f73c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73c0) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F73C8u;
label_1f73c8:
    // 0x1f73c8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f73cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f73d0: 0x8c630238  lw          $v1, 0x238($v1)
    ctx->pc = 0x1f73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
    // 0x1f73d4: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F73D4u;
    {
        const bool branch_taken_0x1f73d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f73d4) {
            ctx->pc = 0x1F7400u;
            goto label_1f7400;
        }
    }
    ctx->pc = 0x1F73DCu;
    // 0x1f73dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f73e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f73e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f73e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f73e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f73e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f73ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73f0: 0xc07dfec  jal         func_1F7FB0
    ctx->pc = 0x1F73F0u;
    SET_GPR_U32(ctx, 31, 0x1F73F8u);
    ctx->pc = 0x1F7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB0u, 0x1F73F0u, 0x1F73F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73F8u;
label_1f73f8:
    // 0x1f73f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F73F8u;
    {
        const bool branch_taken_0x1f73f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73f8) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F7400u;
label_1f7400:
    // 0x1f7400: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1f7400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7404: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7408: 0x8c63023c  lw          $v1, 0x23C($v1)
    ctx->pc = 0x1f7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x1f740c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F740Cu;
    {
        const bool branch_taken_0x1f740c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f740c) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F7414u;
    // 0x1f7414: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f741c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f741cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7424: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7428: 0xc07e05c  jal         func_1F8170
    ctx->pc = 0x1F7428u;
    SET_GPR_U32(ctx, 31, 0x1F7430u);
    ctx->pc = 0x1F8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8170u, 0x1F7428u, 0x1F7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7430u;
label_1f7430:
    // 0x1f7430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f743c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f743cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f7440: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7448u;
    // 0x1f7448: 0x0  nop
    ctx->pc = 0x1f7448u;
    // NOP
    // 0x1f744c: 0x0  nop
    ctx->pc = 0x1f744cu;
    // NOP
    ctx->pc = 0x1f7450u;
}
