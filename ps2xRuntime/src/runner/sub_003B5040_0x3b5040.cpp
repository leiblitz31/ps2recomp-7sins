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

// Function: sub_003B5040
// Address: 0x3b5040 - 0x3b5220
void sub_003B5040_0x3b5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5040_0x3b5040");
#endif

    switch (ctx->pc) {
        case 0x3b5040u: goto label_3b5040;
        case 0x3b5044u: goto label_3b5044;
        case 0x3b5048u: goto label_3b5048;
        case 0x3b504cu: goto label_3b504c;
        case 0x3b5050u: goto label_3b5050;
        case 0x3b5054u: goto label_3b5054;
        case 0x3b5058u: goto label_3b5058;
        case 0x3b505cu: goto label_3b505c;
        case 0x3b5060u: goto label_3b5060;
        case 0x3b5064u: goto label_3b5064;
        case 0x3b5068u: goto label_3b5068;
        case 0x3b506cu: goto label_3b506c;
        case 0x3b5070u: goto label_3b5070;
        case 0x3b5074u: goto label_3b5074;
        case 0x3b5078u: goto label_3b5078;
        case 0x3b507cu: goto label_3b507c;
        case 0x3b5080u: goto label_3b5080;
        case 0x3b5084u: goto label_3b5084;
        case 0x3b5088u: goto label_3b5088;
        case 0x3b508cu: goto label_3b508c;
        case 0x3b5090u: goto label_3b5090;
        case 0x3b5094u: goto label_3b5094;
        case 0x3b5098u: goto label_3b5098;
        case 0x3b509cu: goto label_3b509c;
        case 0x3b50a0u: goto label_3b50a0;
        case 0x3b50a4u: goto label_3b50a4;
        case 0x3b50a8u: goto label_3b50a8;
        case 0x3b50acu: goto label_3b50ac;
        case 0x3b50b0u: goto label_3b50b0;
        case 0x3b50b4u: goto label_3b50b4;
        case 0x3b50b8u: goto label_3b50b8;
        case 0x3b50bcu: goto label_3b50bc;
        case 0x3b50c0u: goto label_3b50c0;
        case 0x3b50c4u: goto label_3b50c4;
        case 0x3b50c8u: goto label_3b50c8;
        case 0x3b50ccu: goto label_3b50cc;
        case 0x3b50d0u: goto label_3b50d0;
        case 0x3b50d4u: goto label_3b50d4;
        case 0x3b50d8u: goto label_3b50d8;
        case 0x3b50dcu: goto label_3b50dc;
        case 0x3b50e0u: goto label_3b50e0;
        case 0x3b50e4u: goto label_3b50e4;
        case 0x3b50e8u: goto label_3b50e8;
        case 0x3b50ecu: goto label_3b50ec;
        case 0x3b50f0u: goto label_3b50f0;
        case 0x3b50f4u: goto label_3b50f4;
        case 0x3b50f8u: goto label_3b50f8;
        case 0x3b50fcu: goto label_3b50fc;
        case 0x3b5100u: goto label_3b5100;
        case 0x3b5104u: goto label_3b5104;
        case 0x3b5108u: goto label_3b5108;
        case 0x3b510cu: goto label_3b510c;
        case 0x3b5110u: goto label_3b5110;
        case 0x3b5114u: goto label_3b5114;
        case 0x3b5118u: goto label_3b5118;
        case 0x3b511cu: goto label_3b511c;
        case 0x3b5120u: goto label_3b5120;
        case 0x3b5124u: goto label_3b5124;
        case 0x3b5128u: goto label_3b5128;
        case 0x3b512cu: goto label_3b512c;
        case 0x3b5130u: goto label_3b5130;
        case 0x3b5134u: goto label_3b5134;
        case 0x3b5138u: goto label_3b5138;
        case 0x3b513cu: goto label_3b513c;
        case 0x3b5140u: goto label_3b5140;
        case 0x3b5144u: goto label_3b5144;
        case 0x3b5148u: goto label_3b5148;
        case 0x3b514cu: goto label_3b514c;
        case 0x3b5150u: goto label_3b5150;
        case 0x3b5154u: goto label_3b5154;
        case 0x3b5158u: goto label_3b5158;
        case 0x3b515cu: goto label_3b515c;
        case 0x3b5160u: goto label_3b5160;
        case 0x3b5164u: goto label_3b5164;
        case 0x3b5168u: goto label_3b5168;
        case 0x3b516cu: goto label_3b516c;
        case 0x3b5170u: goto label_3b5170;
        case 0x3b5174u: goto label_3b5174;
        case 0x3b5178u: goto label_3b5178;
        case 0x3b517cu: goto label_3b517c;
        case 0x3b5180u: goto label_3b5180;
        case 0x3b5184u: goto label_3b5184;
        case 0x3b5188u: goto label_3b5188;
        case 0x3b518cu: goto label_3b518c;
        case 0x3b5190u: goto label_3b5190;
        case 0x3b5194u: goto label_3b5194;
        case 0x3b5198u: goto label_3b5198;
        case 0x3b519cu: goto label_3b519c;
        case 0x3b51a0u: goto label_3b51a0;
        case 0x3b51a4u: goto label_3b51a4;
        case 0x3b51a8u: goto label_3b51a8;
        case 0x3b51acu: goto label_3b51ac;
        case 0x3b51b0u: goto label_3b51b0;
        case 0x3b51b4u: goto label_3b51b4;
        case 0x3b51b8u: goto label_3b51b8;
        case 0x3b51bcu: goto label_3b51bc;
        case 0x3b51c0u: goto label_3b51c0;
        case 0x3b51c4u: goto label_3b51c4;
        case 0x3b51c8u: goto label_3b51c8;
        case 0x3b51ccu: goto label_3b51cc;
        case 0x3b51d0u: goto label_3b51d0;
        case 0x3b51d4u: goto label_3b51d4;
        case 0x3b51d8u: goto label_3b51d8;
        case 0x3b51dcu: goto label_3b51dc;
        case 0x3b51e0u: goto label_3b51e0;
        case 0x3b51e4u: goto label_3b51e4;
        case 0x3b51e8u: goto label_3b51e8;
        case 0x3b51ecu: goto label_3b51ec;
        case 0x3b51f0u: goto label_3b51f0;
        case 0x3b51f4u: goto label_3b51f4;
        case 0x3b51f8u: goto label_3b51f8;
        case 0x3b51fcu: goto label_3b51fc;
        case 0x3b5200u: goto label_3b5200;
        case 0x3b5204u: goto label_3b5204;
        case 0x3b5208u: goto label_3b5208;
        case 0x3b520cu: goto label_3b520c;
        case 0x3b5210u: goto label_3b5210;
        case 0x3b5214u: goto label_3b5214;
        case 0x3b5218u: goto label_3b5218;
        case 0x3b521cu: goto label_3b521c;
        default: break;
    }

    ctx->pc = 0x3b5040u;

label_3b5040:
    // 0x3b5040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b5044:
    // 0x3b5044: 0x8f85ab44  lw          $a1, -0x54BC($gp)
    ctx->pc = 0x3b5044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945604)));
label_3b5048:
    // 0x3b5048: 0x8f87ab48  lw          $a3, -0x54B8($gp)
    ctx->pc = 0x3b5048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945608)));
label_3b504c:
    // 0x3b504c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3b504cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_3b5050:
    // 0x3b5050: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3b5050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_3b5054:
    // 0x3b5054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b5058:
    // 0x3b5058: 0x2508dc38  addiu       $t0, $t0, -0x23C8
    ctx->pc = 0x3b5058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958136));
label_3b505c:
    // 0x3b505c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x3b505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b5060:
    // 0x3b5060: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b5060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3b5064:
    // 0x3b5064: 0xc10408c  jal         func_410230
label_3b5068:
    if (ctx->pc == 0x3B5068u) {
        ctx->pc = 0x3B5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5064u;
        // 0x3b5068: 0x352901a3  ori         $t1, $t1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B506Cu;
        goto label_3b506c;
    }
    ctx->pc = 0x3B5064u;
    SET_GPR_U32(ctx, 31, 0x3B506Cu);
    ctx->pc = 0x3B5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5064u;
    // 0x3b5068: 0x352901a3  ori         $t1, $t1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3B5064u, 0x3B506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B506Cu;
label_3b506c:
    // 0x3b506c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b506cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b5070:
    // 0x3b5070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5074:
    // 0x3b5074: 0xac62d3ac  sw          $v0, -0x2C54($v1)
    ctx->pc = 0x3b5074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955948), GPR_U32(ctx, 2));
label_3b5078:
    // 0x3b5078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b5078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b507c:
    // 0x3b507c: 0x3e00008  jr          $ra
label_3b5080:
    if (ctx->pc == 0x3B5080u) {
        ctx->pc = 0x3B5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B507Cu;
        // 0x3b5080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5084u;
        goto label_3b5084;
    }
    ctx->pc = 0x3B507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B507Cu;
        // 0x3b5080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5084u;
label_3b5084:
    // 0x3b5084: 0x0  nop
    ctx->pc = 0x3b5084u;
    // NOP
label_3b5088:
    // 0x3b5088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b508c:
    // 0x3b508c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b5090:
    // 0x3b5090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b5094:
    // 0x3b5094: 0xc0ed294  jal         func_3B4A50
label_3b5098:
    if (ctx->pc == 0x3B5098u) {
        ctx->pc = 0x3B509Cu;
        goto label_3b509c;
    }
    ctx->pc = 0x3B5094u;
    SET_GPR_U32(ctx, 31, 0x3B509Cu);
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B5094u, 0x3B509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B509Cu;
label_3b509c:
    // 0x3b509c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b509cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b50a0:
    // 0x3b50a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b50a4:
    // 0x3b50a4: 0xc0ed13c  jal         func_3B44F0
label_3b50a8:
    if (ctx->pc == 0x3B50A8u) {
        ctx->pc = 0x3B50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50A4u;
        // 0x3b50a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50ACu;
        goto label_3b50ac;
    }
    ctx->pc = 0x3B50A4u;
    SET_GPR_U32(ctx, 31, 0x3B50ACu);
    ctx->pc = 0x3B50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50A4u;
    // 0x3b50a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B50A4u, 0x3B50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50ACu;
label_3b50ac:
    // 0x3b50ac: 0xc0ed4c0  jal         func_3B5300
label_3b50b0:
    if (ctx->pc == 0x3B50B0u) {
        ctx->pc = 0x3B50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50ACu;
        // 0x3b50b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50B4u;
        goto label_3b50b4;
    }
    ctx->pc = 0x3B50ACu;
    SET_GPR_U32(ctx, 31, 0x3B50B4u);
    ctx->pc = 0x3B50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50ACu;
    // 0x3b50b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5300u, 0x3B50ACu, 0x3B50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50B4u;
label_3b50b4:
    // 0x3b50b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b50b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b50b8:
    // 0x3b50b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b50b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b50bc:
    // 0x3b50bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b50bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b50c0:
    // 0x3b50c0: 0x3e00008  jr          $ra
label_3b50c4:
    if (ctx->pc == 0x3B50C4u) {
        ctx->pc = 0x3B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50C0u;
        // 0x3b50c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50C8u;
        goto label_3b50c8;
    }
    ctx->pc = 0x3B50C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50C0u;
        // 0x3b50c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B50C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B50C8u;
label_3b50c8:
    // 0x3b50c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b50c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b50cc:
    // 0x3b50cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b50d0:
    // 0x3b50d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b50d4:
    // 0x3b50d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b50d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b50d8:
    // 0x3b50d8: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x3b50d8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b50dc:
    // 0x3b50dc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3b50e0:
    if (ctx->pc == 0x3B50E0u) {
        ctx->pc = 0x3B50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50DCu;
        // 0x3b50e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50E4u;
        goto label_3b50e4;
    }
    ctx->pc = 0x3B50DCu;
    {
        const bool branch_taken_0x3b50dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50DCu;
        // 0x3b50e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50dc) {
            ctx->pc = 0x3B5108u;
            goto label_3b5108;
        }
    }
    ctx->pc = 0x3B50E4u;
label_3b50e4:
    // 0x3b50e4: 0xc0ec620  jal         func_3B1880
label_3b50e8:
    if (ctx->pc == 0x3B50E8u) {
        ctx->pc = 0x3B50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50E4u;
        // 0x3b50e8: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50ECu;
        goto label_3b50ec;
    }
    ctx->pc = 0x3B50E4u;
    SET_GPR_U32(ctx, 31, 0x3B50ECu);
    ctx->pc = 0x3B50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50E4u;
    // 0x3b50e8: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B50E4u, 0x3B50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50ECu;
label_3b50ec:
    // 0x3b50ec: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b50ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b50f0:
    // 0x3b50f0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b50f4:
    // 0x3b50f4: 0x8ca4d3ac  lw          $a0, -0x2C54($a1)
    ctx->pc = 0x3b50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955948)));
label_3b50f8:
    // 0x3b50f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b50f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b50fc:
    // 0x3b50fc: 0x8c66e99c  lw          $a2, -0x1664($v1)
    ctx->pc = 0x3b50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_3b5100:
    // 0x3b5100: 0xc0f809  jalr        $a2
label_3b5104:
    if (ctx->pc == 0x3B5104u) {
        ctx->pc = 0x3B5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5100u;
        // 0x3b5104: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5108u;
        goto label_3b5108;
    }
    ctx->pc = 0x3B5100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3B5108u);
        ctx->pc = 0x3B5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5100u;
        // 0x3b5104: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5100u, 0x3B5108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5108u;
label_3b5108:
    // 0x3b5108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b5108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b510c:
    // 0x3b510c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b510cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b5110:
    // 0x3b5110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b5110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5114:
    // 0x3b5114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5118:
    // 0x3b5118: 0x3e00008  jr          $ra
label_3b511c:
    if (ctx->pc == 0x3B511Cu) {
        ctx->pc = 0x3B511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5118u;
        // 0x3b511c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5120u;
        goto label_3b5120;
    }
    ctx->pc = 0x3B5118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5118u;
        // 0x3b511c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5120u;
label_3b5120:
    // 0x3b5120: 0x3e00008  jr          $ra
label_3b5124:
    if (ctx->pc == 0x3B5124u) {
        ctx->pc = 0x3B5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5120u;
        // 0x3b5124: 0x8c8200b0  lw          $v0, 0xB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5128u;
        goto label_3b5128;
    }
    ctx->pc = 0x3B5120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5120u;
        // 0x3b5124: 0x8c8200b0  lw          $v0, 0xB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5128u;
label_3b5128:
    // 0x3b5128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b5128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b512c:
    // 0x3b512c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b5130:
    // 0x3b5130: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b5130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b5134:
    // 0x3b5134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b5134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5138:
    // 0x3b5138: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b513c:
    // 0x3b513c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b5140:
    // 0x3b5140: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3b5144:
    if (ctx->pc == 0x3B5144u) {
        ctx->pc = 0x3B5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5140u;
        // 0x3b5144: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5148u;
        goto label_3b5148;
    }
    ctx->pc = 0x3B5140u;
    {
        const bool branch_taken_0x3b5140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5140) {
            ctx->pc = 0x3B5144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5140u;
            // 0x3b5144: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5150u;
            goto label_3b5150;
        }
    }
    ctx->pc = 0x3B5148u;
label_3b5148:
    // 0x3b5148: 0x10000010  b           . + 4 + (0x10 << 2)
label_3b514c:
    if (ctx->pc == 0x3B514Cu) {
        ctx->pc = 0x3B514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5148u;
        // 0x3b514c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5150u;
        goto label_3b5150;
    }
    ctx->pc = 0x3B5148u;
    {
        const bool branch_taken_0x3b5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5148u;
        // 0x3b514c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5148) {
            ctx->pc = 0x3B518Cu;
            goto label_3b518c;
        }
    }
    ctx->pc = 0x3B5150u;
label_3b5150:
    // 0x3b5150: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5154:
    // 0x3b5154: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3b5154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5158:
    // 0x3b5158: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x3b5158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3b515c:
    // 0x3b515c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3b515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b5160:
    // 0x3b5160: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3b5160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b5164:
    // 0x3b5164: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3b5164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b5168:
    // 0x3b5168: 0xc104d64  jal         func_413590
label_3b516c:
    if (ctx->pc == 0x3B516Cu) {
        ctx->pc = 0x3B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5168u;
        // 0x3b516c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5170u;
        goto label_3b5170;
    }
    ctx->pc = 0x3B5168u;
    SET_GPR_U32(ctx, 31, 0x3B5170u);
    ctx->pc = 0x3B516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5168u;
    // 0x3b516c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x3B5168u, 0x3B5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5170u;
label_3b5170:
    // 0x3b5170: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3b5170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5174:
    // 0x3b5174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b5174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b5178:
    // 0x3b5178: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3b5178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b517c:
    // 0x3b517c: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x3b517cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b5180:
    // 0x3b5180: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3b5180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b5184:
    // 0x3b5184: 0xc0ec7be  jal         func_3B1EF8
label_3b5188:
    if (ctx->pc == 0x3B5188u) {
        ctx->pc = 0x3B5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5184u;
        // 0x3b5188: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B518Cu;
        goto label_3b518c;
    }
    ctx->pc = 0x3B5184u;
    SET_GPR_U32(ctx, 31, 0x3B518Cu);
    ctx->pc = 0x3B5188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5184u;
    // 0x3b5188: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1EF8u, 0x3B5184u, 0x3B518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B518Cu;
label_3b518c:
    // 0x3b518c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b518cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b5190:
    // 0x3b5190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b5190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b5194:
    // 0x3b5194: 0x3e00008  jr          $ra
label_3b5198:
    if (ctx->pc == 0x3B5198u) {
        ctx->pc = 0x3B5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5194u;
        // 0x3b5198: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B519Cu;
        goto label_3b519c;
    }
    ctx->pc = 0x3B5194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5194u;
        // 0x3b5198: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B519Cu;
label_3b519c:
    // 0x3b519c: 0x0  nop
    ctx->pc = 0x3b519cu;
    // NOP
label_3b51a0:
    // 0x3b51a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b51a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b51a4:
    // 0x3b51a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b51a8:
    // 0x3b51a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b51ac:
    // 0x3b51ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b51acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b51b0:
    // 0x3b51b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b51b4:
    // 0x3b51b4: 0xc0ed488  jal         func_3B5220
label_3b51b8:
    if (ctx->pc == 0x3B51B8u) {
        ctx->pc = 0x3B51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51B4u;
        // 0x3b51b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51BCu;
        goto label_3b51bc;
    }
    ctx->pc = 0x3B51B4u;
    SET_GPR_U32(ctx, 31, 0x3B51BCu);
    ctx->pc = 0x3B51B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B51B4u;
    // 0x3b51b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5220u, 0x3B51B4u, 0x3B51BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51BCu;
label_3b51bc:
    // 0x3b51bc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3b51bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_3b51c0:
    // 0x3b51c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b51c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b51c4:
    // 0x3b51c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b51c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b51c8:
    // 0x3b51c8: 0x240501a6  addiu       $a1, $zero, 0x1A6
    ctx->pc = 0x3b51c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
label_3b51cc:
    // 0x3b51cc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3b51ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3b51d0:
    // 0x3b51d0: 0xc103404  jal         func_40D010
label_3b51d4:
    if (ctx->pc == 0x3B51D4u) {
        ctx->pc = 0x3B51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51D0u;
        // 0x3b51d4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51D8u;
        goto label_3b51d8;
    }
    ctx->pc = 0x3B51D0u;
    SET_GPR_U32(ctx, 31, 0x3B51D8u);
    ctx->pc = 0x3B51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B51D0u;
    // 0x3b51d4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3B51D0u, 0x3B51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51D8u;
label_3b51d8:
    // 0x3b51d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b51dc:
    if (ctx->pc == 0x3B51DCu) {
        ctx->pc = 0x3B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51D8u;
        // 0x3b51dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51E0u;
        goto label_3b51e0;
    }
    ctx->pc = 0x3B51D8u;
    {
        const bool branch_taken_0x3b51d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51D8u;
        // 0x3b51dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51d8) {
            ctx->pc = 0x3B51E8u;
            goto label_3b51e8;
        }
    }
    ctx->pc = 0x3B51E0u;
label_3b51e0:
    // 0x3b51e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3b51e4:
    if (ctx->pc == 0x3B51E4u) {
        ctx->pc = 0x3B51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51E0u;
        // 0x3b51e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51E8u;
        goto label_3b51e8;
    }
    ctx->pc = 0x3B51E0u;
    {
        const bool branch_taken_0x3b51e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51E0u;
        // 0x3b51e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51e0) {
            ctx->pc = 0x3B5208u;
            goto label_3b5208;
        }
    }
    ctx->pc = 0x3B51E8u;
label_3b51e8:
    // 0x3b51e8: 0xc0ed312  jal         func_3B4C48
label_3b51ec:
    if (ctx->pc == 0x3B51ECu) {
        ctx->pc = 0x3B51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51E8u;
        // 0x3b51ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51F0u;
        goto label_3b51f0;
    }
    ctx->pc = 0x3B51E8u;
    SET_GPR_U32(ctx, 31, 0x3B51F0u);
    ctx->pc = 0x3B51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B51E8u;
    // 0x3b51ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C48u, 0x3B51E8u, 0x3B51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51F0u;
label_3b51f0:
    // 0x3b51f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b51f4:
    if (ctx->pc == 0x3B51F4u) {
        ctx->pc = 0x3B51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51F0u;
        // 0x3b51f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51F8u;
        goto label_3b51f8;
    }
    ctx->pc = 0x3B51F0u;
    {
        const bool branch_taken_0x3b51f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51F0u;
        // 0x3b51f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51f0) {
            ctx->pc = 0x3B5208u;
            goto label_3b5208;
        }
    }
    ctx->pc = 0x3B51F8u;
label_3b51f8:
    // 0x3b51f8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b51f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b51fc:
    // 0x3b51fc: 0xc0ec322  jal         func_3B0C88
label_3b5200:
    if (ctx->pc == 0x3B5200u) {
        ctx->pc = 0x3B5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51FCu;
        // 0x3b5200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5204u;
        goto label_3b5204;
    }
    ctx->pc = 0x3B51FCu;
    SET_GPR_U32(ctx, 31, 0x3B5204u);
    ctx->pc = 0x3B5200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B51FCu;
    // 0x3b5200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3B51FCu, 0x3B5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5204u;
label_3b5204:
    // 0x3b5204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b5204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5208:
    // 0x3b5208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b5208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b520c:
    // 0x3b520c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b520cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b5210:
    // 0x3b5210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5214:
    // 0x3b5214: 0x3e00008  jr          $ra
label_3b5218:
    if (ctx->pc == 0x3B5218u) {
        ctx->pc = 0x3B5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5214u;
        // 0x3b5218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B521Cu;
        goto label_3b521c;
    }
    ctx->pc = 0x3B5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5214u;
        // 0x3b5218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B521Cu;
label_3b521c:
    // 0x3b521c: 0x0  nop
    ctx->pc = 0x3b521cu;
    // NOP
    ctx->pc = 0x3b5220u;
}
