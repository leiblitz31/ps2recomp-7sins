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

// Function: sub_0025DC10
// Address: 0x25dc10 - 0x25e150
void sub_0025DC10_0x25dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DC10_0x25dc10");
#endif

    switch (ctx->pc) {
        case 0x25dc58u: goto label_25dc58;
        case 0x25dc6cu: goto label_25dc6c;
        case 0x25dc7cu: goto label_25dc7c;
        case 0x25dc90u: goto label_25dc90;
        case 0x25dcc0u: goto label_25dcc0;
        case 0x25dcd4u: goto label_25dcd4;
        case 0x25dd04u: goto label_25dd04;
        case 0x25dd1cu: goto label_25dd1c;
        case 0x25dd2cu: goto label_25dd2c;
        case 0x25dd3cu: goto label_25dd3c;
        case 0x25dd54u: goto label_25dd54;
        case 0x25dd6cu: goto label_25dd6c;
        case 0x25dd7cu: goto label_25dd7c;
        case 0x25dda4u: goto label_25dda4;
        case 0x25ddb0u: goto label_25ddb0;
        case 0x25ddc0u: goto label_25ddc0;
        case 0x25dde8u: goto label_25dde8;
        case 0x25de48u: goto label_25de48;
        case 0x25dee4u: goto label_25dee4;
        case 0x25df18u: goto label_25df18;
        case 0x25df28u: goto label_25df28;
        case 0x25df34u: goto label_25df34;
        case 0x25df98u: goto label_25df98;
        case 0x25dfacu: goto label_25dfac;
        case 0x25dfe4u: goto label_25dfe4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25e014u: goto label_25e014;
        case 0x25e038u: goto label_25e038;
        case 0x25e068u: goto label_25e068;
        case 0x25e074u: goto label_25e074;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e0b4u: goto label_25e0b4;
        case 0x25e0c8u: goto label_25e0c8;
        case 0x25e0e0u: goto label_25e0e0;
        case 0x25e110u: goto label_25e110;
        default: break;
    }

    ctx->pc = 0x25dc10u;

    // 0x25dc10: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x25dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x25dc14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25dc18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25dc1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25dc20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25dc24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25dc28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25dc2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25dc30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25dc34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25dc38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25dc3c: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x25dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x25dc40: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x25dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
    // 0x25dc44: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x25dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
    // 0x25dc48: 0xafa701b0  sw          $a3, 0x1B0($sp)
    ctx->pc = 0x25dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 7));
    // 0x25dc4c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25dc50: 0xc097a2c  jal         func_25E8B0
    ctx->pc = 0x25DC50u;
    SET_GPR_U32(ctx, 31, 0x25DC58u);
    ctx->pc = 0x25E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E8B0u, 0x25DC50u, 0x25DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC58u;
label_25dc58:
    // 0x25dc58: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x25dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25dc5c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25dc60: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25dc64: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25DC64u;
    SET_GPR_U32(ctx, 31, 0x25DC6Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25DC64u, 0x25DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC6Cu;
label_25dc6c:
    // 0x25dc6c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x25dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x25dc70: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x25dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x25dc74: 0xc091010  jal         func_244040
    ctx->pc = 0x25DC74u;
    SET_GPR_U32(ctx, 31, 0x25DC7Cu);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x25DC74u, 0x25DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC7Cu;
label_25dc7c:
    // 0x25dc7c: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x25dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x25dc80: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25dc84: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x25dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x25dc88: 0xc090f80  jal         func_243E00
    ctx->pc = 0x25DC88u;
    SET_GPR_U32(ctx, 31, 0x25DC90u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x25DC88u, 0x25DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC90u;
label_25dc90:
    // 0x25dc90: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x25dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25dc94: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x25dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x25dc98: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dc9c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dca0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25dca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dca4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25dca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25dca8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25dca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25dcac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25dcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25dcb0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x25dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25dcb4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25dcb8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25DCB8u;
    SET_GPR_U32(ctx, 31, 0x25DCC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25DCB8u, 0x25DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCC0u;
label_25dcc0:
    // 0x25dcc0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x25dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x25dcc4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x25dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25dcc8: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x25dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25dccc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x25DCCCu;
    SET_GPR_U32(ctx, 31, 0x25DCD4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x25DCCCu, 0x25DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCD4u;
label_25dcd4:
    // 0x25dcd4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25dcd8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x25dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25dcdc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dce0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dce4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dce8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25dce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25dcec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25dcecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25dcf0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25dcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25dcf4: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25dcf8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25dcfc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25DCFCu;
    SET_GPR_U32(ctx, 31, 0x25DD04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25DCFCu, 0x25DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD04u;
label_25dd04:
    // 0x25dd04: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x25dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x25dd08: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x25dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25dd0c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25dd10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25dd14: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25DD14u;
    SET_GPR_U32(ctx, 31, 0x25DD1Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25DD14u, 0x25DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD1Cu;
label_25dd1c:
    // 0x25dd1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25dd1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25dd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd24: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x25DD24u;
    SET_GPR_U32(ctx, 31, 0x25DD2Cu);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x25DD24u, 0x25DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD2Cu;
label_25dd2c:
    // 0x25dd2c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25dd2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd30: 0x8ea4002c  lw          $a0, 0x2C($s5)
    ctx->pc = 0x25dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x25dd34: 0xc09138c  jal         func_244E30
    ctx->pc = 0x25DD34u;
    SET_GPR_U32(ctx, 31, 0x25DD3Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x25DD34u, 0x25DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD3Cu;
label_25dd3c:
    // 0x25dd3c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x25dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x25dd40: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x25dd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd44: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x25dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25dd48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25dd48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd4c: 0xc099f04  jal         func_267C10
    ctx->pc = 0x25DD4Cu;
    SET_GPR_U32(ctx, 31, 0x25DD54u);
    ctx->pc = 0x267C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267C10u, 0x25DD4Cu, 0x25DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD54u;
label_25dd54:
    // 0x25dd54: 0xa3a2017f  sb          $v0, 0x17F($sp)
    ctx->pc = 0x25dd54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 383), (uint8_t)GPR_U32(ctx, 2));
    // 0x25dd58: 0x93a2017f  lbu         $v0, 0x17F($sp)
    ctx->pc = 0x25dd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 383)));
    // 0x25dd5c: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x25DD5Cu;
    {
        const bool branch_taken_0x25dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd5c) {
            ctx->pc = 0x25E0F8u;
            goto label_25e0f8;
        }
    }
    ctx->pc = 0x25DD64u;
    // 0x25dd64: 0xc090864  jal         func_242190
    ctx->pc = 0x25DD64u;
    SET_GPR_U32(ctx, 31, 0x25DD6Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x25DD64u, 0x25DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD6Cu;
label_25dd6c:
    // 0x25dd6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd70: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x25dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25dd74: 0xc090870  jal         func_2421C0
    ctx->pc = 0x25DD74u;
    SET_GPR_U32(ctx, 31, 0x25DD7Cu);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x25DD74u, 0x25DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD7Cu;
label_25dd7c:
    // 0x25dd7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25dd7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd80: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DD80u;
    {
        const bool branch_taken_0x25dd80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dd80) {
            ctx->pc = 0x25DD94u;
            goto label_25dd94;
        }
    }
    ctx->pc = 0x25DD88u;
    // 0x25dd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd8c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x25DD8Cu;
    {
        const bool branch_taken_0x25dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd8c) {
            ctx->pc = 0x25E118u;
            goto label_25e118;
        }
    }
    ctx->pc = 0x25DD94u;
label_25dd94:
    // 0x25dd94: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x25dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x25dd98: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x25dd9c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25DD9Cu;
    SET_GPR_U32(ctx, 31, 0x25DDA4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25DD9Cu, 0x25DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDA4u;
label_25dda4:
    // 0x25dda4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x25dda4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dda8: 0xc090864  jal         func_242190
    ctx->pc = 0x25DDA8u;
    SET_GPR_U32(ctx, 31, 0x25DDB0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x25DDA8u, 0x25DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDB0u;
label_25ddb0:
    // 0x25ddb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ddb4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x25ddb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ddb8: 0xc090844  jal         func_242110
    ctx->pc = 0x25DDB8u;
    SET_GPR_U32(ctx, 31, 0x25DDC0u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x25DDB8u, 0x25DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDC0u;
label_25ddc0:
    // 0x25ddc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25ddc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ddc4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25ddc8: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x25ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x25ddcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ddd0: 0x0  nop
    ctx->pc = 0x25ddd0u;
    // NOP
    // 0x25ddd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ddd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25ddd8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x25ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x25dddc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25dddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dde0: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x25DDE0u;
    {
        const bool branch_taken_0x25dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dde0) {
            ctx->pc = 0x25E0E4u;
            goto label_25e0e4;
        }
    }
    ctx->pc = 0x25DDE8u;
label_25dde8:
    // 0x25dde8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25ddec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x25ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25ddf0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x25ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25ddf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ddf8: 0x146200b9  bne         $v1, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x25DDF8u;
    {
        const bool branch_taken_0x25ddf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ddf8) {
            ctx->pc = 0x25E0E0u;
            goto label_25e0e0;
        }
    }
    ctx->pc = 0x25DE00u;
    // 0x25de00: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x25de04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25de08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de0c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x25de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25de10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25de10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25de14: 0x0  nop
    ctx->pc = 0x25de14u;
    // NOP
    // 0x25de18: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25de1c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x25de20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25de24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de28: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x25de28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x25de2c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25de30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25de34: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x25de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x25de38: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x25de38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x25de3c: 0x8fb60174  lw          $s6, 0x174($sp)
    ctx->pc = 0x25de3cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x25de40: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x25DE40u;
    SET_GPR_U32(ctx, 31, 0x25DE48u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x25DE40u, 0x25DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE48u;
label_25de48:
    // 0x25de48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25de48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25de50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25de50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25de54: 0x0  nop
    ctx->pc = 0x25de54u;
    // NOP
    // 0x25de58: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x25de58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x25de5c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x25de5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x25de60: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25de60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25de64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25de64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25de68: 0x0  nop
    ctx->pc = 0x25de68u;
    // NOP
    // 0x25de6c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x25de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x25de70: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25de70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25de74: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25de74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x25de78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25de78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25de7c: 0x0  nop
    ctx->pc = 0x25de7cu;
    // NOP
    // 0x25de80: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x25de80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x25de84: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x25de84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x25de88: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x25de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x25de8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25de8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25de90: 0x0  nop
    ctx->pc = 0x25de90u;
    // NOP
    // 0x25de94: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25de94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25de98: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25de98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25de9c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25de9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25dea0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25dea4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x25dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x25dea8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x25dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x25deac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25deb0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x25deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x25deb4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x25deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x25deb8: 0x2484c400  addiu       $a0, $a0, -0x3C00
    ctx->pc = 0x25deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951936));
    // 0x25debc: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x25debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x25dec0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x25dec0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EC400u));
    // 0x25dec4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x25dec4u;
    { uint32_t bits = FAST_READ32(0x4EC408u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dec8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x25dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x25decc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25deccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25ded0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ded0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ded4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x25ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25ded8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25dedc: 0xc103d16  jal         func_40F458
    ctx->pc = 0x25DEDCu;
    SET_GPR_U32(ctx, 31, 0x25DEE4u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x25DEDCu, 0x25DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEE4u;
label_25dee4:
    // 0x25dee4: 0x161023  negu        $v0, $s6
    ctx->pc = 0x25dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x25dee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25deec: 0x0  nop
    ctx->pc = 0x25deecu;
    // NOP
    // 0x25def0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25def0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25def4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x25def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x25def8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25def8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25defc: 0x0  nop
    ctx->pc = 0x25defcu;
    // NOP
    // 0x25df00: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x25df00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25df04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25df04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df08: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x25df08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x25df0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25df10: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x25DF10u;
    SET_GPR_U32(ctx, 31, 0x25DF18u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x25DF10u, 0x25DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF18u;
label_25df18:
    // 0x25df18: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x25df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25df1c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x25df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25df20: 0xc041d58  jal         func_107560
    ctx->pc = 0x25DF20u;
    SET_GPR_U32(ctx, 31, 0x25DF28u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x25DF20u, 0x25DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF28u;
label_25df28:
    // 0x25df28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df2c: 0xc103da2  jal         func_40F688
    ctx->pc = 0x25DF2Cu;
    SET_GPR_U32(ctx, 31, 0x25DF34u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x25DF2Cu, 0x25DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF34u;
label_25df34:
    // 0x25df34: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x25df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df38: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x25df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25df3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25df40: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x25df40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25df44: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x25df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df48: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25df4c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x25df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df50: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x25df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25df54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25df58: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x25df58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x25df5c: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x25df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df60: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25df64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25df68: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x25df68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x25df6c: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x25df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df70: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25df74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25df78: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x25df78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x25df7c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x25df7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df80: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x25df80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25df84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25df88: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x25df88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x25df8c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x25df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25df90: 0xc104d24  jal         func_413490
    ctx->pc = 0x25DF90u;
    SET_GPR_U32(ctx, 31, 0x25DF98u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x25DF90u, 0x25DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF98u;
label_25df98:
    // 0x25df98: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x25df98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x25df9c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x25df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25dfa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25dfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfa4: 0xc0976f8  jal         func_25DBE0
    ctx->pc = 0x25DFA4u;
    SET_GPR_U32(ctx, 31, 0x25DFACu);
    ctx->pc = 0x25DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBE0u, 0x25DFA4u, 0x25DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFACu;
label_25dfac:
    // 0x25dfac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25DFACu;
    {
        const bool branch_taken_0x25dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dfac) {
            ctx->pc = 0x25DFD0u;
            goto label_25dfd0;
        }
    }
    ctx->pc = 0x25DFB4u;
    // 0x25dfb4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25dfb8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x25dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25dfbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dfc0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x25dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x25dfc4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x25dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25dfc8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x25DFC8u;
    {
        const bool branch_taken_0x25dfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25dfc8) {
            ctx->pc = 0x25E0E0u;
            goto label_25e0e0;
        }
    }
    ctx->pc = 0x25DFD0u;
label_25dfd0:
    // 0x25dfd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25dfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfd4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x25dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x25dfd8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x25dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25dfdc: 0xc0b89dc  jal         func_2E2770
    ctx->pc = 0x25DFDCu;
    SET_GPR_U32(ctx, 31, 0x25DFE4u);
    ctx->pc = 0x2E2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2770u, 0x25DFDCu, 0x25DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFE4u;
label_25dfe4:
    // 0x25dfe4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x25DFE4u;
    {
        const bool branch_taken_0x25dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dfe4) {
            ctx->pc = 0x25E0E0u;
            goto label_25e0e0;
        }
    }
    ctx->pc = 0x25DFECu;
    // 0x25dfec: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x25dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x25dff0: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x25DFF0u;
    SET_GPR_U32(ctx, 31, 0x25DFF8u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x25DFF0u, 0x25DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFF8u;
label_25dff8:
    // 0x25dff8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25DFF8u;
    {
        const bool branch_taken_0x25dff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dff8) {
            ctx->pc = 0x25E01Cu;
            goto label_25e01c;
        }
    }
    ctx->pc = 0x25E000u;
    // 0x25e000: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25e000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e004: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x25e004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25e008: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x25e008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25e00c: 0xc0b89dc  jal         func_2E2770
    ctx->pc = 0x25E00Cu;
    SET_GPR_U32(ctx, 31, 0x25E014u);
    ctx->pc = 0x2E2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2770u, 0x25E00Cu, 0x25E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E014u;
label_25e014:
    // 0x25e014: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x25E014u;
    {
        const bool branch_taken_0x25e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e014) {
            ctx->pc = 0x25E0E0u;
            goto label_25e0e0;
        }
    }
    ctx->pc = 0x25E01Cu;
label_25e01c:
    // 0x25e01c: 0xafb100a0  sw          $s1, 0xA0($sp)
    ctx->pc = 0x25e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 17));
    // 0x25e020: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x25e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e024: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x25e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25e028: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x25e028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x25e02c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x25e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25e030: 0xc041d58  jal         func_107560
    ctx->pc = 0x25E030u;
    SET_GPR_U32(ctx, 31, 0x25E038u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x25E030u, 0x25E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E038u;
label_25e038:
    // 0x25e038: 0x161023  negu        $v0, $s6
    ctx->pc = 0x25e038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x25e03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e040: 0x0  nop
    ctx->pc = 0x25e040u;
    // NOP
    // 0x25e044: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25e044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25e048: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x25e04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e050: 0x0  nop
    ctx->pc = 0x25e050u;
    // NOP
    // 0x25e054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e058: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x25e058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x25e05c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e060: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x25E060u;
    SET_GPR_U32(ctx, 31, 0x25E068u);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x25E060u, 0x25E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E068u;
label_25e068:
    // 0x25e068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25e068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e06c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25E06Cu;
    {
        const bool branch_taken_0x25e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e06c) {
            ctx->pc = 0x25E0A8u;
            goto label_25e0a8;
        }
    }
    ctx->pc = 0x25E074u;
label_25e074:
    // 0x25e074: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x25e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e078: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x25e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e07c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e080: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25E080u;
    {
        const bool branch_taken_0x25e080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e080) {
            ctx->pc = 0x25E0A4u;
            goto label_25e0a4;
        }
    }
    ctx->pc = 0x25E088u;
    // 0x25e088: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e08c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25e08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e090: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x25e090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25e094: 0xc097978  jal         func_25E5E0
    ctx->pc = 0x25E094u;
    SET_GPR_U32(ctx, 31, 0x25E09Cu);
    ctx->pc = 0x25E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5E0u, 0x25E094u, 0x25E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E09Cu;
label_25e09c:
    // 0x25e09c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E09Cu;
    {
        const bool branch_taken_0x25e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e09c) {
            ctx->pc = 0x25E0BCu;
            goto label_25e0bc;
        }
    }
    ctx->pc = 0x25E0A4u;
label_25e0a4:
    // 0x25e0a4: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x25e0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_25e0a8:
    // 0x25e0a8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e0ac: 0xc097970  jal         func_25E5C0
    ctx->pc = 0x25E0ACu;
    SET_GPR_U32(ctx, 31, 0x25E0B4u);
    ctx->pc = 0x25E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5C0u, 0x25E0ACu, 0x25E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0B4u;
label_25e0b4:
    // 0x25e0b4: 0x1642ffef  bne         $s2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25E0B4u;
    {
        const bool branch_taken_0x25e0b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e0b4) {
            ctx->pc = 0x25E074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e074;
        }
    }
    ctx->pc = 0x25E0BCu;
label_25e0bc:
    // 0x25e0bc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e0c0: 0xc097970  jal         func_25E5C0
    ctx->pc = 0x25E0C0u;
    SET_GPR_U32(ctx, 31, 0x25E0C8u);
    ctx->pc = 0x25E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5C0u, 0x25E0C0u, 0x25E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0C8u;
label_25e0c8:
    // 0x25e0c8: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E0C8u;
    {
        const bool branch_taken_0x25e0c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e0c8) {
            ctx->pc = 0x25E0E0u;
            goto label_25e0e0;
        }
    }
    ctx->pc = 0x25E0D0u;
    // 0x25e0d0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e0d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x25e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25e0d8: 0xc097854  jal         func_25E150
    ctx->pc = 0x25E0D8u;
    SET_GPR_U32(ctx, 31, 0x25E0E0u);
    ctx->pc = 0x25E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E150u, 0x25E0D8u, 0x25E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0E0u;
label_25e0e0:
    // 0x25e0e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25e0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25e0e4:
    // 0x25e0e4: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x25e0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x25e0e8: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x25E0E8u;
    {
        const bool branch_taken_0x25e0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e0e8) {
            ctx->pc = 0x25DDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dde8;
        }
    }
    ctx->pc = 0x25E0F0u;
    // 0x25e0f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25E0F0u;
    {
        const bool branch_taken_0x25e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0f0) {
            ctx->pc = 0x25E104u;
            goto label_25e104;
        }
    }
    ctx->pc = 0x25E0F8u;
label_25e0f8:
    // 0x25e0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e0fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E0FCu;
    {
        const bool branch_taken_0x25e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0fc) {
            ctx->pc = 0x25E118u;
            goto label_25e118;
        }
    }
    ctx->pc = 0x25E104u;
label_25e104:
    // 0x25e104: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x25e104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e108: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x25E108u;
    SET_GPR_U32(ctx, 31, 0x25E110u);
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x25E108u, 0x25E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E110u;
label_25e110:
    // 0x25e110: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25e110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25e114: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x25e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_25e118:
    // 0x25e118: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25e11c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25e11cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25e120: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25e120u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e124: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25e124u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e128: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25e128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e12c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25e12cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e130: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25e130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e13c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e140: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x25e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25e144: 0x3e00008  jr          $ra
    ctx->pc = 0x25E144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E14Cu;
    // 0x25e14c: 0x0  nop
    ctx->pc = 0x25e14cu;
    // NOP
    ctx->pc = 0x25e150u;
}
