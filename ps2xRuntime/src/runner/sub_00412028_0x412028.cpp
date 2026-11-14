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

// Function: sub_00412028
// Address: 0x412028 - 0x4121b8
void sub_00412028_0x412028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412028_0x412028");
#endif

    switch (ctx->pc) {
        case 0x412028u: goto label_412028;
        case 0x41202cu: goto label_41202c;
        case 0x412030u: goto label_412030;
        case 0x412034u: goto label_412034;
        case 0x412038u: goto label_412038;
        case 0x41203cu: goto label_41203c;
        case 0x412040u: goto label_412040;
        case 0x412044u: goto label_412044;
        case 0x412048u: goto label_412048;
        case 0x41204cu: goto label_41204c;
        case 0x412050u: goto label_412050;
        case 0x412054u: goto label_412054;
        case 0x412058u: goto label_412058;
        case 0x41205cu: goto label_41205c;
        case 0x412060u: goto label_412060;
        case 0x412064u: goto label_412064;
        case 0x412068u: goto label_412068;
        case 0x41206cu: goto label_41206c;
        case 0x412070u: goto label_412070;
        case 0x412074u: goto label_412074;
        case 0x412078u: goto label_412078;
        case 0x41207cu: goto label_41207c;
        case 0x412080u: goto label_412080;
        case 0x412084u: goto label_412084;
        case 0x412088u: goto label_412088;
        case 0x41208cu: goto label_41208c;
        case 0x412090u: goto label_412090;
        case 0x412094u: goto label_412094;
        case 0x412098u: goto label_412098;
        case 0x41209cu: goto label_41209c;
        case 0x4120a0u: goto label_4120a0;
        case 0x4120a4u: goto label_4120a4;
        case 0x4120a8u: goto label_4120a8;
        case 0x4120acu: goto label_4120ac;
        case 0x4120b0u: goto label_4120b0;
        case 0x4120b4u: goto label_4120b4;
        case 0x4120b8u: goto label_4120b8;
        case 0x4120bcu: goto label_4120bc;
        case 0x4120c0u: goto label_4120c0;
        case 0x4120c4u: goto label_4120c4;
        case 0x4120c8u: goto label_4120c8;
        case 0x4120ccu: goto label_4120cc;
        case 0x4120d0u: goto label_4120d0;
        case 0x4120d4u: goto label_4120d4;
        case 0x4120d8u: goto label_4120d8;
        case 0x4120dcu: goto label_4120dc;
        case 0x4120e0u: goto label_4120e0;
        case 0x4120e4u: goto label_4120e4;
        case 0x4120e8u: goto label_4120e8;
        case 0x4120ecu: goto label_4120ec;
        case 0x4120f0u: goto label_4120f0;
        case 0x4120f4u: goto label_4120f4;
        case 0x4120f8u: goto label_4120f8;
        case 0x4120fcu: goto label_4120fc;
        case 0x412100u: goto label_412100;
        case 0x412104u: goto label_412104;
        case 0x412108u: goto label_412108;
        case 0x41210cu: goto label_41210c;
        case 0x412110u: goto label_412110;
        case 0x412114u: goto label_412114;
        case 0x412118u: goto label_412118;
        case 0x41211cu: goto label_41211c;
        case 0x412120u: goto label_412120;
        case 0x412124u: goto label_412124;
        case 0x412128u: goto label_412128;
        case 0x41212cu: goto label_41212c;
        case 0x412130u: goto label_412130;
        case 0x412134u: goto label_412134;
        case 0x412138u: goto label_412138;
        case 0x41213cu: goto label_41213c;
        case 0x412140u: goto label_412140;
        case 0x412144u: goto label_412144;
        case 0x412148u: goto label_412148;
        case 0x41214cu: goto label_41214c;
        case 0x412150u: goto label_412150;
        case 0x412154u: goto label_412154;
        case 0x412158u: goto label_412158;
        case 0x41215cu: goto label_41215c;
        case 0x412160u: goto label_412160;
        case 0x412164u: goto label_412164;
        case 0x412168u: goto label_412168;
        case 0x41216cu: goto label_41216c;
        case 0x412170u: goto label_412170;
        case 0x412174u: goto label_412174;
        case 0x412178u: goto label_412178;
        case 0x41217cu: goto label_41217c;
        case 0x412180u: goto label_412180;
        case 0x412184u: goto label_412184;
        case 0x412188u: goto label_412188;
        case 0x41218cu: goto label_41218c;
        case 0x412190u: goto label_412190;
        case 0x412194u: goto label_412194;
        case 0x412198u: goto label_412198;
        case 0x41219cu: goto label_41219c;
        case 0x4121a0u: goto label_4121a0;
        case 0x4121a4u: goto label_4121a4;
        case 0x4121a8u: goto label_4121a8;
        case 0x4121acu: goto label_4121ac;
        case 0x4121b0u: goto label_4121b0;
        case 0x4121b4u: goto label_4121b4;
        default: break;
    }

    ctx->pc = 0x412028u;

label_412028:
    // 0x412028: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x412028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_41202c:
    // 0x41202c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x41202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_412030:
    // 0x412030: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x412030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_412034:
    // 0x412034: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x412034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_412038:
    // 0x412038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x412038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41203c:
    // 0x41203c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_412040:
    // 0x412040: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x412040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_412044:
    // 0x412044: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x412044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_412048:
    // 0x412048: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x412048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41204c:
    // 0x41204c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412050:
    // 0x412050: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_412054:
    if (ctx->pc == 0x412054u) {
        ctx->pc = 0x412054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412050u;
        // 0x412054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412058u;
        goto label_412058;
    }
    ctx->pc = 0x412050u;
    {
        const bool branch_taken_0x412050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x412054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412050u;
        // 0x412054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412050) {
            ctx->pc = 0x4120F8u;
            goto label_4120f8;
        }
    }
    ctx->pc = 0x412058u;
label_412058:
    // 0x412058: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x412058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_41205c:
    // 0x41205c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_412060:
    if (ctx->pc == 0x412060u) {
        ctx->pc = 0x412060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41205Cu;
        // 0x412060: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412064u;
        goto label_412064;
    }
    ctx->pc = 0x41205Cu;
    {
        const bool branch_taken_0x41205c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41205Cu;
        // 0x412060: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41205c) {
            ctx->pc = 0x412074u;
            goto label_412074;
        }
    }
    ctx->pc = 0x412064u;
label_412064:
    // 0x412064: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_412068:
    if (ctx->pc == 0x412068u) {
        ctx->pc = 0x412068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412064u;
        // 0x412068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41206Cu;
        goto label_41206c;
    }
    ctx->pc = 0x412064u;
    {
        const bool branch_taken_0x412064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x412068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412064u;
        // 0x412068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412064) {
            ctx->pc = 0x41215Cu;
            goto label_41215c;
        }
    }
    ctx->pc = 0x41206Cu;
label_41206c:
    // 0x41206c: 0x10000044  b           . + 4 + (0x44 << 2)
label_412070:
    if (ctx->pc == 0x412070u) {
        ctx->pc = 0x412070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41206Cu;
        // 0x412070: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412074u;
        goto label_412074;
    }
    ctx->pc = 0x41206Cu;
    {
        const bool branch_taken_0x41206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41206Cu;
        // 0x412070: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41206c) {
            ctx->pc = 0x412180u;
            goto label_412180;
        }
    }
    ctx->pc = 0x412074u;
label_412074:
    // 0x412074: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_412078:
    if (ctx->pc == 0x412078u) {
        ctx->pc = 0x412078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412074u;
        // 0x412078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41207Cu;
        goto label_41207c;
    }
    ctx->pc = 0x412074u;
    {
        const bool branch_taken_0x412074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x412078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412074u;
        // 0x412078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412074) {
            ctx->pc = 0x412178u;
            goto label_412178;
        }
    }
    ctx->pc = 0x41207Cu;
label_41207c:
    // 0x41207c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x41207cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412080:
    // 0x412080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x412080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412084:
    // 0x412084: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x412084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412088:
    // 0x412088: 0xc0f0b08  jal         func_3C2C20
label_41208c:
    if (ctx->pc == 0x41208Cu) {
        ctx->pc = 0x41208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412088u;
        // 0x41208c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412090u;
        goto label_412090;
    }
    ctx->pc = 0x412088u;
    SET_GPR_U32(ctx, 31, 0x412090u);
    ctx->pc = 0x41208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412088u;
    // 0x41208c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x412088u, 0x412090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412090u;
label_412090:
    // 0x412090: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x412090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412094:
    // 0x412094: 0x12510040  beq         $s2, $s1, . + 4 + (0x40 << 2)
label_412098:
    if (ctx->pc == 0x412098u) {
        ctx->pc = 0x412098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412094u;
        // 0x412098: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41209Cu;
        goto label_41209c;
    }
    ctx->pc = 0x412094u;
    {
        const bool branch_taken_0x412094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x412098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412094u;
        // 0x412098: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412094) {
            ctx->pc = 0x412198u;
            goto label_412198;
        }
    }
    ctx->pc = 0x41209Cu;
label_41209c:
    // 0x41209c: 0xc0f0b88  jal         func_3C2E20
label_4120a0:
    if (ctx->pc == 0x4120A0u) {
        ctx->pc = 0x4120A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41209Cu;
        // 0x4120a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120A4u;
        goto label_4120a4;
    }
    ctx->pc = 0x41209Cu;
    SET_GPR_U32(ctx, 31, 0x4120A4u);
    ctx->pc = 0x4120A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41209Cu;
    // 0x4120a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E20u, 0x41209Cu, 0x4120A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4120A4u;
label_4120a4:
    // 0x4120a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4120a8:
    if (ctx->pc == 0x4120A8u) {
        ctx->pc = 0x4120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120A4u;
        // 0x4120a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120ACu;
        goto label_4120ac;
    }
    ctx->pc = 0x4120A4u;
    {
        const bool branch_taken_0x4120a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120A4u;
        // 0x4120a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4120a4) {
            ctx->pc = 0x4120D0u;
            goto label_4120d0;
        }
    }
    ctx->pc = 0x4120ACu;
label_4120ac:
    // 0x4120ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4120acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4120b0:
    // 0x4120b0: 0xc1035f6  jal         func_40D7D8
label_4120b4:
    if (ctx->pc == 0x4120B4u) {
        ctx->pc = 0x4120B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120B0u;
        // 0x4120b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120B8u;
        goto label_4120b8;
    }
    ctx->pc = 0x4120B0u;
    SET_GPR_U32(ctx, 31, 0x4120B8u);
    ctx->pc = 0x4120B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4120B0u;
    // 0x4120b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4120B0u, 0x4120B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4120B8u;
label_4120b8:
    // 0x4120b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4120b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4120bc:
    // 0x4120bc: 0xc103628  jal         func_40D8A0
label_4120c0:
    if (ctx->pc == 0x4120C0u) {
        ctx->pc = 0x4120C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120BCu;
        // 0x4120c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120C4u;
        goto label_4120c4;
    }
    ctx->pc = 0x4120BCu;
    SET_GPR_U32(ctx, 31, 0x4120C4u);
    ctx->pc = 0x4120C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4120BCu;
    // 0x4120c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4120BCu, 0x4120C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4120C4u;
label_4120c4:
    // 0x4120c4: 0x10000034  b           . + 4 + (0x34 << 2)
label_4120c8:
    if (ctx->pc == 0x4120C8u) {
        ctx->pc = 0x4120C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120C4u;
        // 0x4120c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120CCu;
        goto label_4120cc;
    }
    ctx->pc = 0x4120C4u;
    {
        const bool branch_taken_0x4120c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4120C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120C4u;
        // 0x4120c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4120c4) {
            ctx->pc = 0x412198u;
            goto label_412198;
        }
    }
    ctx->pc = 0x4120CCu;
label_4120cc:
    // 0x4120cc: 0x0  nop
    ctx->pc = 0x4120ccu;
    // NOP
label_4120d0:
    // 0x4120d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4120d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4120d4:
    // 0x4120d4: 0x3484001a  ori         $a0, $a0, 0x1A
    ctx->pc = 0x4120d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
label_4120d8:
    // 0x4120d8: 0xc1035f6  jal         func_40D7D8
label_4120dc:
    if (ctx->pc == 0x4120DCu) {
        ctx->pc = 0x4120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120D8u;
        // 0x4120dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120E0u;
        goto label_4120e0;
    }
    ctx->pc = 0x4120D8u;
    SET_GPR_U32(ctx, 31, 0x4120E0u);
    ctx->pc = 0x4120DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4120D8u;
    // 0x4120dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4120D8u, 0x4120E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4120E0u;
label_4120e0:
    // 0x4120e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4120e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_4120e4:
    // 0x4120e4: 0xc103628  jal         func_40D8A0
label_4120e8:
    if (ctx->pc == 0x4120E8u) {
        ctx->pc = 0x4120E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120E4u;
        // 0x4120e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120ECu;
        goto label_4120ec;
    }
    ctx->pc = 0x4120E4u;
    SET_GPR_U32(ctx, 31, 0x4120ECu);
    ctx->pc = 0x4120E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4120E4u;
    // 0x4120e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4120E4u, 0x4120ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4120ECu;
label_4120ec:
    // 0x4120ec: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4120f0:
    if (ctx->pc == 0x4120F0u) {
        ctx->pc = 0x4120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120ECu;
        // 0x4120f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4120F4u;
        goto label_4120f4;
    }
    ctx->pc = 0x4120ECu;
    {
        const bool branch_taken_0x4120ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4120ECu;
        // 0x4120f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4120ec) {
            ctx->pc = 0x412198u;
            goto label_412198;
        }
    }
    ctx->pc = 0x4120F4u;
label_4120f4:
    // 0x4120f4: 0x0  nop
    ctx->pc = 0x4120f4u;
    // NOP
label_4120f8:
    // 0x4120f8: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x4120f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4120fc:
    // 0x4120fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4120fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412100:
    // 0x412100: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x412100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_412104:
    // 0x412104: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x412104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_412108:
    // 0x412108: 0x71202b  sltu        $a0, $v1, $s1
    ctx->pc = 0x412108u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_41210c:
    // 0x41210c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_412110:
    if (ctx->pc == 0x412110u) {
        ctx->pc = 0x412110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41210Cu;
        // 0x412110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412114u;
        goto label_412114;
    }
    ctx->pc = 0x41210Cu;
    {
        const bool branch_taken_0x41210c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x412110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41210Cu;
        // 0x412110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41210c) {
            ctx->pc = 0x412130u;
            goto label_412130;
        }
    }
    ctx->pc = 0x412114u;
label_412114:
    // 0x412114: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x412114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_412118:
    // 0x412118: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x412118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_41211c:
    // 0x41211c: 0xc1035f6  jal         func_40D7D8
label_412120:
    if (ctx->pc == 0x412120u) {
        ctx->pc = 0x412120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41211Cu;
        // 0x412120: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412124u;
        goto label_412124;
    }
    ctx->pc = 0x41211Cu;
    SET_GPR_U32(ctx, 31, 0x412124u);
    ctx->pc = 0x412120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41211Cu;
    // 0x412120: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41211Cu, 0x412124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412124u;
label_412124:
    // 0x412124: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x412124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_412128:
    // 0x412128: 0xc103628  jal         func_40D8A0
label_41212c:
    if (ctx->pc == 0x41212Cu) {
        ctx->pc = 0x41212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412128u;
        // 0x41212c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412130u;
        goto label_412130;
    }
    ctx->pc = 0x412128u;
    SET_GPR_U32(ctx, 31, 0x412130u);
    ctx->pc = 0x41212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412128u;
    // 0x41212c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x412128u, 0x412130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412130u;
label_412130:
    // 0x412130: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x412130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_412134:
    // 0x412134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x412134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412138:
    // 0x412138: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x412138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41213c:
    // 0x41213c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41213cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412140:
    // 0x412140: 0xc0bb778  jal         func_2EDDE0
label_412144:
    if (ctx->pc == 0x412144u) {
        ctx->pc = 0x412144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412140u;
        // 0x412144: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412148u;
        goto label_412148;
    }
    ctx->pc = 0x412140u;
    SET_GPR_U32(ctx, 31, 0x412148u);
    ctx->pc = 0x412144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412140u;
    // 0x412144: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x412140u, 0x412148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412148u;
label_412148:
    // 0x412148: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x412148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41214c:
    // 0x41214c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41214cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412150:
    // 0x412150: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x412150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_412154:
    // 0x412154: 0x10000010  b           . + 4 + (0x10 << 2)
label_412158:
    if (ctx->pc == 0x412158u) {
        ctx->pc = 0x412158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412154u;
        // 0x412158: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41215Cu;
        goto label_41215c;
    }
    ctx->pc = 0x412154u;
    {
        const bool branch_taken_0x412154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412154u;
        // 0x412158: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412154) {
            ctx->pc = 0x412198u;
            goto label_412198;
        }
    }
    ctx->pc = 0x41215Cu;
label_41215c:
    // 0x41215c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x41215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_412160:
    // 0x412160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x412160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412164:
    // 0x412164: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x412164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_412168:
    // 0x412168: 0x40f809  jalr        $v0
label_41216c:
    if (ctx->pc == 0x41216Cu) {
        ctx->pc = 0x41216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412168u;
        // 0x41216c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412170u;
        goto label_412170;
    }
    ctx->pc = 0x412168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412170u);
        ctx->pc = 0x41216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412168u;
        // 0x41216c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412168u, 0x412170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412170u;
label_412170:
    // 0x412170: 0x1000000a  b           . + 4 + (0xA << 2)
label_412174:
    if (ctx->pc == 0x412174u) {
        ctx->pc = 0x412174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412170u;
        // 0x412174: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412178u;
        goto label_412178;
    }
    ctx->pc = 0x412170u;
    {
        const bool branch_taken_0x412170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412170u;
        // 0x412174: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412170) {
            ctx->pc = 0x41219Cu;
            goto label_41219c;
        }
    }
    ctx->pc = 0x412178u;
label_412178:
    // 0x412178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x412178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41217c:
    // 0x41217c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x41217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_412180:
    // 0x412180: 0xc1035f6  jal         func_40D7D8
label_412184:
    if (ctx->pc == 0x412184u) {
        ctx->pc = 0x412184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412180u;
        // 0x412184: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412188u;
        goto label_412188;
    }
    ctx->pc = 0x412180u;
    SET_GPR_U32(ctx, 31, 0x412188u);
    ctx->pc = 0x412184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412180u;
    // 0x412184: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412180u, 0x412188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412188u;
label_412188:
    // 0x412188: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x412188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_41218c:
    // 0x41218c: 0xc103628  jal         func_40D8A0
label_412190:
    if (ctx->pc == 0x412190u) {
        ctx->pc = 0x412190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41218Cu;
        // 0x412190: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412194u;
        goto label_412194;
    }
    ctx->pc = 0x41218Cu;
    SET_GPR_U32(ctx, 31, 0x412194u);
    ctx->pc = 0x412190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41218Cu;
    // 0x412190: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41218Cu, 0x412194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412194u;
label_412194:
    // 0x412194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x412194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412198:
    // 0x412198: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x412198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41219c:
    // 0x41219c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41219cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4121a0:
    // 0x4121a0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4121a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4121a4:
    // 0x4121a4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4121a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4121a8:
    // 0x4121a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4121a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4121ac:
    // 0x4121ac: 0x3e00008  jr          $ra
label_4121b0:
    if (ctx->pc == 0x4121B0u) {
        ctx->pc = 0x4121B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121ACu;
        // 0x4121b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4121B4u;
        goto label_4121b4;
    }
    ctx->pc = 0x4121ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4121B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4121ACu;
        // 0x4121b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4121ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4121B4u;
label_4121b4:
    // 0x4121b4: 0x0  nop
    ctx->pc = 0x4121b4u;
    // NOP
    ctx->pc = 0x4121b8u;
}
