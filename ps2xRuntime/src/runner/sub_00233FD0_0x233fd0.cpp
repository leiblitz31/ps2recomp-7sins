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

// Function: sub_00233FD0
// Address: 0x233fd0 - 0x234150
void sub_00233FD0_0x233fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233FD0_0x233fd0");
#endif

    switch (ctx->pc) {
        case 0x233fd0u: goto label_233fd0;
        case 0x233fd4u: goto label_233fd4;
        case 0x233fd8u: goto label_233fd8;
        case 0x233fdcu: goto label_233fdc;
        case 0x233fe0u: goto label_233fe0;
        case 0x233fe4u: goto label_233fe4;
        case 0x233fe8u: goto label_233fe8;
        case 0x233fecu: goto label_233fec;
        case 0x233ff0u: goto label_233ff0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ff8u: goto label_233ff8;
        case 0x233ffcu: goto label_233ffc;
        case 0x234000u: goto label_234000;
        case 0x234004u: goto label_234004;
        case 0x234008u: goto label_234008;
        case 0x23400cu: goto label_23400c;
        case 0x234010u: goto label_234010;
        case 0x234014u: goto label_234014;
        case 0x234018u: goto label_234018;
        case 0x23401cu: goto label_23401c;
        case 0x234020u: goto label_234020;
        case 0x234024u: goto label_234024;
        case 0x234028u: goto label_234028;
        case 0x23402cu: goto label_23402c;
        case 0x234030u: goto label_234030;
        case 0x234034u: goto label_234034;
        case 0x234038u: goto label_234038;
        case 0x23403cu: goto label_23403c;
        case 0x234040u: goto label_234040;
        case 0x234044u: goto label_234044;
        case 0x234048u: goto label_234048;
        case 0x23404cu: goto label_23404c;
        case 0x234050u: goto label_234050;
        case 0x234054u: goto label_234054;
        case 0x234058u: goto label_234058;
        case 0x23405cu: goto label_23405c;
        case 0x234060u: goto label_234060;
        case 0x234064u: goto label_234064;
        case 0x234068u: goto label_234068;
        case 0x23406cu: goto label_23406c;
        case 0x234070u: goto label_234070;
        case 0x234074u: goto label_234074;
        case 0x234078u: goto label_234078;
        case 0x23407cu: goto label_23407c;
        case 0x234080u: goto label_234080;
        case 0x234084u: goto label_234084;
        case 0x234088u: goto label_234088;
        case 0x23408cu: goto label_23408c;
        case 0x234090u: goto label_234090;
        case 0x234094u: goto label_234094;
        case 0x234098u: goto label_234098;
        case 0x23409cu: goto label_23409c;
        case 0x2340a0u: goto label_2340a0;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340a8u: goto label_2340a8;
        case 0x2340acu: goto label_2340ac;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340b4u: goto label_2340b4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340bcu: goto label_2340bc;
        case 0x2340c0u: goto label_2340c0;
        case 0x2340c4u: goto label_2340c4;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340ccu: goto label_2340cc;
        case 0x2340d0u: goto label_2340d0;
        case 0x2340d4u: goto label_2340d4;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340dcu: goto label_2340dc;
        case 0x2340e0u: goto label_2340e0;
        case 0x2340e4u: goto label_2340e4;
        case 0x2340e8u: goto label_2340e8;
        case 0x2340ecu: goto label_2340ec;
        case 0x2340f0u: goto label_2340f0;
        case 0x2340f4u: goto label_2340f4;
        case 0x2340f8u: goto label_2340f8;
        case 0x2340fcu: goto label_2340fc;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234108u: goto label_234108;
        case 0x23410cu: goto label_23410c;
        case 0x234110u: goto label_234110;
        case 0x234114u: goto label_234114;
        case 0x234118u: goto label_234118;
        case 0x23411cu: goto label_23411c;
        case 0x234120u: goto label_234120;
        case 0x234124u: goto label_234124;
        case 0x234128u: goto label_234128;
        case 0x23412cu: goto label_23412c;
        case 0x234130u: goto label_234130;
        case 0x234134u: goto label_234134;
        case 0x234138u: goto label_234138;
        case 0x23413cu: goto label_23413c;
        case 0x234140u: goto label_234140;
        case 0x234144u: goto label_234144;
        case 0x234148u: goto label_234148;
        case 0x23414cu: goto label_23414c;
        default: break;
    }

    ctx->pc = 0x233fd0u;

label_233fd0:
    // 0x233fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_233fd4:
    // 0x233fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233fd8:
    // 0x233fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_233fdc:
    // 0x233fdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x233fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_233fe0:
    // 0x233fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_233fe4:
    // 0x233fe4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_233fe8:
    if (ctx->pc == 0x233FE8u) {
        ctx->pc = 0x233FECu;
        goto label_233fec;
    }
    ctx->pc = 0x233FE4u;
    {
        const bool branch_taken_0x233fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233fe4) {
            ctx->pc = 0x23402Cu;
            goto label_23402c;
        }
    }
    ctx->pc = 0x233FECu;
label_233fec:
    // 0x233fec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x233fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_233ff0:
    // 0x233ff0: 0x246353e0  addiu       $v1, $v1, 0x53E0
    ctx->pc = 0x233ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21472));
label_233ff4:
    // 0x233ff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_233ff8:
    // 0x233ff8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233ffc:
    // 0x233ffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_234000:
    // 0x234000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234004:
    // 0x234004: 0xc08ec24  jal         func_23B090
label_234008:
    if (ctx->pc == 0x234008u) {
        ctx->pc = 0x23400Cu;
        goto label_23400c;
    }
    ctx->pc = 0x234004u;
    SET_GPR_U32(ctx, 31, 0x23400Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x234004u, 0x23400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23400Cu;
label_23400c:
    // 0x23400c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23400cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_234010:
    // 0x234010: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_234014:
    // 0x234014: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_234018:
    // 0x234018: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_23401c:
    if (ctx->pc == 0x23401Cu) {
        ctx->pc = 0x234020u;
        goto label_234020;
    }
    ctx->pc = 0x234018u;
    {
        const bool branch_taken_0x234018 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x234018) {
            ctx->pc = 0x23402Cu;
            goto label_23402c;
        }
    }
    ctx->pc = 0x234020u;
label_234020:
    // 0x234020: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_234024:
    // 0x234024: 0xc0ba070  jal         func_2E81C0
label_234028:
    if (ctx->pc == 0x234028u) {
        ctx->pc = 0x23402Cu;
        goto label_23402c;
    }
    ctx->pc = 0x234024u;
    SET_GPR_U32(ctx, 31, 0x23402Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x234024u, 0x23402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23402Cu;
label_23402c:
    // 0x23402c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_234030:
    // 0x234030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234034:
    // 0x234034: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_234038:
    // 0x234038: 0x3e00008  jr          $ra
label_23403c:
    if (ctx->pc == 0x23403Cu) {
        ctx->pc = 0x234040u;
        goto label_234040;
    }
    ctx->pc = 0x234038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234040u;
label_234040:
    // 0x234040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_234044:
    // 0x234044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234048:
    // 0x234048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23404c:
    // 0x23404c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_234050:
    // 0x234050: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x234050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_234054:
    // 0x234054: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234058:
    // 0x234058: 0xc08ec3c  jal         func_23B0F0
label_23405c:
    if (ctx->pc == 0x23405Cu) {
        ctx->pc = 0x234060u;
        goto label_234060;
    }
    ctx->pc = 0x234058u;
    SET_GPR_U32(ctx, 31, 0x234060u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x234058u, 0x234060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234060u;
label_234060:
    // 0x234060: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x234060u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_234064:
    // 0x234064: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x234064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_234068:
    // 0x234068: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23406c:
    // 0x23406c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x23406cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_234070:
    // 0x234070: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234074:
    // 0x234074: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x234074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_234078:
    // 0x234078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23407c:
    // 0x23407c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_234080:
    // 0x234080: 0xc08d054  jal         func_234150
label_234084:
    if (ctx->pc == 0x234084u) {
        ctx->pc = 0x234088u;
        goto label_234088;
    }
    ctx->pc = 0x234080u;
    SET_GPR_U32(ctx, 31, 0x234088u);
    ctx->pc = 0x234150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234150u, 0x234080u, 0x234088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234088u;
label_234088:
    // 0x234088: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23408c:
    // 0x23408c: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x23408cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_234090:
    // 0x234090: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x234090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234094:
    // 0x234094: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234098:
    // 0x234098: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x234098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_23409c:
    // 0x23409c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2340a0:
    // 0x2340a0: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x2340a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2340a4:
    // 0x2340a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2340a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2340a8:
    // 0x2340a8: 0xc0bb7e6  jal         func_2EDF98
label_2340ac:
    if (ctx->pc == 0x2340ACu) {
        ctx->pc = 0x2340B0u;
        goto label_2340b0;
    }
    ctx->pc = 0x2340A8u;
    SET_GPR_U32(ctx, 31, 0x2340B0u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x2340A8u, 0x2340B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340B0u;
label_2340b0:
    // 0x2340b0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2340b4:
    // 0x2340b4: 0xc119b68  jal         func_466DA0
label_2340b8:
    if (ctx->pc == 0x2340B8u) {
        ctx->pc = 0x2340BCu;
        goto label_2340bc;
    }
    ctx->pc = 0x2340B4u;
    SET_GPR_U32(ctx, 31, 0x2340BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2340B4u, 0x2340BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340BCu;
label_2340bc:
    // 0x2340bc: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2340bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2340c0:
    // 0x2340c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2340c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2340c4:
    // 0x2340c4: 0xc0400e0  jal         func_100380
label_2340c8:
    if (ctx->pc == 0x2340C8u) {
        ctx->pc = 0x2340CCu;
        goto label_2340cc;
    }
    ctx->pc = 0x2340C4u;
    SET_GPR_U32(ctx, 31, 0x2340CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2340C4u, 0x2340CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340CCu;
label_2340cc:
    // 0x2340cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2340ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2340d0:
    // 0x2340d0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2340d4:
    if (ctx->pc == 0x2340D4u) {
        ctx->pc = 0x2340D8u;
        goto label_2340d8;
    }
    ctx->pc = 0x2340D0u;
    {
        const bool branch_taken_0x2340d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340d0) {
            ctx->pc = 0x2340E8u;
            goto label_2340e8;
        }
    }
    ctx->pc = 0x2340D8u;
label_2340d8:
    // 0x2340d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2340d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2340dc:
    // 0x2340dc: 0xc08dd64  jal         func_237590
label_2340e0:
    if (ctx->pc == 0x2340E0u) {
        ctx->pc = 0x2340E4u;
        goto label_2340e4;
    }
    ctx->pc = 0x2340DCu;
    SET_GPR_U32(ctx, 31, 0x2340E4u);
    ctx->pc = 0x237590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237590u, 0x2340DCu, 0x2340E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340E4u;
label_2340e4:
    // 0x2340e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2340e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2340e8:
    // 0x2340e8: 0xaf90bb94  sw          $s0, -0x446C($gp)
    ctx->pc = 0x2340e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949780), GPR_U32(ctx, 16));
label_2340ec:
    // 0x2340ec: 0x8f84bb94  lw          $a0, -0x446C($gp)
    ctx->pc = 0x2340ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949780)));
label_2340f0:
    // 0x2340f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2340f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2340f4:
    // 0x2340f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2340f8:
    // 0x2340f8: 0x320f809  jalr        $t9
label_2340fc:
    if (ctx->pc == 0x2340FCu) {
        ctx->pc = 0x234100u;
        goto label_234100;
    }
    ctx->pc = 0x2340F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x234100u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2340F8u, 0x234100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234100u;
label_234100:
    // 0x234100: 0x8f84bb94  lw          $a0, -0x446C($gp)
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949780)));
label_234104:
    // 0x234104: 0xc08dde0  jal         func_237780
label_234108:
    if (ctx->pc == 0x234108u) {
        ctx->pc = 0x23410Cu;
        goto label_23410c;
    }
    ctx->pc = 0x234104u;
    SET_GPR_U32(ctx, 31, 0x23410Cu);
    ctx->pc = 0x237780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237780u, 0x234104u, 0x23410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23410Cu;
label_23410c:
    // 0x23410c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234110:
    // 0x234110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234114:
    // 0x234114: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x234114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234118:
    // 0x234118: 0xc08d114  jal         func_234450
label_23411c:
    if (ctx->pc == 0x23411Cu) {
        ctx->pc = 0x234120u;
        goto label_234120;
    }
    ctx->pc = 0x234118u;
    SET_GPR_U32(ctx, 31, 0x234120u);
    ctx->pc = 0x234450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234450u, 0x234118u, 0x234120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234120u;
label_234120:
    // 0x234120: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x234120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234124:
    // 0x234124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x234124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234128:
    // 0x234128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23412c:
    // 0x23412c: 0xc08d124  jal         func_234490
label_234130:
    if (ctx->pc == 0x234130u) {
        ctx->pc = 0x234134u;
        goto label_234134;
    }
    ctx->pc = 0x23412Cu;
    SET_GPR_U32(ctx, 31, 0x234134u);
    ctx->pc = 0x234490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234490u, 0x23412Cu, 0x234134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234134u;
label_234134:
    // 0x234134: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234138:
    // 0x234138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23413c:
    // 0x23413c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23413cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_234140:
    // 0x234140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_234144:
    // 0x234144: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x234144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_234148:
    // 0x234148: 0x3e00008  jr          $ra
label_23414c:
    if (ctx->pc == 0x23414Cu) {
        ctx->pc = 0x234150u;
        goto label_fallthrough_0x234148;
    }
    ctx->pc = 0x234148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x234148:
    ctx->pc = 0x234150u;
}
