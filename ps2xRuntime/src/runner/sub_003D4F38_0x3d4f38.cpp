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

// Function: sub_003D4F38
// Address: 0x3d4f38 - 0x3d5180
void sub_003D4F38_0x3d4f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4F38_0x3d4f38");
#endif

    switch (ctx->pc) {
        case 0x3d4f38u: goto label_3d4f38;
        case 0x3d4f3cu: goto label_3d4f3c;
        case 0x3d4f40u: goto label_3d4f40;
        case 0x3d4f44u: goto label_3d4f44;
        case 0x3d4f48u: goto label_3d4f48;
        case 0x3d4f4cu: goto label_3d4f4c;
        case 0x3d4f50u: goto label_3d4f50;
        case 0x3d4f54u: goto label_3d4f54;
        case 0x3d4f58u: goto label_3d4f58;
        case 0x3d4f5cu: goto label_3d4f5c;
        case 0x3d4f60u: goto label_3d4f60;
        case 0x3d4f64u: goto label_3d4f64;
        case 0x3d4f68u: goto label_3d4f68;
        case 0x3d4f6cu: goto label_3d4f6c;
        case 0x3d4f70u: goto label_3d4f70;
        case 0x3d4f74u: goto label_3d4f74;
        case 0x3d4f78u: goto label_3d4f78;
        case 0x3d4f7cu: goto label_3d4f7c;
        case 0x3d4f80u: goto label_3d4f80;
        case 0x3d4f84u: goto label_3d4f84;
        case 0x3d4f88u: goto label_3d4f88;
        case 0x3d4f8cu: goto label_3d4f8c;
        case 0x3d4f90u: goto label_3d4f90;
        case 0x3d4f94u: goto label_3d4f94;
        case 0x3d4f98u: goto label_3d4f98;
        case 0x3d4f9cu: goto label_3d4f9c;
        case 0x3d4fa0u: goto label_3d4fa0;
        case 0x3d4fa4u: goto label_3d4fa4;
        case 0x3d4fa8u: goto label_3d4fa8;
        case 0x3d4facu: goto label_3d4fac;
        case 0x3d4fb0u: goto label_3d4fb0;
        case 0x3d4fb4u: goto label_3d4fb4;
        case 0x3d4fb8u: goto label_3d4fb8;
        case 0x3d4fbcu: goto label_3d4fbc;
        case 0x3d4fc0u: goto label_3d4fc0;
        case 0x3d4fc4u: goto label_3d4fc4;
        case 0x3d4fc8u: goto label_3d4fc8;
        case 0x3d4fccu: goto label_3d4fcc;
        case 0x3d4fd0u: goto label_3d4fd0;
        case 0x3d4fd4u: goto label_3d4fd4;
        case 0x3d4fd8u: goto label_3d4fd8;
        case 0x3d4fdcu: goto label_3d4fdc;
        case 0x3d4fe0u: goto label_3d4fe0;
        case 0x3d4fe4u: goto label_3d4fe4;
        case 0x3d4fe8u: goto label_3d4fe8;
        case 0x3d4fecu: goto label_3d4fec;
        case 0x3d4ff0u: goto label_3d4ff0;
        case 0x3d4ff4u: goto label_3d4ff4;
        case 0x3d4ff8u: goto label_3d4ff8;
        case 0x3d4ffcu: goto label_3d4ffc;
        case 0x3d5000u: goto label_3d5000;
        case 0x3d5004u: goto label_3d5004;
        case 0x3d5008u: goto label_3d5008;
        case 0x3d500cu: goto label_3d500c;
        case 0x3d5010u: goto label_3d5010;
        case 0x3d5014u: goto label_3d5014;
        case 0x3d5018u: goto label_3d5018;
        case 0x3d501cu: goto label_3d501c;
        case 0x3d5020u: goto label_3d5020;
        case 0x3d5024u: goto label_3d5024;
        case 0x3d5028u: goto label_3d5028;
        case 0x3d502cu: goto label_3d502c;
        case 0x3d5030u: goto label_3d5030;
        case 0x3d5034u: goto label_3d5034;
        case 0x3d5038u: goto label_3d5038;
        case 0x3d503cu: goto label_3d503c;
        case 0x3d5040u: goto label_3d5040;
        case 0x3d5044u: goto label_3d5044;
        case 0x3d5048u: goto label_3d5048;
        case 0x3d504cu: goto label_3d504c;
        case 0x3d5050u: goto label_3d5050;
        case 0x3d5054u: goto label_3d5054;
        case 0x3d5058u: goto label_3d5058;
        case 0x3d505cu: goto label_3d505c;
        case 0x3d5060u: goto label_3d5060;
        case 0x3d5064u: goto label_3d5064;
        case 0x3d5068u: goto label_3d5068;
        case 0x3d506cu: goto label_3d506c;
        case 0x3d5070u: goto label_3d5070;
        case 0x3d5074u: goto label_3d5074;
        case 0x3d5078u: goto label_3d5078;
        case 0x3d507cu: goto label_3d507c;
        case 0x3d5080u: goto label_3d5080;
        case 0x3d5084u: goto label_3d5084;
        case 0x3d5088u: goto label_3d5088;
        case 0x3d508cu: goto label_3d508c;
        case 0x3d5090u: goto label_3d5090;
        case 0x3d5094u: goto label_3d5094;
        case 0x3d5098u: goto label_3d5098;
        case 0x3d509cu: goto label_3d509c;
        case 0x3d50a0u: goto label_3d50a0;
        case 0x3d50a4u: goto label_3d50a4;
        case 0x3d50a8u: goto label_3d50a8;
        case 0x3d50acu: goto label_3d50ac;
        case 0x3d50b0u: goto label_3d50b0;
        case 0x3d50b4u: goto label_3d50b4;
        case 0x3d50b8u: goto label_3d50b8;
        case 0x3d50bcu: goto label_3d50bc;
        case 0x3d50c0u: goto label_3d50c0;
        case 0x3d50c4u: goto label_3d50c4;
        case 0x3d50c8u: goto label_3d50c8;
        case 0x3d50ccu: goto label_3d50cc;
        case 0x3d50d0u: goto label_3d50d0;
        case 0x3d50d4u: goto label_3d50d4;
        case 0x3d50d8u: goto label_3d50d8;
        case 0x3d50dcu: goto label_3d50dc;
        case 0x3d50e0u: goto label_3d50e0;
        case 0x3d50e4u: goto label_3d50e4;
        case 0x3d50e8u: goto label_3d50e8;
        case 0x3d50ecu: goto label_3d50ec;
        case 0x3d50f0u: goto label_3d50f0;
        case 0x3d50f4u: goto label_3d50f4;
        case 0x3d50f8u: goto label_3d50f8;
        case 0x3d50fcu: goto label_3d50fc;
        case 0x3d5100u: goto label_3d5100;
        case 0x3d5104u: goto label_3d5104;
        case 0x3d5108u: goto label_3d5108;
        case 0x3d510cu: goto label_3d510c;
        case 0x3d5110u: goto label_3d5110;
        case 0x3d5114u: goto label_3d5114;
        case 0x3d5118u: goto label_3d5118;
        case 0x3d511cu: goto label_3d511c;
        case 0x3d5120u: goto label_3d5120;
        case 0x3d5124u: goto label_3d5124;
        case 0x3d5128u: goto label_3d5128;
        case 0x3d512cu: goto label_3d512c;
        case 0x3d5130u: goto label_3d5130;
        case 0x3d5134u: goto label_3d5134;
        case 0x3d5138u: goto label_3d5138;
        case 0x3d513cu: goto label_3d513c;
        case 0x3d5140u: goto label_3d5140;
        case 0x3d5144u: goto label_3d5144;
        case 0x3d5148u: goto label_3d5148;
        case 0x3d514cu: goto label_3d514c;
        case 0x3d5150u: goto label_3d5150;
        case 0x3d5154u: goto label_3d5154;
        case 0x3d5158u: goto label_3d5158;
        case 0x3d515cu: goto label_3d515c;
        case 0x3d5160u: goto label_3d5160;
        case 0x3d5164u: goto label_3d5164;
        case 0x3d5168u: goto label_3d5168;
        case 0x3d516cu: goto label_3d516c;
        case 0x3d5170u: goto label_3d5170;
        case 0x3d5174u: goto label_3d5174;
        case 0x3d5178u: goto label_3d5178;
        case 0x3d517cu: goto label_3d517c;
        default: break;
    }

    ctx->pc = 0x3d4f38u;

label_3d4f38:
    // 0x3d4f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d4f3c:
    // 0x3d4f3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d4f40:
    // 0x3d4f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d4f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d4f44:
    // 0x3d4f44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d4f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4f48:
    // 0x3d4f48: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3d4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3d4f4c:
    // 0x3d4f4c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3d4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3d4f50:
    // 0x3d4f50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d4f54:
    // 0x3d4f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4f58:
    // 0x3d4f58: 0x40f809  jalr        $v0
label_3d4f5c:
    if (ctx->pc == 0x3D4F5Cu) {
        ctx->pc = 0x3D4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F58u;
        // 0x3d4f5c: 0x2484b20c  addiu       $a0, $a0, -0x4DF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F60u;
        goto label_3d4f60;
    }
    ctx->pc = 0x3D4F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4F60u);
        ctx->pc = 0x3D4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F58u;
        // 0x3d4f5c: 0x2484b20c  addiu       $a0, $a0, -0x4DF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947340));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4F58u, 0x3D4F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4F60u;
label_3d4f60:
    // 0x3d4f60: 0x22027  nor         $a0, $zero, $v0
    ctx->pc = 0x3d4f60u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3d4f64:
    // 0x3d4f64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d4f68:
    // 0x3d4f68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3d4f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3d4f6c:
    // 0x3d4f6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d4f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d4f70:
    // 0x3d4f70: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
label_3d4f74:
    if (ctx->pc == 0x3D4F74u) {
        ctx->pc = 0x3D4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F70u;
        // 0x3d4f74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F78u;
        goto label_3d4f78;
    }
    ctx->pc = 0x3D4F70u;
    {
        const bool branch_taken_0x3d4f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F70u;
        // 0x3d4f74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f70) {
            ctx->pc = 0x3D4FDCu;
            goto label_3d4fdc;
        }
    }
    ctx->pc = 0x3D4F78u;
label_3d4f78:
    // 0x3d4f78: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x3d4f78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_3d4f7c:
    // 0x3d4f7c: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x3d4f7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_3d4f80:
    // 0x3d4f80: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d4f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d4f84:
    // 0x3d4f84: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3d4f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d4f88:
    // 0x3d4f88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3d4f8c:
    if (ctx->pc == 0x3D4F8Cu) {
        ctx->pc = 0x3D4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F88u;
        // 0x3d4f8c: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F90u;
        goto label_3d4f90;
    }
    ctx->pc = 0x3D4F88u;
    {
        const bool branch_taken_0x3d4f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F88u;
        // 0x3d4f8c: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f88) {
            ctx->pc = 0x3D4FC0u;
            goto label_3d4fc0;
        }
    }
    ctx->pc = 0x3D4F90u;
label_3d4f90:
    // 0x3d4f90: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d4f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d4f94:
    // 0x3d4f94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3d4f98:
    if (ctx->pc == 0x3D4F98u) {
        ctx->pc = 0x3D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F94u;
        // 0x3d4f98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F9Cu;
        goto label_3d4f9c;
    }
    ctx->pc = 0x3D4F94u;
    {
        const bool branch_taken_0x3d4f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F94u;
        // 0x3d4f98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f94) {
            ctx->pc = 0x3D4FB4u;
            goto label_3d4fb4;
        }
    }
    ctx->pc = 0x3D4F9Cu;
label_3d4f9c:
    // 0x3d4f9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3d4fa0:
    if (ctx->pc == 0x3D4FA0u) {
        ctx->pc = 0x3D4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F9Cu;
        // 0x3d4fa0: 0x2068018  mult        $s0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FA4u;
        goto label_3d4fa4;
    }
    ctx->pc = 0x3D4F9Cu;
    {
        const bool branch_taken_0x3d4f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4f9c) {
            ctx->pc = 0x3D4FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4F9Cu;
            // 0x3d4fa0: 0x2068018  mult        $s0, $s0, $a2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4FB0u;
            goto label_3d4fb0;
        }
    }
    ctx->pc = 0x3D4FA4u;
label_3d4fa4:
    // 0x3d4fa4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x3d4fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d4fa8:
    // 0x3d4fa8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3d4fac:
    // 0x3d4fac: 0x2068018  mult        $s0, $s0, $a2
    ctx->pc = 0x3d4facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3d4fb0:
    // 0x3d4fb0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3d4fb4:
    // 0x3d4fb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3d4fb8:
    // 0x3d4fb8: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
label_3d4fbc:
    if (ctx->pc == 0x3D4FBCu) {
        ctx->pc = 0x3D4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FB8u;
        // 0x3d4fbc: 0x2068018  mult        $s0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FC0u;
        goto label_3d4fc0;
    }
    ctx->pc = 0x3D4FB8u;
    {
        const bool branch_taken_0x3d4fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x3D4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FB8u;
        // 0x3d4fbc: 0x2068018  mult        $s0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fb8) {
            ctx->pc = 0x3D4FDCu;
            goto label_3d4fdc;
        }
    }
    ctx->pc = 0x3D4FC0u;
label_3d4fc0:
    // 0x3d4fc0: 0x2068018  mult        $s0, $s0, $a2
    ctx->pc = 0x3d4fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3d4fc4:
    // 0x3d4fc4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3d4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3d4fc8:
    // 0x3d4fc8: 0x2068018  mult        $s0, $s0, $a2
    ctx->pc = 0x3d4fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3d4fcc:
    // 0x3d4fcc: 0x2068018  mult        $s0, $s0, $a2
    ctx->pc = 0x3d4fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3d4fd0:
    // 0x3d4fd0: 0x0  nop
    ctx->pc = 0x3d4fd0u;
    // NOP
label_3d4fd4:
    // 0x3d4fd4: 0x1488fffa  bne         $a0, $t0, . + 4 + (-0x6 << 2)
label_3d4fd8:
    if (ctx->pc == 0x3D4FD8u) {
        ctx->pc = 0x3D4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FD4u;
        // 0x3d4fd8: 0x2068018  mult        $s0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FDCu;
        goto label_3d4fdc;
    }
    ctx->pc = 0x3D4FD4u;
    {
        const bool branch_taken_0x3d4fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x3D4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FD4u;
        // 0x3d4fd8: 0x2068018  mult        $s0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fd4) {
            ctx->pc = 0x3D4FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4fc0;
        }
    }
    ctx->pc = 0x3D4FDCu;
label_3d4fdc:
    // 0x3d4fdc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3d4fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d4fe0:
    // 0x3d4fe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d4fe4:
    if (ctx->pc == 0x3D4FE4u) {
        ctx->pc = 0x3D4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FE0u;
        // 0x3d4fe4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FE8u;
        goto label_3d4fe8;
    }
    ctx->pc = 0x3D4FE0u;
    {
        const bool branch_taken_0x3d4fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FE0u;
        // 0x3d4fe4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fe0) {
            ctx->pc = 0x3D4FF4u;
            goto label_3d4ff4;
        }
    }
    ctx->pc = 0x3D4FE8u;
label_3d4fe8:
    // 0x3d4fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4fec:
    // 0x3d4fec: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d4ff0:
    if (ctx->pc == 0x3D4FF0u) {
        ctx->pc = 0x3D4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FECu;
        // 0x3d4ff0: 0xac71b214  sw          $s1, -0x4DEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947348), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FF4u;
        goto label_3d4ff4;
    }
    ctx->pc = 0x3D4FECu;
    {
        const bool branch_taken_0x3d4fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FECu;
        // 0x3d4ff0: 0xac71b214  sw          $s1, -0x4DEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947348), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fec) {
            ctx->pc = 0x3D4FF8u;
            goto label_3d4ff8;
        }
    }
    ctx->pc = 0x3D4FF4u;
label_3d4ff4:
    // 0x3d4ff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d4ff8:
    // 0x3d4ff8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d4ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4ffc:
    // 0x3d4ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d4ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5000:
    // 0x3d5000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d5004:
    // 0x3d5004: 0x3e00008  jr          $ra
label_3d5008:
    if (ctx->pc == 0x3D5008u) {
        ctx->pc = 0x3D5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5004u;
        // 0x3d5008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D500Cu;
        goto label_3d500c;
    }
    ctx->pc = 0x3D5004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5004u;
        // 0x3d5008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D500Cu;
label_3d500c:
    // 0x3d500c: 0x0  nop
    ctx->pc = 0x3d500cu;
    // NOP
label_3d5010:
    // 0x3d5010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d5010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d5014:
    // 0x3d5014: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d5014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d5018:
    // 0x3d5018: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3d5018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d501c:
    // 0x3d501c: 0x24a55260  addiu       $a1, $a1, 0x5260
    ctx->pc = 0x3d501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21088));
label_3d5020:
    // 0x3d5020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d5020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d5024:
    // 0x3d5024: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d5024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d5028:
    // 0x3d5028: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d5028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3d502c:
    // 0x3d502c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d502cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d5030:
    // 0x3d5030: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d5030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d5034:
    // 0x3d5034: 0xc0e6984  jal         func_39A610
label_3d5038:
    if (ctx->pc == 0x3D5038u) {
        ctx->pc = 0x3D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5034u;
        // 0x3d5038: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D503Cu;
        goto label_3d503c;
    }
    ctx->pc = 0x3D5034u;
    SET_GPR_U32(ctx, 31, 0x3D503Cu);
    ctx->pc = 0x3D5038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5034u;
    // 0x3d5038: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3D5034u, 0x3D503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D503Cu;
label_3d503c:
    // 0x3d503c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3d503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d5040:
    // 0x3d5040: 0x46000004  c1          0x4
    ctx->pc = 0x3d5040u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3d5044:
    // 0x3d5044: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d5044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d5048:
    // 0x3d5048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d5048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d504c:
    // 0x3d504c: 0x0  nop
    ctx->pc = 0x3d504cu;
    // NOP
label_3d5050:
    // 0x3d5050: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_3d5054:
    if (ctx->pc == 0x3D5054u) {
        ctx->pc = 0x3D5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5050u;
        // 0x3d5054: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5058u;
        goto label_3d5058;
    }
    ctx->pc = 0x3D5050u;
    {
        const bool branch_taken_0x3d5050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5050u;
        // 0x3d5054: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5050) {
            ctx->pc = 0x3D5098u;
            goto label_3d5098;
        }
    }
    ctx->pc = 0x3D5058u;
label_3d5058:
    // 0x3d5058: 0x8c42b204  lw          $v0, -0x4DFC($v0)
    ctx->pc = 0x3d5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947332)));
label_3d505c:
    // 0x3d505c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3d5060:
    if (ctx->pc == 0x3D5060u) {
        ctx->pc = 0x3D5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D505Cu;
        // 0x3d5060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5064u;
        goto label_3d5064;
    }
    ctx->pc = 0x3D505Cu;
    {
        const bool branch_taken_0x3d505c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D505Cu;
        // 0x3d5060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d505c) {
            ctx->pc = 0x3D5078u;
            goto label_3d5078;
        }
    }
    ctx->pc = 0x3D5064u;
label_3d5064:
    // 0x3d5064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d5068:
    // 0x3d5068: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d5068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d506c:
    // 0x3d506c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d5070:
    if (ctx->pc == 0x3D5070u) {
        ctx->pc = 0x3D5074u;
        goto label_3d5074;
    }
    ctx->pc = 0x3D506Cu;
    {
        const bool branch_taken_0x3d506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d506c) {
            ctx->pc = 0x3D508Cu;
            goto label_3d508c;
        }
    }
    ctx->pc = 0x3D5074u;
label_3d5074:
    // 0x3d5074: 0x0  nop
    ctx->pc = 0x3d5074u;
    // NOP
label_3d5078:
    // 0x3d5078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d5078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d507c:
    // 0x3d507c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d507cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d5080:
    // 0x3d5080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d5084:
    // 0x3d5084: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d5084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d5088:
    // 0x3d5088: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d5088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d508c:
    // 0x3d508c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3d508cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3d5090:
    // 0x3d5090: 0xc7808150  lwc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x3d5090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d5094:
    // 0x3d5094: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x3d5094u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d5098:
    // 0x3d5098: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x3d5098u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_3d509c:
    // 0x3d509c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d50a0:
    // 0x3d50a0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3d50a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d50a4:
    // 0x3d50a4: 0x3e00008  jr          $ra
label_3d50a8:
    if (ctx->pc == 0x3D50A8u) {
        ctx->pc = 0x3D50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50A4u;
        // 0x3d50a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D50ACu;
        goto label_3d50ac;
    }
    ctx->pc = 0x3D50A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50A4u;
        // 0x3d50a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D50A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D50ACu;
label_3d50ac:
    // 0x3d50ac: 0x0  nop
    ctx->pc = 0x3d50acu;
    // NOP
label_3d50b0:
    // 0x3d50b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d50b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d50b4:
    // 0x3d50b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d50b8:
    // 0x3d50b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d50b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d50bc:
    // 0x3d50bc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3d50bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d50c0:
    // 0x3d50c0: 0x2450b1e0  addiu       $s0, $v0, -0x4E20
    ctx->pc = 0x3d50c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3d50c4:
    // 0x3d50c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d50c8:
    // 0x3d50c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d50c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d50cc:
    // 0x3d50cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d50ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d50d0:
    // 0x3d50d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d50d4:
    // 0x3d50d4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x3d50d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3d50d8:
    // 0x3d50d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d50d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3d50dc:
    // 0x3d50dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d50e0:
    // 0x3d50e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d50e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d50e4:
    // 0x3d50e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3d50e8:
    if (ctx->pc == 0x3D50E8u) {
        ctx->pc = 0x3D50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50E4u;
        // 0x3d50e8: 0x8ce60010  lw          $a2, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D50ECu;
        goto label_3d50ec;
    }
    ctx->pc = 0x3D50E4u;
    {
        const bool branch_taken_0x3d50e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d50e4) {
            ctx->pc = 0x3D50E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D50E4u;
            // 0x3d50e8: 0x8ce60010  lw          $a2, 0x10($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D50F8u;
            goto label_3d50f8;
        }
    }
    ctx->pc = 0x3D50ECu;
label_3d50ec:
    // 0x3d50ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d50ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d50f0:
    // 0x3d50f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3d50f4:
    if (ctx->pc == 0x3D50F4u) {
        ctx->pc = 0x3D50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50F0u;
        // 0x3d50f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D50F8u;
        goto label_3d50f8;
    }
    ctx->pc = 0x3D50F0u;
    {
        const bool branch_taken_0x3d50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50F0u;
        // 0x3d50f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d50f0) {
            ctx->pc = 0x3D5170u;
            goto label_3d5170;
        }
    }
    ctx->pc = 0x3D50F8u;
label_3d50f8:
    // 0x3d50f8: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_3d50fc:
    if (ctx->pc == 0x3D50FCu) {
        ctx->pc = 0x3D50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50F8u;
        // 0x3d50fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5100u;
        goto label_3d5100;
    }
    ctx->pc = 0x3D50F8u;
    {
        const bool branch_taken_0x3d50f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50F8u;
        // 0x3d50fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d50f8) {
            ctx->pc = 0x3D5168u;
            goto label_3d5168;
        }
    }
    ctx->pc = 0x3D5100u;
label_3d5100:
    // 0x3d5100: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x3d5100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_3d5104:
    // 0x3d5104: 0x8ce5002c  lw          $a1, 0x2C($a3)
    ctx->pc = 0x3d5104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_3d5108:
    // 0x3d5108: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3d5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3d510c:
    // 0x3d510c: 0xc0f51b8  jal         func_3D46E0
label_3d5110:
    if (ctx->pc == 0x3D5110u) {
        ctx->pc = 0x3D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D510Cu;
        // 0x3d5110: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5114u;
        goto label_3d5114;
    }
    ctx->pc = 0x3D510Cu;
    SET_GPR_U32(ctx, 31, 0x3D5114u);
    ctx->pc = 0x3D5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D510Cu;
    // 0x3d5110: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D46E0u, 0x3D510Cu, 0x3D5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5114u;
label_3d5114:
    // 0x3d5114: 0x46000084  c1          0x84
    ctx->pc = 0x3d5114u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_3d5118:
    // 0x3d5118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d5118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d511c:
    // 0x3d511c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3d511cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d5120:
    // 0x3d5120: 0x0  nop
    ctx->pc = 0x3d5120u;
    // NOP
label_3d5124:
    // 0x3d5124: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_3d5128:
    if (ctx->pc == 0x3D5128u) {
        ctx->pc = 0x3D5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5124u;
        // 0x3d5128: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D512Cu;
        goto label_3d512c;
    }
    ctx->pc = 0x3D5124u;
    {
        const bool branch_taken_0x3d5124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5124u;
        // 0x3d5128: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5124) {
            ctx->pc = 0x3D516Cu;
            goto label_3d516c;
        }
    }
    ctx->pc = 0x3D512Cu;
label_3d512c:
    // 0x3d512c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3d512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d5130:
    // 0x3d5130: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d5134:
    if (ctx->pc == 0x3D5134u) {
        ctx->pc = 0x3D5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5130u;
        // 0x3d5134: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5138u;
        goto label_3d5138;
    }
    ctx->pc = 0x3D5130u;
    {
        const bool branch_taken_0x3d5130 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5130u;
        // 0x3d5134: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5130) {
            ctx->pc = 0x3D5148u;
            goto label_3d5148;
        }
    }
    ctx->pc = 0x3D5138u;
label_3d5138:
    // 0x3d5138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d513c:
    // 0x3d513c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d513cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d5140:
    // 0x3d5140: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d5144:
    if (ctx->pc == 0x3D5144u) {
        ctx->pc = 0x3D5148u;
        goto label_3d5148;
    }
    ctx->pc = 0x3D5140u;
    {
        const bool branch_taken_0x3d5140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5140) {
            ctx->pc = 0x3D515Cu;
            goto label_3d515c;
        }
    }
    ctx->pc = 0x3D5148u;
label_3d5148:
    // 0x3d5148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d5148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d514c:
    // 0x3d514c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d5150:
    // 0x3d5150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d5154:
    // 0x3d5154: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d5154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d5158:
    // 0x3d5158: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d5158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d515c:
    // 0x3d515c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x3d515cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_3d5160:
    // 0x3d5160: 0xc7808150  lwc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x3d5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d5164:
    // 0x3d5164: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x3d5164u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d5168:
    // 0x3d5168: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x3d5168u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_3d516c:
    // 0x3d516c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d516cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5170:
    // 0x3d5170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d5174:
    // 0x3d5174: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3d5174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d5178:
    // 0x3d5178: 0x3e00008  jr          $ra
label_3d517c:
    if (ctx->pc == 0x3D517Cu) {
        ctx->pc = 0x3D517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5178u;
        // 0x3d517c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5180u;
        goto label_fallthrough_0x3d5178;
    }
    ctx->pc = 0x3D5178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5178u;
        // 0x3d517c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d5178:
    ctx->pc = 0x3D5180u;
}
