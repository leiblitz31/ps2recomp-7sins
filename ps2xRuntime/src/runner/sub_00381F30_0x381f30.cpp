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

// Function: sub_00381F30
// Address: 0x381f30 - 0x3820d8
void sub_00381F30_0x381f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381F30_0x381f30");
#endif

    switch (ctx->pc) {
        case 0x381f30u: goto label_381f30;
        case 0x381f34u: goto label_381f34;
        case 0x381f38u: goto label_381f38;
        case 0x381f3cu: goto label_381f3c;
        case 0x381f40u: goto label_381f40;
        case 0x381f44u: goto label_381f44;
        case 0x381f48u: goto label_381f48;
        case 0x381f4cu: goto label_381f4c;
        case 0x381f50u: goto label_381f50;
        case 0x381f54u: goto label_381f54;
        case 0x381f58u: goto label_381f58;
        case 0x381f5cu: goto label_381f5c;
        case 0x381f60u: goto label_381f60;
        case 0x381f64u: goto label_381f64;
        case 0x381f68u: goto label_381f68;
        case 0x381f6cu: goto label_381f6c;
        case 0x381f70u: goto label_381f70;
        case 0x381f74u: goto label_381f74;
        case 0x381f78u: goto label_381f78;
        case 0x381f7cu: goto label_381f7c;
        case 0x381f80u: goto label_381f80;
        case 0x381f84u: goto label_381f84;
        case 0x381f88u: goto label_381f88;
        case 0x381f8cu: goto label_381f8c;
        case 0x381f90u: goto label_381f90;
        case 0x381f94u: goto label_381f94;
        case 0x381f98u: goto label_381f98;
        case 0x381f9cu: goto label_381f9c;
        case 0x381fa0u: goto label_381fa0;
        case 0x381fa4u: goto label_381fa4;
        case 0x381fa8u: goto label_381fa8;
        case 0x381facu: goto label_381fac;
        case 0x381fb0u: goto label_381fb0;
        case 0x381fb4u: goto label_381fb4;
        case 0x381fb8u: goto label_381fb8;
        case 0x381fbcu: goto label_381fbc;
        case 0x381fc0u: goto label_381fc0;
        case 0x381fc4u: goto label_381fc4;
        case 0x381fc8u: goto label_381fc8;
        case 0x381fccu: goto label_381fcc;
        case 0x381fd0u: goto label_381fd0;
        case 0x381fd4u: goto label_381fd4;
        case 0x381fd8u: goto label_381fd8;
        case 0x381fdcu: goto label_381fdc;
        case 0x381fe0u: goto label_381fe0;
        case 0x381fe4u: goto label_381fe4;
        case 0x381fe8u: goto label_381fe8;
        case 0x381fecu: goto label_381fec;
        case 0x381ff0u: goto label_381ff0;
        case 0x381ff4u: goto label_381ff4;
        case 0x381ff8u: goto label_381ff8;
        case 0x381ffcu: goto label_381ffc;
        case 0x382000u: goto label_382000;
        case 0x382004u: goto label_382004;
        case 0x382008u: goto label_382008;
        case 0x38200cu: goto label_38200c;
        case 0x382010u: goto label_382010;
        case 0x382014u: goto label_382014;
        case 0x382018u: goto label_382018;
        case 0x38201cu: goto label_38201c;
        case 0x382020u: goto label_382020;
        case 0x382024u: goto label_382024;
        case 0x382028u: goto label_382028;
        case 0x38202cu: goto label_38202c;
        case 0x382030u: goto label_382030;
        case 0x382034u: goto label_382034;
        case 0x382038u: goto label_382038;
        case 0x38203cu: goto label_38203c;
        case 0x382040u: goto label_382040;
        case 0x382044u: goto label_382044;
        case 0x382048u: goto label_382048;
        case 0x38204cu: goto label_38204c;
        case 0x382050u: goto label_382050;
        case 0x382054u: goto label_382054;
        case 0x382058u: goto label_382058;
        case 0x38205cu: goto label_38205c;
        case 0x382060u: goto label_382060;
        case 0x382064u: goto label_382064;
        case 0x382068u: goto label_382068;
        case 0x38206cu: goto label_38206c;
        case 0x382070u: goto label_382070;
        case 0x382074u: goto label_382074;
        case 0x382078u: goto label_382078;
        case 0x38207cu: goto label_38207c;
        case 0x382080u: goto label_382080;
        case 0x382084u: goto label_382084;
        case 0x382088u: goto label_382088;
        case 0x38208cu: goto label_38208c;
        case 0x382090u: goto label_382090;
        case 0x382094u: goto label_382094;
        case 0x382098u: goto label_382098;
        case 0x38209cu: goto label_38209c;
        case 0x3820a0u: goto label_3820a0;
        case 0x3820a4u: goto label_3820a4;
        case 0x3820a8u: goto label_3820a8;
        case 0x3820acu: goto label_3820ac;
        case 0x3820b0u: goto label_3820b0;
        case 0x3820b4u: goto label_3820b4;
        case 0x3820b8u: goto label_3820b8;
        case 0x3820bcu: goto label_3820bc;
        case 0x3820c0u: goto label_3820c0;
        case 0x3820c4u: goto label_3820c4;
        case 0x3820c8u: goto label_3820c8;
        case 0x3820ccu: goto label_3820cc;
        case 0x3820d0u: goto label_3820d0;
        case 0x3820d4u: goto label_3820d4;
        default: break;
    }

    ctx->pc = 0x381f30u;

label_381f30:
    // 0x381f30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x381f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_381f34:
    // 0x381f34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x381f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_381f38:
    // 0x381f38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x381f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_381f3c:
    // 0x381f3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x381f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_381f40:
    // 0x381f40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x381f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_381f44:
    // 0x381f44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x381f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381f48:
    // 0x381f48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x381f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_381f4c:
    // 0x381f4c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x381f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_381f50:
    // 0x381f50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x381f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_381f54:
    // 0x381f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_381f58:
    // 0x381f58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x381f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_381f5c:
    // 0x381f5c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x381f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_381f60:
    // 0x381f60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x381f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_381f64:
    // 0x381f64: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x381f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_381f68:
    // 0x381f68: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_381f6c:
    if (ctx->pc == 0x381F6Cu) {
        ctx->pc = 0x381F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F68u;
        // 0x381f6c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381F70u;
        goto label_381f70;
    }
    ctx->pc = 0x381F68u;
    {
        const bool branch_taken_0x381f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F68u;
        // 0x381f6c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f68) {
            ctx->pc = 0x381FC0u;
            goto label_381fc0;
        }
    }
    ctx->pc = 0x381F70u;
label_381f70:
    // 0x381f70: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x381f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_381f74:
    // 0x381f74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x381f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_381f78:
    // 0x381f78: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_381f7c:
    if (ctx->pc == 0x381F7Cu) {
        ctx->pc = 0x381F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F78u;
        // 0x381f7c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381F80u;
        goto label_381f80;
    }
    ctx->pc = 0x381F78u;
    {
        const bool branch_taken_0x381f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F78u;
        // 0x381f7c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f78) {
            ctx->pc = 0x381FC0u;
            goto label_381fc0;
        }
    }
    ctx->pc = 0x381F80u;
label_381f80:
    // 0x381f80: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x381f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_381f84:
    // 0x381f84: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x381f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_381f88:
    // 0x381f88: 0x40f809  jalr        $v0
label_381f8c:
    if (ctx->pc == 0x381F8Cu) {
        ctx->pc = 0x381F90u;
        goto label_381f90;
    }
    ctx->pc = 0x381F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381F90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381F88u, 0x381F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381F90u;
label_381f90:
    // 0x381f90: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x381f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_381f94:
    // 0x381f94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x381f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_381f98:
    // 0x381f98: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x381f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_381f9c:
    // 0x381f9c: 0x60f809  jalr        $v1
label_381fa0:
    if (ctx->pc == 0x381FA0u) {
        ctx->pc = 0x381FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F9Cu;
        // 0x381fa0: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FA4u;
        goto label_381fa4;
    }
    ctx->pc = 0x381F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x381FA4u);
        ctx->pc = 0x381FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F9Cu;
        // 0x381fa0: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381F9Cu, 0x381FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381FA4u;
label_381fa4:
    // 0x381fa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x381fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381fa8:
    // 0x381fa8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_381fac:
    if (ctx->pc == 0x381FACu) {
        ctx->pc = 0x381FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FA8u;
        // 0x381fac: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FB0u;
        goto label_381fb0;
    }
    ctx->pc = 0x381FA8u;
    {
        const bool branch_taken_0x381fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x381FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FA8u;
        // 0x381fac: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fa8) {
            ctx->pc = 0x381FC0u;
            goto label_381fc0;
        }
    }
    ctx->pc = 0x381FB0u;
label_381fb0:
    // 0x381fb0: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x381fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_381fb4:
    // 0x381fb4: 0x40f809  jalr        $v0
label_381fb8:
    if (ctx->pc == 0x381FB8u) {
        ctx->pc = 0x381FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FB4u;
        // 0x381fb8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FBCu;
        goto label_381fbc;
    }
    ctx->pc = 0x381FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381FBCu);
        ctx->pc = 0x381FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FB4u;
        // 0x381fb8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381FB4u, 0x381FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381FBCu;
label_381fbc:
    // 0x381fbc: 0x0  nop
    ctx->pc = 0x381fbcu;
    // NOP
label_381fc0:
    // 0x381fc0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x381fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_381fc4:
    // 0x381fc4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_381fc8:
    if (ctx->pc == 0x381FC8u) {
        ctx->pc = 0x381FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FC4u;
        // 0x381fc8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FCCu;
        goto label_381fcc;
    }
    ctx->pc = 0x381FC4u;
    {
        const bool branch_taken_0x381fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FC4u;
        // 0x381fc8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fc4) {
            ctx->pc = 0x3820B0u;
            goto label_3820b0;
        }
    }
    ctx->pc = 0x381FCCu;
label_381fcc:
    // 0x381fcc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x381fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_381fd0:
    // 0x381fd0: 0xc0e0e0c  jal         func_383830
label_381fd4:
    if (ctx->pc == 0x381FD4u) {
        ctx->pc = 0x381FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FD0u;
        // 0x381fd4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FD8u;
        goto label_381fd8;
    }
    ctx->pc = 0x381FD0u;
    SET_GPR_U32(ctx, 31, 0x381FD8u);
    ctx->pc = 0x381FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381FD0u;
    // 0x381fd4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383830u, 0x381FD0u, 0x381FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381FD8u;
label_381fd8:
    // 0x381fd8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x381fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_381fdc:
    // 0x381fdc: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x381fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_381fe0:
    // 0x381fe0: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x381fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_381fe4:
    // 0x381fe4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x381fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_381fe8:
    // 0x381fe8: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x381fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_381fec:
    // 0x381fec: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x381fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_381ff0:
    // 0x381ff0: 0xc0f809  jalr        $a2
label_381ff4:
    if (ctx->pc == 0x381FF4u) {
        ctx->pc = 0x381FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FF0u;
        // 0x381ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FF8u;
        goto label_381ff8;
    }
    ctx->pc = 0x381FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x381FF8u);
        ctx->pc = 0x381FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FF0u;
        // 0x381ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381FF0u, 0x381FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381FF8u;
label_381ff8:
    // 0x381ff8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x381ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381ffc:
    // 0x381ffc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x381ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_382000:
    // 0x382000: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x382000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_382004:
    // 0x382004: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_382008:
    if (ctx->pc == 0x382008u) {
        ctx->pc = 0x382008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382004u;
        // 0x382008: 0xae66000c  sw          $a2, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38200Cu;
        goto label_38200c;
    }
    ctx->pc = 0x382004u;
    {
        const bool branch_taken_0x382004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x382008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382004u;
        // 0x382008: 0xae66000c  sw          $a2, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382004) {
            ctx->pc = 0x3820A0u;
            goto label_3820a0;
        }
    }
    ctx->pc = 0x38200Cu;
label_38200c:
    // 0x38200c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x38200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_382010:
    // 0x382010: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x382010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382014:
    // 0x382014: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_382018:
    if (ctx->pc == 0x382018u) {
        ctx->pc = 0x382018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382014u;
        // 0x382018: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38201Cu;
        goto label_38201c;
    }
    ctx->pc = 0x382014u;
    {
        const bool branch_taken_0x382014 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382014u;
        // 0x382018: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382014) {
            ctx->pc = 0x3820B0u;
            goto label_3820b0;
        }
    }
    ctx->pc = 0x38201Cu;
label_38201c:
    // 0x38201c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38201cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382020:
    // 0x382020: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x382020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_382024:
    // 0x382024: 0x0  nop
    ctx->pc = 0x382024u;
    // NOP
label_382028:
    // 0x382028: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x382028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38202c:
    // 0x38202c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_382030:
    if (ctx->pc == 0x382030u) {
        ctx->pc = 0x382030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38202Cu;
        // 0x382030: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382034u;
        goto label_382034;
    }
    ctx->pc = 0x38202Cu;
    {
        const bool branch_taken_0x38202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38202Cu;
        // 0x382030: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38202c) {
            ctx->pc = 0x38203Cu;
            goto label_38203c;
        }
    }
    ctx->pc = 0x382034u;
label_382034:
    // 0x382034: 0x10000013  b           . + 4 + (0x13 << 2)
label_382038:
    if (ctx->pc == 0x382038u) {
        ctx->pc = 0x382038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382034u;
        // 0x382038: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38203Cu;
        goto label_38203c;
    }
    ctx->pc = 0x382034u;
    {
        const bool branch_taken_0x382034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382034u;
        // 0x382038: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382034) {
            ctx->pc = 0x382084u;
            goto label_382084;
        }
    }
    ctx->pc = 0x38203Cu;
label_38203c:
    // 0x38203c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_382040:
    // 0x382040: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_382044:
    if (ctx->pc == 0x382044u) {
        ctx->pc = 0x382044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382040u;
        // 0x382044: 0x26b0e880  addiu       $s0, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382048u;
        goto label_382048;
    }
    ctx->pc = 0x382040u;
    {
        const bool branch_taken_0x382040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382040u;
        // 0x382044: 0x26b0e880  addiu       $s0, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382040) {
            ctx->pc = 0x382080u;
            goto label_382080;
        }
    }
    ctx->pc = 0x382048u;
label_382048:
    // 0x382048: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x382048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_38204c:
    // 0x38204c: 0x40f809  jalr        $v0
label_382050:
    if (ctx->pc == 0x382050u) {
        ctx->pc = 0x382054u;
        goto label_382054;
    }
    ctx->pc = 0x38204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382054u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38204Cu, 0x382054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382054u;
label_382054:
    // 0x382054: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x382054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_382058:
    // 0x382058: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x382058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38205c:
    // 0x38205c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x38205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_382060:
    // 0x382060: 0x60f809  jalr        $v1
label_382064:
    if (ctx->pc == 0x382064u) {
        ctx->pc = 0x382064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382060u;
        // 0x382064: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x382068u;
        goto label_382068;
    }
    ctx->pc = 0x382060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x382068u);
        ctx->pc = 0x382064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382060u;
        // 0x382064: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382060u, 0x382068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382068u;
label_382068:
    // 0x382068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x382068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38206c:
    // 0x38206c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_382070:
    if (ctx->pc == 0x382070u) {
        ctx->pc = 0x382070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38206Cu;
        // 0x382070: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382074u;
        goto label_382074;
    }
    ctx->pc = 0x38206Cu;
    {
        const bool branch_taken_0x38206c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38206Cu;
        // 0x382070: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38206c) {
            ctx->pc = 0x382080u;
            goto label_382080;
        }
    }
    ctx->pc = 0x382074u;
label_382074:
    // 0x382074: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x382074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_382078:
    // 0x382078: 0x40f809  jalr        $v0
label_38207c:
    if (ctx->pc == 0x38207Cu) {
        ctx->pc = 0x38207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382078u;
        // 0x38207c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382080u;
        goto label_382080;
    }
    ctx->pc = 0x382078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382080u);
        ctx->pc = 0x38207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382078u;
        // 0x38207c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382078u, 0x382080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382080u;
label_382080:
    // 0x382080: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x382080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_382084:
    // 0x382084: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x382084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_382088:
    // 0x382088: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x382088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_38208c:
    // 0x38208c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x38208cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_382090:
    // 0x382090: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_382094:
    if (ctx->pc == 0x382094u) {
        ctx->pc = 0x382094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382090u;
        // 0x382094: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382098u;
        goto label_382098;
    }
    ctx->pc = 0x382090u;
    {
        const bool branch_taken_0x382090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382090u;
        // 0x382094: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382090) {
            ctx->pc = 0x382028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382028;
        }
    }
    ctx->pc = 0x382098u;
label_382098:
    // 0x382098: 0x10000006  b           . + 4 + (0x6 << 2)
label_38209c:
    if (ctx->pc == 0x38209Cu) {
        ctx->pc = 0x38209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382098u;
        // 0x38209c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820A0u;
        goto label_3820a0;
    }
    ctx->pc = 0x382098u;
    {
        const bool branch_taken_0x382098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382098u;
        // 0x38209c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382098) {
            ctx->pc = 0x3820B4u;
            goto label_3820b4;
        }
    }
    ctx->pc = 0x3820A0u;
label_3820a0:
    // 0x3820a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3820a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3820a4:
    // 0x3820a4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3820a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3820a8:
    // 0x3820a8: 0xc0bb778  jal         func_2EDDE0
label_3820ac:
    if (ctx->pc == 0x3820ACu) {
        ctx->pc = 0x3820ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820A8u;
        // 0x3820ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820B0u;
        goto label_3820b0;
    }
    ctx->pc = 0x3820A8u;
    SET_GPR_U32(ctx, 31, 0x3820B0u);
    ctx->pc = 0x3820ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3820A8u;
    // 0x3820ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3820A8u, 0x3820B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3820B0u;
label_3820b0:
    // 0x3820b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3820b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3820b4:
    // 0x3820b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3820b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3820b8:
    // 0x3820b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3820b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3820bc:
    // 0x3820bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3820bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3820c0:
    // 0x3820c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3820c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3820c4:
    // 0x3820c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3820c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3820c8:
    // 0x3820c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3820c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3820cc:
    // 0x3820cc: 0x3e00008  jr          $ra
label_3820d0:
    if (ctx->pc == 0x3820D0u) {
        ctx->pc = 0x3820D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820CCu;
        // 0x3820d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820D4u;
        goto label_3820d4;
    }
    ctx->pc = 0x3820CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3820D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820CCu;
        // 0x3820d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3820CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3820D4u;
label_3820d4:
    // 0x3820d4: 0x0  nop
    ctx->pc = 0x3820d4u;
    // NOP
    ctx->pc = 0x3820d8u;
}
