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

// Function: sub_003C3FB0
// Address: 0x3c3fb0 - 0x3c41b0
void sub_003C3FB0_0x3c3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3FB0_0x3c3fb0");
#endif

    switch (ctx->pc) {
        case 0x3c3fb0u: goto label_3c3fb0;
        case 0x3c3fb4u: goto label_3c3fb4;
        case 0x3c3fb8u: goto label_3c3fb8;
        case 0x3c3fbcu: goto label_3c3fbc;
        case 0x3c3fc0u: goto label_3c3fc0;
        case 0x3c3fc4u: goto label_3c3fc4;
        case 0x3c3fc8u: goto label_3c3fc8;
        case 0x3c3fccu: goto label_3c3fcc;
        case 0x3c3fd0u: goto label_3c3fd0;
        case 0x3c3fd4u: goto label_3c3fd4;
        case 0x3c3fd8u: goto label_3c3fd8;
        case 0x3c3fdcu: goto label_3c3fdc;
        case 0x3c3fe0u: goto label_3c3fe0;
        case 0x3c3fe4u: goto label_3c3fe4;
        case 0x3c3fe8u: goto label_3c3fe8;
        case 0x3c3fecu: goto label_3c3fec;
        case 0x3c3ff0u: goto label_3c3ff0;
        case 0x3c3ff4u: goto label_3c3ff4;
        case 0x3c3ff8u: goto label_3c3ff8;
        case 0x3c3ffcu: goto label_3c3ffc;
        case 0x3c4000u: goto label_3c4000;
        case 0x3c4004u: goto label_3c4004;
        case 0x3c4008u: goto label_3c4008;
        case 0x3c400cu: goto label_3c400c;
        case 0x3c4010u: goto label_3c4010;
        case 0x3c4014u: goto label_3c4014;
        case 0x3c4018u: goto label_3c4018;
        case 0x3c401cu: goto label_3c401c;
        case 0x3c4020u: goto label_3c4020;
        case 0x3c4024u: goto label_3c4024;
        case 0x3c4028u: goto label_3c4028;
        case 0x3c402cu: goto label_3c402c;
        case 0x3c4030u: goto label_3c4030;
        case 0x3c4034u: goto label_3c4034;
        case 0x3c4038u: goto label_3c4038;
        case 0x3c403cu: goto label_3c403c;
        case 0x3c4040u: goto label_3c4040;
        case 0x3c4044u: goto label_3c4044;
        case 0x3c4048u: goto label_3c4048;
        case 0x3c404cu: goto label_3c404c;
        case 0x3c4050u: goto label_3c4050;
        case 0x3c4054u: goto label_3c4054;
        case 0x3c4058u: goto label_3c4058;
        case 0x3c405cu: goto label_3c405c;
        case 0x3c4060u: goto label_3c4060;
        case 0x3c4064u: goto label_3c4064;
        case 0x3c4068u: goto label_3c4068;
        case 0x3c406cu: goto label_3c406c;
        case 0x3c4070u: goto label_3c4070;
        case 0x3c4074u: goto label_3c4074;
        case 0x3c4078u: goto label_3c4078;
        case 0x3c407cu: goto label_3c407c;
        case 0x3c4080u: goto label_3c4080;
        case 0x3c4084u: goto label_3c4084;
        case 0x3c4088u: goto label_3c4088;
        case 0x3c408cu: goto label_3c408c;
        case 0x3c4090u: goto label_3c4090;
        case 0x3c4094u: goto label_3c4094;
        case 0x3c4098u: goto label_3c4098;
        case 0x3c409cu: goto label_3c409c;
        case 0x3c40a0u: goto label_3c40a0;
        case 0x3c40a4u: goto label_3c40a4;
        case 0x3c40a8u: goto label_3c40a8;
        case 0x3c40acu: goto label_3c40ac;
        case 0x3c40b0u: goto label_3c40b0;
        case 0x3c40b4u: goto label_3c40b4;
        case 0x3c40b8u: goto label_3c40b8;
        case 0x3c40bcu: goto label_3c40bc;
        case 0x3c40c0u: goto label_3c40c0;
        case 0x3c40c4u: goto label_3c40c4;
        case 0x3c40c8u: goto label_3c40c8;
        case 0x3c40ccu: goto label_3c40cc;
        case 0x3c40d0u: goto label_3c40d0;
        case 0x3c40d4u: goto label_3c40d4;
        case 0x3c40d8u: goto label_3c40d8;
        case 0x3c40dcu: goto label_3c40dc;
        case 0x3c40e0u: goto label_3c40e0;
        case 0x3c40e4u: goto label_3c40e4;
        case 0x3c40e8u: goto label_3c40e8;
        case 0x3c40ecu: goto label_3c40ec;
        case 0x3c40f0u: goto label_3c40f0;
        case 0x3c40f4u: goto label_3c40f4;
        case 0x3c40f8u: goto label_3c40f8;
        case 0x3c40fcu: goto label_3c40fc;
        case 0x3c4100u: goto label_3c4100;
        case 0x3c4104u: goto label_3c4104;
        case 0x3c4108u: goto label_3c4108;
        case 0x3c410cu: goto label_3c410c;
        case 0x3c4110u: goto label_3c4110;
        case 0x3c4114u: goto label_3c4114;
        case 0x3c4118u: goto label_3c4118;
        case 0x3c411cu: goto label_3c411c;
        case 0x3c4120u: goto label_3c4120;
        case 0x3c4124u: goto label_3c4124;
        case 0x3c4128u: goto label_3c4128;
        case 0x3c412cu: goto label_3c412c;
        case 0x3c4130u: goto label_3c4130;
        case 0x3c4134u: goto label_3c4134;
        case 0x3c4138u: goto label_3c4138;
        case 0x3c413cu: goto label_3c413c;
        case 0x3c4140u: goto label_3c4140;
        case 0x3c4144u: goto label_3c4144;
        case 0x3c4148u: goto label_3c4148;
        case 0x3c414cu: goto label_3c414c;
        case 0x3c4150u: goto label_3c4150;
        case 0x3c4154u: goto label_3c4154;
        case 0x3c4158u: goto label_3c4158;
        case 0x3c415cu: goto label_3c415c;
        case 0x3c4160u: goto label_3c4160;
        case 0x3c4164u: goto label_3c4164;
        case 0x3c4168u: goto label_3c4168;
        case 0x3c416cu: goto label_3c416c;
        case 0x3c4170u: goto label_3c4170;
        case 0x3c4174u: goto label_3c4174;
        case 0x3c4178u: goto label_3c4178;
        case 0x3c417cu: goto label_3c417c;
        case 0x3c4180u: goto label_3c4180;
        case 0x3c4184u: goto label_3c4184;
        case 0x3c4188u: goto label_3c4188;
        case 0x3c418cu: goto label_3c418c;
        case 0x3c4190u: goto label_3c4190;
        case 0x3c4194u: goto label_3c4194;
        case 0x3c4198u: goto label_3c4198;
        case 0x3c419cu: goto label_3c419c;
        case 0x3c41a0u: goto label_3c41a0;
        case 0x3c41a4u: goto label_3c41a4;
        case 0x3c41a8u: goto label_3c41a8;
        case 0x3c41acu: goto label_3c41ac;
        default: break;
    }

    ctx->pc = 0x3c3fb0u;

label_3c3fb0:
    // 0x3c3fb0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3c3fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_3c3fb4:
    // 0x3c3fb4: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x3c3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_3c3fb8:
    // 0x3c3fb8: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x3c3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_3c3fbc:
    // 0x3c3fbc: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x3c3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_3c3fc0:
    // 0x3c3fc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c3fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c3fc4:
    // 0x3c3fc4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x3c3fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_3c3fc8:
    // 0x3c3fc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c3fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c3fcc:
    // 0x3c3fcc: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x3c3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_3c3fd0:
    // 0x3c3fd0: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x3c3fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_3c3fd4:
    // 0x3c3fd4: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x3c3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_3c3fd8:
    // 0x3c3fd8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3c3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_3c3fdc:
    // 0x3c3fdc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3c3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3c3fe0:
    // 0x3c3fe0: 0x40f809  jalr        $v0
label_3c3fe4:
    if (ctx->pc == 0x3C3FE4u) {
        ctx->pc = 0x3C3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FE0u;
        // 0x3c3fe4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3FE8u;
        goto label_3c3fe8;
    }
    ctx->pc = 0x3C3FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3FE8u);
        ctx->pc = 0x3C3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FE0u;
        // 0x3c3fe4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3FE0u, 0x3C3FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3FE8u;
label_3c3fe8:
    // 0x3c3fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c3fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3fec:
    // 0x3c3fec: 0xc0f0810  jal         func_3C2040
label_3c3ff0:
    if (ctx->pc == 0x3C3FF0u) {
        ctx->pc = 0x3C3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FECu;
        // 0x3c3ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3FF4u;
        goto label_3c3ff4;
    }
    ctx->pc = 0x3C3FECu;
    SET_GPR_U32(ctx, 31, 0x3C3FF4u);
    ctx->pc = 0x3C3FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3FECu;
    // 0x3c3ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2040u, 0x3C3FECu, 0x3C3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3FF4u;
label_3c3ff4:
    // 0x3c3ff4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c3ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ff8:
    // 0x3c3ff8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c3ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ffc:
    // 0x3c3ffc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4000:
    // 0x3c4000: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3c4000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3c4004:
    // 0x3c4004: 0xc0f082c  jal         func_3C20B0
label_3c4008:
    if (ctx->pc == 0x3C4008u) {
        ctx->pc = 0x3C4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4004u;
        // 0x3c4008: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C400Cu;
        goto label_3c400c;
    }
    ctx->pc = 0x3C4004u;
    SET_GPR_U32(ctx, 31, 0x3C400Cu);
    ctx->pc = 0x3C4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4004u;
    // 0x3c4008: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C20B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C20B0u, 0x3C4004u, 0x3C400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C400Cu;
label_3c400c:
    // 0x3c400c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c4010:
    if (ctx->pc == 0x3C4010u) {
        ctx->pc = 0x3C4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C400Cu;
        // 0x3c4010: 0x3262000e  andi        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4014u;
        goto label_3c4014;
    }
    ctx->pc = 0x3C400Cu;
    {
        const bool branch_taken_0x3c400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C400Cu;
        // 0x3c4010: 0x3262000e  andi        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c400c) {
            ctx->pc = 0x3C401Cu;
            goto label_3c401c;
        }
    }
    ctx->pc = 0x3C4014u;
label_3c4014:
    // 0x3c4014: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3c4018:
    if (ctx->pc == 0x3C4018u) {
        ctx->pc = 0x3C4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4014u;
        // 0x3c4018: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C401Cu;
        goto label_3c401c;
    }
    ctx->pc = 0x3C4014u;
    {
        const bool branch_taken_0x3c4014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4014u;
        // 0x3c4018: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4014) {
            ctx->pc = 0x3C4184u;
            goto label_3c4184;
        }
    }
    ctx->pc = 0x3C401Cu;
label_3c401c:
    // 0x3c401c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_3c4020:
    if (ctx->pc == 0x3C4020u) {
        ctx->pc = 0x3C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C401Cu;
        // 0x3c4020: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4024u;
        goto label_3c4024;
    }
    ctx->pc = 0x3C401Cu;
    {
        const bool branch_taken_0x3c401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C401Cu;
        // 0x3c4020: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c401c) {
            ctx->pc = 0x3C4184u;
            goto label_3c4184;
        }
    }
    ctx->pc = 0x3C4024u;
label_3c4024:
    // 0x3c4024: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x3c4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_3c4028:
    // 0x3c4028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c402c:
    if (ctx->pc == 0x3C402Cu) {
        ctx->pc = 0x3C402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4028u;
        // 0x3c402c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4030u;
        goto label_3c4030;
    }
    ctx->pc = 0x3C4028u;
    {
        const bool branch_taken_0x3c4028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4028u;
        // 0x3c402c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4028) {
            ctx->pc = 0x3C4038u;
            goto label_3c4038;
        }
    }
    ctx->pc = 0x3C4030u;
label_3c4030:
    // 0x3c4030: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c4034:
    if (ctx->pc == 0x3C4034u) {
        ctx->pc = 0x3C4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4030u;
        // 0x3c4034: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4038u;
        goto label_3c4038;
    }
    ctx->pc = 0x3C4030u;
    {
        const bool branch_taken_0x3c4030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4030u;
        // 0x3c4034: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4030) {
            ctx->pc = 0x3C403Cu;
            goto label_3c403c;
        }
    }
    ctx->pc = 0x3C4038u;
label_3c4038:
    // 0x3c4038: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3c4038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3c403c:
    // 0x3c403c: 0x8f82bd98  lw          $v0, -0x4268($gp)
    ctx->pc = 0x3c403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950296)));
label_3c4040:
    // 0x3c4040: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x3c4040u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
label_3c4044:
    // 0x3c4044: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c4048:
    // 0x3c4048: 0x26b1e0c0  addiu       $s1, $s5, -0x1F40
    ctx->pc = 0x3c4048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959296));
label_3c404c:
    // 0x3c404c: 0xaea2e0c0  sw          $v0, -0x1F40($s5)
    ctx->pc = 0x3c404cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294959296), GPR_U32(ctx, 2));
label_3c4050:
    // 0x3c4050: 0xc0bf6e8  jal         func_2FDBA0
label_3c4054:
    if (ctx->pc == 0x3C4054u) {
        ctx->pc = 0x3C4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4050u;
        // 0x3c4054: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4058u;
        goto label_3c4058;
    }
    ctx->pc = 0x3C4050u;
    SET_GPR_U32(ctx, 31, 0x3C4058u);
    ctx->pc = 0x3C4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4050u;
    // 0x3c4054: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4050u, 0x3C4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4058u;
label_3c4058:
    // 0x3c4058: 0x2616e180  addiu       $s6, $s0, -0x1E80
    ctx->pc = 0x3c4058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959488));
label_3c405c:
    // 0x3c405c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c4060:
    // 0x3c4060: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4064:
    // 0x3c4064: 0x2454e088  addiu       $s4, $v0, -0x1F78
    ctx->pc = 0x3c4064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959240));
label_3c4068:
    // 0x3c4068: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3c4068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c406c:
    // 0x3c406c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3c406cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4070:
    // 0x3c4070: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4074:
    // 0x3c4074: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4078:
    // 0x3c4078: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4078u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c407c:
    // 0x3c407c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3c407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c4080:
    // 0x3c4080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4084:
    // 0x3c4084: 0xc0c06aa  jal         func_301AA8
label_3c4088:
    if (ctx->pc == 0x3C4088u) {
        ctx->pc = 0x3C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4084u;
        // 0x3c4088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C408Cu;
        goto label_3c408c;
    }
    ctx->pc = 0x3C4084u;
    SET_GPR_U32(ctx, 31, 0x3C408Cu);
    ctx->pc = 0x3C4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4084u;
    // 0x3c4088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C4084u, 0x3C408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C408Cu;
label_3c408c:
    // 0x3c408c: 0xc0bf6e0  jal         func_2FDB80
label_3c4090:
    if (ctx->pc == 0x3C4090u) {
        ctx->pc = 0x3C4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C408Cu;
        // 0x3c4090: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4094u;
        goto label_3c4094;
    }
    ctx->pc = 0x3C408Cu;
    SET_GPR_U32(ctx, 31, 0x3C4094u);
    ctx->pc = 0x3C4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C408Cu;
    // 0x3c4090: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C408Cu, 0x3C4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4094u;
label_3c4094:
    // 0x3c4094: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c4094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c4098:
    // 0x3c4098: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c4098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c409c:
    // 0x3c409c: 0x8c62e950  lw          $v0, -0x16B0($v1)
    ctx->pc = 0x3c409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961488)));
label_3c40a0:
    // 0x3c40a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3c40a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c40a4:
    // 0x3c40a4: 0x40f809  jalr        $v0
label_3c40a8:
    if (ctx->pc == 0x3C40A8u) {
        ctx->pc = 0x3C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40A4u;
        // 0x3c40a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40ACu;
        goto label_3c40ac;
    }
    ctx->pc = 0x3C40A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C40ACu);
        ctx->pc = 0x3C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40A4u;
        // 0x3c40a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C40A4u, 0x3C40ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C40ACu;
label_3c40ac:
    // 0x3c40ac: 0xc0bf6e8  jal         func_2FDBA0
label_3c40b0:
    if (ctx->pc == 0x3C40B0u) {
        ctx->pc = 0x3C40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40ACu;
        // 0x3c40b0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40B4u;
        goto label_3c40b4;
    }
    ctx->pc = 0x3C40ACu;
    SET_GPR_U32(ctx, 31, 0x3C40B4u);
    ctx->pc = 0x3C40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40ACu;
    // 0x3c40b0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C40ACu, 0x3C40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40B4u;
label_3c40b4:
    // 0x3c40b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c40b8:
    // 0x3c40b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c40b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c40bc:
    // 0x3c40bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c40c0:
    // 0x3c40c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c40c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c40c4:
    // 0x3c40c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3c40c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c40c8:
    // 0x3c40c8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3c40c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c40cc:
    // 0x3c40cc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3c40ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c40d0:
    // 0x3c40d0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3c40d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c40d4:
    // 0x3c40d4: 0xc0c06aa  jal         func_301AA8
label_3c40d8:
    if (ctx->pc == 0x3C40D8u) {
        ctx->pc = 0x3C40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40D4u;
        // 0x3c40d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40DCu;
        goto label_3c40dc;
    }
    ctx->pc = 0x3C40D4u;
    SET_GPR_U32(ctx, 31, 0x3C40DCu);
    ctx->pc = 0x3C40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40D4u;
    // 0x3c40d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C40D4u, 0x3C40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40DCu;
label_3c40dc:
    // 0x3c40dc: 0xc0bf6e0  jal         func_2FDB80
label_3c40e0:
    if (ctx->pc == 0x3C40E0u) {
        ctx->pc = 0x3C40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40DCu;
        // 0x3c40e0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40E4u;
        goto label_3c40e4;
    }
    ctx->pc = 0x3C40DCu;
    SET_GPR_U32(ctx, 31, 0x3C40E4u);
    ctx->pc = 0x3C40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40DCu;
    // 0x3c40e0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C40DCu, 0x3C40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40E4u;
label_3c40e4:
    // 0x3c40e4: 0x8e04e180  lw          $a0, -0x1E80($s0)
    ctx->pc = 0x3c40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959488)));
label_3c40e8:
    // 0x3c40e8: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
label_3c40ec:
    if (ctx->pc == 0x3C40ECu) {
        ctx->pc = 0x3C40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40E8u;
        // 0x3c40ec: 0xae440064  sw          $a0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40F0u;
        goto label_3c40f0;
    }
    ctx->pc = 0x3C40E8u;
    {
        const bool branch_taken_0x3c40e8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x3c40e8) {
            ctx->pc = 0x3C40ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C40E8u;
            // 0x3c40ec: 0xae440064  sw          $a0, 0x64($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C40F8u;
            goto label_3c40f8;
        }
    }
    ctx->pc = 0x3C40F0u;
label_3c40f0:
    // 0x3c40f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_3c40f4:
    if (ctx->pc == 0x3C40F4u) {
        ctx->pc = 0x3C40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40F0u;
        // 0x3c40f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40F8u;
        goto label_3c40f8;
    }
    ctx->pc = 0x3C40F0u;
    {
        const bool branch_taken_0x3c40f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40F0u;
        // 0x3c40f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c40f0) {
            ctx->pc = 0x3C4184u;
            goto label_3c4184;
        }
    }
    ctx->pc = 0x3C40F8u;
label_3c40f8:
    // 0x3c40f8: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x3c40f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
label_3c40fc:
    // 0x3c40fc: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3c40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3c4100:
    // 0x3c4100: 0x9ec20004  lwu         $v0, 0x4($s6)
    ctx->pc = 0x3c4100u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3c4104:
    // 0x3c4104: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3c4108:
    if (ctx->pc == 0x3C4108u) {
        ctx->pc = 0x3C4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4104u;
        // 0x3c4108: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C410Cu;
        goto label_3c410c;
    }
    ctx->pc = 0x3C4104u;
    {
        const bool branch_taken_0x3c4104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4104u;
        // 0x3c4108: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4104) {
            ctx->pc = 0x3C4158u;
            goto label_3c4158;
        }
    }
    ctx->pc = 0x3C410Cu;
label_3c410c:
    // 0x3c410c: 0xaea4e0c0  sw          $a0, -0x1F40($s5)
    ctx->pc = 0x3c410cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294959296), GPR_U32(ctx, 4));
label_3c4110:
    // 0x3c4110: 0x32630020  andi        $v1, $s3, 0x20
    ctx->pc = 0x3c4110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_3c4114:
    // 0x3c4114: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c4118:
    // 0x3c4118: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3c4118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3c411c:
    // 0x3c411c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3c411cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3c4120:
    // 0x3c4120: 0xc0bf6e8  jal         func_2FDBA0
label_3c4124:
    if (ctx->pc == 0x3C4124u) {
        ctx->pc = 0x3C4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4120u;
        // 0x3c4124: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4128u;
        goto label_3c4128;
    }
    ctx->pc = 0x3C4120u;
    SET_GPR_U32(ctx, 31, 0x3C4128u);
    ctx->pc = 0x3C4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4120u;
    // 0x3c4124: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4120u, 0x3C4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4128u;
label_3c4128:
    // 0x3c4128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c412c:
    // 0x3c412c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3c412cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4130:
    // 0x3c4130: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3c4130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c4134:
    // 0x3c4134: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4138:
    // 0x3c4138: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3c4138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c413c:
    // 0x3c413c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c413cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4140:
    // 0x3c4140: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3c4140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c4144:
    // 0x3c4144: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3c4144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c4148:
    // 0x3c4148: 0xc0c06aa  jal         func_301AA8
label_3c414c:
    if (ctx->pc == 0x3C414Cu) {
        ctx->pc = 0x3C414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4148u;
        // 0x3c414c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4150u;
        goto label_3c4150;
    }
    ctx->pc = 0x3C4148u;
    SET_GPR_U32(ctx, 31, 0x3C4150u);
    ctx->pc = 0x3C414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4148u;
    // 0x3c414c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C4148u, 0x3C4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4150u;
label_3c4150:
    // 0x3c4150: 0xc0bf6e0  jal         func_2FDB80
label_3c4154:
    if (ctx->pc == 0x3C4154u) {
        ctx->pc = 0x3C4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4150u;
        // 0x3c4154: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4158u;
        goto label_3c4158;
    }
    ctx->pc = 0x3C4150u;
    SET_GPR_U32(ctx, 31, 0x3C4158u);
    ctx->pc = 0x3C4154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4150u;
    // 0x3c4154: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C4150u, 0x3C4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4158u;
label_3c4158:
    // 0x3c4158: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x3c4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_3c415c:
    // 0x3c415c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4160:
    // 0x3c4160: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c4160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4164:
    // 0x3c4164: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x3c4164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3c4168:
    // 0x3c4168: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x3c4168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_3c416c:
    // 0x3c416c: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x3c416cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_3c4170:
    // 0x3c4170: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3c4174:
    if (ctx->pc == 0x3C4174u) {
        ctx->pc = 0x3C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4170u;
        // 0x3c4174: 0xae44003c  sw          $a0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4178u;
        goto label_3c4178;
    }
    ctx->pc = 0x3C4170u;
    {
        const bool branch_taken_0x3c4170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4170u;
        // 0x3c4174: 0xae44003c  sw          $a0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4170) {
            ctx->pc = 0x3C4180u;
            goto label_3c4180;
        }
    }
    ctx->pc = 0x3C4178u;
label_3c4178:
    // 0x3c4178: 0xc0f0930  jal         func_3C24C0
label_3c417c:
    if (ctx->pc == 0x3C417Cu) {
        ctx->pc = 0x3C417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4178u;
        // 0x3c417c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4180u;
        goto label_3c4180;
    }
    ctx->pc = 0x3C4178u;
    SET_GPR_U32(ctx, 31, 0x3C4180u);
    ctx->pc = 0x3C417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4178u;
    // 0x3c417c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C4178u, 0x3C4180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4180u;
label_3c4180:
    // 0x3c4180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4184:
    // 0x3c4184: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x3c4184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3c4188:
    // 0x3c4188: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x3c4188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3c418c:
    // 0x3c418c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x3c418cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3c4190:
    // 0x3c4190: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x3c4190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3c4194:
    // 0x3c4194: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x3c4194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3c4198:
    // 0x3c4198: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x3c4198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3c419c:
    // 0x3c419c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x3c419cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3c41a0:
    // 0x3c41a0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x3c41a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_3c41a4:
    // 0x3c41a4: 0x3e00008  jr          $ra
label_3c41a8:
    if (ctx->pc == 0x3C41A8u) {
        ctx->pc = 0x3C41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41A4u;
        // 0x3c41a8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C41ACu;
        goto label_3c41ac;
    }
    ctx->pc = 0x3C41A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41A4u;
        // 0x3c41a8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C41A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C41ACu;
label_3c41ac:
    // 0x3c41ac: 0x0  nop
    ctx->pc = 0x3c41acu;
    // NOP
    ctx->pc = 0x3c41b0u;
}
