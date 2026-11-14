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

// Function: sub_003B0EE8
// Address: 0x3b0ee8 - 0x3b1160
void sub_003B0EE8_0x3b0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0EE8_0x3b0ee8");
#endif

    switch (ctx->pc) {
        case 0x3b0ee8u: goto label_3b0ee8;
        case 0x3b0eecu: goto label_3b0eec;
        case 0x3b0ef0u: goto label_3b0ef0;
        case 0x3b0ef4u: goto label_3b0ef4;
        case 0x3b0ef8u: goto label_3b0ef8;
        case 0x3b0efcu: goto label_3b0efc;
        case 0x3b0f00u: goto label_3b0f00;
        case 0x3b0f04u: goto label_3b0f04;
        case 0x3b0f08u: goto label_3b0f08;
        case 0x3b0f0cu: goto label_3b0f0c;
        case 0x3b0f10u: goto label_3b0f10;
        case 0x3b0f14u: goto label_3b0f14;
        case 0x3b0f18u: goto label_3b0f18;
        case 0x3b0f1cu: goto label_3b0f1c;
        case 0x3b0f20u: goto label_3b0f20;
        case 0x3b0f24u: goto label_3b0f24;
        case 0x3b0f28u: goto label_3b0f28;
        case 0x3b0f2cu: goto label_3b0f2c;
        case 0x3b0f30u: goto label_3b0f30;
        case 0x3b0f34u: goto label_3b0f34;
        case 0x3b0f38u: goto label_3b0f38;
        case 0x3b0f3cu: goto label_3b0f3c;
        case 0x3b0f40u: goto label_3b0f40;
        case 0x3b0f44u: goto label_3b0f44;
        case 0x3b0f48u: goto label_3b0f48;
        case 0x3b0f4cu: goto label_3b0f4c;
        case 0x3b0f50u: goto label_3b0f50;
        case 0x3b0f54u: goto label_3b0f54;
        case 0x3b0f58u: goto label_3b0f58;
        case 0x3b0f5cu: goto label_3b0f5c;
        case 0x3b0f60u: goto label_3b0f60;
        case 0x3b0f64u: goto label_3b0f64;
        case 0x3b0f68u: goto label_3b0f68;
        case 0x3b0f6cu: goto label_3b0f6c;
        case 0x3b0f70u: goto label_3b0f70;
        case 0x3b0f74u: goto label_3b0f74;
        case 0x3b0f78u: goto label_3b0f78;
        case 0x3b0f7cu: goto label_3b0f7c;
        case 0x3b0f80u: goto label_3b0f80;
        case 0x3b0f84u: goto label_3b0f84;
        case 0x3b0f88u: goto label_3b0f88;
        case 0x3b0f8cu: goto label_3b0f8c;
        case 0x3b0f90u: goto label_3b0f90;
        case 0x3b0f94u: goto label_3b0f94;
        case 0x3b0f98u: goto label_3b0f98;
        case 0x3b0f9cu: goto label_3b0f9c;
        case 0x3b0fa0u: goto label_3b0fa0;
        case 0x3b0fa4u: goto label_3b0fa4;
        case 0x3b0fa8u: goto label_3b0fa8;
        case 0x3b0facu: goto label_3b0fac;
        case 0x3b0fb0u: goto label_3b0fb0;
        case 0x3b0fb4u: goto label_3b0fb4;
        case 0x3b0fb8u: goto label_3b0fb8;
        case 0x3b0fbcu: goto label_3b0fbc;
        case 0x3b0fc0u: goto label_3b0fc0;
        case 0x3b0fc4u: goto label_3b0fc4;
        case 0x3b0fc8u: goto label_3b0fc8;
        case 0x3b0fccu: goto label_3b0fcc;
        case 0x3b0fd0u: goto label_3b0fd0;
        case 0x3b0fd4u: goto label_3b0fd4;
        case 0x3b0fd8u: goto label_3b0fd8;
        case 0x3b0fdcu: goto label_3b0fdc;
        case 0x3b0fe0u: goto label_3b0fe0;
        case 0x3b0fe4u: goto label_3b0fe4;
        case 0x3b0fe8u: goto label_3b0fe8;
        case 0x3b0fecu: goto label_3b0fec;
        case 0x3b0ff0u: goto label_3b0ff0;
        case 0x3b0ff4u: goto label_3b0ff4;
        case 0x3b0ff8u: goto label_3b0ff8;
        case 0x3b0ffcu: goto label_3b0ffc;
        case 0x3b1000u: goto label_3b1000;
        case 0x3b1004u: goto label_3b1004;
        case 0x3b1008u: goto label_3b1008;
        case 0x3b100cu: goto label_3b100c;
        case 0x3b1010u: goto label_3b1010;
        case 0x3b1014u: goto label_3b1014;
        case 0x3b1018u: goto label_3b1018;
        case 0x3b101cu: goto label_3b101c;
        case 0x3b1020u: goto label_3b1020;
        case 0x3b1024u: goto label_3b1024;
        case 0x3b1028u: goto label_3b1028;
        case 0x3b102cu: goto label_3b102c;
        case 0x3b1030u: goto label_3b1030;
        case 0x3b1034u: goto label_3b1034;
        case 0x3b1038u: goto label_3b1038;
        case 0x3b103cu: goto label_3b103c;
        case 0x3b1040u: goto label_3b1040;
        case 0x3b1044u: goto label_3b1044;
        case 0x3b1048u: goto label_3b1048;
        case 0x3b104cu: goto label_3b104c;
        case 0x3b1050u: goto label_3b1050;
        case 0x3b1054u: goto label_3b1054;
        case 0x3b1058u: goto label_3b1058;
        case 0x3b105cu: goto label_3b105c;
        case 0x3b1060u: goto label_3b1060;
        case 0x3b1064u: goto label_3b1064;
        case 0x3b1068u: goto label_3b1068;
        case 0x3b106cu: goto label_3b106c;
        case 0x3b1070u: goto label_3b1070;
        case 0x3b1074u: goto label_3b1074;
        case 0x3b1078u: goto label_3b1078;
        case 0x3b107cu: goto label_3b107c;
        case 0x3b1080u: goto label_3b1080;
        case 0x3b1084u: goto label_3b1084;
        case 0x3b1088u: goto label_3b1088;
        case 0x3b108cu: goto label_3b108c;
        case 0x3b1090u: goto label_3b1090;
        case 0x3b1094u: goto label_3b1094;
        case 0x3b1098u: goto label_3b1098;
        case 0x3b109cu: goto label_3b109c;
        case 0x3b10a0u: goto label_3b10a0;
        case 0x3b10a4u: goto label_3b10a4;
        case 0x3b10a8u: goto label_3b10a8;
        case 0x3b10acu: goto label_3b10ac;
        case 0x3b10b0u: goto label_3b10b0;
        case 0x3b10b4u: goto label_3b10b4;
        case 0x3b10b8u: goto label_3b10b8;
        case 0x3b10bcu: goto label_3b10bc;
        case 0x3b10c0u: goto label_3b10c0;
        case 0x3b10c4u: goto label_3b10c4;
        case 0x3b10c8u: goto label_3b10c8;
        case 0x3b10ccu: goto label_3b10cc;
        case 0x3b10d0u: goto label_3b10d0;
        case 0x3b10d4u: goto label_3b10d4;
        case 0x3b10d8u: goto label_3b10d8;
        case 0x3b10dcu: goto label_3b10dc;
        case 0x3b10e0u: goto label_3b10e0;
        case 0x3b10e4u: goto label_3b10e4;
        case 0x3b10e8u: goto label_3b10e8;
        case 0x3b10ecu: goto label_3b10ec;
        case 0x3b10f0u: goto label_3b10f0;
        case 0x3b10f4u: goto label_3b10f4;
        case 0x3b10f8u: goto label_3b10f8;
        case 0x3b10fcu: goto label_3b10fc;
        case 0x3b1100u: goto label_3b1100;
        case 0x3b1104u: goto label_3b1104;
        case 0x3b1108u: goto label_3b1108;
        case 0x3b110cu: goto label_3b110c;
        case 0x3b1110u: goto label_3b1110;
        case 0x3b1114u: goto label_3b1114;
        case 0x3b1118u: goto label_3b1118;
        case 0x3b111cu: goto label_3b111c;
        case 0x3b1120u: goto label_3b1120;
        case 0x3b1124u: goto label_3b1124;
        case 0x3b1128u: goto label_3b1128;
        case 0x3b112cu: goto label_3b112c;
        case 0x3b1130u: goto label_3b1130;
        case 0x3b1134u: goto label_3b1134;
        case 0x3b1138u: goto label_3b1138;
        case 0x3b113cu: goto label_3b113c;
        case 0x3b1140u: goto label_3b1140;
        case 0x3b1144u: goto label_3b1144;
        case 0x3b1148u: goto label_3b1148;
        case 0x3b114cu: goto label_3b114c;
        case 0x3b1150u: goto label_3b1150;
        case 0x3b1154u: goto label_3b1154;
        case 0x3b1158u: goto label_3b1158;
        case 0x3b115cu: goto label_3b115c;
        default: break;
    }

    ctx->pc = 0x3b0ee8u;

label_3b0ee8:
    // 0x3b0ee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b0ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3b0eec:
    // 0x3b0eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b0ef0:
    // 0x3b0ef0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b0ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3b0ef4:
    // 0x3b0ef4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b0ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b0ef8:
    // 0x3b0ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b0ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0efc:
    // 0x3b0efc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3b0efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3b0f00:
    // 0x3b0f00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b0f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f04:
    // 0x3b0f04: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b0f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3b0f08:
    // 0x3b0f08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b0f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3b0f0c:
    // 0x3b0f0c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3b0f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3b0f10:
    // 0x3b0f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b0f14:
    // 0x3b0f14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b0f18:
    // 0x3b0f18: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3b0f1c:
    if (ctx->pc == 0x3B0F1Cu) {
        ctx->pc = 0x3B0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F18u;
        // 0x3b0f1c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F20u;
        goto label_3b0f20;
    }
    ctx->pc = 0x3B0F18u;
    {
        const bool branch_taken_0x3b0f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F18u;
        // 0x3b0f1c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f18) {
            ctx->pc = 0x3B0F34u;
            goto label_3b0f34;
        }
    }
    ctx->pc = 0x3B0F20u;
label_3b0f20:
    // 0x3b0f20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0f24:
    // 0x3b0f24: 0xc103684  jal         func_40DA10
label_3b0f28:
    if (ctx->pc == 0x3B0F28u) {
        ctx->pc = 0x3B0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F24u;
        // 0x3b0f28: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F2Cu;
        goto label_3b0f2c;
    }
    ctx->pc = 0x3B0F24u;
    SET_GPR_U32(ctx, 31, 0x3B0F2Cu);
    ctx->pc = 0x3B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F24u;
    // 0x3b0f28: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B0F24u, 0x3B0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F2Cu;
label_3b0f2c:
    // 0x3b0f2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3b0f30:
    if (ctx->pc == 0x3B0F30u) {
        ctx->pc = 0x3B0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F2Cu;
        // 0x3b0f30: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F34u;
        goto label_3b0f34;
    }
    ctx->pc = 0x3B0F2Cu;
    {
        const bool branch_taken_0x3b0f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F2Cu;
        // 0x3b0f30: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f2c) {
            ctx->pc = 0x3B0F54u;
            goto label_3b0f54;
        }
    }
    ctx->pc = 0x3B0F34u;
label_3b0f34:
    // 0x3b0f34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0f38:
    // 0x3b0f38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b0f3c:
    if (ctx->pc == 0x3B0F3Cu) {
        ctx->pc = 0x3B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F38u;
        // 0x3b0f3c: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F40u;
        goto label_3b0f40;
    }
    ctx->pc = 0x3B0F38u;
    {
        const bool branch_taken_0x3b0f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F38u;
        // 0x3b0f3c: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f38) {
            ctx->pc = 0x3B0F50u;
            goto label_3b0f50;
        }
    }
    ctx->pc = 0x3B0F40u;
label_3b0f40:
    // 0x3b0f40: 0x26a2e880  addiu       $v0, $s5, -0x1780
    ctx->pc = 0x3b0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3b0f44:
    // 0x3b0f44: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b0f48:
    // 0x3b0f48: 0x60f809  jalr        $v1
label_3b0f4c:
    if (ctx->pc == 0x3B0F4Cu) {
        ctx->pc = 0x3B0F50u;
        goto label_3b0f50;
    }
    ctx->pc = 0x3B0F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B0F50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0F48u, 0x3B0F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0F50u;
label_3b0f50:
    // 0x3b0f50: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3b0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b0f54:
    // 0x3b0f54: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b0f58:
    // 0x3b0f58: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_3b0f5c:
    if (ctx->pc == 0x3B0F5Cu) {
        ctx->pc = 0x3B0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F58u;
        // 0x3b0f5c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F60u;
        goto label_3b0f60;
    }
    ctx->pc = 0x3B0F58u;
    {
        const bool branch_taken_0x3b0f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F58u;
        // 0x3b0f5c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f58) {
            ctx->pc = 0x3B0FD4u;
            goto label_3b0fd4;
        }
    }
    ctx->pc = 0x3B0F60u;
label_3b0f60:
    // 0x3b0f60: 0xc0ec956  jal         func_3B2558
label_3b0f64:
    if (ctx->pc == 0x3B0F64u) {
        ctx->pc = 0x3B0F68u;
        goto label_3b0f68;
    }
    ctx->pc = 0x3B0F60u;
    SET_GPR_U32(ctx, 31, 0x3B0F68u);
    ctx->pc = 0x3B2558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2558u, 0x3B0F60u, 0x3B0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F68u;
label_3b0f68:
    // 0x3b0f68: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x3b0f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b0f6c:
    // 0x3b0f6c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_3b0f70:
    if (ctx->pc == 0x3B0F70u) {
        ctx->pc = 0x3B0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F6Cu;
        // 0x3b0f70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F74u;
        goto label_3b0f74;
    }
    ctx->pc = 0x3B0F6Cu;
    {
        const bool branch_taken_0x3b0f6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F6Cu;
        // 0x3b0f70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f6c) {
            ctx->pc = 0x3B0FD0u;
            goto label_3b0fd0;
        }
    }
    ctx->pc = 0x3B0F74u;
label_3b0f74:
    // 0x3b0f74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b0f78:
    // 0x3b0f78: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3b0f7c:
    if (ctx->pc == 0x3B0F7Cu) {
        ctx->pc = 0x3B0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F78u;
        // 0x3b0f7c: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F80u;
        goto label_3b0f80;
    }
    ctx->pc = 0x3B0F78u;
    {
        const bool branch_taken_0x3b0f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F78u;
        // 0x3b0f7c: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f78) {
            ctx->pc = 0x3B0FACu;
            goto label_3b0fac;
        }
    }
    ctx->pc = 0x3B0F80u;
label_3b0f80:
    // 0x3b0f80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b0f84:
    // 0x3b0f84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b0f88:
    // 0x3b0f88: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b0f8c:
    if (ctx->pc == 0x3B0F8Cu) {
        ctx->pc = 0x3B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F88u;
        // 0x3b0f8c: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F90u;
        goto label_3b0f90;
    }
    ctx->pc = 0x3B0F88u;
    {
        const bool branch_taken_0x3b0f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F88u;
        // 0x3b0f8c: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f88) {
            ctx->pc = 0x3B0FA0u;
            goto label_3b0fa0;
        }
    }
    ctx->pc = 0x3B0F90u;
label_3b0f90:
    // 0x3b0f90: 0xc103684  jal         func_40DA10
label_3b0f94:
    if (ctx->pc == 0x3B0F94u) {
        ctx->pc = 0x3B0F98u;
        goto label_3b0f98;
    }
    ctx->pc = 0x3B0F90u;
    SET_GPR_U32(ctx, 31, 0x3B0F98u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B0F90u, 0x3B0F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F98u;
label_3b0f98:
    // 0x3b0f98: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b0f9c:
    if (ctx->pc == 0x3B0F9Cu) {
        ctx->pc = 0x3B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F98u;
        // 0x3b0f9c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FA0u;
        goto label_3b0fa0;
    }
    ctx->pc = 0x3B0F98u;
    {
        const bool branch_taken_0x3b0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F98u;
        // 0x3b0f9c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f98) {
            ctx->pc = 0x3B0FB0u;
            goto label_3b0fb0;
        }
    }
    ctx->pc = 0x3B0FA0u;
label_3b0fa0:
    // 0x3b0fa0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b0fa4:
    // 0x3b0fa4: 0x40f809  jalr        $v0
label_3b0fa8:
    if (ctx->pc == 0x3B0FA8u) {
        ctx->pc = 0x3B0FACu;
        goto label_3b0fac;
    }
    ctx->pc = 0x3B0FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0FACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0FA4u, 0x3B0FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0FACu;
label_3b0fac:
    // 0x3b0fac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b0facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b0fb0:
    // 0x3b0fb0: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x3b0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3b0fb4:
    // 0x3b0fb4: 0x8c44d3a4  lw          $a0, -0x2C5C($v0)
    ctx->pc = 0x3b0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955940)));
label_3b0fb8:
    // 0x3b0fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b0fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0fbc:
    // 0x3b0fbc: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b0fc0:
    // 0x3b0fc0: 0x40f809  jalr        $v0
label_3b0fc4:
    if (ctx->pc == 0x3B0FC4u) {
        ctx->pc = 0x3B0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FC0u;
        // 0x3b0fc4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FC8u;
        goto label_3b0fc8;
    }
    ctx->pc = 0x3B0FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0FC8u);
        ctx->pc = 0x3B0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FC0u;
        // 0x3b0fc4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0FC0u, 0x3B0FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0FC8u;
label_3b0fc8:
    // 0x3b0fc8: 0xc0ec620  jal         func_3B1880
label_3b0fcc:
    if (ctx->pc == 0x3B0FCCu) {
        ctx->pc = 0x3B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FC8u;
        // 0x3b0fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FD0u;
        goto label_3b0fd0;
    }
    ctx->pc = 0x3B0FC8u;
    SET_GPR_U32(ctx, 31, 0x3B0FD0u);
    ctx->pc = 0x3B0FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FC8u;
    // 0x3b0fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B0FC8u, 0x3B0FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FD0u;
label_3b0fd0:
    // 0x3b0fd0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3b0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3b0fd4:
    // 0x3b0fd4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3b0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b0fd8:
    // 0x3b0fd8: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x3b0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3b0fdc:
    // 0x3b0fdc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3b0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3b0fe0:
    // 0x3b0fe0: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x3b0fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b0fe4:
    // 0x3b0fe4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3b0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_3b0fe8:
    // 0x3b0fe8: 0x920018  mult        $zero, $a0, $s2
    ctx->pc = 0x3b0fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b0fec:
    // 0x3b0fec: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x3b0fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0ff0:
    // 0x3b0ff0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b0ff4:
    // 0x3b0ff4: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x3b0ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b0ff8:
    // 0x3b0ff8: 0x34a501a1  ori         $a1, $a1, 0x1A1
    ctx->pc = 0x3b0ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
label_3b0ffc:
    // 0x3b0ffc: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b0ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_3b1000:
    // 0x3b1000: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x3b1000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3b1004:
    // 0x3b1004: 0x2012  mflo        $a0
    ctx->pc = 0x3b1004u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3b1008:
    // 0x3b1008: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x3b1008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_3b100c:
    // 0x3b100c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3b100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3b1010:
    // 0x3b1010: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3b1010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b1014:
    // 0x3b1014: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3b1014u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3b1018:
    // 0x3b1018: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b1018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b101c:
    // 0x3b101c: 0x40f809  jalr        $v0
label_3b1020:
    if (ctx->pc == 0x3B1020u) {
        ctx->pc = 0x3B1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B101Cu;
        // 0x3b1020: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1024u;
        goto label_3b1024;
    }
    ctx->pc = 0x3B101Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1024u);
        ctx->pc = 0x3B1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B101Cu;
        // 0x3b1020: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B101Cu, 0x3B1024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1024u;
label_3b1024:
    // 0x3b1024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b1024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1028:
    // 0x3b1028: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_3b102c:
    if (ctx->pc == 0x3B102Cu) {
        ctx->pc = 0x3B102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1028u;
        // 0x3b102c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1030u;
        goto label_3b1030;
    }
    ctx->pc = 0x3B1028u;
    {
        const bool branch_taken_0x3b1028 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1028u;
        // 0x3b102c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1028) {
            ctx->pc = 0x3B1138u;
            goto label_3b1138;
        }
    }
    ctx->pc = 0x3B1030u;
label_3b1030:
    // 0x3b1030: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3b1030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b1034:
    // 0x3b1034: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_3b1038:
    if (ctx->pc == 0x3B1038u) {
        ctx->pc = 0x3B1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1034u;
        // 0x3b1038: 0xd20018  mult        $zero, $a2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B103Cu;
        goto label_3b103c;
    }
    ctx->pc = 0x3B1034u;
    {
        const bool branch_taken_0x3b1034 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1034u;
        // 0x3b1038: 0xd20018  mult        $zero, $a2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1034) {
            ctx->pc = 0x3B1064u;
            goto label_3b1064;
        }
    }
    ctx->pc = 0x3B103Cu;
label_3b103c:
    // 0x3b103c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b103cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b1040:
    // 0x3b1040: 0x3012  mflo        $a2
    ctx->pc = 0x3b1040u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b1044:
    // 0x3b1044: 0xc10480a  jal         func_412028
label_3b1048:
    if (ctx->pc == 0x3B1048u) {
        ctx->pc = 0x3B1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1044u;
        // 0x3b1048: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B104Cu;
        goto label_3b104c;
    }
    ctx->pc = 0x3B1044u;
    SET_GPR_U32(ctx, 31, 0x3B104Cu);
    ctx->pc = 0x3B1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1044u;
    // 0x3b1048: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B1044u, 0x3B104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B104Cu;
label_3b104c:
    // 0x3b104c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b1050:
    // 0x3b1050: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x3b1050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b1054:
    // 0x3b1054: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_3b1058:
    if (ctx->pc == 0x3B1058u) {
        ctx->pc = 0x3B1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1054u;
        // 0x3b1058: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B105Cu;
        goto label_3b105c;
    }
    ctx->pc = 0x3B1054u;
    {
        const bool branch_taken_0x3b1054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1054) {
            ctx->pc = 0x3B1058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1054u;
            // 0x3b1058: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1068u;
            goto label_3b1068;
        }
    }
    ctx->pc = 0x3B105Cu;
label_3b105c:
    // 0x3b105c: 0x10000036  b           . + 4 + (0x36 << 2)
label_3b1060:
    if (ctx->pc == 0x3B1060u) {
        ctx->pc = 0x3B1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B105Cu;
        // 0x3b1060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1064u;
        goto label_3b1064;
    }
    ctx->pc = 0x3B105Cu;
    {
        const bool branch_taken_0x3b105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B105Cu;
        // 0x3b1060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b105c) {
            ctx->pc = 0x3B1138u;
            goto label_3b1138;
        }
    }
    ctx->pc = 0x3B1064u;
label_3b1064:
    // 0x3b1064: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3b1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b1068:
    // 0x3b1068: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_3b106c:
    if (ctx->pc == 0x3B106Cu) {
        ctx->pc = 0x3B106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1068u;
        // 0x3b106c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1070u;
        goto label_3b1070;
    }
    ctx->pc = 0x3B1068u;
    {
        const bool branch_taken_0x3b1068 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b1068) {
            ctx->pc = 0x3B106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1068u;
            // 0x3b106c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B10D0u;
            goto label_3b10d0;
        }
    }
    ctx->pc = 0x3B1070u;
label_3b1070:
    // 0x3b1070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b1070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1074:
    // 0x3b1074: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3b1074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3b1078:
    // 0x3b1078: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3b1078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3b107c:
    // 0x3b107c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_3b1080:
    if (ctx->pc == 0x3B1080u) {
        ctx->pc = 0x3B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B107Cu;
        // 0x3b1080: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1084u;
        goto label_3b1084;
    }
    ctx->pc = 0x3B107Cu;
    {
        const bool branch_taken_0x3b107c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b107c) {
            ctx->pc = 0x3B1080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B107Cu;
            // 0x3b1080: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B10B0u;
            goto label_3b10b0;
        }
    }
    ctx->pc = 0x3B1084u;
label_3b1084:
    // 0x3b1084: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3b1084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b1088:
    // 0x3b1088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b108c:
    if (ctx->pc == 0x3B108Cu) {
        ctx->pc = 0x3B108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1088u;
        // 0x3b108c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1090u;
        goto label_3b1090;
    }
    ctx->pc = 0x3B1088u;
    {
        const bool branch_taken_0x3b1088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1088u;
        // 0x3b108c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1088) {
            ctx->pc = 0x3B10A0u;
            goto label_3b10a0;
        }
    }
    ctx->pc = 0x3B1090u;
label_3b1090:
    // 0x3b1090: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3b1090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3b1094:
    // 0x3b1094: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3b1094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b1098:
    // 0x3b1098: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x3b1098u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_3b109c:
    // 0x3b109c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3b109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3b10a0:
    // 0x3b10a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3b10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3b10a4:
    // 0x3b10a4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_3b10a8:
    if (ctx->pc == 0x3B10A8u) {
        ctx->pc = 0x3B10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10A4u;
        // 0x3b10a8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10ACu;
        goto label_3b10ac;
    }
    ctx->pc = 0x3B10A4u;
    {
        const bool branch_taken_0x3b10a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b10a4) {
            ctx->pc = 0x3B10A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B10A4u;
            // 0x3b10a8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B10D0u;
            goto label_3b10d0;
        }
    }
    ctx->pc = 0x3B10ACu;
label_3b10ac:
    // 0x3b10ac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3b10acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3b10b0:
    // 0x3b10b0: 0x0  nop
    ctx->pc = 0x3b10b0u;
    // NOP
label_3b10b4:
    // 0x3b10b4: 0x0  nop
    ctx->pc = 0x3b10b4u;
    // NOP
label_3b10b8:
    // 0x3b10b8: 0x0  nop
    ctx->pc = 0x3b10b8u;
    // NOP
label_3b10bc:
    // 0x3b10bc: 0x0  nop
    ctx->pc = 0x3b10bcu;
    // NOP
label_3b10c0:
    // 0x3b10c0: 0x0  nop
    ctx->pc = 0x3b10c0u;
    // NOP
label_3b10c4:
    // 0x3b10c4: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
label_3b10c8:
    if (ctx->pc == 0x3B10C8u) {
        ctx->pc = 0x3B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10C4u;
        // 0x3b10c8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10CCu;
        goto label_3b10cc;
    }
    ctx->pc = 0x3B10C4u;
    {
        const bool branch_taken_0x3b10c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b10c4) {
            ctx->pc = 0x3B10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B10C4u;
            // 0x3b10c8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B10B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b10b0;
        }
    }
    ctx->pc = 0x3B10CCu;
label_3b10cc:
    // 0x3b10cc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b10d0:
    // 0x3b10d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b10d4:
    // 0x3b10d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3b10d8:
    if (ctx->pc == 0x3B10D8u) {
        ctx->pc = 0x3B10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10D4u;
        // 0x3b10d8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10DCu;
        goto label_3b10dc;
    }
    ctx->pc = 0x3B10D4u;
    {
        const bool branch_taken_0x3b10d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10D4u;
        // 0x3b10d8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b10d4) {
            ctx->pc = 0x3B1104u;
            goto label_3b1104;
        }
    }
    ctx->pc = 0x3B10DCu;
label_3b10dc:
    // 0x3b10dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b10dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b10e0:
    // 0x3b10e0: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x3b10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_3b10e4:
    // 0x3b10e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b10e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b10e8:
    // 0x3b10e8: 0xc103322  jal         func_40CC88
label_3b10ec:
    if (ctx->pc == 0x3B10ECu) {
        ctx->pc = 0x3B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10E8u;
        // 0x3b10ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10F0u;
        goto label_3b10f0;
    }
    ctx->pc = 0x3B10E8u;
    SET_GPR_U32(ctx, 31, 0x3B10F0u);
    ctx->pc = 0x3B10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10E8u;
    // 0x3b10ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B10E8u, 0x3B10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B10F0u;
label_3b10f0:
    // 0x3b10f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b10f4:
    if (ctx->pc == 0x3B10F4u) {
        ctx->pc = 0x3B10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10F0u;
        // 0x3b10f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10F8u;
        goto label_3b10f8;
    }
    ctx->pc = 0x3B10F0u;
    {
        const bool branch_taken_0x3b10f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10F0u;
        // 0x3b10f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b10f0) {
            ctx->pc = 0x3B1138u;
            goto label_3b1138;
        }
    }
    ctx->pc = 0x3B10F8u;
label_3b10f8:
    // 0x3b10f8: 0xc0ec458  jal         func_3B1160
label_3b10fc:
    if (ctx->pc == 0x3B10FCu) {
        ctx->pc = 0x3B10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10F8u;
        // 0x3b10fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1100u;
        goto label_3b1100;
    }
    ctx->pc = 0x3B10F8u;
    SET_GPR_U32(ctx, 31, 0x3B1100u);
    ctx->pc = 0x3B10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10F8u;
    // 0x3b10fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1160u, 0x3B10F8u, 0x3B1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1100u;
label_3b1100:
    // 0x3b1100: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3b1100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3b1104:
    // 0x3b1104: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b1108:
    // 0x3b1108: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3b110c:
    if (ctx->pc == 0x3B110Cu) {
        ctx->pc = 0x3B110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1108u;
        // 0x3b110c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1110u;
        goto label_3b1110;
    }
    ctx->pc = 0x3B1108u;
    {
        const bool branch_taken_0x3b1108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1108) {
            ctx->pc = 0x3B110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1108u;
            // 0x3b110c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1138u;
            goto label_3b1138;
        }
    }
    ctx->pc = 0x3B1110u;
label_3b1110:
    // 0x3b1110: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x3b1110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_3b1114:
    // 0x3b1114: 0x0  nop
    ctx->pc = 0x3b1114u;
    // NOP
label_3b1118:
    // 0x3b1118: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3b1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3b111c:
    // 0x3b111c: 0x0  nop
    ctx->pc = 0x3b111cu;
    // NOP
label_3b1120:
    // 0x3b1120: 0x0  nop
    ctx->pc = 0x3b1120u;
    // NOP
label_3b1124:
    // 0x3b1124: 0x0  nop
    ctx->pc = 0x3b1124u;
    // NOP
label_3b1128:
    // 0x3b1128: 0x0  nop
    ctx->pc = 0x3b1128u;
    // NOP
label_3b112c:
    // 0x3b112c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3b1130:
    if (ctx->pc == 0x3B1130u) {
        ctx->pc = 0x3B1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B112Cu;
        // 0x3b1130: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1134u;
        goto label_3b1134;
    }
    ctx->pc = 0x3B112Cu;
    {
        const bool branch_taken_0x3b112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b112c) {
            ctx->pc = 0x3B1130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B112Cu;
            // 0x3b1130: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1118;
        }
    }
    ctx->pc = 0x3B1134u;
label_3b1134:
    // 0x3b1134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1138:
    // 0x3b1138: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b1138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b113c:
    // 0x3b113c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b113cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1140:
    // 0x3b1140: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b1140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1144:
    // 0x3b1144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b1144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1148:
    // 0x3b1148: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3b1148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b114c:
    // 0x3b114c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3b114cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1150:
    // 0x3b1150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1154:
    // 0x3b1154: 0x3e00008  jr          $ra
label_3b1158:
    if (ctx->pc == 0x3B1158u) {
        ctx->pc = 0x3B1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1154u;
        // 0x3b1158: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B115Cu;
        goto label_3b115c;
    }
    ctx->pc = 0x3B1154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1154u;
        // 0x3b1158: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B115Cu;
label_3b115c:
    // 0x3b115c: 0x0  nop
    ctx->pc = 0x3b115cu;
    // NOP
    ctx->pc = 0x3b1160u;
}
