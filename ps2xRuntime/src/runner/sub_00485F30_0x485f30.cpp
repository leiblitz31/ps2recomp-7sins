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

// Function: sub_00485F30
// Address: 0x485f30 - 0x4860b0
void sub_00485F30_0x485f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485F30_0x485f30");
#endif

    switch (ctx->pc) {
        case 0x485f30u: goto label_485f30;
        case 0x485f34u: goto label_485f34;
        case 0x485f38u: goto label_485f38;
        case 0x485f3cu: goto label_485f3c;
        case 0x485f40u: goto label_485f40;
        case 0x485f44u: goto label_485f44;
        case 0x485f48u: goto label_485f48;
        case 0x485f4cu: goto label_485f4c;
        case 0x485f50u: goto label_485f50;
        case 0x485f54u: goto label_485f54;
        case 0x485f58u: goto label_485f58;
        case 0x485f5cu: goto label_485f5c;
        case 0x485f60u: goto label_485f60;
        case 0x485f64u: goto label_485f64;
        case 0x485f68u: goto label_485f68;
        case 0x485f6cu: goto label_485f6c;
        case 0x485f70u: goto label_485f70;
        case 0x485f74u: goto label_485f74;
        case 0x485f78u: goto label_485f78;
        case 0x485f7cu: goto label_485f7c;
        case 0x485f80u: goto label_485f80;
        case 0x485f84u: goto label_485f84;
        case 0x485f88u: goto label_485f88;
        case 0x485f8cu: goto label_485f8c;
        case 0x485f90u: goto label_485f90;
        case 0x485f94u: goto label_485f94;
        case 0x485f98u: goto label_485f98;
        case 0x485f9cu: goto label_485f9c;
        case 0x485fa0u: goto label_485fa0;
        case 0x485fa4u: goto label_485fa4;
        case 0x485fa8u: goto label_485fa8;
        case 0x485facu: goto label_485fac;
        case 0x485fb0u: goto label_485fb0;
        case 0x485fb4u: goto label_485fb4;
        case 0x485fb8u: goto label_485fb8;
        case 0x485fbcu: goto label_485fbc;
        case 0x485fc0u: goto label_485fc0;
        case 0x485fc4u: goto label_485fc4;
        case 0x485fc8u: goto label_485fc8;
        case 0x485fccu: goto label_485fcc;
        case 0x485fd0u: goto label_485fd0;
        case 0x485fd4u: goto label_485fd4;
        case 0x485fd8u: goto label_485fd8;
        case 0x485fdcu: goto label_485fdc;
        case 0x485fe0u: goto label_485fe0;
        case 0x485fe4u: goto label_485fe4;
        case 0x485fe8u: goto label_485fe8;
        case 0x485fecu: goto label_485fec;
        case 0x485ff0u: goto label_485ff0;
        case 0x485ff4u: goto label_485ff4;
        case 0x485ff8u: goto label_485ff8;
        case 0x485ffcu: goto label_485ffc;
        case 0x486000u: goto label_486000;
        case 0x486004u: goto label_486004;
        case 0x486008u: goto label_486008;
        case 0x48600cu: goto label_48600c;
        case 0x486010u: goto label_486010;
        case 0x486014u: goto label_486014;
        case 0x486018u: goto label_486018;
        case 0x48601cu: goto label_48601c;
        case 0x486020u: goto label_486020;
        case 0x486024u: goto label_486024;
        case 0x486028u: goto label_486028;
        case 0x48602cu: goto label_48602c;
        case 0x486030u: goto label_486030;
        case 0x486034u: goto label_486034;
        case 0x486038u: goto label_486038;
        case 0x48603cu: goto label_48603c;
        case 0x486040u: goto label_486040;
        case 0x486044u: goto label_486044;
        case 0x486048u: goto label_486048;
        case 0x48604cu: goto label_48604c;
        case 0x486050u: goto label_486050;
        case 0x486054u: goto label_486054;
        case 0x486058u: goto label_486058;
        case 0x48605cu: goto label_48605c;
        case 0x486060u: goto label_486060;
        case 0x486064u: goto label_486064;
        case 0x486068u: goto label_486068;
        case 0x48606cu: goto label_48606c;
        case 0x486070u: goto label_486070;
        case 0x486074u: goto label_486074;
        case 0x486078u: goto label_486078;
        case 0x48607cu: goto label_48607c;
        case 0x486080u: goto label_486080;
        case 0x486084u: goto label_486084;
        case 0x486088u: goto label_486088;
        case 0x48608cu: goto label_48608c;
        case 0x486090u: goto label_486090;
        case 0x486094u: goto label_486094;
        case 0x486098u: goto label_486098;
        case 0x48609cu: goto label_48609c;
        case 0x4860a0u: goto label_4860a0;
        case 0x4860a4u: goto label_4860a4;
        case 0x4860a8u: goto label_4860a8;
        case 0x4860acu: goto label_4860ac;
        default: break;
    }

    ctx->pc = 0x485f30u;

label_485f30:
    // 0x485f30: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x485f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_485f34:
    // 0x485f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_485f38:
    // 0x485f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485f3c:
    // 0x485f3c: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x485f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_485f40:
    // 0x485f40: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x485f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
label_485f44:
    // 0x485f44: 0xe7ac01a0  swc1        $f12, 0x1A0($sp)
    ctx->pc = 0x485f44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_485f48:
    // 0x485f48: 0xa3a601b0  sb          $a2, 0x1B0($sp)
    ctx->pc = 0x485f48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 432), (uint8_t)GPR_U32(ctx, 6));
label_485f4c:
    // 0x485f4c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x485f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_485f50:
    // 0x485f50: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_485f54:
    if (ctx->pc == 0x485F54u) {
        ctx->pc = 0x485F58u;
        goto label_485f58;
    }
    ctx->pc = 0x485F50u;
    {
        const bool branch_taken_0x485f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x485f50) {
            ctx->pc = 0x486000u;
            goto label_486000;
        }
    }
    ctx->pc = 0x485F58u;
label_485f58:
    // 0x485f58: 0x8f82b5b8  lw          $v0, -0x4A48($gp)
    ctx->pc = 0x485f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948280)));
label_485f5c:
    // 0x485f5c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_485f60:
    if (ctx->pc == 0x485F60u) {
        ctx->pc = 0x485F64u;
        goto label_485f64;
    }
    ctx->pc = 0x485F5Cu;
    {
        const bool branch_taken_0x485f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485f5c) {
            ctx->pc = 0x486000u;
            goto label_486000;
        }
    }
    ctx->pc = 0x485F64u;
label_485f64:
    // 0x485f64: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x485f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_485f68:
    // 0x485f68: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x485f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_485f6c:
    // 0x485f6c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x485f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_485f70:
    // 0x485f70: 0xc115ee8  jal         func_457BA0
label_485f74:
    if (ctx->pc == 0x485F74u) {
        ctx->pc = 0x485F78u;
        goto label_485f78;
    }
    ctx->pc = 0x485F70u;
    SET_GPR_U32(ctx, 31, 0x485F78u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x485F70u, 0x485F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485F78u;
label_485f78:
    // 0x485f78: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_485f7c:
    if (ctx->pc == 0x485F7Cu) {
        ctx->pc = 0x485F80u;
        goto label_485f80;
    }
    ctx->pc = 0x485F78u;
    {
        const bool branch_taken_0x485f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485f78) {
            ctx->pc = 0x486000u;
            goto label_486000;
        }
    }
    ctx->pc = 0x485F80u;
label_485f80:
    // 0x485f80: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x485f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_485f84:
    // 0x485f84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_485f88:
    if (ctx->pc == 0x485F88u) {
        ctx->pc = 0x485F8Cu;
        goto label_485f8c;
    }
    ctx->pc = 0x485F84u;
    {
        const bool branch_taken_0x485f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485f84) {
            ctx->pc = 0x486000u;
            goto label_486000;
        }
    }
    ctx->pc = 0x485F8Cu;
label_485f8c:
    // 0x485f8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x485f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_485f90:
    // 0x485f90: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x485f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_485f94:
    // 0x485f94: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x485f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_485f98:
    // 0x485f98: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x485f98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_485f9c:
    // 0x485f9c: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x485f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_485fa0:
    // 0x485fa0: 0x24080096  addiu       $t0, $zero, 0x96
    ctx->pc = 0x485fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_485fa4:
    // 0x485fa4: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x485fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_485fa8:
    // 0x485fa8: 0x25293d60  addiu       $t1, $t1, 0x3D60
    ctx->pc = 0x485fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15712));
label_485fac:
    // 0x485fac: 0xc113940  jal         func_44E500
label_485fb0:
    if (ctx->pc == 0x485FB0u) {
        ctx->pc = 0x485FB4u;
        goto label_485fb4;
    }
    ctx->pc = 0x485FACu;
    SET_GPR_U32(ctx, 31, 0x485FB4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x485FACu, 0x485FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485FB4u;
label_485fb4:
    // 0x485fb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x485fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_485fb8:
    // 0x485fb8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x485fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_485fbc:
    // 0x485fbc: 0x24a53d70  addiu       $a1, $a1, 0x3D70
    ctx->pc = 0x485fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15728));
label_485fc0:
    // 0x485fc0: 0xc115c24  jal         func_457090
label_485fc4:
    if (ctx->pc == 0x485FC4u) {
        ctx->pc = 0x485FC8u;
        goto label_485fc8;
    }
    ctx->pc = 0x485FC0u;
    SET_GPR_U32(ctx, 31, 0x485FC8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x485FC0u, 0x485FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485FC8u;
label_485fc8:
    // 0x485fc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x485fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_485fcc:
    // 0x485fcc: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x485fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_485fd0:
    // 0x485fd0: 0x40f809  jalr        $v0
label_485fd4:
    if (ctx->pc == 0x485FD4u) {
        ctx->pc = 0x485FD8u;
        goto label_485fd8;
    }
    ctx->pc = 0x485FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485FD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485FD0u, 0x485FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485FD8u;
label_485fd8:
    // 0x485fd8: 0xaf82b5b8  sw          $v0, -0x4A48($gp)
    ctx->pc = 0x485fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948280), GPR_U32(ctx, 2));
label_485fdc:
    // 0x485fdc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x485fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_485fe0:
    // 0x485fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_485fe4:
    if (ctx->pc == 0x485FE4u) {
        ctx->pc = 0x485FE8u;
        goto label_485fe8;
    }
    ctx->pc = 0x485FE0u;
    {
        const bool branch_taken_0x485fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485fe0) {
            ctx->pc = 0x485FF0u;
            goto label_485ff0;
        }
    }
    ctx->pc = 0x485FE8u;
label_485fe8:
    // 0x485fe8: 0xd  break       0
    ctx->pc = 0x485fe8u;
    runtime->handleBreak(rdram, ctx);
label_485fec:
    // 0x485fec: 0x0  nop
    ctx->pc = 0x485fecu;
    // NOP
label_485ff0:
    // 0x485ff0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x485ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_485ff4:
    // 0x485ff4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x485ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_485ff8:
    // 0x485ff8: 0xc11392c  jal         func_44E4B0
label_485ffc:
    if (ctx->pc == 0x485FFCu) {
        ctx->pc = 0x486000u;
        goto label_486000;
    }
    ctx->pc = 0x485FF8u;
    SET_GPR_U32(ctx, 31, 0x486000u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x485FF8u, 0x486000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486000u;
label_486000:
    // 0x486000: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x486000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_486004:
    // 0x486004: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x486004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_486008:
    // 0x486008: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x486008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_48600c:
    // 0x48600c: 0xc0bc77e  jal         func_2F1DF8
label_486010:
    if (ctx->pc == 0x486010u) {
        ctx->pc = 0x486014u;
        goto label_486014;
    }
    ctx->pc = 0x48600Cu;
    SET_GPR_U32(ctx, 31, 0x486014u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x48600Cu, 0x486014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486014u;
label_486014:
    // 0x486014: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x486014u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_486018:
    // 0x486018: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x486018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48601c:
    // 0x48601c: 0xc0bc65a  jal         func_2F1968
label_486020:
    if (ctx->pc == 0x486020u) {
        ctx->pc = 0x486024u;
        goto label_486024;
    }
    ctx->pc = 0x48601Cu;
    SET_GPR_U32(ctx, 31, 0x486024u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x48601Cu, 0x486024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486024u;
label_486024:
    // 0x486024: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x486024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486028:
    // 0x486028: 0x90420072  lbu         $v0, 0x72($v0)
    ctx->pc = 0x486028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_48602c:
    // 0x48602c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48602cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_486030:
    // 0x486030: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x486030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_486034:
    // 0x486034: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x486034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486038:
    // 0x486038: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x486038u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_48603c:
    // 0x48603c: 0xc122430  jal         func_4890C0
label_486040:
    if (ctx->pc == 0x486040u) {
        ctx->pc = 0x486044u;
        goto label_486044;
    }
    ctx->pc = 0x48603Cu;
    SET_GPR_U32(ctx, 31, 0x486044u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x48603Cu, 0x486044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486044u;
label_486044:
    // 0x486044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x486044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486048:
    // 0x486048: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x486048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48604c:
    // 0x48604c: 0xc12135c  jal         func_484D70
label_486050:
    if (ctx->pc == 0x486050u) {
        ctx->pc = 0x486054u;
        goto label_486054;
    }
    ctx->pc = 0x48604Cu;
    SET_GPR_U32(ctx, 31, 0x486054u);
    ctx->pc = 0x484D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484D70u, 0x48604Cu, 0x486054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486054u;
label_486054:
    // 0x486054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x486054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486058:
    // 0x486058: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x486058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48605c:
    // 0x48605c: 0x90430070  lbu         $v1, 0x70($v0)
    ctx->pc = 0x48605cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_486060:
    // 0x486060: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x486060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486064:
    // 0x486064: 0xa0430071  sb          $v1, 0x71($v0)
    ctx->pc = 0x486064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 3));
label_486068:
    // 0x486068: 0x93a301b0  lbu         $v1, 0x1B0($sp)
    ctx->pc = 0x486068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 432)));
label_48606c:
    // 0x48606c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x48606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486070:
    // 0x486070: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x486070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
label_486074:
    // 0x486074: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x486074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486078:
    // 0x486078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x486078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48607c:
    // 0x48607c: 0xc121f98  jal         func_487E60
label_486080:
    if (ctx->pc == 0x486080u) {
        ctx->pc = 0x486084u;
        goto label_486084;
    }
    ctx->pc = 0x48607Cu;
    SET_GPR_U32(ctx, 31, 0x486084u);
    ctx->pc = 0x487E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487E60u, 0x48607Cu, 0x486084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486084u;
label_486084:
    // 0x486084: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x486084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486088:
    // 0x486088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x486088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48608c:
    // 0x48608c: 0xc7ac01a0  lwc1        $f12, 0x1A0($sp)
    ctx->pc = 0x48608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_486090:
    // 0x486090: 0xc12182c  jal         func_4860B0
label_486094:
    if (ctx->pc == 0x486094u) {
        ctx->pc = 0x486098u;
        goto label_486098;
    }
    ctx->pc = 0x486090u;
    SET_GPR_U32(ctx, 31, 0x486098u);
    ctx->pc = 0x4860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4860B0u, 0x486090u, 0x486098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486098u;
label_486098:
    // 0x486098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x486098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48609c:
    // 0x48609c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48609cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4860a0:
    // 0x4860a0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x4860a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4860a4:
    // 0x4860a4: 0x3e00008  jr          $ra
label_4860a8:
    if (ctx->pc == 0x4860A8u) {
        ctx->pc = 0x4860ACu;
        goto label_4860ac;
    }
    ctx->pc = 0x4860A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4860A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4860ACu;
label_4860ac:
    // 0x4860ac: 0x0  nop
    ctx->pc = 0x4860acu;
    // NOP
    ctx->pc = 0x4860b0u;
}
