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

// Function: sub_00314E00
// Address: 0x314e00 - 0x315100
void sub_00314E00_0x314e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314E00_0x314e00");
#endif

    switch (ctx->pc) {
        case 0x314e00u: goto label_314e00;
        case 0x314e04u: goto label_314e04;
        case 0x314e08u: goto label_314e08;
        case 0x314e0cu: goto label_314e0c;
        case 0x314e10u: goto label_314e10;
        case 0x314e14u: goto label_314e14;
        case 0x314e18u: goto label_314e18;
        case 0x314e1cu: goto label_314e1c;
        case 0x314e20u: goto label_314e20;
        case 0x314e24u: goto label_314e24;
        case 0x314e28u: goto label_314e28;
        case 0x314e2cu: goto label_314e2c;
        case 0x314e30u: goto label_314e30;
        case 0x314e34u: goto label_314e34;
        case 0x314e38u: goto label_314e38;
        case 0x314e3cu: goto label_314e3c;
        case 0x314e40u: goto label_314e40;
        case 0x314e44u: goto label_314e44;
        case 0x314e48u: goto label_314e48;
        case 0x314e4cu: goto label_314e4c;
        case 0x314e50u: goto label_314e50;
        case 0x314e54u: goto label_314e54;
        case 0x314e58u: goto label_314e58;
        case 0x314e5cu: goto label_314e5c;
        case 0x314e60u: goto label_314e60;
        case 0x314e64u: goto label_314e64;
        case 0x314e68u: goto label_314e68;
        case 0x314e6cu: goto label_314e6c;
        case 0x314e70u: goto label_314e70;
        case 0x314e74u: goto label_314e74;
        case 0x314e78u: goto label_314e78;
        case 0x314e7cu: goto label_314e7c;
        case 0x314e80u: goto label_314e80;
        case 0x314e84u: goto label_314e84;
        case 0x314e88u: goto label_314e88;
        case 0x314e8cu: goto label_314e8c;
        case 0x314e90u: goto label_314e90;
        case 0x314e94u: goto label_314e94;
        case 0x314e98u: goto label_314e98;
        case 0x314e9cu: goto label_314e9c;
        case 0x314ea0u: goto label_314ea0;
        case 0x314ea4u: goto label_314ea4;
        case 0x314ea8u: goto label_314ea8;
        case 0x314eacu: goto label_314eac;
        case 0x314eb0u: goto label_314eb0;
        case 0x314eb4u: goto label_314eb4;
        case 0x314eb8u: goto label_314eb8;
        case 0x314ebcu: goto label_314ebc;
        case 0x314ec0u: goto label_314ec0;
        case 0x314ec4u: goto label_314ec4;
        case 0x314ec8u: goto label_314ec8;
        case 0x314eccu: goto label_314ecc;
        case 0x314ed0u: goto label_314ed0;
        case 0x314ed4u: goto label_314ed4;
        case 0x314ed8u: goto label_314ed8;
        case 0x314edcu: goto label_314edc;
        case 0x314ee0u: goto label_314ee0;
        case 0x314ee4u: goto label_314ee4;
        case 0x314ee8u: goto label_314ee8;
        case 0x314eecu: goto label_314eec;
        case 0x314ef0u: goto label_314ef0;
        case 0x314ef4u: goto label_314ef4;
        case 0x314ef8u: goto label_314ef8;
        case 0x314efcu: goto label_314efc;
        case 0x314f00u: goto label_314f00;
        case 0x314f04u: goto label_314f04;
        case 0x314f08u: goto label_314f08;
        case 0x314f0cu: goto label_314f0c;
        case 0x314f10u: goto label_314f10;
        case 0x314f14u: goto label_314f14;
        case 0x314f18u: goto label_314f18;
        case 0x314f1cu: goto label_314f1c;
        case 0x314f20u: goto label_314f20;
        case 0x314f24u: goto label_314f24;
        case 0x314f28u: goto label_314f28;
        case 0x314f2cu: goto label_314f2c;
        case 0x314f30u: goto label_314f30;
        case 0x314f34u: goto label_314f34;
        case 0x314f38u: goto label_314f38;
        case 0x314f3cu: goto label_314f3c;
        case 0x314f40u: goto label_314f40;
        case 0x314f44u: goto label_314f44;
        case 0x314f48u: goto label_314f48;
        case 0x314f4cu: goto label_314f4c;
        case 0x314f50u: goto label_314f50;
        case 0x314f54u: goto label_314f54;
        case 0x314f58u: goto label_314f58;
        case 0x314f5cu: goto label_314f5c;
        case 0x314f60u: goto label_314f60;
        case 0x314f64u: goto label_314f64;
        case 0x314f68u: goto label_314f68;
        case 0x314f6cu: goto label_314f6c;
        case 0x314f70u: goto label_314f70;
        case 0x314f74u: goto label_314f74;
        case 0x314f78u: goto label_314f78;
        case 0x314f7cu: goto label_314f7c;
        case 0x314f80u: goto label_314f80;
        case 0x314f84u: goto label_314f84;
        case 0x314f88u: goto label_314f88;
        case 0x314f8cu: goto label_314f8c;
        case 0x314f90u: goto label_314f90;
        case 0x314f94u: goto label_314f94;
        case 0x314f98u: goto label_314f98;
        case 0x314f9cu: goto label_314f9c;
        case 0x314fa0u: goto label_314fa0;
        case 0x314fa4u: goto label_314fa4;
        case 0x314fa8u: goto label_314fa8;
        case 0x314facu: goto label_314fac;
        case 0x314fb0u: goto label_314fb0;
        case 0x314fb4u: goto label_314fb4;
        case 0x314fb8u: goto label_314fb8;
        case 0x314fbcu: goto label_314fbc;
        case 0x314fc0u: goto label_314fc0;
        case 0x314fc4u: goto label_314fc4;
        case 0x314fc8u: goto label_314fc8;
        case 0x314fccu: goto label_314fcc;
        case 0x314fd0u: goto label_314fd0;
        case 0x314fd4u: goto label_314fd4;
        case 0x314fd8u: goto label_314fd8;
        case 0x314fdcu: goto label_314fdc;
        case 0x314fe0u: goto label_314fe0;
        case 0x314fe4u: goto label_314fe4;
        case 0x314fe8u: goto label_314fe8;
        case 0x314fecu: goto label_314fec;
        case 0x314ff0u: goto label_314ff0;
        case 0x314ff4u: goto label_314ff4;
        case 0x314ff8u: goto label_314ff8;
        case 0x314ffcu: goto label_314ffc;
        case 0x315000u: goto label_315000;
        case 0x315004u: goto label_315004;
        case 0x315008u: goto label_315008;
        case 0x31500cu: goto label_31500c;
        case 0x315010u: goto label_315010;
        case 0x315014u: goto label_315014;
        case 0x315018u: goto label_315018;
        case 0x31501cu: goto label_31501c;
        case 0x315020u: goto label_315020;
        case 0x315024u: goto label_315024;
        case 0x315028u: goto label_315028;
        case 0x31502cu: goto label_31502c;
        case 0x315030u: goto label_315030;
        case 0x315034u: goto label_315034;
        case 0x315038u: goto label_315038;
        case 0x31503cu: goto label_31503c;
        case 0x315040u: goto label_315040;
        case 0x315044u: goto label_315044;
        case 0x315048u: goto label_315048;
        case 0x31504cu: goto label_31504c;
        case 0x315050u: goto label_315050;
        case 0x315054u: goto label_315054;
        case 0x315058u: goto label_315058;
        case 0x31505cu: goto label_31505c;
        case 0x315060u: goto label_315060;
        case 0x315064u: goto label_315064;
        case 0x315068u: goto label_315068;
        case 0x31506cu: goto label_31506c;
        case 0x315070u: goto label_315070;
        case 0x315074u: goto label_315074;
        case 0x315078u: goto label_315078;
        case 0x31507cu: goto label_31507c;
        case 0x315080u: goto label_315080;
        case 0x315084u: goto label_315084;
        case 0x315088u: goto label_315088;
        case 0x31508cu: goto label_31508c;
        case 0x315090u: goto label_315090;
        case 0x315094u: goto label_315094;
        case 0x315098u: goto label_315098;
        case 0x31509cu: goto label_31509c;
        case 0x3150a0u: goto label_3150a0;
        case 0x3150a4u: goto label_3150a4;
        case 0x3150a8u: goto label_3150a8;
        case 0x3150acu: goto label_3150ac;
        case 0x3150b0u: goto label_3150b0;
        case 0x3150b4u: goto label_3150b4;
        case 0x3150b8u: goto label_3150b8;
        case 0x3150bcu: goto label_3150bc;
        case 0x3150c0u: goto label_3150c0;
        case 0x3150c4u: goto label_3150c4;
        case 0x3150c8u: goto label_3150c8;
        case 0x3150ccu: goto label_3150cc;
        case 0x3150d0u: goto label_3150d0;
        case 0x3150d4u: goto label_3150d4;
        case 0x3150d8u: goto label_3150d8;
        case 0x3150dcu: goto label_3150dc;
        case 0x3150e0u: goto label_3150e0;
        case 0x3150e4u: goto label_3150e4;
        case 0x3150e8u: goto label_3150e8;
        case 0x3150ecu: goto label_3150ec;
        case 0x3150f0u: goto label_3150f0;
        case 0x3150f4u: goto label_3150f4;
        case 0x3150f8u: goto label_3150f8;
        case 0x3150fcu: goto label_3150fc;
        default: break;
    }

    ctx->pc = 0x314e00u;

label_314e00:
    // 0x314e00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x314e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_314e04:
    // 0x314e04: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x314e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_314e08:
    // 0x314e08: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x314e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_314e0c:
    // 0x314e0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x314e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314e10:
    // 0x314e10: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x314e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_314e14:
    // 0x314e14: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x314e14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_314e18:
    // 0x314e18: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x314e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_314e1c:
    // 0x314e1c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x314e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_314e20:
    // 0x314e20: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x314e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_314e24:
    // 0x314e24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x314e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_314e28:
    // 0x314e28: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x314e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_314e2c:
    // 0x314e2c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x314e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_314e30:
    // 0x314e30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x314e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_314e34:
    // 0x314e34: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x314e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_314e38:
    // 0x314e38: 0x8e970014  lw          $s7, 0x14($s4)
    ctx->pc = 0x314e38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_314e3c:
    // 0x314e3c: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x314e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_314e40:
    // 0x314e40: 0x8e93002c  lw          $s3, 0x2C($s4)
    ctx->pc = 0x314e40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_314e44:
    // 0x314e44: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_314e48:
    if (ctx->pc == 0x314E48u) {
        ctx->pc = 0x314E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E44u;
        // 0x314e48: 0x8c550014  lw          $s5, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314E4Cu;
        goto label_314e4c;
    }
    ctx->pc = 0x314E44u;
    {
        const bool branch_taken_0x314e44 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x314E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E44u;
        // 0x314e48: 0x8c550014  lw          $s5, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e44) {
            ctx->pc = 0x314E58u;
            goto label_314e58;
        }
    }
    ctx->pc = 0x314E4Cu;
label_314e4c:
    // 0x314e4c: 0xc0c5502  jal         func_315408
label_314e50:
    if (ctx->pc == 0x314E50u) {
        ctx->pc = 0x314E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E4Cu;
        // 0x314e50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314E54u;
        goto label_314e54;
    }
    ctx->pc = 0x314E4Cu;
    SET_GPR_U32(ctx, 31, 0x314E54u);
    ctx->pc = 0x314E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E4Cu;
    // 0x314e50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315408u, 0x314E4Cu, 0x314E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E54u;
label_314e54:
    // 0x314e54: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x314e54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_314e58:
    // 0x314e58: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x314e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_314e5c:
    // 0x314e5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x314e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_314e60:
    // 0x314e60: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_314e64:
    if (ctx->pc == 0x314E64u) {
        ctx->pc = 0x314E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E60u;
        // 0x314e64: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314E68u;
        goto label_314e68;
    }
    ctx->pc = 0x314E60u;
    {
        const bool branch_taken_0x314e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E60u;
        // 0x314e64: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e60) {
            ctx->pc = 0x315078u;
            goto label_315078;
        }
    }
    ctx->pc = 0x314E68u;
label_314e68:
    // 0x314e68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x314e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_314e6c:
    // 0x314e6c: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x314e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_314e70:
    // 0x314e70: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x314e70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_314e74:
    // 0x314e74: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x314e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_314e78:
    // 0x314e78: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_314e7c:
    // 0x314e7c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x314e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_314e80:
    // 0x314e80: 0x34a5011d  ori         $a1, $a1, 0x11D
    ctx->pc = 0x314e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)285);
label_314e84:
    // 0x314e84: 0x40f809  jalr        $v0
label_314e88:
    if (ctx->pc == 0x314E88u) {
        ctx->pc = 0x314E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E84u;
        // 0x314e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314E8Cu;
        goto label_314e8c;
    }
    ctx->pc = 0x314E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314E8Cu);
        ctx->pc = 0x314E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E84u;
        // 0x314e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314E84u, 0x314E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314E8Cu;
label_314e8c:
    // 0x314e8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x314e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314e90:
    // 0x314e90: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
label_314e94:
    if (ctx->pc == 0x314E94u) {
        ctx->pc = 0x314E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E90u;
        // 0x314e94: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314E98u;
        goto label_314e98;
    }
    ctx->pc = 0x314E90u;
    {
        const bool branch_taken_0x314e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x314E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E90u;
        // 0x314e94: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e90) {
            ctx->pc = 0x314EC8u;
            goto label_314ec8;
        }
    }
    ctx->pc = 0x314E98u;
label_314e98:
    // 0x314e98: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x314e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_314e9c:
    // 0x314e9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_314ea0:
    // 0x314ea0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x314ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_314ea4:
    // 0x314ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x314ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314ea8:
    // 0x314ea8: 0xc1035f6  jal         func_40D7D8
label_314eac:
    if (ctx->pc == 0x314EACu) {
        ctx->pc = 0x314EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EA8u;
        // 0x314eac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314EB0u;
        goto label_314eb0;
    }
    ctx->pc = 0x314EA8u;
    SET_GPR_U32(ctx, 31, 0x314EB0u);
    ctx->pc = 0x314EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EA8u;
    // 0x314eac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x314EA8u, 0x314EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EB0u;
label_314eb0:
    // 0x314eb0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x314eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_314eb4:
    // 0x314eb4: 0xc103628  jal         func_40D8A0
label_314eb8:
    if (ctx->pc == 0x314EB8u) {
        ctx->pc = 0x314EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EB4u;
        // 0x314eb8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314EBCu;
        goto label_314ebc;
    }
    ctx->pc = 0x314EB4u;
    SET_GPR_U32(ctx, 31, 0x314EBCu);
    ctx->pc = 0x314EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EB4u;
    // 0x314eb8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x314EB4u, 0x314EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EBCu;
label_314ebc:
    // 0x314ebc: 0x10000076  b           . + 4 + (0x76 << 2)
label_314ec0:
    if (ctx->pc == 0x314EC0u) {
        ctx->pc = 0x314EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EBCu;
        // 0x314ec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314EC4u;
        goto label_314ec4;
    }
    ctx->pc = 0x314EBCu;
    {
        const bool branch_taken_0x314ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EBCu;
        // 0x314ec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ebc) {
            ctx->pc = 0x315098u;
            goto label_315098;
        }
    }
    ctx->pc = 0x314EC4u;
label_314ec4:
    // 0x314ec4: 0x0  nop
    ctx->pc = 0x314ec4u;
    // NOP
label_314ec8:
    // 0x314ec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x314ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314ecc:
    // 0x314ecc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x314eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_314ed0:
    // 0x314ed0: 0x1130c0  sll         $a2, $s1, 3
    ctx->pc = 0x314ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_314ed4:
    // 0x314ed4: 0xc0bb778  jal         func_2EDDE0
label_314ed8:
    if (ctx->pc == 0x314ED8u) {
        ctx->pc = 0x314ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314ED4u;
        // 0x314ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314EDCu;
        goto label_314edc;
    }
    ctx->pc = 0x314ED4u;
    SET_GPR_U32(ctx, 31, 0x314EDCu);
    ctx->pc = 0x314ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314ED4u;
    // 0x314ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x314ED4u, 0x314EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EDCu;
label_314edc:
    // 0x314edc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x314edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_314ee0:
    // 0x314ee0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x314ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_314ee4:
    // 0x314ee4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x314ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314ee8:
    // 0x314ee8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x314ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314eec:
    // 0x314eec: 0xc0c5198  jal         func_314660
label_314ef0:
    if (ctx->pc == 0x314EF0u) {
        ctx->pc = 0x314EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EECu;
        // 0x314ef0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314EF4u;
        goto label_314ef4;
    }
    ctx->pc = 0x314EECu;
    SET_GPR_U32(ctx, 31, 0x314EF4u);
    ctx->pc = 0x314EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EECu;
    // 0x314ef0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314660u, 0x314EECu, 0x314EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EF4u;
label_314ef4:
    // 0x314ef4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x314ef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314ef8:
    // 0x314ef8: 0x12a0005a  beqz        $s5, . + 4 + (0x5A << 2)
label_314efc:
    if (ctx->pc == 0x314EFCu) {
        ctx->pc = 0x314EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EF8u;
        // 0x314efc: 0x27c3e880  addiu       $v1, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314F00u;
        goto label_314f00;
    }
    ctx->pc = 0x314EF8u;
    {
        const bool branch_taken_0x314ef8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EF8u;
        // 0x314efc: 0x27c3e880  addiu       $v1, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ef8) {
            ctx->pc = 0x315064u;
            goto label_315064;
        }
    }
    ctx->pc = 0x314F00u;
label_314f00:
    // 0x314f00: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
label_314f04:
    if (ctx->pc == 0x314F04u) {
        ctx->pc = 0x314F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F00u;
        // 0x314f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314F08u;
        goto label_314f08;
    }
    ctx->pc = 0x314F00u;
    {
        const bool branch_taken_0x314f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F00u;
        // 0x314f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f00) {
            ctx->pc = 0x315044u;
            goto label_315044;
        }
    }
    ctx->pc = 0x314F08u;
label_314f08:
    // 0x314f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x314f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314f0c:
    // 0x314f0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x314f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314f10:
    // 0x314f10: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_314f14:
    if (ctx->pc == 0x314F14u) {
        ctx->pc = 0x314F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F10u;
        // 0x314f14: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314F18u;
        goto label_314f18;
    }
    ctx->pc = 0x314F10u;
    {
        const bool branch_taken_0x314f10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x314F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F10u;
        // 0x314f14: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f10) {
            ctx->pc = 0x314F84u;
            goto label_314f84;
        }
    }
    ctx->pc = 0x314F18u;
label_314f18:
    // 0x314f18: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_314f1c:
    if (ctx->pc == 0x314F1Cu) {
        ctx->pc = 0x314F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F18u;
        // 0x314f1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314F20u;
        goto label_314f20;
    }
    ctx->pc = 0x314F18u;
    {
        const bool branch_taken_0x314f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F18u;
        // 0x314f1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f18) {
            ctx->pc = 0x314FB4u;
            goto label_314fb4;
        }
    }
    ctx->pc = 0x314F20u;
label_314f20:
    // 0x314f20: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_314f24:
    if (ctx->pc == 0x314F24u) {
        ctx->pc = 0x314F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F20u;
        // 0x314f24: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314F28u;
        goto label_314f28;
    }
    ctx->pc = 0x314F20u;
    {
        const bool branch_taken_0x314f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314f20) {
            ctx->pc = 0x314F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314F20u;
            // 0x314f24: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F88u;
            goto label_314f88;
        }
    }
    ctx->pc = 0x314F28u;
label_314f28:
    // 0x314f28: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x314f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_314f2c:
    // 0x314f2c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_314f30:
    if (ctx->pc == 0x314F30u) {
        ctx->pc = 0x314F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F2Cu;
        // 0x314f30: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314F34u;
        goto label_314f34;
    }
    ctx->pc = 0x314F2Cu;
    {
        const bool branch_taken_0x314f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314f2c) {
            ctx->pc = 0x314F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314F2Cu;
            // 0x314f30: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F60u;
            goto label_314f60;
        }
    }
    ctx->pc = 0x314F34u;
label_314f34:
    // 0x314f34: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x314f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_314f38:
    // 0x314f38: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x314f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_314f3c:
    // 0x314f3c: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x314f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_314f40:
    // 0x314f40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x314f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314f44:
    // 0x314f44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x314f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_314f48:
    // 0x314f48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x314f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_314f4c:
    // 0x314f4c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x314f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_314f50:
    // 0x314f50: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x314f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_314f54:
    // 0x314f54: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x314f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_314f58:
    // 0x314f58: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x314f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_314f5c:
    // 0x314f5c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x314f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_314f60:
    // 0x314f60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x314f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_314f64:
    // 0x314f64: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x314f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_314f68:
    // 0x314f68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x314f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_314f6c:
    // 0x314f6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x314f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_314f70:
    // 0x314f70: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x314f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_314f74:
    // 0x314f74: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x314f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_314f78:
    // 0x314f78: 0xb0ca0007  sdl         $t2, 0x7($a2)
    ctx->pc = 0x314f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_314f7c:
    // 0x314f7c: 0xb4ca0000  sdr         $t2, 0x0($a2)
    ctx->pc = 0x314f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_314f80:
    // 0x314f80: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x314f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_314f84:
    // 0x314f84: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x314f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_314f88:
    // 0x314f88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x314f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_314f8c:
    // 0x314f8c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x314f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_314f90:
    // 0x314f90: 0xf1402b  sltu        $t0, $a3, $s1
    ctx->pc = 0x314f90u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_314f94:
    // 0x314f94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x314f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_314f98:
    // 0x314f98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x314f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_314f9c:
    // 0x314f9c: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x314f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_314fa0:
    // 0x314fa0: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x314fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_314fa4:
    // 0x314fa4: 0xb0c90007  sdl         $t1, 0x7($a2)
    ctx->pc = 0x314fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_314fa8:
    // 0x314fa8: 0xb4c90000  sdr         $t1, 0x0($a2)
    ctx->pc = 0x314fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_314fac:
    // 0x314fac: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
label_314fb0:
    if (ctx->pc == 0x314FB0u) {
        ctx->pc = 0x314FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FACu;
        // 0x314fb0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314FB4u;
        goto label_314fb4;
    }
    ctx->pc = 0x314FACu;
    {
        const bool branch_taken_0x314fac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x314FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FACu;
        // 0x314fb0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fac) {
            ctx->pc = 0x315044u;
            goto label_315044;
        }
    }
    ctx->pc = 0x314FB4u;
label_314fb4:
    // 0x314fb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x314fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314fb8:
    // 0x314fb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x314fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_314fbc:
    // 0x314fbc: 0x0  nop
    ctx->pc = 0x314fbcu;
    // NOP
label_314fc0:
    // 0x314fc0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x314fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_314fc4:
    // 0x314fc4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x314fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_314fc8:
    // 0x314fc8: 0xf1402b  sltu        $t0, $a3, $s1
    ctx->pc = 0x314fc8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_314fcc:
    // 0x314fcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x314fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_314fd0:
    // 0x314fd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x314fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_314fd4:
    // 0x314fd4: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x314fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_314fd8:
    // 0x314fd8: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x314fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_314fdc:
    // 0x314fdc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x314fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_314fe0:
    // 0x314fe0: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x314fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_314fe4:
    // 0x314fe4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x314fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_314fe8:
    // 0x314fe8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x314fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_314fec:
    // 0x314fec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x314fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_314ff0:
    // 0x314ff0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x314ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_314ff4:
    // 0x314ff4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x314ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_314ff8:
    // 0x314ff8: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x314ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_314ffc:
    // 0x314ffc: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x314ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315000:
    // 0x315000: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x315000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_315004:
    // 0x315004: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x315004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_315008:
    // 0x315008: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x315008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31500c:
    // 0x31500c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x31500cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_315010:
    // 0x315010: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x315010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_315014:
    // 0x315014: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x315014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315018:
    // 0x315018: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x315018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31501c:
    // 0x31501c: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x31501cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_315020:
    // 0x315020: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x315020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_315024:
    // 0x315024: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x315024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_315028:
    // 0x315028: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x315028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31502c:
    // 0x31502c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x31502cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_315030:
    // 0x315030: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x315030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_315034:
    // 0x315034: 0xb083001f  sdl         $v1, 0x1F($a0)
    ctx->pc = 0x315034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315038:
    // 0x315038: 0xb4830018  sdr         $v1, 0x18($a0)
    ctx->pc = 0x315038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31503c:
    // 0x31503c: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
label_315040:
    if (ctx->pc == 0x315040u) {
        ctx->pc = 0x315040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31503Cu;
        // 0x315040: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315044u;
        goto label_315044;
    }
    ctx->pc = 0x31503Cu;
    {
        const bool branch_taken_0x31503c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x315040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31503Cu;
        // 0x315040: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31503c) {
            ctx->pc = 0x314FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314fc0;
        }
    }
    ctx->pc = 0x315044u;
label_315044:
    // 0x315044: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x315044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_315048:
    // 0x315048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31504c:
    if (ctx->pc == 0x31504Cu) {
        ctx->pc = 0x31504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315048u;
        // 0x31504c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315050u;
        goto label_315050;
    }
    ctx->pc = 0x315048u;
    {
        const bool branch_taken_0x315048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315048u;
        // 0x31504c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315048) {
            ctx->pc = 0x315060u;
            goto label_315060;
        }
    }
    ctx->pc = 0x315050u;
label_315050:
    // 0x315050: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x315050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_315054:
    // 0x315054: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x315054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315058:
    // 0x315058: 0x40f809  jalr        $v0
label_31505c:
    if (ctx->pc == 0x31505Cu) {
        ctx->pc = 0x31505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315058u;
        // 0x31505c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315060u;
        goto label_315060;
    }
    ctx->pc = 0x315058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315060u);
        ctx->pc = 0x31505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315058u;
        // 0x31505c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315058u, 0x315060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315060u;
label_315060:
    // 0x315060: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x315060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_315064:
    // 0x315064: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x315064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_315068:
    // 0x315068: 0x40f809  jalr        $v0
label_31506c:
    if (ctx->pc == 0x31506Cu) {
        ctx->pc = 0x31506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315068u;
        // 0x31506c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315070u;
        goto label_315070;
    }
    ctx->pc = 0x315068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315070u);
        ctx->pc = 0x31506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315068u;
        // 0x31506c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315068u, 0x315070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315070u;
label_315070:
    // 0x315070: 0x10000009  b           . + 4 + (0x9 << 2)
label_315074:
    if (ctx->pc == 0x315074u) {
        ctx->pc = 0x315074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315070u;
        // 0x315074: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315078u;
        goto label_315078;
    }
    ctx->pc = 0x315070u;
    {
        const bool branch_taken_0x315070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315070u;
        // 0x315074: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315070) {
            ctx->pc = 0x315098u;
            goto label_315098;
        }
    }
    ctx->pc = 0x315078u;
label_315078:
    // 0x315078: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x315078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31507c:
    // 0x31507c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_315080:
    // 0x315080: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x315080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315084:
    // 0x315084: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x315084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315088:
    // 0x315088: 0xc0c5198  jal         func_314660
label_31508c:
    if (ctx->pc == 0x31508Cu) {
        ctx->pc = 0x31508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315088u;
        // 0x31508c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315090u;
        goto label_315090;
    }
    ctx->pc = 0x315088u;
    SET_GPR_U32(ctx, 31, 0x315090u);
    ctx->pc = 0x31508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315088u;
    // 0x31508c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314660u, 0x315088u, 0x315090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315090u;
label_315090:
    // 0x315090: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x315090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315094:
    // 0x315094: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x315094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315098:
    // 0x315098: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_31509c:
    if (ctx->pc == 0x31509Cu) {
        ctx->pc = 0x31509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315098u;
        // 0x31509c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3150A0u;
        goto label_3150a0;
    }
    ctx->pc = 0x315098u;
    {
        const bool branch_taken_0x315098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315098u;
        // 0x31509c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315098) {
            ctx->pc = 0x3150CCu;
            goto label_3150cc;
        }
    }
    ctx->pc = 0x3150A0u;
label_3150a0:
    // 0x3150a0: 0x8f82a5b0  lw          $v0, -0x5A50($gp)
    ctx->pc = 0x3150a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944176)));
label_3150a4:
    // 0x3150a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3150a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3150a8:
    // 0x3150a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3150a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3150ac:
    // 0x3150ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3150b0:
    if (ctx->pc == 0x3150B0u) {
        ctx->pc = 0x3150B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150ACu;
        // 0x3150b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3150B4u;
        goto label_3150b4;
    }
    ctx->pc = 0x3150ACu;
    {
        const bool branch_taken_0x3150ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150ACu;
        // 0x3150b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150ac) {
            ctx->pc = 0x3150C0u;
            goto label_3150c0;
        }
    }
    ctx->pc = 0x3150B4u;
label_3150b4:
    // 0x3150b4: 0xc0c4b5a  jal         func_312D68
label_3150b8:
    if (ctx->pc == 0x3150B8u) {
        ctx->pc = 0x3150BCu;
        goto label_3150bc;
    }
    ctx->pc = 0x3150B4u;
    SET_GPR_U32(ctx, 31, 0x3150BCu);
    ctx->pc = 0x312D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312D68u, 0x3150B4u, 0x3150BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3150BCu;
label_3150bc:
    // 0x3150bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3150bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3150c0:
    // 0x3150c0: 0xc0c52a0  jal         func_314A80
label_3150c4:
    if (ctx->pc == 0x3150C4u) {
        ctx->pc = 0x3150C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150C0u;
        // 0x3150c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3150C8u;
        goto label_3150c8;
    }
    ctx->pc = 0x3150C0u;
    SET_GPR_U32(ctx, 31, 0x3150C8u);
    ctx->pc = 0x3150C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3150C0u;
    // 0x3150c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314A80u, 0x3150C0u, 0x3150C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3150C8u;
label_3150c8:
    // 0x3150c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3150c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3150cc:
    // 0x3150cc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3150ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3150d0:
    // 0x3150d0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3150d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3150d4:
    // 0x3150d4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3150d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3150d8:
    // 0x3150d8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3150d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3150dc:
    // 0x3150dc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3150dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3150e0:
    // 0x3150e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3150e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3150e4:
    // 0x3150e4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3150e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3150e8:
    // 0x3150e8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3150e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3150ec:
    // 0x3150ec: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3150ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3150f0:
    // 0x3150f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3150f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3150f4:
    // 0x3150f4: 0x3e00008  jr          $ra
label_3150f8:
    if (ctx->pc == 0x3150F8u) {
        ctx->pc = 0x3150F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150F4u;
        // 0x3150f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3150FCu;
        goto label_3150fc;
    }
    ctx->pc = 0x3150F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3150F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150F4u;
        // 0x3150f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3150F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3150FCu;
label_3150fc:
    // 0x3150fc: 0x0  nop
    ctx->pc = 0x3150fcu;
    // NOP
    ctx->pc = 0x315100u;
}
