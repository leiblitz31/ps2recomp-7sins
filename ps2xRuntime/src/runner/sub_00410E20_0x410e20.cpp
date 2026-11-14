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

// Function: sub_00410E20
// Address: 0x410e20 - 0x411070
void sub_00410E20_0x410e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410E20_0x410e20");
#endif

    switch (ctx->pc) {
        case 0x410e20u: goto label_410e20;
        case 0x410e24u: goto label_410e24;
        case 0x410e28u: goto label_410e28;
        case 0x410e2cu: goto label_410e2c;
        case 0x410e30u: goto label_410e30;
        case 0x410e34u: goto label_410e34;
        case 0x410e38u: goto label_410e38;
        case 0x410e3cu: goto label_410e3c;
        case 0x410e40u: goto label_410e40;
        case 0x410e44u: goto label_410e44;
        case 0x410e48u: goto label_410e48;
        case 0x410e4cu: goto label_410e4c;
        case 0x410e50u: goto label_410e50;
        case 0x410e54u: goto label_410e54;
        case 0x410e58u: goto label_410e58;
        case 0x410e5cu: goto label_410e5c;
        case 0x410e60u: goto label_410e60;
        case 0x410e64u: goto label_410e64;
        case 0x410e68u: goto label_410e68;
        case 0x410e6cu: goto label_410e6c;
        case 0x410e70u: goto label_410e70;
        case 0x410e74u: goto label_410e74;
        case 0x410e78u: goto label_410e78;
        case 0x410e7cu: goto label_410e7c;
        case 0x410e80u: goto label_410e80;
        case 0x410e84u: goto label_410e84;
        case 0x410e88u: goto label_410e88;
        case 0x410e8cu: goto label_410e8c;
        case 0x410e90u: goto label_410e90;
        case 0x410e94u: goto label_410e94;
        case 0x410e98u: goto label_410e98;
        case 0x410e9cu: goto label_410e9c;
        case 0x410ea0u: goto label_410ea0;
        case 0x410ea4u: goto label_410ea4;
        case 0x410ea8u: goto label_410ea8;
        case 0x410eacu: goto label_410eac;
        case 0x410eb0u: goto label_410eb0;
        case 0x410eb4u: goto label_410eb4;
        case 0x410eb8u: goto label_410eb8;
        case 0x410ebcu: goto label_410ebc;
        case 0x410ec0u: goto label_410ec0;
        case 0x410ec4u: goto label_410ec4;
        case 0x410ec8u: goto label_410ec8;
        case 0x410eccu: goto label_410ecc;
        case 0x410ed0u: goto label_410ed0;
        case 0x410ed4u: goto label_410ed4;
        case 0x410ed8u: goto label_410ed8;
        case 0x410edcu: goto label_410edc;
        case 0x410ee0u: goto label_410ee0;
        case 0x410ee4u: goto label_410ee4;
        case 0x410ee8u: goto label_410ee8;
        case 0x410eecu: goto label_410eec;
        case 0x410ef0u: goto label_410ef0;
        case 0x410ef4u: goto label_410ef4;
        case 0x410ef8u: goto label_410ef8;
        case 0x410efcu: goto label_410efc;
        case 0x410f00u: goto label_410f00;
        case 0x410f04u: goto label_410f04;
        case 0x410f08u: goto label_410f08;
        case 0x410f0cu: goto label_410f0c;
        case 0x410f10u: goto label_410f10;
        case 0x410f14u: goto label_410f14;
        case 0x410f18u: goto label_410f18;
        case 0x410f1cu: goto label_410f1c;
        case 0x410f20u: goto label_410f20;
        case 0x410f24u: goto label_410f24;
        case 0x410f28u: goto label_410f28;
        case 0x410f2cu: goto label_410f2c;
        case 0x410f30u: goto label_410f30;
        case 0x410f34u: goto label_410f34;
        case 0x410f38u: goto label_410f38;
        case 0x410f3cu: goto label_410f3c;
        case 0x410f40u: goto label_410f40;
        case 0x410f44u: goto label_410f44;
        case 0x410f48u: goto label_410f48;
        case 0x410f4cu: goto label_410f4c;
        case 0x410f50u: goto label_410f50;
        case 0x410f54u: goto label_410f54;
        case 0x410f58u: goto label_410f58;
        case 0x410f5cu: goto label_410f5c;
        case 0x410f60u: goto label_410f60;
        case 0x410f64u: goto label_410f64;
        case 0x410f68u: goto label_410f68;
        case 0x410f6cu: goto label_410f6c;
        case 0x410f70u: goto label_410f70;
        case 0x410f74u: goto label_410f74;
        case 0x410f78u: goto label_410f78;
        case 0x410f7cu: goto label_410f7c;
        case 0x410f80u: goto label_410f80;
        case 0x410f84u: goto label_410f84;
        case 0x410f88u: goto label_410f88;
        case 0x410f8cu: goto label_410f8c;
        case 0x410f90u: goto label_410f90;
        case 0x410f94u: goto label_410f94;
        case 0x410f98u: goto label_410f98;
        case 0x410f9cu: goto label_410f9c;
        case 0x410fa0u: goto label_410fa0;
        case 0x410fa4u: goto label_410fa4;
        case 0x410fa8u: goto label_410fa8;
        case 0x410facu: goto label_410fac;
        case 0x410fb0u: goto label_410fb0;
        case 0x410fb4u: goto label_410fb4;
        case 0x410fb8u: goto label_410fb8;
        case 0x410fbcu: goto label_410fbc;
        case 0x410fc0u: goto label_410fc0;
        case 0x410fc4u: goto label_410fc4;
        case 0x410fc8u: goto label_410fc8;
        case 0x410fccu: goto label_410fcc;
        case 0x410fd0u: goto label_410fd0;
        case 0x410fd4u: goto label_410fd4;
        case 0x410fd8u: goto label_410fd8;
        case 0x410fdcu: goto label_410fdc;
        case 0x410fe0u: goto label_410fe0;
        case 0x410fe4u: goto label_410fe4;
        case 0x410fe8u: goto label_410fe8;
        case 0x410fecu: goto label_410fec;
        case 0x410ff0u: goto label_410ff0;
        case 0x410ff4u: goto label_410ff4;
        case 0x410ff8u: goto label_410ff8;
        case 0x410ffcu: goto label_410ffc;
        case 0x411000u: goto label_411000;
        case 0x411004u: goto label_411004;
        case 0x411008u: goto label_411008;
        case 0x41100cu: goto label_41100c;
        case 0x411010u: goto label_411010;
        case 0x411014u: goto label_411014;
        case 0x411018u: goto label_411018;
        case 0x41101cu: goto label_41101c;
        case 0x411020u: goto label_411020;
        case 0x411024u: goto label_411024;
        case 0x411028u: goto label_411028;
        case 0x41102cu: goto label_41102c;
        case 0x411030u: goto label_411030;
        case 0x411034u: goto label_411034;
        case 0x411038u: goto label_411038;
        case 0x41103cu: goto label_41103c;
        case 0x411040u: goto label_411040;
        case 0x411044u: goto label_411044;
        case 0x411048u: goto label_411048;
        case 0x41104cu: goto label_41104c;
        case 0x411050u: goto label_411050;
        case 0x411054u: goto label_411054;
        case 0x411058u: goto label_411058;
        case 0x41105cu: goto label_41105c;
        case 0x411060u: goto label_411060;
        case 0x411064u: goto label_411064;
        case 0x411068u: goto label_411068;
        case 0x41106cu: goto label_41106c;
        default: break;
    }

    ctx->pc = 0x410e20u;

label_410e20:
    // 0x410e20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x410e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_410e24:
    // 0x410e24: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x410e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_410e28:
    // 0x410e28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x410e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_410e2c:
    // 0x410e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x410e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410e30:
    // 0x410e30: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x410e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_410e34:
    // 0x410e34: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x410e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_410e38:
    // 0x410e38: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x410e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_410e3c:
    // 0x410e3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x410e3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410e40:
    // 0x410e40: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x410e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_410e44:
    // 0x410e44: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x410e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_410e48:
    // 0x410e48: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x410e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_410e4c:
    // 0x410e4c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x410e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_410e50:
    // 0x410e50: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x410e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_410e54:
    // 0x410e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x410e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_410e58:
    // 0x410e58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x410e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_410e5c:
    // 0x410e5c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x410e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_410e60:
    // 0x410e60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x410e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_410e64:
    // 0x410e64: 0x8e1e0010  lw          $fp, 0x10($s0)
    ctx->pc = 0x410e64u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410e68:
    // 0x410e68: 0x13c30073  beq         $fp, $v1, . + 4 + (0x73 << 2)
label_410e6c:
    if (ctx->pc == 0x410E6Cu) {
        ctx->pc = 0x410E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E68u;
        // 0x410e6c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E70u;
        goto label_410e70;
    }
    ctx->pc = 0x410E68u;
    {
        const bool branch_taken_0x410e68 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        ctx->pc = 0x410E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E68u;
        // 0x410e6c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410e68) {
            ctx->pc = 0x411038u;
            goto label_411038;
        }
    }
    ctx->pc = 0x410E70u;
label_410e70:
    // 0x410e70: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x410e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_410e74:
    // 0x410e74: 0x0  nop
    ctx->pc = 0x410e74u;
    // NOP
label_410e78:
    // 0x410e78: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x410e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_410e7c:
    // 0x410e7c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x410e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_410e80:
    // 0x410e80: 0x27d10008  addiu       $s1, $fp, 0x8
    ctx->pc = 0x410e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_410e84:
    // 0x410e84: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x410e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_410e88:
    // 0x410e88: 0x40f809  jalr        $v0
label_410e8c:
    if (ctx->pc == 0x410E8Cu) {
        ctx->pc = 0x410E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E88u;
        // 0x410e8c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E90u;
        goto label_410e90;
    }
    ctx->pc = 0x410E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410E90u);
        ctx->pc = 0x410E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E88u;
        // 0x410e8c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410E88u, 0x410E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410E90u;
label_410e90:
    // 0x410e90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_410e94:
    if (ctx->pc == 0x410E94u) {
        ctx->pc = 0x410E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E90u;
        // 0x410e94: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E98u;
        goto label_410e98;
    }
    ctx->pc = 0x410E90u;
    {
        const bool branch_taken_0x410e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E90u;
        // 0x410e94: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410e90) {
            ctx->pc = 0x410EA0u;
            goto label_410ea0;
        }
    }
    ctx->pc = 0x410E98u;
label_410e98:
    // 0x410e98: 0x10000068  b           . + 4 + (0x68 << 2)
label_410e9c:
    if (ctx->pc == 0x410E9Cu) {
        ctx->pc = 0x410E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E98u;
        // 0x410e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EA0u;
        goto label_410ea0;
    }
    ctx->pc = 0x410E98u;
    {
        const bool branch_taken_0x410e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E98u;
        // 0x410e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410e98) {
            ctx->pc = 0x41103Cu;
            goto label_41103c;
        }
    }
    ctx->pc = 0x410EA0u;
label_410ea0:
    // 0x410ea0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x410ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_410ea4:
    // 0x410ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x410ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410ea8:
    // 0x410ea8: 0xc0bb778  jal         func_2EDDE0
label_410eac:
    if (ctx->pc == 0x410EACu) {
        ctx->pc = 0x410EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EA8u;
        // 0x410eac: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EB0u;
        goto label_410eb0;
    }
    ctx->pc = 0x410EA8u;
    SET_GPR_U32(ctx, 31, 0x410EB0u);
    ctx->pc = 0x410EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410EA8u;
    // 0x410eac: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x410EA8u, 0x410EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410EB0u;
label_410eb0:
    // 0x410eb0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x410eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_410eb4:
    // 0x410eb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x410eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410eb8:
    // 0x410eb8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x410eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_410ebc:
    // 0x410ebc: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
label_410ec0:
    if (ctx->pc == 0x410EC0u) {
        ctx->pc = 0x410EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EBCu;
        // 0x410ec0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EC4u;
        goto label_410ec4;
    }
    ctx->pc = 0x410EBCu;
    {
        const bool branch_taken_0x410ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x410EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EBCu;
        // 0x410ec0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410ebc) {
            ctx->pc = 0x411014u;
            goto label_411014;
        }
    }
    ctx->pc = 0x410EC4u;
label_410ec4:
    // 0x410ec4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x410ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_410ec8:
    // 0x410ec8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x410ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_410ecc:
    // 0x410ecc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x410eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_410ed0:
    // 0x410ed0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x410ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_410ed4:
    // 0x410ed4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x410ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_410ed8:
    // 0x410ed8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x410ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_410edc:
    // 0x410edc: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x410edcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_410ee0:
    // 0x410ee0: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
label_410ee4:
    if (ctx->pc == 0x410EE4u) {
        ctx->pc = 0x410EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EE0u;
        // 0x410ee4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EE8u;
        goto label_410ee8;
    }
    ctx->pc = 0x410EE0u;
    {
        const bool branch_taken_0x410ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x410EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EE0u;
        // 0x410ee4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410ee0) {
            ctx->pc = 0x411000u;
            goto label_411000;
        }
    }
    ctx->pc = 0x410EE8u;
label_410ee8:
    // 0x410ee8: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x410ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_410eec:
    // 0x410eec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x410eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410ef0:
    // 0x410ef0: 0x24170080  addiu       $s7, $zero, 0x80
    ctx->pc = 0x410ef0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_410ef4:
    // 0x410ef4: 0x3c29821  addu        $s3, $fp, $v0
    ctx->pc = 0x410ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_410ef8:
    // 0x410ef8: 0x2971007  srav        $v0, $s7, $s4
    ctx->pc = 0x410ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), GPR_U32(ctx, 20) & 0x1F));
label_410efc:
    // 0x410efc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x410efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410f00:
    // 0x410f00: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x410f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_410f04:
    // 0x410f04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_410f08:
    if (ctx->pc == 0x410F08u) {
        ctx->pc = 0x410F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F04u;
        // 0x410f08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F0Cu;
        goto label_410f0c;
    }
    ctx->pc = 0x410F04u;
    {
        const bool branch_taken_0x410f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F04u;
        // 0x410f08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410f04) {
            ctx->pc = 0x410F30u;
            goto label_410f30;
        }
    }
    ctx->pc = 0x410F0Cu;
label_410f0c:
    // 0x410f0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410f10:
    // 0x410f10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x410f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_410f14:
    // 0x410f14: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x410f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_410f18:
    // 0x410f18: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x410f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_410f1c:
    // 0x410f1c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x410f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_410f20:
    // 0x410f20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x410f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_410f24:
    // 0x410f24: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x410f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_410f28:
    // 0x410f28: 0x2c0f809  jalr        $s6
label_410f2c:
    if (ctx->pc == 0x410F2Cu) {
        ctx->pc = 0x410F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F28u;
        // 0x410f2c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F30u;
        goto label_410f30;
    }
    ctx->pc = 0x410F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x410F30u);
        ctx->pc = 0x410F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F28u;
        // 0x410f2c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F28u, 0x410F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F30u;
label_410f30:
    // 0x410f30: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x410f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_410f34:
    // 0x410f34: 0x571007  srav        $v0, $s7, $v0
    ctx->pc = 0x410f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), GPR_U32(ctx, 2) & 0x1F));
label_410f38:
    // 0x410f38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x410f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410f3c:
    // 0x410f3c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x410f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_410f40:
    // 0x410f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_410f44:
    if (ctx->pc == 0x410F44u) {
        ctx->pc = 0x410F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F40u;
        // 0x410f44: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F48u;
        goto label_410f48;
    }
    ctx->pc = 0x410F40u;
    {
        const bool branch_taken_0x410f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F40u;
        // 0x410f44: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410f40) {
            ctx->pc = 0x410F70u;
            goto label_410f70;
        }
    }
    ctx->pc = 0x410F48u;
label_410f48:
    // 0x410f48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410f4c:
    // 0x410f4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x410f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410f50:
    // 0x410f50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x410f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_410f54:
    // 0x410f54: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x410f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_410f58:
    // 0x410f58: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x410f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_410f5c:
    // 0x410f5c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x410f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_410f60:
    // 0x410f60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x410f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_410f64:
    // 0x410f64: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x410f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_410f68:
    // 0x410f68: 0x2c0f809  jalr        $s6
label_410f6c:
    if (ctx->pc == 0x410F6Cu) {
        ctx->pc = 0x410F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F68u;
        // 0x410f6c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F70u;
        goto label_410f70;
    }
    ctx->pc = 0x410F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x410F70u);
        ctx->pc = 0x410F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F68u;
        // 0x410f6c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F68u, 0x410F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F70u;
label_410f70:
    // 0x410f70: 0x26820002  addiu       $v0, $s4, 0x2
    ctx->pc = 0x410f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_410f74:
    // 0x410f74: 0x571007  srav        $v0, $s7, $v0
    ctx->pc = 0x410f74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), GPR_U32(ctx, 2) & 0x1F));
label_410f78:
    // 0x410f78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x410f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410f7c:
    // 0x410f7c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x410f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_410f80:
    // 0x410f80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_410f84:
    if (ctx->pc == 0x410F84u) {
        ctx->pc = 0x410F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F80u;
        // 0x410f84: 0x26240002  addiu       $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F88u;
        goto label_410f88;
    }
    ctx->pc = 0x410F80u;
    {
        const bool branch_taken_0x410f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F80u;
        // 0x410f84: 0x26240002  addiu       $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410f80) {
            ctx->pc = 0x410FB0u;
            goto label_410fb0;
        }
    }
    ctx->pc = 0x410F88u;
label_410f88:
    // 0x410f88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410f8c:
    // 0x410f8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x410f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410f90:
    // 0x410f90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x410f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_410f94:
    // 0x410f94: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x410f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_410f98:
    // 0x410f98: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x410f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_410f9c:
    // 0x410f9c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x410f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_410fa0:
    // 0x410fa0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x410fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_410fa4:
    // 0x410fa4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x410fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_410fa8:
    // 0x410fa8: 0x2c0f809  jalr        $s6
label_410fac:
    if (ctx->pc == 0x410FACu) {
        ctx->pc = 0x410FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FA8u;
        // 0x410fac: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FB0u;
        goto label_410fb0;
    }
    ctx->pc = 0x410FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x410FB0u);
        ctx->pc = 0x410FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FA8u;
        // 0x410fac: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410FA8u, 0x410FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410FB0u;
label_410fb0:
    // 0x410fb0: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x410fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_410fb4:
    // 0x410fb4: 0x571007  srav        $v0, $s7, $v0
    ctx->pc = 0x410fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), GPR_U32(ctx, 2) & 0x1F));
label_410fb8:
    // 0x410fb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x410fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410fbc:
    // 0x410fbc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x410fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_410fc0:
    // 0x410fc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_410fc4:
    if (ctx->pc == 0x410FC4u) {
        ctx->pc = 0x410FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FC0u;
        // 0x410fc4: 0x26240003  addiu       $a0, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FC8u;
        goto label_410fc8;
    }
    ctx->pc = 0x410FC0u;
    {
        const bool branch_taken_0x410fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FC0u;
        // 0x410fc4: 0x26240003  addiu       $a0, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410fc0) {
            ctx->pc = 0x410FF0u;
            goto label_410ff0;
        }
    }
    ctx->pc = 0x410FC8u;
label_410fc8:
    // 0x410fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410fcc:
    // 0x410fcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x410fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410fd0:
    // 0x410fd0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x410fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_410fd4:
    // 0x410fd4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x410fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_410fd8:
    // 0x410fd8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x410fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_410fdc:
    // 0x410fdc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x410fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_410fe0:
    // 0x410fe0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x410fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_410fe4:
    // 0x410fe4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x410fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_410fe8:
    // 0x410fe8: 0x2c0f809  jalr        $s6
label_410fec:
    if (ctx->pc == 0x410FECu) {
        ctx->pc = 0x410FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FE8u;
        // 0x410fec: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FF0u;
        goto label_410ff0;
    }
    ctx->pc = 0x410FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x410FF0u);
        ctx->pc = 0x410FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FE8u;
        // 0x410fec: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410FE8u, 0x410FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410FF0u;
label_410ff0:
    // 0x410ff0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x410ff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_410ff4:
    // 0x410ff4: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x410ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_410ff8:
    // 0x410ff8: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_410ffc:
    if (ctx->pc == 0x410FFCu) {
        ctx->pc = 0x410FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FF8u;
        // 0x410ffc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411000u;
        goto label_411000;
    }
    ctx->pc = 0x410FF8u;
    {
        const bool branch_taken_0x410ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FF8u;
        // 0x410ffc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410ff8) {
            ctx->pc = 0x410EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410ef8;
        }
    }
    ctx->pc = 0x411000u;
label_411000:
    // 0x411000: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x411000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_411004:
    // 0x411004: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x411004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_411008:
    // 0x411008: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x411008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41100c:
    // 0x41100c: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_411010:
    if (ctx->pc == 0x411010u) {
        ctx->pc = 0x411010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41100Cu;
        // 0x411010: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411014u;
        goto label_411014;
    }
    ctx->pc = 0x41100Cu;
    {
        const bool branch_taken_0x41100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41100Cu;
        // 0x411010: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41100c) {
            ctx->pc = 0x410ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410ed0;
        }
    }
    ctx->pc = 0x411014u;
label_411014:
    // 0x411014: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x411014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_411018:
    // 0x411018: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x411018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_41101c:
    // 0x41101c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_411020:
    // 0x411020: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x411020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_411024:
    // 0x411024: 0x40f809  jalr        $v0
label_411028:
    if (ctx->pc == 0x411028u) {
        ctx->pc = 0x411028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411024u;
        // 0x411028: 0x8fbe0008  lw          $fp, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41102Cu;
        goto label_41102c;
    }
    ctx->pc = 0x411024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41102Cu);
        ctx->pc = 0x411028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411024u;
        // 0x411028: 0x8fbe0008  lw          $fp, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411024u, 0x41102Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41102Cu;
label_41102c:
    // 0x41102c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x41102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_411030:
    // 0x411030: 0x17c4ff91  bne         $fp, $a0, . + 4 + (-0x6F << 2)
label_411034:
    if (ctx->pc == 0x411034u) {
        ctx->pc = 0x411034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411030u;
        // 0x411034: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411038u;
        goto label_411038;
    }
    ctx->pc = 0x411030u;
    {
        const bool branch_taken_0x411030 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        ctx->pc = 0x411034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411030u;
        // 0x411034: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411030) {
            ctx->pc = 0x410E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410e78;
        }
    }
    ctx->pc = 0x411038u;
label_411038:
    // 0x411038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x411038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41103c:
    // 0x41103c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x41103cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_411040:
    // 0x411040: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x411040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_411044:
    // 0x411044: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x411044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_411048:
    // 0x411048: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x411048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41104c:
    // 0x41104c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x41104cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_411050:
    // 0x411050: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x411050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_411054:
    // 0x411054: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x411054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411058:
    // 0x411058: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x411058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41105c:
    // 0x41105c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x41105cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411060:
    // 0x411060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411064:
    // 0x411064: 0x3e00008  jr          $ra
label_411068:
    if (ctx->pc == 0x411068u) {
        ctx->pc = 0x411068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411064u;
        // 0x411068: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41106Cu;
        goto label_41106c;
    }
    ctx->pc = 0x411064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411064u;
        // 0x411068: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41106Cu;
label_41106c:
    // 0x41106c: 0x0  nop
    ctx->pc = 0x41106cu;
    // NOP
    ctx->pc = 0x411070u;
}
