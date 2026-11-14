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

// Function: sub_00312030
// Address: 0x312030 - 0x312108
void sub_00312030_0x312030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312030_0x312030");
#endif

    switch (ctx->pc) {
        case 0x312030u: goto label_312030;
        case 0x312034u: goto label_312034;
        case 0x312038u: goto label_312038;
        case 0x31203cu: goto label_31203c;
        case 0x312040u: goto label_312040;
        case 0x312044u: goto label_312044;
        case 0x312048u: goto label_312048;
        case 0x31204cu: goto label_31204c;
        case 0x312050u: goto label_312050;
        case 0x312054u: goto label_312054;
        case 0x312058u: goto label_312058;
        case 0x31205cu: goto label_31205c;
        case 0x312060u: goto label_312060;
        case 0x312064u: goto label_312064;
        case 0x312068u: goto label_312068;
        case 0x31206cu: goto label_31206c;
        case 0x312070u: goto label_312070;
        case 0x312074u: goto label_312074;
        case 0x312078u: goto label_312078;
        case 0x31207cu: goto label_31207c;
        case 0x312080u: goto label_312080;
        case 0x312084u: goto label_312084;
        case 0x312088u: goto label_312088;
        case 0x31208cu: goto label_31208c;
        case 0x312090u: goto label_312090;
        case 0x312094u: goto label_312094;
        case 0x312098u: goto label_312098;
        case 0x31209cu: goto label_31209c;
        case 0x3120a0u: goto label_3120a0;
        case 0x3120a4u: goto label_3120a4;
        case 0x3120a8u: goto label_3120a8;
        case 0x3120acu: goto label_3120ac;
        case 0x3120b0u: goto label_3120b0;
        case 0x3120b4u: goto label_3120b4;
        case 0x3120b8u: goto label_3120b8;
        case 0x3120bcu: goto label_3120bc;
        case 0x3120c0u: goto label_3120c0;
        case 0x3120c4u: goto label_3120c4;
        case 0x3120c8u: goto label_3120c8;
        case 0x3120ccu: goto label_3120cc;
        case 0x3120d0u: goto label_3120d0;
        case 0x3120d4u: goto label_3120d4;
        case 0x3120d8u: goto label_3120d8;
        case 0x3120dcu: goto label_3120dc;
        case 0x3120e0u: goto label_3120e0;
        case 0x3120e4u: goto label_3120e4;
        case 0x3120e8u: goto label_3120e8;
        case 0x3120ecu: goto label_3120ec;
        case 0x3120f0u: goto label_3120f0;
        case 0x3120f4u: goto label_3120f4;
        case 0x3120f8u: goto label_3120f8;
        case 0x3120fcu: goto label_3120fc;
        case 0x312100u: goto label_312100;
        case 0x312104u: goto label_312104;
        default: break;
    }

    ctx->pc = 0x312030u;

label_312030:
    // 0x312030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x312030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_312034:
    // 0x312034: 0x8f82a574  lw          $v0, -0x5A8C($gp)
    ctx->pc = 0x312034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
label_312038:
    // 0x312038: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x312038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31203c:
    // 0x31203c: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x31203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_312040:
    // 0x312040: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x312040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_312044:
    // 0x312044: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x312044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312048:
    // 0x312048: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x312048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31204c:
    // 0x31204c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_312050:
    // 0x312050: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x312050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_312054:
    // 0x312054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x312054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_312058:
    // 0x312058: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x312058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_31205c:
    // 0x31205c: 0xc103322  jal         func_40CC88
label_312060:
    if (ctx->pc == 0x312060u) {
        ctx->pc = 0x312060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31205Cu;
        // 0x312060: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312064u;
        goto label_312064;
    }
    ctx->pc = 0x31205Cu;
    SET_GPR_U32(ctx, 31, 0x312064u);
    ctx->pc = 0x312060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31205Cu;
    // 0x312060: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x31205Cu, 0x312064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312064u;
label_312064:
    // 0x312064: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_312068:
    if (ctx->pc == 0x312068u) {
        ctx->pc = 0x312068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312064u;
        // 0x312068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31206Cu;
        goto label_31206c;
    }
    ctx->pc = 0x312064u;
    {
        const bool branch_taken_0x312064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312064u;
        // 0x312068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312064) {
            ctx->pc = 0x3120E8u;
            goto label_3120e8;
        }
    }
    ctx->pc = 0x31206Cu;
label_31206c:
    // 0x31206c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312070:
    // 0x312070: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x312070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_312074:
    // 0x312074: 0xc103468  jal         func_40D1A0
label_312078:
    if (ctx->pc == 0x312078u) {
        ctx->pc = 0x312078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312074u;
        // 0x312078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31207Cu;
        goto label_31207c;
    }
    ctx->pc = 0x312074u;
    SET_GPR_U32(ctx, 31, 0x31207Cu);
    ctx->pc = 0x312078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312074u;
    // 0x312078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x312074u, 0x31207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31207Cu;
label_31207c:
    // 0x31207c: 0x8fb00008  lw          $s0, 0x8($sp)
    ctx->pc = 0x31207cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_312080:
    // 0x312080: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_312084:
    if (ctx->pc == 0x312084u) {
        ctx->pc = 0x312084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312080u;
        // 0x312084: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312088u;
        goto label_312088;
    }
    ctx->pc = 0x312080u;
    {
        const bool branch_taken_0x312080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312080u;
        // 0x312084: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312080) {
            ctx->pc = 0x3120CCu;
            goto label_3120cc;
        }
    }
    ctx->pc = 0x312088u;
label_312088:
    // 0x312088: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_31208c:
    // 0x31208c: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x31208cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_312090:
    // 0x312090: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x312090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_312094:
    // 0x312094: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x312094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_312098:
    // 0x312098: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x312098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_31209c:
    // 0x31209c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31209cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3120a0:
    // 0x3120a0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3120a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3120a4:
    // 0x3120a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3120a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3120a8:
    // 0x3120a8: 0x40f809  jalr        $v0
label_3120ac:
    if (ctx->pc == 0x3120ACu) {
        ctx->pc = 0x3120ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120A8u;
        // 0x3120ac: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3120B0u;
        goto label_3120b0;
    }
    ctx->pc = 0x3120A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3120B0u);
        ctx->pc = 0x3120ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120A8u;
        // 0x3120ac: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3120A8u, 0x3120B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3120B0u;
label_3120b0:
    // 0x3120b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3120b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3120b4:
    // 0x3120b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3120b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3120b8:
    // 0x3120b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3120b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3120bc:
    // 0x3120bc: 0xc103468  jal         func_40D1A0
label_3120c0:
    if (ctx->pc == 0x3120C0u) {
        ctx->pc = 0x3120C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120BCu;
        // 0x3120c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3120C4u;
        goto label_3120c4;
    }
    ctx->pc = 0x3120BCu;
    SET_GPR_U32(ctx, 31, 0x3120C4u);
    ctx->pc = 0x3120C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120BCu;
    // 0x3120c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3120BCu, 0x3120C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120C4u;
label_3120c4:
    // 0x3120c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3120c8:
    if (ctx->pc == 0x3120C8u) {
        ctx->pc = 0x3120C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120C4u;
        // 0x3120c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3120CCu;
        goto label_3120cc;
    }
    ctx->pc = 0x3120C4u;
    {
        const bool branch_taken_0x3120c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120C4u;
        // 0x3120c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120c4) {
            ctx->pc = 0x3120D0u;
            goto label_3120d0;
        }
    }
    ctx->pc = 0x3120CCu;
label_3120cc:
    // 0x3120cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3120ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3120d0:
    // 0x3120d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3120d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3120d4:
    // 0x3120d4: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x3120d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_3120d8:
    // 0x3120d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3120d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3120dc:
    // 0x3120dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3120dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3120e0:
    // 0x3120e0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3120e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3120e4:
    // 0x3120e4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3120e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3120e8:
    // 0x3120e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3120e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3120ec:
    // 0x3120ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3120ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3120f0:
    // 0x3120f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3120f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3120f4:
    // 0x3120f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3120f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3120f8:
    // 0x3120f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3120f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3120fc:
    // 0x3120fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3120fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_312100:
    // 0x312100: 0x3e00008  jr          $ra
label_312104:
    if (ctx->pc == 0x312104u) {
        ctx->pc = 0x312104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312100u;
        // 0x312104: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312108u;
        goto label_fallthrough_0x312100;
    }
    ctx->pc = 0x312100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312100u;
        // 0x312104: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x312100:
    ctx->pc = 0x312108u;
}
