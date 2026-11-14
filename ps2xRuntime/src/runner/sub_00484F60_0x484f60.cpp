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

// Function: sub_00484F60
// Address: 0x484f60 - 0x485080
void sub_00484F60_0x484f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484F60_0x484f60");
#endif

    switch (ctx->pc) {
        case 0x484f60u: goto label_484f60;
        case 0x484f64u: goto label_484f64;
        case 0x484f68u: goto label_484f68;
        case 0x484f6cu: goto label_484f6c;
        case 0x484f70u: goto label_484f70;
        case 0x484f74u: goto label_484f74;
        case 0x484f78u: goto label_484f78;
        case 0x484f7cu: goto label_484f7c;
        case 0x484f80u: goto label_484f80;
        case 0x484f84u: goto label_484f84;
        case 0x484f88u: goto label_484f88;
        case 0x484f8cu: goto label_484f8c;
        case 0x484f90u: goto label_484f90;
        case 0x484f94u: goto label_484f94;
        case 0x484f98u: goto label_484f98;
        case 0x484f9cu: goto label_484f9c;
        case 0x484fa0u: goto label_484fa0;
        case 0x484fa4u: goto label_484fa4;
        case 0x484fa8u: goto label_484fa8;
        case 0x484facu: goto label_484fac;
        case 0x484fb0u: goto label_484fb0;
        case 0x484fb4u: goto label_484fb4;
        case 0x484fb8u: goto label_484fb8;
        case 0x484fbcu: goto label_484fbc;
        case 0x484fc0u: goto label_484fc0;
        case 0x484fc4u: goto label_484fc4;
        case 0x484fc8u: goto label_484fc8;
        case 0x484fccu: goto label_484fcc;
        case 0x484fd0u: goto label_484fd0;
        case 0x484fd4u: goto label_484fd4;
        case 0x484fd8u: goto label_484fd8;
        case 0x484fdcu: goto label_484fdc;
        case 0x484fe0u: goto label_484fe0;
        case 0x484fe4u: goto label_484fe4;
        case 0x484fe8u: goto label_484fe8;
        case 0x484fecu: goto label_484fec;
        case 0x484ff0u: goto label_484ff0;
        case 0x484ff4u: goto label_484ff4;
        case 0x484ff8u: goto label_484ff8;
        case 0x484ffcu: goto label_484ffc;
        case 0x485000u: goto label_485000;
        case 0x485004u: goto label_485004;
        case 0x485008u: goto label_485008;
        case 0x48500cu: goto label_48500c;
        case 0x485010u: goto label_485010;
        case 0x485014u: goto label_485014;
        case 0x485018u: goto label_485018;
        case 0x48501cu: goto label_48501c;
        case 0x485020u: goto label_485020;
        case 0x485024u: goto label_485024;
        case 0x485028u: goto label_485028;
        case 0x48502cu: goto label_48502c;
        case 0x485030u: goto label_485030;
        case 0x485034u: goto label_485034;
        case 0x485038u: goto label_485038;
        case 0x48503cu: goto label_48503c;
        case 0x485040u: goto label_485040;
        case 0x485044u: goto label_485044;
        case 0x485048u: goto label_485048;
        case 0x48504cu: goto label_48504c;
        case 0x485050u: goto label_485050;
        case 0x485054u: goto label_485054;
        case 0x485058u: goto label_485058;
        case 0x48505cu: goto label_48505c;
        case 0x485060u: goto label_485060;
        case 0x485064u: goto label_485064;
        case 0x485068u: goto label_485068;
        case 0x48506cu: goto label_48506c;
        case 0x485070u: goto label_485070;
        case 0x485074u: goto label_485074;
        case 0x485078u: goto label_485078;
        case 0x48507cu: goto label_48507c;
        default: break;
    }

    ctx->pc = 0x484f60u;

label_484f60:
    // 0x484f60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x484f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_484f64:
    // 0x484f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_484f68:
    // 0x484f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484f6c:
    // 0x484f6c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x484f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_484f70:
    // 0x484f70: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x484f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_484f74:
    // 0x484f74: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_484f78:
    if (ctx->pc == 0x484F78u) {
        ctx->pc = 0x484F7Cu;
        goto label_484f7c;
    }
    ctx->pc = 0x484F74u;
    {
        const bool branch_taken_0x484f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x484f74) {
            ctx->pc = 0x485024u;
            goto label_485024;
        }
    }
    ctx->pc = 0x484F7Cu;
label_484f7c:
    // 0x484f7c: 0x8f82b5a0  lw          $v0, -0x4A60($gp)
    ctx->pc = 0x484f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948256)));
label_484f80:
    // 0x484f80: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_484f84:
    if (ctx->pc == 0x484F84u) {
        ctx->pc = 0x484F88u;
        goto label_484f88;
    }
    ctx->pc = 0x484F80u;
    {
        const bool branch_taken_0x484f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484f80) {
            ctx->pc = 0x485024u;
            goto label_485024;
        }
    }
    ctx->pc = 0x484F88u;
label_484f88:
    // 0x484f88: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_484f8c:
    // 0x484f8c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x484f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_484f90:
    // 0x484f90: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x484f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_484f94:
    // 0x484f94: 0xc115ee8  jal         func_457BA0
label_484f98:
    if (ctx->pc == 0x484F98u) {
        ctx->pc = 0x484F9Cu;
        goto label_484f9c;
    }
    ctx->pc = 0x484F94u;
    SET_GPR_U32(ctx, 31, 0x484F9Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484F94u, 0x484F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484F9Cu;
label_484f9c:
    // 0x484f9c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_484fa0:
    if (ctx->pc == 0x484FA0u) {
        ctx->pc = 0x484FA4u;
        goto label_484fa4;
    }
    ctx->pc = 0x484F9Cu;
    {
        const bool branch_taken_0x484f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484f9c) {
            ctx->pc = 0x485024u;
            goto label_485024;
        }
    }
    ctx->pc = 0x484FA4u;
label_484fa4:
    // 0x484fa4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x484fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_484fa8:
    // 0x484fa8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_484fac:
    if (ctx->pc == 0x484FACu) {
        ctx->pc = 0x484FB0u;
        goto label_484fb0;
    }
    ctx->pc = 0x484FA8u;
    {
        const bool branch_taken_0x484fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484fa8) {
            ctx->pc = 0x485024u;
            goto label_485024;
        }
    }
    ctx->pc = 0x484FB0u;
label_484fb0:
    // 0x484fb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484fb4:
    // 0x484fb4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x484fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_484fb8:
    // 0x484fb8: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x484fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_484fbc:
    // 0x484fbc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x484fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_484fc0:
    // 0x484fc0: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x484fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_484fc4:
    // 0x484fc4: 0x24080304  addiu       $t0, $zero, 0x304
    ctx->pc = 0x484fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
label_484fc8:
    // 0x484fc8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x484fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_484fcc:
    // 0x484fcc: 0x25293cd8  addiu       $t1, $t1, 0x3CD8
    ctx->pc = 0x484fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15576));
label_484fd0:
    // 0x484fd0: 0xc113940  jal         func_44E500
label_484fd4:
    if (ctx->pc == 0x484FD4u) {
        ctx->pc = 0x484FD8u;
        goto label_484fd8;
    }
    ctx->pc = 0x484FD0u;
    SET_GPR_U32(ctx, 31, 0x484FD8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x484FD0u, 0x484FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484FD8u;
label_484fd8:
    // 0x484fd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484fdc:
    // 0x484fdc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x484fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_484fe0:
    // 0x484fe0: 0x24a53ce8  addiu       $a1, $a1, 0x3CE8
    ctx->pc = 0x484fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15592));
label_484fe4:
    // 0x484fe4: 0xc115c24  jal         func_457090
label_484fe8:
    if (ctx->pc == 0x484FE8u) {
        ctx->pc = 0x484FECu;
        goto label_484fec;
    }
    ctx->pc = 0x484FE4u;
    SET_GPR_U32(ctx, 31, 0x484FECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x484FE4u, 0x484FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484FECu;
label_484fec:
    // 0x484fec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x484fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_484ff0:
    // 0x484ff0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x484ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_484ff4:
    // 0x484ff4: 0x40f809  jalr        $v0
label_484ff8:
    if (ctx->pc == 0x484FF8u) {
        ctx->pc = 0x484FFCu;
        goto label_484ffc;
    }
    ctx->pc = 0x484FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484FFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484FF4u, 0x484FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484FFCu;
label_484ffc:
    // 0x484ffc: 0xaf82b5a0  sw          $v0, -0x4A60($gp)
    ctx->pc = 0x484ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948256), GPR_U32(ctx, 2));
label_485000:
    // 0x485000: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x485000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_485004:
    // 0x485004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_485008:
    if (ctx->pc == 0x485008u) {
        ctx->pc = 0x48500Cu;
        goto label_48500c;
    }
    ctx->pc = 0x485004u;
    {
        const bool branch_taken_0x485004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485004) {
            ctx->pc = 0x485014u;
            goto label_485014;
        }
    }
    ctx->pc = 0x48500Cu;
label_48500c:
    // 0x48500c: 0xd  break       0
    ctx->pc = 0x48500cu;
    runtime->handleBreak(rdram, ctx);
label_485010:
    // 0x485010: 0x0  nop
    ctx->pc = 0x485010u;
    // NOP
label_485014:
    // 0x485014: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x485014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_485018:
    // 0x485018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x485018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48501c:
    // 0x48501c: 0xc11392c  jal         func_44E4B0
label_485020:
    if (ctx->pc == 0x485020u) {
        ctx->pc = 0x485024u;
        goto label_485024;
    }
    ctx->pc = 0x48501Cu;
    SET_GPR_U32(ctx, 31, 0x485024u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48501Cu, 0x485024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485024u;
label_485024:
    // 0x485024: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x485024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_485028:
    // 0x485028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x485028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48502c:
    // 0x48502c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x48502cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_485030:
    // 0x485030: 0xc121420  jal         func_485080
label_485034:
    if (ctx->pc == 0x485034u) {
        ctx->pc = 0x485038u;
        goto label_485038;
    }
    ctx->pc = 0x485030u;
    SET_GPR_U32(ctx, 31, 0x485038u);
    ctx->pc = 0x485080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485080u, 0x485030u, 0x485038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485038u;
label_485038:
    // 0x485038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48503c:
    // 0x48503c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485040:
    // 0x485040: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x485040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_485044:
    // 0x485044: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x485044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_485048:
    // 0x485048: 0xc0bc77e  jal         func_2F1DF8
label_48504c:
    if (ctx->pc == 0x48504Cu) {
        ctx->pc = 0x485050u;
        goto label_485050;
    }
    ctx->pc = 0x485048u;
    SET_GPR_U32(ctx, 31, 0x485050u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x485048u, 0x485050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485050u;
label_485050:
    // 0x485050: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x485050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
label_485054:
    // 0x485054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485058:
    // 0x485058: 0xc0bc65a  jal         func_2F1968
label_48505c:
    if (ctx->pc == 0x48505Cu) {
        ctx->pc = 0x485060u;
        goto label_485060;
    }
    ctx->pc = 0x485058u;
    SET_GPR_U32(ctx, 31, 0x485060u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x485058u, 0x485060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485060u;
label_485060:
    // 0x485060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485064:
    // 0x485064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_485068:
    // 0x485068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48506c:
    // 0x48506c: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x48506cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_485070:
    // 0x485070: 0x3e00008  jr          $ra
label_485074:
    if (ctx->pc == 0x485074u) {
        ctx->pc = 0x485078u;
        goto label_485078;
    }
    ctx->pc = 0x485070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485078u;
label_485078:
    // 0x485078: 0x0  nop
    ctx->pc = 0x485078u;
    // NOP
label_48507c:
    // 0x48507c: 0x0  nop
    ctx->pc = 0x48507cu;
    // NOP
    ctx->pc = 0x485080u;
}
