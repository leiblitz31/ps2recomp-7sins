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

// Function: sub_00134870
// Address: 0x134870 - 0x134b10
void sub_00134870_0x134870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134870_0x134870");
#endif

    switch (ctx->pc) {
        case 0x1348acu: goto label_1348ac;
        case 0x1348d4u: goto label_1348d4;
        case 0x1348e4u: goto label_1348e4;
        case 0x13490cu: goto label_13490c;
        case 0x134930u: goto label_134930;
        case 0x134964u: goto label_134964;
        case 0x134974u: goto label_134974;
        case 0x134984u: goto label_134984;
        case 0x1349c4u: goto label_1349c4;
        case 0x134a00u: goto label_134a00;
        case 0x134a14u: goto label_134a14;
        case 0x134a30u: goto label_134a30;
        case 0x134a44u: goto label_134a44;
        case 0x134a60u: goto label_134a60;
        case 0x134a74u: goto label_134a74;
        case 0x134a88u: goto label_134a88;
        case 0x134ad4u: goto label_134ad4;
        default: break;
    }

    ctx->pc = 0x134870u;

    // 0x134870: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x134870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x134874: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x134874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x134878: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x134878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13487c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x134880: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x134880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x134884: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x134884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x134888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x134888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13488c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13488cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x134890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13489c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x13489cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1348a0: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x1348a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x1348a4: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x1348A4u;
    SET_GPR_U32(ctx, 31, 0x1348ACu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x1348A4u, 0x1348ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348ACu;
label_1348ac:
    // 0x1348ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1348acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348b0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1348b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1348b4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1348b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1348b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1348b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1348bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1348bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1348c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1348c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1348c4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1348c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1348c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1348cc: 0xc04cc18  jal         func_133060
    ctx->pc = 0x1348CCu;
    SET_GPR_U32(ctx, 31, 0x1348D4u);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x1348CCu, 0x1348D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348D4u;
label_1348d4:
    // 0x1348d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1348d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1348d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348dc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1348DCu;
    {
        const bool branch_taken_0x1348dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348dc) {
            ctx->pc = 0x134ABCu;
            goto label_134abc;
        }
    }
    ctx->pc = 0x1348E4u;
label_1348e4:
    // 0x1348e4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1348e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1348e8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1348e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1348ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1348ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1348f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1348f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1348f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1348f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1348f8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1348f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1348fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1348fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134904: 0xc04cc00  jal         func_133000
    ctx->pc = 0x134904u;
    SET_GPR_U32(ctx, 31, 0x13490Cu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x134904u, 0x13490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13490Cu;
label_13490c:
    // 0x13490c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13490cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134914: 0x0  nop
    ctx->pc = 0x134914u;
    // NOP
    // 0x134918: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x134918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x13491c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x134920: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x134920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x134924: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134924u;
    {
        const bool branch_taken_0x134924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134924) {
            ctx->pc = 0x13494Cu;
            goto label_13494c;
        }
    }
    ctx->pc = 0x13492Cu;
    // 0x13492c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x13492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_134930:
    // 0x134930: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x134930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x134934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x134934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x134938: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13493c: 0x0  nop
    ctx->pc = 0x13493cu;
    // NOP
    // 0x134940: 0x0  nop
    ctx->pc = 0x134940u;
    // NOP
    // 0x134944: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134944u;
    {
        const bool branch_taken_0x134944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134944) {
            ctx->pc = 0x134930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134930;
        }
    }
    ctx->pc = 0x13494Cu;
label_13494c:
    // 0x13494c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x13494cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134954: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x134954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x134958: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x134958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13495c: 0xc04d10c  jal         func_134430
    ctx->pc = 0x13495Cu;
    SET_GPR_U32(ctx, 31, 0x134964u);
    ctx->pc = 0x134430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134430u, 0x13495Cu, 0x134964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134964u;
label_134964:
    // 0x134964: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x134968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x134968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13496c: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x13496Cu;
    SET_GPR_U32(ctx, 31, 0x134974u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x13496Cu, 0x134974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134974u;
label_134974:
    // 0x134974: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x134974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134978: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13497c: 0xc050530  jal         func_1414C0
    ctx->pc = 0x13497Cu;
    SET_GPR_U32(ctx, 31, 0x134984u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x13497Cu, 0x134984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134984u;
label_134984:
    // 0x134984: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x134984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134988: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x134988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13498c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x13498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134990: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x134990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134994: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134998: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x134998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x13499c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x13499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1349a0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1349a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1349a4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1349a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1349a8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1349a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1349ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1349acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1349b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349b4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1349b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1349b8: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1349b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1349bc: 0xc050368  jal         func_140DA0
    ctx->pc = 0x1349BCu;
    SET_GPR_U32(ctx, 31, 0x1349C4u);
    ctx->pc = 0x140DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140DA0u, 0x1349BCu, 0x1349C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349C4u;
label_1349c4:
    // 0x1349c4: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1349c8: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1349cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1349ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1349d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1349d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1349d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1349d8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1349d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1349dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1349dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1349e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1349e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1349e4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1349e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1349e8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1349e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1349ec: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1349ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1349f0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1349f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1349f4: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1349f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x1349f8: 0xc090864  jal         func_242190
    ctx->pc = 0x1349F8u;
    SET_GPR_U32(ctx, 31, 0x134A00u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1349F8u, 0x134A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A00u;
label_134a00:
    // 0x134a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a04: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x134a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x134a08: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x134a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x134a0c: 0xc09088c  jal         func_242230
    ctx->pc = 0x134A0Cu;
    SET_GPR_U32(ctx, 31, 0x134A14u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x134A0Cu, 0x134A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A14u;
label_134a14:
    // 0x134a14: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x134a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x134a18: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x134a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134a1c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x134a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x134a20: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x134a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134a24: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x134a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x134a28: 0xc090864  jal         func_242190
    ctx->pc = 0x134A28u;
    SET_GPR_U32(ctx, 31, 0x134A30u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x134A28u, 0x134A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A30u;
label_134a30:
    // 0x134a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a34: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x134a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x134a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x134a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a3c: 0xc09088c  jal         func_242230
    ctx->pc = 0x134A3Cu;
    SET_GPR_U32(ctx, 31, 0x134A44u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x134A3Cu, 0x134A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A44u;
label_134a44:
    // 0x134a44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a48: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x134a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134a4c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x134a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x134a50: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x134a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x134a54: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x134a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x134a58: 0xc04d394  jal         func_134E50
    ctx->pc = 0x134A58u;
    SET_GPR_U32(ctx, 31, 0x134A60u);
    ctx->pc = 0x134E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E50u, 0x134A58u, 0x134A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A60u;
label_134a60:
    // 0x134a60: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x134a60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134a64: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x134a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134a68: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x134a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x134a6c: 0xc04d2c4  jal         func_134B10
    ctx->pc = 0x134A6Cu;
    SET_GPR_U32(ctx, 31, 0x134A74u);
    ctx->pc = 0x134B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B10u, 0x134A6Cu, 0x134A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A74u;
label_134a74:
    // 0x134a74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a78: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134a7c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x134a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x134a80: 0xc04d2c4  jal         func_134B10
    ctx->pc = 0x134A80u;
    SET_GPR_U32(ctx, 31, 0x134A88u);
    ctx->pc = 0x134B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B10u, 0x134A80u, 0x134A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A88u;
label_134a88:
    // 0x134a88: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x134a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x134a8c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x134A8Cu;
    {
        const bool branch_taken_0x134a8c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x134a8c) {
            ctx->pc = 0x134AA4u;
            goto label_134aa4;
        }
    }
    ctx->pc = 0x134A94u;
    // 0x134a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134a98: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x134a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x134a9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134A9Cu;
    {
        const bool branch_taken_0x134a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a9c) {
            ctx->pc = 0x134AA8u;
            goto label_134aa8;
        }
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0xa213002c  sb          $s3, 0x2C($s0)
    ctx->pc = 0x134aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 19));
label_134aa8:
    // 0x134aa8: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x134aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x134aac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x134AACu;
    {
        const bool branch_taken_0x134aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134aac) {
            ctx->pc = 0x134AB8u;
            goto label_134ab8;
        }
    }
    ctx->pc = 0x134AB4u;
    // 0x134ab4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x134ab4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134ab8:
    // 0x134ab8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x134ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_134abc:
    // 0x134abc: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x134abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x134ac0: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x134AC0u;
    {
        const bool branch_taken_0x134ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134ac0) {
            ctx->pc = 0x1348E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1348e4;
        }
    }
    ctx->pc = 0x134AC8u;
    // 0x134ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134acc: 0xc103da2  jal         func_40F688
    ctx->pc = 0x134ACCu;
    SET_GPR_U32(ctx, 31, 0x134AD4u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x134ACCu, 0x134AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AD4u;
label_134ad4:
    // 0x134ad4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x134ad8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x134ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134adc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x134adcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134ae0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134ae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134ae4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x134ae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134ae8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134ae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134aec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134aecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134af0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134afc: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x134afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x134b00: 0x3e00008  jr          $ra
    ctx->pc = 0x134B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B08u;
    // 0x134b08: 0x0  nop
    ctx->pc = 0x134b08u;
    // NOP
    // 0x134b0c: 0x0  nop
    ctx->pc = 0x134b0cu;
    // NOP
    ctx->pc = 0x134b10u;
}
